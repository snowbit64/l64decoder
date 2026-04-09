// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValidPolyRef
// Entry Point: 00dd9494
// Size: 152 bytes
// Signature: undefined __thiscall isValidPolyRef(dtNavMeshQuery * this, uint param_1, dtQueryFilter * param_2)


/* dtNavMeshQuery::isValidPolyRef(unsigned int, dtQueryFilter const*) const */

uint __thiscall
dtNavMeshQuery::isValidPolyRef(dtNavMeshQuery *this,uint param_1,dtQueryFilter *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  dtPoly *local_48;
  dtMeshTile *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (dtPoly *)0x0;
  local_40 = (dtMeshTile *)0x0;
  iVar2 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_40,&local_48);
  if (iVar2 < 0) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00dd9528;
  }
  else {
    uVar3 = (***(code ***)param_2)(param_2,param_1,local_40,local_48);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00dd9528:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar3 & 1;
}


