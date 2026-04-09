// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomFloatInclusive
// Entry Point: 00b5cb80
// Size: 92 bytes
// Signature: undefined getRandomFloatInclusive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PCGRand::getRandomFloatInclusive() */

float PCGRand::getRandomFloatInclusive(void)

{
  uint uVar1;
  ulong *in_x0;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *in_x0;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar1 = uVar3 >> 0xd ^ (uint)(uVar2 >> 0x1b);
  uVar3 = uVar3 >> 0x1b;
  uVar1 = uVar1 >> uVar3 | uVar1 << 0x20 - uVar3;
  *in_x0 = uVar2 * 0x5851f42d4c957f2d + 0xdead1337beef6800;
  return (float)(ulong)((uVar1 >> 8) - ((int)uVar1 >> 0x1f)) * 5.960464e-08;
}


