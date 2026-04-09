// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ICHull
// Entry Point: 00d4897c
// Size: 96 bytes
// Signature: undefined __thiscall ~ICHull(ICHull * this)


/* HACD::ICHull::~ICHull() */

void __thiscall HACD::ICHull::~ICHull(ICHull *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 200);
  *(undefined ***)this = &PTR__ICHull_01012900;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar1;
    operator_delete(pvVar1);
  }
  TMMesh::~TMMesh((TMMesh *)(this + 8));
  return;
}


