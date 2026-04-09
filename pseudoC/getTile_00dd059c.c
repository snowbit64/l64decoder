// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTile
// Entry Point: 00dd059c
// Size: 16 bytes
// Signature: undefined __thiscall getTile(dtNavMesh * this, int param_1)


/* dtNavMesh::getTile(int) */

long __thiscall dtNavMesh::getTile(dtNavMesh *this,int param_1)

{
  return *(long *)(this + 0x50) + (long)param_1 * 0x68;
}


