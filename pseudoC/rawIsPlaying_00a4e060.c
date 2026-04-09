// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rawIsPlaying
// Entry Point: 00a4e060
// Size: 136 bytes
// Signature: undefined rawIsPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::rawIsPlaying() const */

long * AudioSourceSample::rawIsPlaying(void)

{
  uint *puVar1;
  uint uVar2;
  long in_x0;
  long *plVar3;
  long lVar4;
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  plVar3 = *(long **)(puVar1 + 0xc);
  if (plVar3 != (long *)0x0) {
    lVar4 = *(long *)(puVar1 + 10);
    uVar2 = (**(code **)(*plVar3 + 0x18))();
    plVar3 = (long *)(ulong)(lVar4 == 0 & uVar2);
    if ((lVar4 != 0) && ((uVar2 & 1) != 0)) {
      plVar3 = (long *)(ulong)(*(char *)(*(long *)(puVar1 + 10) + 0x6a) == '\0');
    }
  }
  return plVar3;
}


