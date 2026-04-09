// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomDoubleInclusive
// Entry Point: 00b5cc30
// Size: 88 bytes
// Signature: undefined getRandomDoubleInclusive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PCGRand::getRandomDoubleInclusive() */

undefined  [16] PCGRand::getRandomDoubleInclusive(void)

{
  uint uVar1;
  ulong *in_x0;
  ulong uVar2;
  uint uVar3;
  undefined auVar4 [16];
  
  uVar2 = *in_x0;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar1 = uVar3 >> 0xd ^ (uint)(uVar2 >> 0x1b);
  uVar3 = uVar3 >> 0x1b;
  auVar4._0_8_ = (double)(ulong)(uVar1 >> uVar3 | uVar1 << 0x20 - uVar3) * 2.328306437080797e-10;
  *in_x0 = uVar2 * 0x5851f42d4c957f2d + 0xdead1337beef6800;
  auVar4._8_8_ = 0;
  return auVar4;
}


