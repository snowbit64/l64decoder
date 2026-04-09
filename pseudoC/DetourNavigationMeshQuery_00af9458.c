// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DetourNavigationMeshQuery
// Entry Point: 00af9458
// Size: 56 bytes
// Signature: undefined __thiscall ~DetourNavigationMeshQuery(DetourNavigationMeshQuery * this)


/* DetourNavigationMeshQuery::~DetourNavigationMeshQuery() */

void __thiscall
DetourNavigationMeshQuery::~DetourNavigationMeshQuery(DetourNavigationMeshQuery *this)

{
  dtNavMesh *this_00;
  
  this_00 = *(dtNavMesh **)this;
  if (this_00 != (dtNavMesh *)0x0) {
    dtNavMesh::~dtNavMesh(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


