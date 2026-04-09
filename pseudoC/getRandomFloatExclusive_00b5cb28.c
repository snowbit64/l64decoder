// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomFloatExclusive
// Entry Point: 00b5cb28
// Size: 88 bytes
// Signature: undefined getRandomFloatExclusive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PCGRand::getRandomFloatExclusive() */

float PCGRand::getRandomFloatExclusive(void)

{
  uint uVar1;
  ulong *in_x0;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *in_x0;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar1 = uVar3 >> 0xd ^ (uint)(uVar2 >> 0x1b);
  uVar3 = uVar3 >> 0x1b;
  *in_x0 = uVar2 * 0x5851f42d4c957f2d + 0xdead1337beef6800;
  return (float)(ulong)((uVar1 >> uVar3 | uVar1 << 0x20 - uVar3) >> 8) * 5.960464e-08;
}


