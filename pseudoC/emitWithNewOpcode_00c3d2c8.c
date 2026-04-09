// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitWithNewOpcode
// Entry Point: 00c3d2c8
// Size: 76 bytes
// Signature: undefined __thiscall emitWithNewOpcode(IR_InstructionSequence * this, IR_OPCODE param_1, uint * param_2)


/* IR_InstructionSequence::emitWithNewOpcode(IR_OPCODE, unsigned int const*) */

void __thiscall
IR_InstructionSequence::emitWithNewOpcode
          (IR_InstructionSequence *this,IR_OPCODE param_1,uint *param_2)

{
  emit(this,param_2,(param_2[1] >> 0x10) + (param_2[1] & 0xffff) + 2,0xffffffff);
  **(IR_OPCODE **)(*(long *)(this + 0x28) + -8) = param_1;
  return;
}


