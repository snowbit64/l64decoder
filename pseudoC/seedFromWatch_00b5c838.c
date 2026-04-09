// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seedFromWatch
// Entry Point: 00b5c838
// Size: 92 bytes
// Signature: undefined seedFromWatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PCGRand::seedFromWatch() */

void PCGRand::seedFromWatch(void)

{
  long *in_x0;
  ulong uVar1;
  
  uVar1 = Watch::getCurrentTicks();
  *in_x0 = (uVar1 ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + -0x2152ecc841109800;
  return;
}


