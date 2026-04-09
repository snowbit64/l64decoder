// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEdgeMidPoint
// Entry Point: 00dd6ec4
// Size: 248 bytes
// Signature: undefined __thiscall getEdgeMidPoint(dtNavMeshQuery * this, uint param_1, uint param_2, float * param_3)


/* dtNavMeshQuery::getEdgeMidPoint(unsigned int, unsigned int, float*) const */

undefined4 __thiscall
dtNavMeshQuery::getEdgeMidPoint(dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3)

{
  long lVar1;
  int iVar2;
  dtNavMeshQuery *this_00;
  undefined4 uVar3;
  dtPoly *local_88;
  dtMeshTile *pdStack_80;
  dtPoly *local_78;
  dtMeshTile *pdStack_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = (dtPoly *)0x0;
  pdStack_70 = (dtMeshTile *)0x0;
  iVar2 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&pdStack_70,&local_78);
  uVar3 = 0x80000008;
  if (-1 < iVar2) {
    local_88 = (dtPoly *)0x0;
    pdStack_80 = (dtMeshTile *)0x0;
    this_00 = (dtNavMeshQuery *)
              dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_2,&pdStack_80,&local_88);
    if (-1 < (int)this_00) {
      iVar2 = getPortalPoints(this_00,param_1,local_78,pdStack_70,param_2,local_88,pdStack_80,
                              (float *)&local_58,(float *)&local_68);
      if (-1 < iVar2) {
        uVar3 = 0x40000000;
        *(ulong *)param_3 =
             CONCAT44(((float)((ulong)local_58 >> 0x20) + (float)((ulong)local_68 >> 0x20)) * 0.5,
                      ((float)local_58 + (float)local_68) * 0.5);
        param_3[2] = (local_50 + local_60) * 0.5;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


