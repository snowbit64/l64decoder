// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStats
// Entry Point: 00af1724
// Size: 64 bytes
// Signature: undefined __thiscall getStats(SubAllocator * this, uint * param_1, uint * param_2)


/* SubAllocator::getStats(unsigned int&, unsigned int&) */

void __thiscall SubAllocator::getStats(SubAllocator *this,uint *param_1,uint *param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  
  piVar2 = *(int **)(this + 8);
  lVar1 = *(long *)(this + 0x10);
  *param_2 = 0;
  uVar4 = lVar1 - (long)piVar2;
  uVar3 = (uint)(uVar4 >> 3);
  if (uVar3 != 0) {
    uVar3 = 0;
    uVar4 = uVar4 >> 3 & 0xffffffff;
    do {
      uVar4 = uVar4 - 1;
      uVar3 = uVar3 + *piVar2;
      *param_2 = uVar3;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  *param_1 = *(int *)this - uVar3;
  return;
}


