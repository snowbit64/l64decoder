mod bytecode;
mod decompiler;
mod l64;

use std::fs;
use std::path::PathBuf;

use bytecode::BytecodeReader;
use clap::Parser;
use decompiler::Decompiler;
use l64::decode_l64;

#[derive(Parser, Debug)]
#[command(author = "Manus AI", version = "0.1.0", about = "Decodificador/decompilador Luau para .l64", long_about = None)]
struct Args {
    /// Caminho para o arquivo de entrada (.l64 ou bytecode Luau)
    #[arg(short, long, value_name = "FILE")]
    input: PathBuf,

    /// Caminho para salvar o código decompilado (opcional)
    #[arg(short, long, value_name = "OUTPUT")]
    output: Option<PathBuf>,

    /// Salva o bytecode intermediário após decifrar .l64
    #[arg(long, value_name = "FILE")]
    bytecode_output: Option<PathBuf>,

    /// Remove o primeiro byte para ficar no formato esperado por alguns decompiladores Luau
    #[arg(long, default_value_t = false)]
    luau_compatible_header: bool,

    /// Apenas decifra .l64 e encerra sem decompilar
    #[arg(long, default_value_t = false)]
    decode_only: bool,

    /// Exibir informações detalhadas (debug)
    #[arg(short, long, default_value_t = false)]
    debug: bool,
}

fn main() {
    let args = Args::parse();

    println!("--- luauc64 ---");

    if !args.input.exists() {
        eprintln!("Erro: O arquivo de entrada '{:#?}' não existe.", args.input);
        std::process::exit(1);
    }

    println!("Lendo arquivo: '{:#?}'", args.input);
    let input_data = match fs::read(&args.input) {
        Ok(data) => data,
        Err(e) => {
            eprintln!("Erro ao ler o arquivo: {}", e);
            std::process::exit(1);
        }
    };

    let bytecode_data = if args.input.extension().is_some_and(|ext| ext.eq_ignore_ascii_case("l64")) {
        match decode_l64(&input_data, args.luau_compatible_header) {
            Ok(decoded) => {
                if args.debug {
                    println!("Formato .l64 detectado: {:?}", decoded.variant);
                    println!("Bytes decodificados: {}", decoded.bytecode.len());
                }

                if let Some(path) = &args.bytecode_output {
                    if let Err(e) = fs::write(path, &decoded.bytecode) {
                        eprintln!("Erro ao salvar bytecode intermediário: {}", e);
                    } else {
                        println!("Bytecode intermediário salvo em: '{:#?}'", path);
                    }
                }

                decoded.bytecode
            }
            Err(e) => {
                eprintln!("Erro ao decifrar arquivo .l64: {}", e);
                std::process::exit(1);
            }
        }
    } else {
        input_data
    };

    if args.decode_only {
        println!("Decodificação concluída (--decode-only). Sem etapa de decompilação.");
        return;
    }

    let mut reader = BytecodeReader::new(&bytecode_data);
    match reader.read_bytecode_file() {
        Ok(bytecode_file) => {
            if args.debug {
                println!("Deserialização concluída com sucesso!");
                println!("Versão do Bytecode: {}", bytecode_file.version);
                println!("Número de Protos: {}", bytecode_file.protos.len());
            }

            let mut decompiler = Decompiler::new();
            match decompiler.decompile_file(&bytecode_file) {
                Ok(decompiled_code) => {
                    if let Some(output_path) = args.output {
                        match fs::write(&output_path, &decompiled_code) {
                            Ok(_) => println!("Código decompilado salvo em: '{:#?}'", output_path),
                            Err(e) => eprintln!("Erro ao salvar arquivo de saída: {}", e),
                        }
                    } else {
                        println!("\n--- Código Decompilado ---\n");
                        println!("{}", decompiled_code);
                    }
                }
                Err(e) => {
                    eprintln!("Erro durante a decompilação: {}", e);
                }
            }
        }
        Err(e) => {
            eprintln!("Erro ao processar o bytecode: {}", e);
        }
    }
}
