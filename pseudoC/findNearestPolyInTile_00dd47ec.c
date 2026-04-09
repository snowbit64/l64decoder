// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNearestPolyInTile
// Entry Point: 00dd47ec
// Size: 496 bytes
// Signature: undefined __thiscall findNearestPolyInTile(dtNavMeshQuery * this, dtMeshTile * param_1, float * param_2, float * param_3, dtQueryFilter * param_4, float * param_5)


/* dtNavMeshQuery::findNearestPolyInTile(dtMeshTile const*, float const*, float const*,
   dtQueryFilter const*, float*) const */

uint __thiscall
dtNavMeshQuery::findNearestPolyInTile
          (dtNavMeshQuery *this,dtMeshTile *param_1,float *param_2,float *param_3,
          dtQueryFilter *param_4,float *param_5)

{
  long lVar1;
  dtNavMeshQuery *this_00;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_2a4;
  float fStack_2a0;
  float local_29c;
  uint local_298 [128];
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_8c = *param_2 - *param_3;
  fStack_88 = param_2[1] - param_3[1];
  local_84 = param_2[2] - param_3[2];
  local_98 = *param_2 + *param_3;
  fStack_94 = param_2[1] + param_3[1];
  local_90 = param_2[2] + param_3[2];
  this_00 = (dtNavMeshQuery *)
            queryPolygonsInTile(this,param_1,&local_8c,&local_98,param_4,local_298,0x80);
  if ((int)this_00 < 1) {
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)this_00 & 0xffffffff;
    uVar2 = 0;
    if (param_5 == (float *)0x0) {
      fVar8 = 3.402823e+38;
      puVar4 = local_298;
      uVar3 = uVar2;
      do {
        uVar2 = *puVar4;
        this_00 = (dtNavMeshQuery *)
                  closestPointOnPolyInTile
                            (this_00,param_1,
                             (dtPoly *)
                             (*(long *)(param_1 + 0x10) +
                             (ulong)(uVar2 & ~(-1 << (ulong)(*(uint *)(*(long *)this + 0x60) & 0x1f)
                                              )) * 0x20),param_2,&local_2a4);
        uVar6 = NEON_fmadd(local_2a4 - *param_2,local_2a4 - *param_2,
                           (fStack_2a0 - param_2[1]) * (fStack_2a0 - param_2[1]));
        fVar7 = (float)NEON_fmadd(local_29c - param_2[2],local_29c - param_2[2],uVar6);
        if (fVar8 <= fVar7) {
          uVar2 = uVar3;
          fVar7 = fVar8;
        }
        fVar8 = fVar7;
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
        uVar3 = uVar2;
      } while (uVar5 != 0);
    }
    else {
      puVar4 = local_298;
      fVar8 = 3.402823e+38;
      do {
        uVar3 = *puVar4;
        this_00 = (dtNavMeshQuery *)
                  closestPointOnPolyInTile
                            (this_00,param_1,
                             (dtPoly *)
                             (*(long *)(param_1 + 0x10) +
                             (ulong)(uVar3 & ~(-1 << (ulong)(*(uint *)(*(long *)this + 0x60) & 0x1f)
                                              )) * 0x20),param_2,&local_2a4);
        uVar6 = NEON_fmadd(local_2a4 - *param_2,local_2a4 - *param_2,
                           (fStack_2a0 - param_2[1]) * (fStack_2a0 - param_2[1]));
        fVar7 = (float)NEON_fmadd(local_29c - param_2[2],local_29c - param_2[2],uVar6);
        if (fVar7 < fVar8) {
          *param_5 = local_2a4;
          param_5[1] = fStack_2a0;
          param_5[2] = local_29c;
          uVar2 = uVar3;
          fVar8 = fVar7;
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


