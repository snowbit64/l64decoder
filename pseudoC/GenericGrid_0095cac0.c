// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericGrid
// Entry Point: 0095cac0
// Size: 16 bytes
// Signature: undefined __thiscall ~GenericGrid(GenericGrid<unsigned_int> * this)


/* GenericGrid<unsigned int>::~GenericGrid() */

void __thiscall GenericGrid<unsigned_int>::~GenericGrid(GenericGrid<unsigned_int> *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


