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
            for i in 2..decoded.len() {
                let x = i - 1;
                decoded[i] = decoded[i]
                    .wrapping_add(x as u8)
                    .wrapping_add(GE10_KEY2[x & 0x07]);
            }
        }
        L64Variant::Ge10Key3 => {
            for i in 2..decoded.len() {
                decoded[i] = decoded[i]
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
