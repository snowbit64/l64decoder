use luauc64::bytecode::{BytecodeReader, LBC_VERSION_MIN};
use luauc64::l64::decode_l64;
use luauc64::source::reconstruct;

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

#[test]
fn startparams_reconstructs_to_editable_luau_source() {
    let raw = load("StartParams.l64");
    let dec = decode_l64(&raw, false).expect("decode StartParams.l64");
    let mut r = BytecodeReader::new(&dec.bytecode);
    let bc = r.read_bytecode_file().expect("parse StartParams bytecode");

    let src = reconstruct(&bc).expect("reconstruct StartParams");
    // Header comment is present.
    assert!(src.starts_with("-- Reconstructed Luau source"));
    // Top-level script should at least reference the StartParams namespace
    // and declare its methods.
    assert!(src.contains("StartParams"));
    assert!(src.contains("StartParams.init = function"));
    assert!(src.contains("StartParams.getValue = function"));
    // Sanity: no lingering `r0`/`pc0000` style disassembly rows leak into
    // non-comment lines.
    for line in src.lines() {
        let trimmed = line.trim_start();
        if trimmed.starts_with("--") {
            continue;
        }
        assert!(
            !trimmed.starts_with("pc") && !trimmed.contains(" | "),
            "disassembly line leaked into source: {line:?}"
        );
    }
}

#[test]
fn achievement_manager_reconstructs_to_editable_luau_source() {
    let raw = load("AchievementManager.l64");
    let dec = decode_l64(&raw, false).expect("decode AchievementManager.l64");
    let mut r = BytecodeReader::new(&dec.bytecode);
    let bc = r
        .read_bytecode_file()
        .expect("parse AchievementManager bytecode");

    let src = reconstruct(&bc).expect("reconstruct AchievementManager");
    assert!(src.starts_with("-- Reconstructed Luau source"));
    assert!(src.contains("AchievementManager"));
}
