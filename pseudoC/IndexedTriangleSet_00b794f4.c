// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSet
// Entry Point: 00b794f4
// Size: 124 bytes
// Signature: undefined __thiscall ~IndexedTriangleSet(IndexedTriangleSet * this)


/* IndexedTriangleSet::~IndexedTriangleSet() */

void __thiscall IndexedTriangleSet::~IndexedTriangleSet(IndexedTriangleSet *this)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__IndexedTriangleSet_00fea4b8;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
  }
  uVar2 = *(uint *)(this + 0x78);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(this + 0x80) + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *(uint *)(this + 0x78);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  TriangleSet::~TriangleSet((TriangleSet *)this);
  return;
}


