// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SmallVector
// Entry Point: 00a4b980
// Size: 264 bytes
// Signature: undefined __thiscall ~SmallVector(SmallVector<AudioSourceSample::Element,1u> * this)


/* SmallVector<AudioSourceSample::Element, 1u>::~SmallVector() */

void __thiscall
SmallVector<AudioSourceSample::Element,1u>::~SmallVector
          (SmallVector<AudioSourceSample::Element,1u> *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  void **ppvVar8;
  void *pvVar9;
  
  if (*(uint *)this < 2) {
    if (*(uint *)this != 0) {
      uVar6 = 0;
      ppvVar8 = (void **)(this + 0x1c);
      uVar4 = 1;
      do {
        if (((byte)*(SmallVector<AudioSourceSample::Element,1u> *)(ppvVar8 + -2) & 1) != 0) {
          operator_delete(*ppvVar8);
          uVar4 = (ulong)*(uint *)this;
        }
        uVar6 = uVar6 + 1;
        ppvVar8 = ppvVar8 + 7;
      } while (uVar6 < uVar4);
    }
    *(undefined4 *)this = 0;
    pvVar7 = *(void **)(this + 0x40);
  }
  else {
    lVar1 = *(long *)(this + 0x40);
    *(undefined4 *)this = 0;
    lVar3 = *(long *)(this + 0x48);
    while (lVar2 = lVar3, lVar2 != lVar1) {
      lVar3 = lVar2 + -0x38;
      if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
        operator_delete(*(void **)(lVar2 + -0x20));
      }
    }
    *(long *)(this + 0x48) = lVar1;
    pvVar7 = *(void **)(this + 0x40);
  }
  if (pvVar7 != (void *)0x0) {
    pvVar9 = pvVar7;
    pvVar5 = *(void **)(this + 0x48);
    if (*(void **)(this + 0x48) != pvVar7) {
      do {
        pvVar9 = (void *)((long)pvVar5 + -0x38);
        if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x20));
        }
        pvVar5 = pvVar9;
      } while (pvVar9 != pvVar7);
      pvVar9 = *(void **)(this + 0x40);
    }
    *(void **)(this + 0x48) = pvVar7;
    operator_delete(pvVar9);
    return;
  }
  return;
}


