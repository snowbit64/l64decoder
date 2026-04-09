// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getString
// Entry Point: 00c3e534
// Size: 32 bytes
// Signature: undefined __thiscall getString(IR_InstructionSequence * this, uint param_1)


/* IR_InstructionSequence::getString(unsigned int) const */

undefined8 __thiscall IR_InstructionSequence::getString(IR_InstructionSequence *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)this + 0x80) + (ulong)(param_1 & 0x7fffffff) * 0x18 + 8)
  ;
}


