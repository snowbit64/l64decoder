mod bytecode;
mod decompiler;
mod l64;

use std::ffi::OsStr;
use std::fs;
use std::path::{Path, PathBuf};

use bytecode::BytecodeReader;
use clap::{Parser, Subcommand};
use decompiler::Decompiler;
use l64::decode_l64;
use serde_json::json;

#[derive(Parser, Debug)]
#[command(
    author,
    version,
    about = "Luau .l64 decipher/decompile tool",
    long_about = "Workflow:\n  decompile: file.l64 -> file.lb -> file.luau\n  decipher:  file.l64 -> file.lb"
)]
struct Cli {
    #[command(subcommand)]
    command: Command,
}

#[derive(Subcommand, Debug)]
enum Command {
    /// Full pipeline: .l64 -> .lb -> .luau
    Decompile(InputArgs),
    /// Only decipher: .l64 -> .lb
    Decipher(InputArgs),
}

#[derive(clap::Args, Debug, Clone)]
struct InputArgs {
    /// Input file
    #[arg(short = 'f', long = "file", value_name = "FILE")]
    file: Option<PathBuf>,

    /// Input directory
    #[arg(short = 'd', long = "dir", value_name = "DIR")]
    dir: Option<PathBuf>,

    /// Batch mode: list one or more files
    #[arg(short = 'b', long = "batch", value_name = "FILE", num_args = 1..)]
    batch: Vec<PathBuf>,

    /// Recursive scan (only used with --dir)
    #[arg(short = 'r', long = "recursive", default_value_t = false)]
    recursive: bool,

    /// Custom output path (file mode only)
    #[arg(short = 'o', long = "output", value_name = "OUTPUT")]
    output: Option<PathBuf>,

    /// Overwrite existing output files
    #[arg(long, default_value_t = false)]
    overwrite: bool,

    /// Continue processing when one file fails
    #[arg(long, default_value_t = false)]
    keep_going: bool,

    /// Verbose mode
    #[arg(short, long, default_value_t = false)]
    verbose: bool,

    /// Emit JSON sidecar metadata (<output>.json)
    #[arg(long, default_value_t = false)]
    emit_json: bool,
}

fn main() {
    let cli = Cli::parse();
    let result = match cli.command {
        Command::Decompile(args) => run_decompile(args),
        Command::Decipher(args) => run_decipher(args),
    };

    if let Err(err) = result {
        eprintln!("Error: {err}");
        std::process::exit(1);
    }
}

fn run_decipher(args: InputArgs) -> Result<(), String> {
    let files = collect_input_files(&args, &["l64"])?;
    let multi_input = is_multi_input(&args);

    if multi_input && args.output.is_some() {
        eprintln!("Warning: --output is ignored in --dir/--batch mode.");
    }

    let mut failures = Vec::new();

    for file in files {
        match decipher_one(
            &file,
            if !multi_input {
                args.output.as_ref()
            } else {
                None
            },
            &args,
        ) {
            Ok(path) => {
                if args.verbose {
                    println!("Deciphered: {} -> {}", file.display(), path.display());
                }
            }
            Err(err) => {
                failures.push(format!("{}: {}", file.display(), err));
                if !args.keep_going {
                    break;
                }
            }
        }
    }

    if failures.is_empty() {
        Ok(())
    } else {
        Err(failures.join("\n"))
    }
}

fn run_decompile(args: InputArgs) -> Result<(), String> {
    let files = collect_input_files(&args, &["l64", "lb"])?;
    let multi_input = is_multi_input(&args);

    if multi_input && args.output.is_some() {
        eprintln!("Warning: --output is ignored in --dir/--batch mode.");
    }

    let mut failures = Vec::new();

    for file in files {
        match decompile_one(
            &file,
            if !multi_input {
                args.output.as_ref()
            } else {
                None
            },
            &args,
        ) {
            Ok(path) => {
                if args.verbose {
                    println!("Decompiled: {} -> {}", file.display(), path.display());
                }
            }
            Err(err) => {
                failures.push(format!("{}: {}", file.display(), err));
                if !args.keep_going {
                    break;
                }
            }
        }
    }

    if failures.is_empty() {
        Ok(())
    } else {
        Err(failures.join("\n"))
    }
}

fn decompile_one(
    input: &Path,
    output_override: Option<&PathBuf>,
    args: &InputArgs,
) -> Result<PathBuf, String> {
    let input_data = fs::read(input).map_err(|e| format!("failed to read input: {e}"))?;
    let is_l64 = has_ext(input, "l64");

    let (bytecode_data, decipher_variant) = if is_l64 {
        let decoded =
            decode_l64(&input_data, false).map_err(|e| format!("decode .l64 failed: {e}"))?;
        let lb_path = input.with_extension("lb");
        write_file(&lb_path, &decoded.bytecode, args.overwrite)?;
        (decoded.bytecode, Some(format!("{:?}", decoded.variant)))
    } else {
        (input_data, None)
    };

    let bytecode_file = parse_bytecode_with_fallback(&bytecode_data, args.verbose)?;

    let mut decompiler = Decompiler::new();
    let luau = decompiler
        .decompile_file(&bytecode_file)
        .map_err(|e| format!("decompile failed: {e}"))?;

    let out_path = output_override
        .cloned()
        .unwrap_or_else(|| input.with_extension("luau"));

    write_file(&out_path, luau.as_bytes(), args.overwrite)?;

    if args.emit_json {
        let json_path = out_path.with_extension("json");
        let payload = json!({
            "command": "decompile",
            "input": input.display().to_string(),
            "output_luau": out_path.display().to_string(),
            "decoded_variant": decipher_variant,
            "bytecode_version": bytecode_file.version,
            "proto_count": bytecode_file.protos.len(),
            "main_proto": bytecode_file.main_proto,
        });
        write_file(
            &json_path,
            serde_json::to_string_pretty(&payload)
                .map_err(|e| format!("failed to serialize JSON metadata: {e}"))?
                .as_bytes(),
            args.overwrite,
        )?;
    }

    Ok(out_path)
}

fn decipher_one(
    input: &Path,
    output_override: Option<&PathBuf>,
    args: &InputArgs,
) -> Result<PathBuf, String> {
    let input_data = fs::read(input).map_err(|e| format!("failed to read input: {e}"))?;

    if !has_ext(input, "l64") {
        return Err("decipher command only accepts .l64 files".to_string());
    }

    let decoded = decode_l64(&input_data, false).map_err(|e| format!("decode .l64 failed: {e}"))?;
    let out_path = output_override
        .cloned()
        .unwrap_or_else(|| input.with_extension("lb"));

    write_file(&out_path, &decoded.bytecode, args.overwrite)?;

    if args.emit_json {
        let json_path = out_path.with_extension("json");
        let payload = json!({
            "command": "decipher",
            "input": input.display().to_string(),
            "output_lb": out_path.display().to_string(),
            "decoded_variant": format!("{:?}", decoded.variant),
            "decoded_size": decoded.bytecode.len(),
        });
        write_file(
            &json_path,
            serde_json::to_string_pretty(&payload)
                .map_err(|e| format!("failed to serialize JSON metadata: {e}"))?
                .as_bytes(),
            args.overwrite,
        )?;
    }

    Ok(out_path)
}

fn parse_bytecode_with_fallback(
    data: &[u8],
    verbose: bool,
) -> Result<bytecode::BytecodeFile, String> {
    let mut reader = BytecodeReader::new(data);
    let mut result = reader.read_bytecode_file();

    let should_try_fallback = data.len() > 1
        && data[0] == 0x01
        && data[1] == 0x03
        && match &result {
            Ok(file) => file.protos.is_empty(),
            Err(_) => true,
        };

    if should_try_fallback {
        if verbose {
            println!("Parser fallback: retrying from byte offset +1 (01 03 header).");
        }
        let mut fallback = BytecodeReader::new(&data[1..]);
        result = fallback.read_bytecode_file();
    }

    result
}

fn collect_input_files(
    args: &InputArgs,
    allowed_extensions: &[&str],
) -> Result<Vec<PathBuf>, String> {
    let mut sources = 0;
    if args.file.is_some() {
        sources += 1;
    }
    if args.dir.is_some() {
        sources += 1;
    }
    if !args.batch.is_empty() {
        sources += 1;
    }

    if sources != 1 {
        return Err("use exactly one input source: --file OR --dir OR --batch".to_string());
    }

    let mut files = Vec::new();

    if let Some(file) = &args.file {
        files.push(file.clone());
    } else if let Some(dir) = &args.dir {
        collect_from_dir(dir, args.recursive, allowed_extensions, &mut files)?;
    } else {
        files.extend(args.batch.iter().cloned());
    }

    let files = files
        .into_iter()
        .filter(|p| {
            p.extension()
                .and_then(OsStr::to_str)
                .map(|ext| {
                    allowed_extensions
                        .iter()
                        .any(|allowed| ext.eq_ignore_ascii_case(allowed))
                })
                .unwrap_or(false)
        })
        .collect::<Vec<_>>();

    if files.is_empty() {
        return Err("no matching input files found".to_string());
    }

    Ok(files)
}

fn collect_from_dir(
    dir: &Path,
    recursive: bool,
    allowed_extensions: &[&str],
    out: &mut Vec<PathBuf>,
) -> Result<(), String> {
    let entries = fs::read_dir(dir)
        .map_err(|e| format!("failed to read directory {}: {e}", dir.display()))?;

    for entry in entries {
        let entry = entry.map_err(|e| format!("failed to read directory entry: {e}"))?;
        let path = entry.path();

        if path.is_dir() {
            if recursive {
                collect_from_dir(&path, recursive, allowed_extensions, out)?;
            }
            continue;
        }

        if path
            .extension()
            .and_then(OsStr::to_str)
            .map(|ext| {
                allowed_extensions
                    .iter()
                    .any(|allowed| ext.eq_ignore_ascii_case(allowed))
            })
            .unwrap_or(false)
        {
            out.push(path);
        }
    }

    Ok(())
}

fn write_file(path: &Path, data: &[u8], overwrite: bool) -> Result<(), String> {
    if path.exists() && !overwrite {
        return Err(format!(
            "output already exists: {} (use --overwrite to replace)",
            path.display()
        ));
    }

    fs::write(path, data).map_err(|e| format!("failed to write {}: {e}", path.display()))
}

fn has_ext(path: &Path, expected: &str) -> bool {
    path.extension()
        .and_then(OsStr::to_str)
        .is_some_and(|ext| ext.eq_ignore_ascii_case(expected))
}

fn is_multi_input(args: &InputArgs) -> bool {
    args.dir.is_some() || !args.batch.is_empty()
}
