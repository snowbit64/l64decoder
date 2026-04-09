// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetBuilder
// Entry Point: 00b7e584
// Size: 68 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetBuilder(IndexedTriangleSetBuilder * this)


/* IndexedTriangleSetBuilder::~IndexedTriangleSetBuilder() */

void __thiscall
IndexedTriangleSetBuilder::~IndexedTriangleSetBuilder(IndexedTriangleSetBuilder *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


