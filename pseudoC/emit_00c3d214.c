// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit
// Entry Point: 00c3d214
// Size: 24 bytes
// Signature: undefined __thiscall emit(IR_InstructionSequence * this, uint * param_1)


/* IR_InstructionSequence::emit(unsigned int const*) */

void __thiscall IR_InstructionSequence::emit(IR_InstructionSequence *this,uint *param_1)

{
  emit(this,param_1,(param_1[1] >> 0x10) + (param_1[1] & 0xffff) + 2,0xffffffff);
  return;
}


