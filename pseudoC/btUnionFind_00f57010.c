// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btUnionFind
// Entry Point: 00f57010
// Size: 92 bytes
// Signature: undefined __thiscall ~btUnionFind(btUnionFind * this)


/* btUnionFind::~btUnionFind() */

void __thiscall btUnionFind::~btUnionFind(btUnionFind *this)

{
  if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btUnionFind)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btUnionFind)0x1;
  return;
}


