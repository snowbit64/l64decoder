// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeBuffers
// Entry Point: 00b7a9e0
// Size: 260 bytes
// Signature: undefined __thiscall freeBuffers(IndexedTriangleSet * this, bool param_1)


/* IndexedTriangleSet::freeBuffers(bool) */

void __thiscall IndexedTriangleSet::freeBuffers(IndexedTriangleSet *this,bool param_1)

{
  if (!param_1) {
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined8 *)(this + 0x20) = 0;
    if (*(void **)(this + 0x28) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x28) = 0;
    if (*(void **)(this + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x30));
    }
    *(undefined8 *)(this + 0x30) = 0;
    if (*(void **)(this + 0x48) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x48));
    }
    *(undefined8 *)(this + 0x48) = 0;
    if (*(void **)(this + 0x50) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x50));
    }
    *(undefined8 *)(this + 0x50) = 0;
    if (*(void **)(this + 0x58) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x58));
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  if (((*(int *)(this + 0x8c) == 0) &&
      (this[0x89] = (IndexedTriangleSet)0x1, *(int *)(this + 0x68) != 6)) && (!param_1)) {
    if (*(void **)(this + 0x70) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x70));
    }
    *(undefined8 *)(this + 0x70) = 0;
    if (*(void **)(this + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x10) = 0;
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
    if (*(void **)(this + 0x38) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x38));
    }
    *(undefined8 *)(this + 0x38) = 0;
    if (*(void **)(this + 0x40) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x40));
    }
    *(undefined8 *)(this + 0x40) = 0;
    if (*(void **)(this + 0x60) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x60));
    }
    *(undefined8 *)(this + 0x60) = 0;
  }
  return;
}


