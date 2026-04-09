// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUnbiasedRandomUpToAndExcluding
// Entry Point: 00b5cac4
// Size: 100 bytes
// Signature: undefined __thiscall getUnbiasedRandomUpToAndExcluding(PCGRand * this, uint param_1)


/* PCGRand::getUnbiasedRandomUpToAndExcluding(unsigned int) */

int __thiscall PCGRand::getUnbiasedRandomUpToAndExcluding(PCGRand *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0xffffffff / param_1;
  }
  uVar3 = *(ulong *)this;
  do {
    uVar4 = uVar3 * 0x5851f42d4c957f2d + 0xdead1337beef6800;
    uVar5 = (uint)(uVar3 >> 0x20);
    uVar1 = uVar5 >> 0xd ^ (uint)(uVar3 >> 0x1b);
    uVar5 = uVar5 >> 0x1b;
    uVar1 = uVar1 >> uVar5 | uVar1 << 0x20 - uVar5;
    uVar3 = uVar4;
  } while (uVar2 * param_1 <= uVar1);
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1 / param_1;
  }
  *(ulong *)this = uVar4;
  return uVar1 - uVar2 * param_1;
}


