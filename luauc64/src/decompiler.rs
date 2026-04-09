use crate::bytecode::{BytecodeFile, Proto, Instruction, LuauOpcode, Constant};
use std::fmt::Write;
use std::convert::TryFrom;

pub struct Decompiler {
    output: String,
}

impl Decompiler {
    pub fn new() -> Self {
        Decompiler { output: String::new() }
    }

    pub fn decompile_file(&mut self, bytecode_file: &BytecodeFile) -> Result<String, String> {
        // For now, we'll just decompile the main proto (the first one)
        if let Some(main_proto) = bytecode_file.protos.first() {
            self.decompile_proto(main_proto, &bytecode_file.strings)?; // Pass strings for constant resolution
        } else {
            return Err("No main proto found in bytecode file.".to_string());
        }
        Ok(self.output.clone())
    }

    fn decompile_proto(&mut self, proto: &Proto, strings: &[String]) -> Result<(), String> {
        writeln!(self.output, "-- Function: {}", proto.debugname).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Max Stack Size: {}", proto.maxstacksize).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Num Params: {}", proto.numparams).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Num Upvalues: {}", proto.nups).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Is Vararg: {}", proto.is_vararg).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Flags: {}", proto.flags).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Line Defined: {}", proto.linedefined).map_err(|e| e.to_string())?;
        writeln!(self.output, "").map_err(|e| e.to_string())?;

        // Decompile constants
        writeln!(self.output, "-- Constants").map_err(|e| e.to_string())?;
        for (i, constant) in proto.k.iter().enumerate() {
            writeln!(self.output, "--   {}: {}", i, self.format_constant(constant, strings)).map_err(|e| e.to_string())?;
        }
        writeln!(self.output, "").map_err(|e| e.to_string())?;

        // Decompile instructions
        writeln!(self.output, "-- Instructions").map_err(|e| e.to_string())?;
        for (i, instruction_u32) in proto.code.iter().enumerate() {
            let instruction = self.decode_instruction(*instruction_u32);
            writeln!(self.output, "{:04}  {}", i, self.decompile_instruction(&instruction, proto, strings)?).map_err(|e| e.to_string())?;
        }

        Ok(())
    }

    fn decode_instruction(&self, instruction_u32: u32) -> Instruction {
        // This is a simplified decoding. In a real scenario, you'd need to parse the instruction_u32
        // into its components (opcode, A, B, C, D, E, AUX) based on the instruction format.
        // For now, we'll just cast the u32 to an Instruction struct, assuming a direct memory layout.
        // This is highly unsafe and will likely lead to incorrect results without proper bit manipulation.
        // This part needs to be implemented correctly based on Luau's bytecode format.
        // Refer to Luau/Bytecode.h for instruction formats.

        // Placeholder implementation:
        Instruction {
            opcode: (instruction_u32 & 0xFF) as u8,
            a: ((instruction_u32 >> 8) & 0xFF) as u8,
            b: ((instruction_u32 >> 16) & 0xFF) as u8,
            c: ((instruction_u32 >> 24) & 0xFF) as u8,
            d: ((instruction_u32 >> 16) & 0xFFFF) as i16, // D is usually B and C combined or a larger immediate
            e: (instruction_u32 >> 8) as i32, // E is a larger immediate
            aux: 0, // AUX is usually a separate field or part of D/E
        }
    }

    fn decompile_instruction(&self, instruction: &Instruction, proto: &Proto, strings: &[String]) -> Result<String, String> {
        let opcode = LuauOpcode::try_from(instruction.opcode).map_err(|e| e.to_string())?;
        let mut instruction_str = format!("{:?}", opcode);

        match opcode {
            LuauOpcode::LOP_LOADNIL => write!(instruction_str, " R({})", instruction.a).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_LOADB => write!(instruction_str, " R({}), B({}), C({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_LOADN => write!(instruction_str, " R({}), D({})", instruction.a, instruction.d).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_LOADK => write!(instruction_str, " R({}), K({}) ; {}", instruction.a, instruction.d, self.format_constant(&proto.k[instruction.d as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_MOVE => write!(instruction_str, " R({}), R({})", instruction.a, instruction.b).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETGLOBAL => write!(instruction_str, " R({}), K({}) ; {}", instruction.a, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETGLOBAL => write!(instruction_str, " R({}), K({}) ; {}", instruction.a, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETUPVAL => write!(instruction_str, " R({}), U({})", instruction.a, instruction.b).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETUPVAL => write!(instruction_str, " R({}), U({})", instruction.a, instruction.b).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CLOSEUPVALS => write!(instruction_str, " R({})", instruction.a).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETIMPORT => write!(instruction_str, " R({}), K({}) ; {}", instruction.a, instruction.d, self.format_constant(&proto.k[instruction.d as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLE => write!(instruction_str, " R({}), R({}), R({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLE => write!(instruction_str, " R({}), R({}), R({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLEKS => write!(instruction_str, " R({}), R({}), K({}) ; {}", instruction.a, instruction.b, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLEKS => write!(instruction_str, " R({}), R({}), K({}) ; {}", instruction.a, instruction.b, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLEN => write!(instruction_str, " R({}), R({}), N({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLEN => write!(instruction_str, " R({}), R({}), N({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NEWCLOSURE => write!(instruction_str, " R({}), P({})", instruction.a, instruction.d).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NAMECALL => write!(instruction_str, " R({}), R({}), K({}) ; {}", instruction.a, instruction.b, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CALL => write!(instruction_str, " R({}), B({}), C({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_RETURN => write!(instruction_str, " R({}), B({})", instruction.a, instruction.b).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMP | LuauOpcode::LOP_JUMPBACK => write!(instruction_str, " D({})", instruction.d).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMPIF | LuauOpcode::LOP_JUMPIFNOT => write!(instruction_str, " R({}), D({})", instruction.a, instruction.d).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMPIFEQ | LuauOpcode::LOP_JUMPIFLE | LuauOpcode::LOP_JUMPIFLT | LuauOpcode::LOP_JUMPIFNOTEQ | LuauOpcode::LOP_JUMPIFNOTLE | LuauOpcode::LOP_JUMPIFNOTLT | LuauOpcode::LOP_JUMPIFEQK | LuauOpcode::LOP_JUMPIFLEK | LuauOpcode::LOP_JUMPIFLTK | LuauOpcode::LOP_JUMPIFNOTEQK | LuauOpcode::LOP_JUMPIFNOTLEK | LuauOpcode::LOP_JUMPIFNOTLTK => write!(instruction_str, " R({}), D({}), K({}) ; {}", instruction.a, instruction.d, instruction.aux, self.format_constant(&proto.k[instruction.aux as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_ADD | LuauOpcode::LOP_SUB | LuauOpcode::LOP_MUL | LuauOpcode::LOP_DIV | LuauOpcode::LOP_MOD | LuauOpcode::LOP_POW => write!(instruction_str, " R({}), R({}), R({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_ADDK | LuauOpcode::LOP_SUBK | LuauOpcode::LOP_MULK | LuauOpcode::LOP_DIVK | LuauOpcode::LOP_MODK | LuauOpcode::LOP_POWK => write!(instruction_str, " R({}), R({}), K({}) ; {}", instruction.a, instruction.b, instruction.c, self.format_constant(&proto.k[instruction.c as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SUBRK | LuauOpcode::LOP_DIVRK => write!(instruction_str, " R({}), R({}), K({}) ; {}", instruction.a, instruction.b, instruction.c, self.format_constant(&proto.k[instruction.c as usize], strings)).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_FASTCALL | LuauOpcode::LOP_FASTCALL1 | LuauOpcode::LOP_FASTCALL2 | LuauOpcode::LOP_FASTCALL3 => write!(instruction_str, " R({}), B({}), C({})", instruction.a, instruction.b, instruction.c).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_COVERAGE => write!(instruction_str, " D({})", instruction.d).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CAPTURE => write!(instruction_str, " R({}), B({})", instruction.a, instruction.b).map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NOP | LuauOpcode::LOP_NUM_OPCODES | LuauOpcode::LOP_BREAK => {},
            _ => write!(instruction_str, " (unimplemented)").map_err(|e| e.to_string())?,
        }

        Ok(instruction_str)
    }

    fn format_constant(&self, constant: &Constant, strings: &[String]) -> String {
        match constant {
            Constant::Nil => "nil".to_string(),
            Constant::Boolean(b) => b.to_string(),
            Constant::Number(n) => n.to_string(),
            Constant::Vector(x, y, z, w) => format!("Vector({}, {}, {}, {})", x, y, z, w),
            Constant::String(s) => format!("\"{}\"", s),
            Constant::Import(id) => format!("Import({})", id),
            Constant::Table(entries) => {
                let mut s = String::from("Table({");
                for (key_idx, value) in entries {
                    write!(s, "{}: {}, ", key_idx, value).unwrap();
                }
                s.push_str("})");
                s
            },
            Constant::TableWithConstants(entries) => {
                let mut s = String::from("TableWithConstants({");
                for (key_idx, constant) in entries {
                    write!(s, "{}: {}, ", key_idx, self.format_constant(constant, strings)).unwrap();
                }
                s.push_str("})");
                s
            },
            Constant::Closure(idx) => format!("Closure({})", idx),
        }
    }
}
