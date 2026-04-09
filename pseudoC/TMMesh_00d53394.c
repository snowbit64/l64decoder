// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TMMesh
// Entry Point: 00d53394
// Size: 128 bytes
// Signature: undefined __thiscall ~TMMesh(TMMesh * this)


/* HACD::TMMesh::~TMMesh() */

void __thiscall HACD::TMMesh::~TMMesh(TMMesh *this)

{
  ulong uVar1;
  
  *(undefined ***)this = &PTR__TMMesh_01012960;
  *(undefined ***)(this + 0x48) = &PTR__CircularList_010129f0;
  do {
    uVar1 = CircularList<HACD::TMMTriangle>::Delete();
  } while ((uVar1 & 1) != 0);
  *(undefined ***)(this + 0x28) = &PTR__CircularList_010129c0;
  CircularList<HACD::TMMEdge>::Clear();
  *(undefined ***)(this + 8) = &PTR__CircularList_01012990;
  CircularList<HACD::TMMVertex>::Clear();
  operator_delete(this);
  return;
}


