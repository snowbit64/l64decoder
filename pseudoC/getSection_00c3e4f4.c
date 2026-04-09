// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSection
// Entry Point: 00c3e4f4
// Size: 32 bytes
// Signature: undefined __thiscall getSection(IR_InstructionSequence * this, uint param_1)


/* IR_InstructionSequence::getSection(unsigned int) const */

undefined8 __thiscall IR_InstructionSequence::getSection(IR_InstructionSequence *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)this + 0x80) + (ulong)(param_1 & 0x7fffffff) * 0x18 + 8)
  ;
}


