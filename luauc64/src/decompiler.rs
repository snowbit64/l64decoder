use crate::bytecode::{BytecodeFile, Constant, Instruction, LuauOpcode, Proto};
use std::collections::BTreeMap;
use std::convert::TryFrom;
use std::fmt::Write;

pub struct Decompiler {
    output: String,
}

#[derive(Default)]
struct TableNode {
    leaf: bool,
    children: BTreeMap<String, TableNode>,
}

impl Decompiler {
    pub fn new() -> Self {
        Decompiler {
            output: String::new(),
        }
    }

    pub fn decompile_file(&mut self, bytecode_file: &BytecodeFile) -> Result<String, String> {
        let main_proto = bytecode_file
            .main_proto
            .and_then(|idx| bytecode_file.protos.get(idx))
            .or_else(|| bytecode_file.protos.first())
            .ok_or_else(|| "No main proto found in bytecode file.".to_string())?;

        self.decompile_proto(main_proto, &bytecode_file.strings)?;
        Ok(self.output.clone())
    }

    pub fn reconstruct_file(
        &mut self,
        bytecode_file: &BytecodeFile,
        module_name: &str,
    ) -> Result<String, String> {
        let mut root = TableNode::default();
        let mut globals = Vec::new();

        for proto in &bytecode_file.protos {
            for constant in &proto.k {
                if let Constant::String(s) = constant {
                    if s.starts_with("g_") && Self::is_identifier(s) {
                        globals.push(s.clone());
                    }
                    self.insert_identifier_path(&mut root, s);
                }
            }
        }

        writeln!(self.output, "{} = {{", module_name).map_err(|e| e.to_string())?;
        self.render_node(&root, 1)?;
        writeln!(self.output, "}}").map_err(|e| e.to_string())?;

        if !globals.is_empty() {
            globals.sort();
            globals.dedup();
            for g in globals {
                writeln!(self.output, "{} = {{}}", g).map_err(|e| e.to_string())?;
            }
        }

        Ok(self.output.clone())
    }

    fn decompile_proto(&mut self, proto: &Proto, strings: &[String]) -> Result<(), String> {
        writeln!(self.output, "-- Function: {}", proto.debugname).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Max Stack Size: {}", proto.maxstacksize)
            .map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Num Params: {}", proto.numparams).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Num Upvalues: {}", proto.nups).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Is Vararg: {}", proto.is_vararg).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Flags: {}", proto.flags).map_err(|e| e.to_string())?;
        writeln!(self.output, "-- Line Defined: {}", proto.linedefined)
            .map_err(|e| e.to_string())?;
        writeln!(self.output, "").map_err(|e| e.to_string())?;

        // Decompile constants
        writeln!(self.output, "-- Constants").map_err(|e| e.to_string())?;
        for (i, constant) in proto.k.iter().enumerate() {
            writeln!(
                self.output,
                "--   {}: {}",
                i,
                self.format_constant(constant, strings)
            )
            .map_err(|e| e.to_string())?;
        }
        writeln!(self.output, "").map_err(|e| e.to_string())?;

        // Decompile instructions
        writeln!(self.output, "-- Instructions").map_err(|e| e.to_string())?;
        let mut pc = 0usize;
        while pc < proto.code.len() {
            let instruction_u32 = proto.code[pc];
            let mut instruction = self.decode_instruction(instruction_u32);
            let opcode = match LuauOpcode::try_from(instruction.opcode) {
                Ok(opcode) => opcode,
                Err(_) => {
                    writeln!(
                        self.output,
                        "{:04}  UNKNOWN_OPCODE_{} A({}) B({}) C({}) D({}) E({})",
                        pc,
                        instruction.opcode,
                        instruction.a,
                        instruction.b,
                        instruction.c,
                        instruction.d,
                        instruction.e
                    )
                    .map_err(|e| e.to_string())?;
                    pc += 1;
                    continue;
                }
            };

            if self.opcode_uses_aux(opcode) {
                if pc + 1 >= proto.code.len() {
                    return Err(format!(
                        "Instruction at pc {} expects AUX word, but code ended.",
                        pc
                    ));
                }
                instruction.aux = proto.code[pc + 1];
            }

            writeln!(
                self.output,
                "{:04}  {}",
                pc,
                self.decompile_instruction(pc, opcode, &instruction, proto, strings)?
            )
            .map_err(|e| e.to_string())?;

            pc += 1 + usize::from(self.opcode_uses_aux(opcode));
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
            d: ((instruction_u32 >> 16) & 0xFFFF) as i16,
            e: ((instruction_u32 as i32) >> 8),
            aux: 0, // AUX is usually a separate field or part of D/E
        }
    }

    fn opcode_uses_aux(&self, opcode: LuauOpcode) -> bool {
        matches!(
            opcode,
            LuauOpcode::LOP_GETGLOBAL
                | LuauOpcode::LOP_SETGLOBAL
                | LuauOpcode::LOP_GETIMPORT
                | LuauOpcode::LOP_GETTABLEKS
                | LuauOpcode::LOP_SETTABLEKS
                | LuauOpcode::LOP_NAMECALL
                | LuauOpcode::LOP_JUMPIFEQ
                | LuauOpcode::LOP_JUMPIFLE
                | LuauOpcode::LOP_JUMPIFLT
                | LuauOpcode::LOP_JUMPIFNOTEQ
                | LuauOpcode::LOP_JUMPIFNOTLE
                | LuauOpcode::LOP_JUMPIFNOTLT
                | LuauOpcode::LOP_NEWTABLE
                | LuauOpcode::LOP_SETLIST
                | LuauOpcode::LOP_FORGLOOP
                | LuauOpcode::LOP_FASTCALL2
                | LuauOpcode::LOP_FASTCALL2K
                | LuauOpcode::LOP_FASTCALL3
                | LuauOpcode::LOP_LOADKX
                | LuauOpcode::LOP_JUMPXEQKNIL
                | LuauOpcode::LOP_JUMPXEQKB
                | LuauOpcode::LOP_JUMPXEQKN
                | LuauOpcode::LOP_JUMPXEQKS
        )
    }

    fn format_constant_index(&self, proto: &Proto, index: usize, strings: &[String]) -> String {
        proto
            .k
            .get(index)
            .map(|k| self.format_constant(k, strings))
            .unwrap_or_else(|| format!("<invalid-constant-{}>", index))
    }

    fn decompile_instruction(
        &self,
        pc: usize,
        opcode: LuauOpcode,
        instruction: &Instruction,
        proto: &Proto,
        strings: &[String],
    ) -> Result<String, String> {
        let mut instruction_str = format!("{:?}", opcode);

        match opcode {
            LuauOpcode::LOP_LOADNIL => {
                write!(instruction_str, " R({})", instruction.a).map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_LOADB => write!(
                instruction_str,
                " R({}), B({}), C({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_LOADN => write!(
                instruction_str,
                " R({}), D({})",
                instruction.a, instruction.d
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_LOADK => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.d,
                self.format_constant_index(proto, instruction.d as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_MOVE => write!(
                instruction_str,
                " R({}), R({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETGLOBAL => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETGLOBAL => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETUPVAL => write!(
                instruction_str,
                " R({}), U({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETUPVAL => write!(
                instruction_str,
                " R({}), U({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CLOSEUPVALS => {
                write!(instruction_str, " R({})", instruction.a).map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_GETIMPORT => write!(
                instruction_str,
                " R({}), AUX({})",
                instruction.a, instruction.aux
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLE => write!(
                instruction_str,
                " R({}), R({}), R({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLE => write!(
                instruction_str,
                " R({}), R({}), R({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLEKS => write!(
                instruction_str,
                " R({}), R({}), K({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLEKS => write!(
                instruction_str,
                " R({}), R({}), K({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_GETTABLEN => write!(
                instruction_str,
                " R({}), R({}), N({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETTABLEN => write!(
                instruction_str,
                " R({}), R({}), N({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NEWCLOSURE => write!(
                instruction_str,
                " R({}), P({})",
                instruction.a, instruction.d as u16
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NAMECALL => write!(
                instruction_str,
                " R({}), R({}), K({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CALL => write!(
                instruction_str,
                " R({}), B({}), C({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_RETURN => write!(
                instruction_str,
                " R({}), B({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMP | LuauOpcode::LOP_JUMPBACK => write!(
                instruction_str,
                " -> {}",
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMPIF | LuauOpcode::LOP_JUMPIFNOT => write!(
                instruction_str,
                " R({}), -> {}",
                instruction.a,
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMPIFEQ
            | LuauOpcode::LOP_JUMPIFLE
            | LuauOpcode::LOP_JUMPIFLT
            | LuauOpcode::LOP_JUMPIFNOTEQ
            | LuauOpcode::LOP_JUMPIFNOTLE
            | LuauOpcode::LOP_JUMPIFNOTLT => write!(
                instruction_str,
                " R({}), R({}), -> {}",
                instruction.a,
                instruction.aux,
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_ADD
            | LuauOpcode::LOP_SUB
            | LuauOpcode::LOP_MUL
            | LuauOpcode::LOP_DIV
            | LuauOpcode::LOP_MOD
            | LuauOpcode::LOP_POW => write!(
                instruction_str,
                " R({}), R({}), R({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_ADDK
            | LuauOpcode::LOP_SUBK
            | LuauOpcode::LOP_MULK
            | LuauOpcode::LOP_DIVK
            | LuauOpcode::LOP_MODK
            | LuauOpcode::LOP_POWK => write!(
                instruction_str,
                " R({}), R({}), K({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.c,
                self.format_constant_index(proto, instruction.c as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_AND | LuauOpcode::LOP_OR | LuauOpcode::LOP_IDIV => write!(
                instruction_str,
                " R({}), R({}), R({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_ANDK | LuauOpcode::LOP_ORK | LuauOpcode::LOP_IDIVK => write!(
                instruction_str,
                " R({}), R({}), K({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.c,
                self.format_constant_index(proto, instruction.c as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_CONCAT => write!(
                instruction_str,
                " R({}), R({})..R({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NOT | LuauOpcode::LOP_MINUS | LuauOpcode::LOP_LENGTH => write!(
                instruction_str,
                " R({}), R({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NEWTABLE => write!(
                instruction_str,
                " R({}), hashHint({}), arraySize({})",
                instruction.a, instruction.b, instruction.aux
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_DUPTABLE => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.d,
                self.format_constant_index(proto, instruction.d as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_SETLIST => write!(
                instruction_str,
                " R({}), from R({}), count({}), startIndex({})",
                instruction.a, instruction.b, instruction.c, instruction.aux
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_FORNPREP
            | LuauOpcode::LOP_FORNLOOP
            | LuauOpcode::LOP_FORGPREP_INEXT
            | LuauOpcode::LOP_FORGPREP_NEXT
            | LuauOpcode::LOP_FORGPREP => write!(
                instruction_str,
                " base(R{}), -> {}",
                instruction.a,
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_FORGLOOP => write!(
                instruction_str,
                " base(R{}), vars({}), aux({:#x}), -> {}",
                instruction.a,
                instruction.aux & 0xff,
                instruction.aux,
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NATIVECALL => {
                write!(instruction_str, " (runtime-generated)").map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_GETVARARGS => write!(
                instruction_str,
                " R({}), count({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_DUPCLOSURE => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.d,
                self.format_constant_index(proto, instruction.d as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_PREPVARARGS => {
                write!(instruction_str, " fixed({})", instruction.a).map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_LOADKX => write!(
                instruction_str,
                " R({}), K({}) ; {}",
                instruction.a,
                instruction.aux,
                self.format_constant_index(proto, instruction.aux as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_JUMPX => {
                write!(instruction_str, " -> {}", pc as i32 + 1 + instruction.e)
                    .map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_SUBRK | LuauOpcode::LOP_DIVRK => write!(
                instruction_str,
                " R({}), K({}), R({}) ; {}",
                instruction.a,
                instruction.b,
                instruction.c,
                self.format_constant_index(proto, instruction.b as usize, strings)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_FASTCALL | LuauOpcode::LOP_FASTCALL1 => write!(
                instruction_str,
                " builtin({}), arg(R{}), skip({})",
                instruction.a, instruction.b, instruction.c
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_FASTCALL2 | LuauOpcode::LOP_FASTCALL2K | LuauOpcode::LOP_FASTCALL3 => {
                write!(
                    instruction_str,
                    " builtin({}), arg(R{}), skip({}), AUX({:#x})",
                    instruction.a, instruction.b, instruction.c, instruction.aux
                )
                .map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_JUMPXEQKNIL
            | LuauOpcode::LOP_JUMPXEQKB
            | LuauOpcode::LOP_JUMPXEQKN
            | LuauOpcode::LOP_JUMPXEQKS => write!(
                instruction_str,
                " R({}), AUX({:#x}), -> {}",
                instruction.a,
                instruction.aux,
                self.jump_target(pc, instruction.d)
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_COVERAGE => {
                write!(instruction_str, " D({})", instruction.d).map_err(|e| e.to_string())?
            }
            LuauOpcode::LOP_CAPTURE => write!(
                instruction_str,
                " R({}), B({})",
                instruction.a, instruction.b
            )
            .map_err(|e| e.to_string())?,
            LuauOpcode::LOP_NOP | LuauOpcode::LOP_BREAK | LuauOpcode::LOP__COUNT => {}
            _ => write!(
                instruction_str,
                " A({}) B({}) C({}) D({}) E({}) AUX({:#x})",
                instruction.a,
                instruction.b,
                instruction.c,
                instruction.d,
                instruction.e,
                instruction.aux
            )
            .map_err(|e| e.to_string())?,
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
            }
            Constant::TableWithConstants(entries) => {
                let mut s = String::from("TableWithConstants({");
                for (key_idx, constant) in entries {
                    write!(
                        s,
                        "{}: {}, ",
                        key_idx,
                        self.format_constant(constant, strings)
                    )
                    .unwrap();
                }
                s.push_str("})");
                s
            }
            Constant::Closure(idx) => format!("Closure({})", idx),
            Constant::Integer(i) => i.to_string(),
        }
    }

    fn jump_target(&self, pc: usize, d: i16) -> i32 {
        pc as i32 + 1 + d as i32
    }

    fn is_identifier(value: &str) -> bool {
        let mut chars = value.chars();
        match chars.next() {
            Some(c) if c == '_' || c.is_ascii_alphabetic() => {}
            _ => return false,
        }
        chars.all(|c| c == '_' || c.is_ascii_alphanumeric())
    }

    fn insert_identifier_path(&self, root: &mut TableNode, raw: &str) {
        if raw.is_empty() || raw.len() > 120 {
            return;
        }

        if raw.contains('.') {
            let parts = raw.split('.').collect::<Vec<_>>();
            if parts.is_empty() || !parts.iter().all(|p| Self::is_identifier(p)) {
                return;
            }

            let mut current = root;
            for part in parts {
                current = current.children.entry(part.to_string()).or_default();
            }
            current.leaf = true;
            return;
        }

        if Self::is_identifier(raw) {
            root.children.entry(raw.to_string()).or_default().leaf = true;
        }
    }

    fn render_node(&mut self, node: &TableNode, depth: usize) -> Result<(), String> {
        let indent = "    ".repeat(depth);
        for (name, child) in &node.children {
            if child.children.is_empty() {
                writeln!(self.output, "{}{} = true,", indent, name).map_err(|e| e.to_string())?;
            } else {
                writeln!(self.output, "{}{} = {{", indent, name).map_err(|e| e.to_string())?;
                self.render_node(child, depth + 1)?;
                writeln!(self.output, "{}}},", indent).map_err(|e| e.to_string())?;
            }
        }
        Ok(())
    }
}
