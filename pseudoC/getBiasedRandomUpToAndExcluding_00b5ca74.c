// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBiasedRandomUpToAndExcluding
// Entry Point: 00b5ca74
// Size: 80 bytes
// Signature: undefined __thiscall getBiasedRandomUpToAndExcluding(PCGRand * this, uint param_1)


/* PCGRand::getBiasedRandomUpToAndExcluding(unsigned int) */

int __thiscall PCGRand::getBiasedRandomUpToAndExcluding(PCGRand *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)this;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar1 = uVar3 >> 0xd ^ (uint)(uVar2 >> 0x1b);
  uVar3 = uVar3 >> 0x1b;
  uVar1 = uVar1 >> uVar3 | uVar1 << 0x20 - uVar3;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = uVar1 / param_1;
  }
  *(ulong *)this = uVar2 * 0x5851f42d4c957f2d + -0x2152ecc841109800;
  return uVar1 - uVar3 * param_1;
}


