// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CircularList
// Entry Point: 00d56120
// Size: 52 bytes
// Signature: undefined __thiscall ~CircularList(CircularList<HACD::TMMEdge> * this)


/* HACD::CircularList<HACD::TMMEdge>::~CircularList() */

void __thiscall HACD::CircularList<HACD::TMMEdge>::~CircularList(CircularList<HACD::TMMEdge> *this)

{
  *(undefined ***)this = &PTR__CircularList_010129c0;
  Clear();
  operator_delete(this);
  return;
}


