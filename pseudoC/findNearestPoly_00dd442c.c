// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNearestPoly
// Entry Point: 00dd442c
// Size: 488 bytes
// Signature: undefined __thiscall findNearestPoly(dtNavMeshQuery * this, float * param_1, float * param_2, dtQueryFilter * param_3, uint * param_4, float * param_5)


/* dtNavMeshQuery::findNearestPoly(float const*, float const*, dtQueryFilter const*, unsigned int*,
   float*) const */

void __thiscall
dtNavMeshQuery::findNearestPoly
          (dtNavMeshQuery *this,float *param_1,float *param_2,dtQueryFilter *param_3,uint *param_4,
          float *param_5)

{
  long lVar1;
  int iVar2;
  dtNavMeshQuery *pdVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  uint local_29c;
  dtPoly *local_298;
  dtMeshTile *local_290;
  float local_284;
  float local_280;
  float fStack_27c;
  uint local_278 [128];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  local_29c = 0;
  iVar2 = queryPolygons(this,param_1,param_2,param_3,local_278,(int *)&local_29c,0x80);
  if (iVar2 < 0) {
    uVar4 = 0x80000008;
  }
  else {
    uVar6 = (ulong)local_29c;
    if ((int)local_29c < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (param_5 == (float *)0x0) {
        puVar5 = local_278;
        fVar12 = 3.402823e+38;
        uVar8 = uVar7;
        do {
          uVar7 = *puVar5;
          local_298 = (dtPoly *)0x0;
          local_290 = (dtMeshTile *)0x0;
          pdVar3 = (dtNavMeshQuery *)
                   dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar7,&local_290,&local_298);
          fVar9 = extraout_s0_00;
          if ((-1 < (int)pdVar3) && (fVar9 = extraout_s0_00, local_290 != (dtMeshTile *)0x0)) {
            closestPointOnPolyInTile(pdVar3,local_290,local_298,param_1,&local_284);
            fVar9 = local_284;
          }
          puVar5 = puVar5 + 1;
          uVar10 = NEON_fmadd(fVar9 - *param_1,fVar9 - *param_1,
                              (local_280 - param_1[1]) * (local_280 - param_1[1]));
          fVar9 = (float)NEON_fmadd(fStack_27c - param_1[2],fStack_27c - param_1[2],uVar10);
          if (fVar12 <= fVar9) {
            uVar7 = uVar8;
            fVar9 = fVar12;
          }
          fVar12 = fVar9;
          uVar6 = uVar6 - 1;
          uVar8 = uVar7;
        } while (uVar6 != 0);
      }
      else {
        puVar5 = local_278;
        fVar12 = 3.402823e+38;
        do {
          uVar8 = *puVar5;
          local_298 = (dtPoly *)0x0;
          local_290 = (dtMeshTile *)0x0;
          pdVar3 = (dtNavMeshQuery *)
                   dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar8,&local_290,&local_298);
          fVar9 = extraout_s0;
          if ((-1 < (int)pdVar3) && (fVar9 = extraout_s0, local_290 != (dtMeshTile *)0x0)) {
            closestPointOnPolyInTile(pdVar3,local_290,local_298,param_1,&local_284);
            fVar9 = local_284;
          }
          uVar10 = NEON_fmadd(fVar9 - *param_1,fVar9 - *param_1,
                              (local_280 - param_1[1]) * (local_280 - param_1[1]));
          fVar11 = (float)NEON_fmadd(fStack_27c - param_1[2],fStack_27c - param_1[2],uVar10);
          if (fVar11 < fVar12) {
            *param_5 = fVar9;
            param_5[1] = local_280;
            param_5[2] = fStack_27c;
            uVar7 = uVar8;
            fVar12 = fVar11;
          }
          puVar5 = puVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar4 = 0x40000000;
    *param_4 = uVar7;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


