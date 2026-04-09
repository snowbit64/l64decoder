// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: alloc
// Entry Point: 00af1044
// Size: 332 bytes
// Signature: undefined __thiscall alloc(SubAllocator * this, uint param_1, uint param_2, uint * param_3, uint * param_4, uint * param_5)


/* SubAllocator::alloc(unsigned int, unsigned int, unsigned int&, unsigned int&, unsigned int&) */

bool __thiscall
SubAllocator::alloc(SubAllocator *this,uint param_1,uint param_2,uint *param_3,uint *param_4,
                   uint *param_5)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint *__dest;
  uint uVar10;
  uint uVar11;
  
  __dest = *(uint **)(this + 8);
  uVar2 = *(uint *)(this + 4);
  uVar8 = *(long *)(this + 0x10) - (long)__dest;
  uVar1 = uVar2;
  if (uVar2 <= param_2) {
    uVar1 = param_2;
  }
  if ((int)(uVar8 >> 3) == 0) {
    bVar3 = false;
  }
  else {
    puVar7 = __dest + 1;
    uVar10 = *puVar7;
    uVar11 = (uVar1 - 1) + uVar10 & -uVar1;
    uVar4 = *__dest;
    uVar5 = (uVar11 - uVar10) + param_1;
    if (uVar4 < uVar5) {
      uVar6 = uVar8 >> 3 & 0xffffffff;
      uVar8 = 1;
      do {
        puVar7 = __dest;
        uVar9 = uVar8;
        if (uVar6 == uVar9) {
          return uVar9 < uVar6;
        }
        __dest = puVar7 + 2;
        uVar4 = *__dest;
        uVar10 = puVar7[3];
        uVar11 = (uVar1 - 1) + uVar10 & -uVar1;
        uVar5 = (uVar11 - uVar10) + param_1;
        uVar8 = uVar9 + 1;
      } while (uVar4 < uVar5);
      bVar3 = uVar9 < uVar6;
      puVar7 = puVar7 + 3;
    }
    else {
      bVar3 = true;
    }
    uVar1 = (uVar5 + uVar2) - 1 & -uVar2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      __n = *(long *)(this + 0x10) - (long)(__dest + 2);
      if (__n != 0) {
        memmove(__dest,__dest + 2,__n);
      }
      *(size_t *)(this + 0x10) = (long)__dest + __n;
    }
    else {
      *__dest = uVar4 - uVar1;
      *puVar7 = uVar1 + uVar10;
    }
    *param_3 = uVar10;
    *param_4 = uVar1;
    *param_5 = uVar11;
    this[0x28] = (SubAllocator)0x1;
  }
  return bVar3;
}


