use crate::bytecode::{BytecodeFile, Constant, Instruction, LuauOpcode, Proto};
use std::collections::BTreeMap;
use std::convert::TryFrom;
use std::fmt::Write;

pub struct Decompiler {
    output: String,
}

#[derive(Default, Debug)]
struct TableNode {
    children: BTreeMap<String, TableNode>,
    leaf: bool,
}

#[derive(Clone)]
struct DecodedInstruction {
    pc: usize,
    opcode: LuauOpcode,
    instruction: Instruction,
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

        let decoded = self.decode_proto_instructions(proto)?;

        // Decompile instructions (disassembly)
        writeln!(self.output, "-- Instructions").map_err(|e| e.to_string())?;
        for di in &decoded {
            writeln!(
                self.output,
                "{:04}  {}",
                di.pc,
                self.decompile_instruction(di.pc, di.opcode, &di.instruction, proto, strings)?
            )
            .map_err(|e| e.to_string())?;
        }
        writeln!(self.output).map_err(|e| e.to_string())?;

        // Reconstructed pseudo-Lua (logic-focused)
        writeln!(self.output, "-- Reconstructed pseudo-Lua").map_err(|e| e.to_string())?;
        self.reconstruct_pseudolua(proto, strings, &decoded)?;
        writeln!(self.output).map_err(|e| e.to_string())?;

        Ok(())
    }

    fn decode_proto_instructions(&self, proto: &Proto) -> Result<Vec<DecodedInstruction>, String> {
        let mut out = Vec::new();
        let mut pc = 0usize;

        while pc < proto.code.len() {
            let instruction_u32 = proto.code[pc];
            let mut instruction = self.decode_instruction(instruction_u32);
            let opcode = match LuauOpcode::try_from(instruction.opcode) {
                Ok(opcode) => opcode,
                Err(_) => {
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

            out.push(DecodedInstruction {
                pc,
                opcode,
                instruction,
            });

            pc += 1 + usize::from(self.opcode_uses_aux(opcode));
        }

        Ok(out)
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

    fn identifier_or_literal(&self, proto: &Proto, index: usize, strings: &[String]) -> String {
        match proto.k.get(index) {
            Some(Constant::String(s)) => s.clone(),
            _ => self.format_constant_index(proto, index, strings),
        }
    }

    /// Decode a Luau `GETIMPORT` AUX word into a dotted path like `foo.bar.baz`.
    ///
    /// The encoding is `(count << 30) | (id0 << 20) | (id1 << 10) | id2` where
    /// each id is a 10-bit index into the current proto's constant table (the
    /// values must be strings). See the LBC v3 `luau_load` pseudoC
    /// (`pseudoC/luau_load_00f2508c.c`, constant tag `\x04`) for the runtime
    /// implementation.
    fn decode_import_path(&self, proto: &Proto, aux: u32) -> Option<String> {
        let count = (aux >> 30) as usize;
        if count == 0 || count > 3 {
            return None;
        }
        let ids = [
            ((aux >> 20) & 0x3FF) as usize,
            ((aux >> 10) & 0x3FF) as usize,
            (aux & 0x3FF) as usize,
        ];
        let mut parts = Vec::with_capacity(count);
        for id in ids.iter().take(count) {
            match proto.k.get(*id) {
                Some(Constant::String(s)) => parts.push(s.clone()),
                _ => return None,
            }
        }
        Some(parts.join("."))
    }

    fn format_import_aux(&self, proto: &Proto, aux: u32) -> String {
        match self.decode_import_path(proto, aux) {
            Some(path) => format!("{} ; {:#x}", path, aux),
            None => format!("{:#x}", aux),
        }
    }

    fn reconstruct_pseudolua(
        &mut self,
        proto: &Proto,
        strings: &[String],
        decoded: &[DecodedInstruction],
    ) -> Result<(), String> {
        let mut regs = vec![String::new(); proto.maxstacksize as usize + 64];
        let mut labels = std::collections::BTreeSet::new();

        for di in decoded {
            match di.opcode {
                LuauOpcode::LOP_JUMP
                | LuauOpcode::LOP_JUMPBACK
                | LuauOpcode::LOP_JUMPIF
                | LuauOpcode::LOP_JUMPIFNOT
                | LuauOpcode::LOP_JUMPIFEQ
                | LuauOpcode::LOP_JUMPIFLE
                | LuauOpcode::LOP_JUMPIFLT
                | LuauOpcode::LOP_JUMPIFNOTEQ
                | LuauOpcode::LOP_JUMPIFNOTLE
                | LuauOpcode::LOP_JUMPIFNOTLT => {
                    labels.insert(self.jump_target(di.pc, di.instruction.d));
                }
                LuauOpcode::LOP_JUMPX => {
                    labels.insert(di.pc as i32 + 1 + di.instruction.e);
                }
                _ => {}
            }
        }

        for di in decoded {
            if labels.contains(&(di.pc as i32)) {
                writeln!(self.output, "::L{}::", di.pc).map_err(|e| e.to_string())?;
            }

            let a = di.instruction.a as usize;
            let b = di.instruction.b as usize;
            let c = di.instruction.c as usize;
            let r = |i: usize, regs: &Vec<String>| -> String {
                if let Some(v) = regs.get(i) {
                    if !v.is_empty() {
                        return v.clone();
                    }
                }
                format!("r{}", i)
            };

            match di.opcode {
                LuauOpcode::LOP_LOADNIL => {
                    regs[a] = "nil".to_string();
                    writeln!(self.output, "r{} = nil", a).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_LOADB => {
                    regs[a] = if di.instruction.b == 0 {
                        "false"
                    } else {
                        "true"
                    }
                    .to_string();
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_LOADN => {
                    regs[a] = di.instruction.d.to_string();
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_LOADK | LuauOpcode::LOP_LOADKX => {
                    let kidx = if di.opcode == LuauOpcode::LOP_LOADK {
                        di.instruction.d as usize
                    } else {
                        di.instruction.aux as usize
                    };
                    regs[a] = self.format_constant_index(proto, kidx, strings);
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_MOVE => {
                    regs[a] = r(b, &regs);
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_GETGLOBAL => {
                    regs[a] = self.identifier_or_literal(proto, di.instruction.aux as usize, strings);
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_GETIMPORT => {
                    regs[a] = self
                        .decode_import_path(proto, di.instruction.aux)
                        .unwrap_or_else(|| format!("import({:#x})", di.instruction.aux));
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_SETGLOBAL => {
                    let name =
                        self.identifier_or_literal(proto, di.instruction.aux as usize, strings);
                    writeln!(self.output, "{} = {}", name, r(a, &regs))
                        .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_GETTABLEKS => {
                    let key =
                        self.format_constant_index(proto, di.instruction.aux as usize, strings);
                    regs[a] = format!("{}[{}]", r(b, &regs), key);
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_SETTABLEKS => {
                    let key =
                        self.format_constant_index(proto, di.instruction.aux as usize, strings);
                    writeln!(self.output, "{}[{}] = {}", r(b, &regs), key, r(a, &regs))
                        .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_GETTABLE => {
                    regs[a] = format!("{}[{}]", r(b, &regs), r(c, &regs));
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_SETTABLE => {
                    writeln!(
                        self.output,
                        "{}[{}] = {}",
                        r(b, &regs),
                        r(c, &regs),
                        r(a, &regs)
                    )
                    .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_DUPCLOSURE | LuauOpcode::LOP_NEWCLOSURE => {
                    regs[a] = format!("closure_{}", di.instruction.d as u16);
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_NAMECALL => {
                    let key =
                        self.format_constant_index(proto, di.instruction.aux as usize, strings);
                    regs[a] = format!("{}:{}", r(b, &regs), key);
                    if a + 1 < regs.len() {
                        regs[a + 1] = r(b, &regs);
                    }
                }
                LuauOpcode::LOP_CALL => {
                    let func = r(a, &regs);
                    let args = if di.instruction.b == 0 {
                        "...".to_string()
                    } else {
                        (a + 1..a + di.instruction.b as usize)
                            .map(|idx| r(idx, &regs))
                            .collect::<Vec<_>>()
                            .join(", ")
                    };
                    let call_expr = format!("{}({})", func, args);
                    if di.instruction.c <= 1 {
                        writeln!(self.output, "{}", call_expr).map_err(|e| e.to_string())?;
                    } else {
                        regs[a] = call_expr.clone();
                        writeln!(self.output, "r{} = {}", a, call_expr)
                            .map_err(|e| e.to_string())?;
                    }
                }
                LuauOpcode::LOP_RETURN => {
                    if di.instruction.b == 0 {
                        writeln!(self.output, "return ...").map_err(|e| e.to_string())?;
                    } else if di.instruction.b == 1 {
                        writeln!(self.output, "return").map_err(|e| e.to_string())?;
                    } else {
                        let vals = (a..a + di.instruction.b as usize - 1)
                            .map(|idx| r(idx, &regs))
                            .collect::<Vec<_>>()
                            .join(", ");
                        writeln!(self.output, "return {}", vals).map_err(|e| e.to_string())?;
                    }
                }
                LuauOpcode::LOP_JUMP | LuauOpcode::LOP_JUMPBACK => {
                    writeln!(
                        self.output,
                        "goto L{}",
                        self.jump_target(di.pc, di.instruction.d)
                    )
                    .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_JUMPIF => {
                    writeln!(
                        self.output,
                        "if {} then goto L{} end",
                        r(a, &regs),
                        self.jump_target(di.pc, di.instruction.d)
                    )
                    .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_JUMPIFNOT => {
                    writeln!(
                        self.output,
                        "if not {} then goto L{} end",
                        r(a, &regs),
                        self.jump_target(di.pc, di.instruction.d)
                    )
                    .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_JUMPIFEQ
                | LuauOpcode::LOP_JUMPIFLE
                | LuauOpcode::LOP_JUMPIFLT
                | LuauOpcode::LOP_JUMPIFNOTEQ
                | LuauOpcode::LOP_JUMPIFNOTLE
                | LuauOpcode::LOP_JUMPIFNOTLT => {
                    let op = match di.opcode {
                        LuauOpcode::LOP_JUMPIFEQ => "==",
                        LuauOpcode::LOP_JUMPIFLE => "<=",
                        LuauOpcode::LOP_JUMPIFLT => "<",
                        LuauOpcode::LOP_JUMPIFNOTEQ => "~=",
                        LuauOpcode::LOP_JUMPIFNOTLE => ">",
                        LuauOpcode::LOP_JUMPIFNOTLT => ">=",
                        _ => "?",
                    };
                    writeln!(
                        self.output,
                        "if {} {} {} then goto L{} end",
                        r(a, &regs),
                        op,
                        r(di.instruction.aux as usize, &regs),
                        self.jump_target(di.pc, di.instruction.d)
                    )
                    .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_JUMPX => {
                    writeln!(self.output, "goto L{}", di.pc as i32 + 1 + di.instruction.e)
                        .map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_ADD
                | LuauOpcode::LOP_SUB
                | LuauOpcode::LOP_MUL
                | LuauOpcode::LOP_DIV
                | LuauOpcode::LOP_MOD
                | LuauOpcode::LOP_POW
                | LuauOpcode::LOP_AND
                | LuauOpcode::LOP_OR
                | LuauOpcode::LOP_IDIV => {
                    let op = match di.opcode {
                        LuauOpcode::LOP_ADD => "+",
                        LuauOpcode::LOP_SUB => "-",
                        LuauOpcode::LOP_MUL => "*",
                        LuauOpcode::LOP_DIV => "/",
                        LuauOpcode::LOP_MOD => "%",
                        LuauOpcode::LOP_POW => "^",
                        LuauOpcode::LOP_AND => "and",
                        LuauOpcode::LOP_OR => "or",
                        LuauOpcode::LOP_IDIV => "//",
                        _ => "?",
                    };
                    regs[a] = format!("({} {} {})", r(b, &regs), op, r(c, &regs));
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                LuauOpcode::LOP_NOT | LuauOpcode::LOP_MINUS | LuauOpcode::LOP_LENGTH => {
                    let op = match di.opcode {
                        LuauOpcode::LOP_NOT => "not ",
                        LuauOpcode::LOP_MINUS => "-",
                        LuauOpcode::LOP_LENGTH => "#",
                        _ => "",
                    };
                    regs[a] = format!("{}{}", op, r(b, &regs));
                    writeln!(self.output, "r{} = {}", a, regs[a]).map_err(|e| e.to_string())?;
                }
                _ => {
                    writeln!(
                        self.output,
                        "-- pc {}: {:?} (recon fallback)",
                        di.pc, di.opcode
                    )
                    .map_err(|e| e.to_string())?;
                }
            }
        }

        Ok(())
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
                " R({}), AUX({}) ; {}",
                instruction.a,
                instruction.aux,
                self.format_import_aux(proto, instruction.aux)
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
