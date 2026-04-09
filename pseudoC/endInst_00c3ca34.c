// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endInst
// Entry Point: 00c3ca34
// Size: 64 bytes
// Signature: undefined endInst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_InstructionSequence::endInst() */

void IR_InstructionSequence::endInst(void)

{
  IR_InstructionSequence *in_x0;
  
  emit(in_x0,*(uint **)(in_x0 + 8),
       (uint)((ulong)(*(long *)(in_x0 + 0x10) - (long)*(uint **)(in_x0 + 8)) >> 2),0xffffffff);
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 8);
  }
  return;
}


