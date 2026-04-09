// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTilesAt
// Entry Point: 00dd02b4
// Size: 128 bytes
// Signature: undefined __thiscall getTilesAt(dtNavMesh * this, int param_1, int param_2, dtMeshTile * * param_3, int param_4)


/* dtNavMesh::getTilesAt(int, int, dtMeshTile**, int) const */

int __thiscall
dtNavMesh::getTilesAt(dtNavMesh *this,int param_1,int param_2,dtMeshTile **param_3,int param_4)

{
  int iVar1;
  dtMeshTile *pdVar2;
  long lVar3;
  
  pdVar2 = *(dtMeshTile **)
            (*(long *)(this + 0x40) +
            (long)(int)(*(uint *)(this + 0x38) & param_1 * -0x72594cbd + param_2 * -0x27e9c7bf) * 8)
  ;
  if (pdVar2 != (dtMeshTile *)0x0) {
    iVar1 = 0;
    do {
      lVar3 = *(long *)(pdVar2 + 8);
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 8) == param_1)) && (*(int *)(lVar3 + 0xc) == param_2))
         && (iVar1 < param_4)) {
        param_3[iVar1] = pdVar2;
        iVar1 = iVar1 + 1;
      }
      pdVar2 = *(dtMeshTile **)(pdVar2 + 0x60);
    } while (pdVar2 != (dtMeshTile *)0x0);
    return iVar1;
  }
  return 0;
}


