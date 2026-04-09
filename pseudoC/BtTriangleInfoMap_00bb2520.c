// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BtTriangleInfoMap
// Entry Point: 00bb2520
// Size: 72 bytes
// Signature: undefined __thiscall ~BtTriangleInfoMap(BtTriangleInfoMap * this)


/* BtTriangleInfoMap::~BtTriangleInfoMap() */

void __thiscall BtTriangleInfoMap::~BtTriangleInfoMap(BtTriangleInfoMap *this)

{
  *(undefined ***)this = &PTR__BtTriangleInfoMap_00feb2f0;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  operator_delete(this);
  return;
}


