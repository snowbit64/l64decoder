#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum L64Variant {
    Ge10Key2,
    Ge10Key3,
}

pub struct DecodedL64 {
    pub bytecode: Vec<u8>,
    pub variant: L64Variant,
}

const GE10_KEY2: [u8; 8] = [0x14, 0x0B, 0x09, 0x02, 0x08, 0x03, 0x03, 0x03];
const GE10_KEY3: [u8; 16] = [
    0x05, 0x0f, 0x0b, 0x01, 0x08, 0x02, 0x03, 0x03, 0x08, 0x04, 0x03, 0x01, 0x04, 0x07, 0x08, 0x14,
];

pub fn decode_l64(data: &[u8], luau_compatible_header: bool) -> Result<DecodedL64, String> {
    if data.len() < 2 {
        return Err("Arquivo .l64 inválido: menos de 2 bytes".to_string());
    }

    let variant = match (data[0], data[1]) {
        (0x02, 0xEF) | (0x02, 0xFD) => L64Variant::Ge10Key2,
        (0x03, 0xEF) | (0x03, 0xFD) => L64Variant::Ge10Key3,
        _ => {
            return Err(format!(
                "Cabeçalho .l64 não suportado: {:02X} {:02X}",
                data[0], data[1]
            ));
        }
    };

    let mut decoded = data.to_vec();

    match variant {
        L64Variant::Ge10Key2 => {
            for (i, byte) in decoded.iter_mut().enumerate().skip(2) {
                let x = i - 1;
                *byte = byte.wrapping_add(x as u8).wrapping_add(GE10_KEY2[x & 0x07]);
            }
        }
        L64Variant::Ge10Key3 => {
            for (i, byte) in decoded.iter_mut().enumerate().skip(2) {
                *byte = byte
                    .wrapping_add(i as u8)
                    .wrapping_add(GE10_KEY3[(i - 1) & 0x0F]);
            }
        }
    }

    decoded[0] = 0x01;
    decoded[1] = 0x03;

    if luau_compatible_header {
        decoded.remove(0);
    }

    Ok(DecodedL64 {
        bytecode: decoded,
        variant,
    })
}

pub fn encode_l64(
    bytecode: &[u8],
    variant: L64Variant,
    second_header_byte: u8,
) -> Result<Vec<u8>, String> {
    if bytecode.is_empty() {
        return Err("bytecode vazio".to_string());
    }

    let mut normalized = if bytecode.len() >= 2 && bytecode[0] == 0x01 && bytecode[1] == 0x03 {
        bytecode.to_vec()
    } else if bytecode[0] == 0x03 {
        let mut v = Vec::with_capacity(bytecode.len() + 1);
        v.push(0x01);
        v.extend_from_slice(bytecode);
        v
    } else {
        return Err(
            "bytecode Luau inválido para compilação .l64 (esperado prefixo 01 03 ou 03)"
                .to_string(),
        );
    };

    if normalized.len() >= 2 {
        normalized[0] = match variant {
            L64Variant::Ge10Key2 => 0x02,
            L64Variant::Ge10Key3 => 0x03,
        };
        normalized[1] = second_header_byte;
    }

    match variant {
        L64Variant::Ge10Key2 => {
            for (i, byte) in normalized.iter_mut().enumerate().skip(2) {
                let x = i - 1;
                *byte = byte.wrapping_sub(x as u8).wrapping_sub(GE10_KEY2[x & 0x07]);
            }
        }
        L64Variant::Ge10Key3 => {
            for (i, byte) in normalized.iter_mut().enumerate().skip(2) {
                *byte = byte
                    .wrapping_sub(i as u8)
                    .wrapping_sub(GE10_KEY3[(i - 1) & 0x0F]);
            }
        }
    }

    Ok(normalized)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample_bytecode() -> Vec<u8> {
        // `01 03 <payload>` matches what luau_load expects after loadBuffer.
        let mut v = vec![0x01, 0x03];
        v.extend_from_slice(b"hello-luau-bytecode-\x00\x01\x02\x03");
        v
    }

    #[test]
    fn roundtrip_key2() {
        let bc = sample_bytecode();
        let enc = encode_l64(&bc, L64Variant::Ge10Key2, 0xEF).unwrap();
        assert_eq!(enc[0], 0x02);
        assert_eq!(enc[1], 0xEF);

        let dec = decode_l64(&enc, false).unwrap();
        assert_eq!(dec.variant, L64Variant::Ge10Key2);
        // After decode the header is normalized back to `01 03`.
        assert_eq!(&dec.bytecode[..2], &[0x01, 0x03]);
        assert_eq!(&dec.bytecode[2..], &bc[2..]);
    }

    #[test]
    fn roundtrip_key3() {
        let bc = sample_bytecode();
        let enc = encode_l64(&bc, L64Variant::Ge10Key3, 0xFD).unwrap();
        assert_eq!(enc[0], 0x03);
        assert_eq!(enc[1], 0xFD);

        let dec = decode_l64(&enc, false).unwrap();
        assert_eq!(dec.variant, L64Variant::Ge10Key3);
        assert_eq!(&dec.bytecode[..2], &[0x01, 0x03]);
        assert_eq!(&dec.bytecode[2..], &bc[2..]);
    }

    #[test]
    fn decode_strips_leading_sentinel_when_requested() {
        let bc = sample_bytecode();
        let enc = encode_l64(&bc, L64Variant::Ge10Key3, 0xFD).unwrap();
        let dec = decode_l64(&enc, true).unwrap();
        // With `luau_compatible_header=true` the 0x01 sentinel is dropped.
        assert_eq!(dec.bytecode[0], 0x03);
    }

    #[test]
    fn decode_rejects_unknown_header() {
        let bad = [0xFFu8, 0xFF, 0x00];
        assert!(decode_l64(&bad, false).is_err());
    }

    #[test]
    fn decode_rejects_too_short() {
        assert!(decode_l64(&[0x02], false).is_err());
        assert!(decode_l64(&[], false).is_err());
    }
}
