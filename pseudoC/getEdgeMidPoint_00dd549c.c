// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEdgeMidPoint
// Entry Point: 00dd549c
// Size: 164 bytes
// Signature: undefined __thiscall getEdgeMidPoint(dtNavMeshQuery * this, uint param_1, dtPoly * param_2, dtMeshTile * param_3, uint param_4, dtPoly * param_5, dtMeshTile * param_6, float * param_7)


/* dtNavMeshQuery::getEdgeMidPoint(unsigned int, dtPoly const*, dtMeshTile const*, unsigned int,
   dtPoly const*, dtMeshTile const*, float*) const */

void __thiscall
dtNavMeshQuery::getEdgeMidPoint
          (dtNavMeshQuery *this,uint param_1,dtPoly *param_2,dtMeshTile *param_3,uint param_4,
          dtPoly *param_5,dtMeshTile *param_6,float *param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar1 = getPortalPoints(this,param_1,param_2,param_3,param_4,param_5,param_6,(float *)&local_38,
                          (float *)&local_48);
  if (iVar1 < 0) {
    uVar2 = 0x80000008;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    uVar2 = 0x40000000;
    *(ulong *)param_7 =
         CONCAT44(((float)((ulong)local_38 >> 0x20) + (float)((ulong)local_48 >> 0x20)) * 0.5,
                  ((float)local_38 + (float)local_48) * 0.5);
    param_7[2] = (local_30 + local_40) * 0.5;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


