// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isMicroAlloc
// Entry Point: 00d5b3ec
// Size: 256 bytes
// Signature: undefined __thiscall isMicroAlloc(MyMicroAllocator * this, void * param_1)


/* HACD::MyMicroAllocator::isMicroAlloc(void const*) */

MyMicroAllocator * __thiscall
HACD::MyMicroAllocator::isMicroAlloc(MyMicroAllocator *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  void **ppvVar5;
  uint uVar6;
  ulong uVar7;
  void **ppvVar8;
  
  pvVar3 = *(void **)(this + 0x838);
  if ((param_1 >= pvVar3 && param_1 <= *(void **)(this + 0x840)) &&
      (param_1 < pvVar3 || *(void **)(this + 0x840) != param_1)) {
    uVar6 = 0;
    if (*(uint *)(this + 0x830) != 0) {
      uVar6 = (uint)((int)param_1 - (int)pvVar3) / *(uint *)(this + 0x830);
    }
    return this + (ulong)uVar6 * 0x630 + 0x890;
  }
  uVar6 = *(uint *)(this + 0x84c);
  uVar4 = (ulong)uVar6;
  if (uVar6 != 0) {
    ppvVar5 = *(void ***)(this + 0x850);
    if (((ppvVar5 != (void **)0x0) && (*ppvVar5 <= param_1)) && (param_1 < ppvVar5[1])) {
      return (MyMicroAllocator *)ppvVar5[2];
    }
    ppvVar5 = *(void ***)(this + 0x858);
    if (uVar6 < 4) {
      uVar7 = 0;
      ppvVar8 = ppvVar5;
      do {
        if ((param_1 >= *ppvVar8 && param_1 <= ppvVar8[1]) &&
            (param_1 < *ppvVar8 || ppvVar8[1] != param_1)) {
          *(void ***)(this + 0x850) = ppvVar8;
          return (MyMicroAllocator *)ppvVar5[(uVar7 & 0xffffffff) * 4 + 2];
        }
        uVar7 = uVar7 + 1;
        ppvVar8 = ppvVar8 + 4;
      } while (uVar4 != uVar7);
    }
    else {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + ((uint)uVar4 - uVar6 >> 1);
        ppvVar8 = ppvVar5 + (ulong)uVar1 * 4;
        pvVar3 = ppvVar8[1];
        if ((param_1 >= *ppvVar8 && param_1 <= pvVar3) && (param_1 < *ppvVar8 || pvVar3 != param_1))
        {
          *(void ***)(this + 0x850) = ppvVar8;
          return (MyMicroAllocator *)ppvVar5[(ulong)uVar1 * 4 + 2];
        }
        uVar2 = (uint)uVar4;
        if (param_1 <= pvVar3) {
          uVar2 = uVar1;
        }
        uVar4 = (ulong)uVar2;
        if (param_1 > pvVar3) {
          uVar6 = uVar1 + 1;
        }
      } while (uVar2 != uVar6);
    }
  }
  return (MyMicroAllocator *)0x0;
}


