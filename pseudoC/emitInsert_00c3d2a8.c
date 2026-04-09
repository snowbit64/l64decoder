// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitInsert
// Entry Point: 00c3d2a8
// Size: 32 bytes
// Signature: undefined __thiscall emitInsert(IR_InstructionSequence * this, uint param_1, uint * param_2)


/* IR_InstructionSequence::emitInsert(unsigned int, unsigned int const*) */

void __thiscall
IR_InstructionSequence::emitInsert(IR_InstructionSequence *this,uint param_1,uint *param_2)

{
  emit(this,param_2,(param_2[1] >> 0x10) + (param_2[1] & 0xffff) + 2,param_1);
  return;
}


