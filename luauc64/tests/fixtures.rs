use luauc64::bytecode::{BytecodeReader, LBC_VERSION_MIN};
use luauc64::l64::decode_l64;

fn load(name: &str) -> Vec<u8> {
    let path = format!("tests/fixtures/{}", name);
    std::fs::read(&path).unwrap_or_else(|e| panic!("read {}: {}", path, e))
}

#[test]
fn startparams_decodes_and_parses_as_v3() {
    let raw = load("StartParams.l64");
    let dec = decode_l64(&raw, false).expect("decode StartParams.l64");

    // Header normalizes back to 01 03 per luau_load contract.
    assert_eq!(&dec.bytecode[..2], &[0x01, 0x03]);

    let mut r = BytecodeReader::new(&dec.bytecode);
    let bc = r.read_bytecode_file().expect("parse StartParams bytecode");
    assert_eq!(bc.version, LBC_VERSION_MIN);
    assert!(!bc.protos.is_empty());
}

#[test]
fn achievement_manager_decodes_and_parses_as_v3() {
    let raw = load("AchievementManager.l64");
    let dec = decode_l64(&raw, false).expect("decode AchievementManager.l64");
    assert_eq!(&dec.bytecode[..2], &[0x01, 0x03]);

    let mut r = BytecodeReader::new(&dec.bytecode);
    let bc = r
        .read_bytecode_file()
        .expect("parse AchievementManager bytecode");
    assert_eq!(bc.version, LBC_VERSION_MIN);
    assert!(!bc.protos.is_empty());
}
