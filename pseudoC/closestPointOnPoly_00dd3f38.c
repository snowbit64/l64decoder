// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointOnPoly
// Entry Point: 00dd3f38
// Size: 144 bytes
// Signature: undefined __thiscall closestPointOnPoly(dtNavMeshQuery * this, uint param_1, float * param_2, float * param_3)


/* dtNavMeshQuery::closestPointOnPoly(unsigned int, float const*, float*) const */

undefined4 __thiscall
dtNavMeshQuery::closestPointOnPoly(dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3)

{
  long lVar1;
  dtNavMeshQuery *this_00;
  undefined4 uVar2;
  dtPoly *local_48;
  dtMeshTile *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0x80000008;
  local_48 = (dtPoly *)0x0;
  local_40 = (dtMeshTile *)0x0;
  this_00 = (dtNavMeshQuery *)
            dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_40,&local_48);
  if ((-1 < (int)this_00) && (local_40 != (dtMeshTile *)0x0)) {
    closestPointOnPolyInTile(this_00,local_40,local_48,param_2,param_3);
    uVar2 = 0x40000000;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


