// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DecalCullingStructure
// Entry Point: 008c283c
// Size: 108 bytes
// Signature: undefined __thiscall ~DecalCullingStructure(DecalCullingStructure * this)


/* DecalCullingStructure::~DecalCullingStructure() */

void __thiscall DecalCullingStructure::~DecalCullingStructure(DecalCullingStructure *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      lVar3 = lVar3 << 5;
      do {
        pvVar1 = *(void **)(lVar2 + -0x20 + lVar3);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
    return;
  }
  return;
}


