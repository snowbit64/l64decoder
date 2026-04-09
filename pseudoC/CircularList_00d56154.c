// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CircularList
// Entry Point: 00d56154
// Size: 60 bytes
// Signature: undefined __thiscall ~CircularList(CircularList<HACD::TMMTriangle> * this)


/* HACD::CircularList<HACD::TMMTriangle>::~CircularList() */

void __thiscall
HACD::CircularList<HACD::TMMTriangle>::~CircularList(CircularList<HACD::TMMTriangle> *this)

{
  ulong uVar1;
  
  *(undefined ***)this = &PTR__CircularList_010129f0;
  do {
    uVar1 = Delete();
  } while ((uVar1 & 1) != 0);
  operator_delete(this);
  return;
}


