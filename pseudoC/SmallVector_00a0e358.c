// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SmallVector
// Entry Point: 00a0e358
// Size: 264 bytes
// Signature: undefined __thiscall ~SmallVector(SmallVector<EnvMapBlender::LoadingFile,4u> * this)


/* SmallVector<EnvMapBlender::LoadingFile, 4u>::~SmallVector() */

void __thiscall
SmallVector<EnvMapBlender::LoadingFile,4u>::~SmallVector
          (SmallVector<EnvMapBlender::LoadingFile,4u> *this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void **ppvVar8;
  void *pvVar9;
  
  uVar3 = *(uint *)this;
  if (uVar3 < 5) {
    if (uVar3 != 0) {
      uVar5 = 0;
      ppvVar8 = (void **)(this + 0x6c);
      do {
        if (((byte)*(SmallVector<EnvMapBlender::LoadingFile,4u> *)(ppvVar8 + -2) & 1) != 0) {
          operator_delete(*ppvVar8);
          uVar3 = *(uint *)this;
        }
        uVar5 = uVar5 + 1;
        ppvVar8 = ppvVar8 + 0x15;
      } while (uVar5 < uVar3);
    }
    *(undefined4 *)this = 0;
    pvVar7 = *(void **)(this + 0x2a8);
  }
  else {
    lVar6 = *(long *)(this + 0x2a8);
    *(undefined4 *)this = 0;
    lVar2 = *(long *)(this + 0x2b0);
    while (lVar1 = lVar2, lVar1 != lVar6) {
      lVar2 = lVar1 + -0xa8;
      if ((*(byte *)(lVar1 + -0x50) & 1) != 0) {
        operator_delete(*(void **)(lVar1 + -0x40));
      }
    }
    *(long *)(this + 0x2b0) = lVar6;
    pvVar7 = *(void **)(this + 0x2a8);
  }
  if (pvVar7 != (void *)0x0) {
    pvVar9 = pvVar7;
    pvVar4 = *(void **)(this + 0x2b0);
    if (*(void **)(this + 0x2b0) != pvVar7) {
      do {
        pvVar9 = (void *)((long)pvVar4 + -0xa8);
        if ((*(byte *)((long)pvVar4 + -0x50) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x40));
        }
        pvVar4 = pvVar9;
      } while (pvVar9 != pvVar7);
      pvVar9 = *(void **)(this + 0x2a8);
    }
    *(void **)(this + 0x2b0) = pvVar7;
    operator_delete(pvVar9);
    return;
  }
  return;
}


