// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 008b43f4
// Size: 64 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::isPlaying() const */

long * LoopSynthesisSample::isPlaying(void)

{
  char cVar1;
  uint uVar2;
  long in_x0;
  long *plVar3;
  
  plVar3 = *(long **)(in_x0 + 0x118);
  if (plVar3 != (long *)0x0) {
    cVar1 = *(char *)(in_x0 + 0xda);
    uVar2 = (**(code **)(*plVar3 + 0x18))();
    plVar3 = (long *)(ulong)(cVar1 == '\0' & uVar2);
  }
  return plVar3;
}


