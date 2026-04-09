mod bytecode;
mod decompiler;

use std::fs;
use std::path::PathBuf;
use clap::Parser;
use bytecode::BytecodeReader;
use decompiler::Decompiler;

#[derive(Parser, Debug)]
#[command(author = "Manus AI", version = "0.1.0", about = "Um decompilador de bytecode Luau escrito em Rust", long_about = None)]
struct Args {
    /// Caminho para o arquivo de bytecode Luau (.luau)
    #[arg(short, long, value_name = "FILE")]
    input: PathBuf,

    /// Caminho para salvar o código decompilado (opcional)
    #[arg(short, long, value_name = "OUTPUT")]
    output: Option<PathBuf>,

    /// Exibir informações detalhadas (debug)
    #[arg(short, long, default_value_t = false)]
    debug: bool,
}

fn main() {
    let args = Args::parse();

    println!("--- Luar: Decompilador Luau ---");
    
    if !args.input.exists() {
        eprintln!("Erro: O arquivo de entrada \'{:#?}\' não existe.", args.input);
        std::process::exit(1);
    }

    println!("Lendo arquivo: \'{:#?}\'", args.input);
    let bytecode_data = match fs::read(&args.input) {
        Ok(data) => data,
        Err(e) => {
            eprintln!("Erro ao ler o arquivo: {}", e);
            std::process::exit(1);
        }
    };

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
                            Ok(_) => println!("Código decompilado salvo em: \'{:#?}\'", output_path),
                            Err(e) => eprintln!("Erro ao salvar arquivo de saída: {}", e),
                        }
                    } else {
                        println!("\n--- Código Decompilado ---\n");
                        println!("{}", decompiled_code);
                    }
                },
                Err(e) => {
                    eprintln!("Erro durante a decompilação: {}", e);
                }
            }
        },
        Err(e) => {
            eprintln!("Erro ao processar o bytecode: {}", e);
        }
    }
}
