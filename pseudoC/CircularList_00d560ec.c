// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CircularList
// Entry Point: 00d560ec
// Size: 52 bytes
// Signature: undefined __thiscall ~CircularList(CircularList<HACD::TMMVertex> * this)


/* HACD::CircularList<HACD::TMMVertex>::~CircularList() */

void __thiscall
HACD::CircularList<HACD::TMMVertex>::~CircularList(CircularList<HACD::TMMVertex> *this)

{
  *(undefined ***)this = &PTR__CircularList_01012990;
  Clear();
  operator_delete(this);
  return;
}


