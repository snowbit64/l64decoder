// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PreprocessorDesc
// Entry Point: 00bf0d20
// Size: 156 bytes
// Signature: undefined __thiscall ~PreprocessorDesc(PreprocessorDesc * this)


/* PreprocessorDesc::~PreprocessorDesc() */

void __thiscall PreprocessorDesc::~PreprocessorDesc(PreprocessorDesc *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 0x130);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(this + 0x138);
    if (*(void **)(this + 0x138) != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x18));
        }
        pvVar3 = (void *)((long)pvVar2 + -0x40);
        if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x30));
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x130);
    }
    *(void **)(this + 0x138) = pvVar1;
    operator_delete(pvVar3);
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


