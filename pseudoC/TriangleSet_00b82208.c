// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TriangleSet
// Entry Point: 00b82208
// Size: 184 bytes
// Signature: undefined __thiscall ~TriangleSet(TriangleSet * this)


/* TriangleSet::~TriangleSet() */

void __thiscall TriangleSet::~TriangleSet(TriangleSet *this)

{
  *(undefined ***)this = &PTR__TriangleSet_00fea500;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
    return;
  }
  return;
}


