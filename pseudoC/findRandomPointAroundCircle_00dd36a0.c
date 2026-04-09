// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRandomPointAroundCircle
// Entry Point: 00dd36a0
// Size: 1564 bytes
// Signature: undefined __thiscall findRandomPointAroundCircle(dtNavMeshQuery * this, uint param_1, float * param_2, float param_3, dtQueryFilter * param_4, _func_float * param_5, uint * param_6, float * param_7)


/* WARNING: Removing unreachable block (ram,0x00dd3c78) */
/* dtNavMeshQuery::findRandomPointAroundCircle(unsigned int, float const*, float, dtQueryFilter
   const*, float (*)(), unsigned int*, float*) const */

undefined4 __thiscall
dtNavMeshQuery::findRandomPointAroundCircle
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          _func_float *param_5,uint *param_6,float *param_7)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  dtNodeQueue *this_00;
  long **this_01;
  dtNavMeshQuery *this_02;
  long *this_03;
  int iVar6;
  uint *puVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  dtMeshTile *local_158;
  float local_14c;
  uint *local_148;
  float fStack_13c;
  dtPoly *local_138;
  dtMeshTile *local_130;
  dtPoly *local_128;
  dtMeshTile *pdStack_120;
  uint *local_118;
  dtPoly *local_110;
  dtMeshTile *local_108;
  dtMeshTile *local_100;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 auStack_c4 [13];
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  uVar18 = 0x80000008;
  if ((param_1 != 0) &&
     (uVar4 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar4 & 1) != 0)) {
    local_110 = (dtPoly *)0x0;
    local_108 = (dtMeshTile *)0x0;
    dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,param_1,&local_108,&local_110);
    uVar4 = (***(code ***)param_4)(param_4,param_1,local_108,local_110);
    if ((uVar4 & 1) != 0) {
      dtNodePool::clear();
      *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
      pfVar5 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1);
      *pfVar5 = *param_2;
      pfVar5[1] = param_2[1];
      fVar16 = param_2[2];
      pfVar5[3] = 0.0;
      pfVar5[4] = 0.0;
      pfVar5[5] = 2.0;
      pfVar5[6] = (float)param_1;
      pfVar5[2] = fVar16;
      this_00 = *(dtNodeQueue **)(this + 0x58);
      iVar6 = *(int *)(this_00 + 0xc);
      *(int *)(this_00 + 0xc) = iVar6 + 1;
      dtNodeQueue::bubbleUp(this_00,iVar6,(dtNode *)pfVar5);
      this_01 = *(long ***)(this + 0x58);
      uVar18 = 0x80000000;
      iVar6 = *(int *)((long)this_01 + 0xc);
      if (iVar6 != 0) {
        fVar16 = 0.0;
        local_158 = (dtMeshTile *)0x0;
        local_148 = (uint *)0x0;
        local_14c = 0.0;
        do {
          pfVar5 = (float *)**this_01;
          *(int *)((long)this_01 + 0xc) = iVar6 + -1;
          dtNodeQueue::trickleDown((dtNodeQueue *)this_01,0,(dtNode *)(*this_01)[iVar6 + -1]);
          fVar19 = pfVar5[6];
          local_100 = (dtMeshTile *)0x0;
          local_118 = (uint *)0x0;
          pfVar5[5] = (float)((uint)pfVar5[5] & 0x3fffffff | 0x80000000);
          dtNavMesh::getTileAndPolyByRefUnsafe
                    (*(dtNavMesh **)this,(uint)fVar19,&local_100,(dtPoly **)&local_118);
          if (*(byte *)((long)local_118 + 0x1f) < 0x40) {
            fVar23 = 0.0;
            if (2 < (ulong)*(byte *)((long)local_118 + 0x1e)) {
              fVar23 = 0.0;
              lVar10 = (ulong)*(byte *)((long)local_118 + 0x1e) - 2;
              lVar8 = *(long *)(local_100 + 0x18);
              pfVar12 = (float *)(lVar8 + (ulong)*(ushort *)(local_118 + 1) * 0xc);
              fVar17 = *pfVar12;
              fVar20 = pfVar12[2];
              puVar7 = local_118 + 2;
              uVar4 = (ulong)*(ushort *)((long)local_118 + 6);
              do {
                lVar10 = lVar10 + -1;
                uVar2 = *(ushort *)puVar7;
                pfVar12 = (float *)(lVar8 + uVar4 * 0xc);
                pfVar13 = (float *)(lVar8 + (ulong)uVar2 * 0xc);
                fVar21 = (float)NEON_fmadd(*pfVar13 - fVar17,pfVar12[2] - fVar20,
                                           (pfVar13[2] - fVar20) * -(*pfVar12 - fVar17));
                fVar23 = fVar23 + fVar21;
                puVar7 = (uint *)((long)puVar7 + 2);
                uVar4 = (ulong)uVar2;
              } while (lVar10 != 0);
            }
            fVar16 = fVar16 + fVar23;
            fVar17 = (*param_5)();
            if (fVar16 * fVar17 <= fVar23) {
              local_158 = local_100;
              local_14c = fVar19;
              local_148 = local_118;
            }
          }
          local_128 = (dtPoly *)0x0;
          pdStack_120 = (dtMeshTile *)0x0;
          if (((uint)pfVar5[5] & 0x3fffffff) == 0) {
            fVar23 = 0.0;
            uVar15 = *local_118;
          }
          else {
            fVar23 = *(float *)(**(long **)(this + 0x50) +
                                (ulong)(((uint)pfVar5[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
            if (fVar23 != 0.0) {
              dtNavMesh::getTileAndPolyByRefUnsafe
                        (*(dtNavMesh **)this,(uint)fVar23,&pdStack_120,&local_128);
            }
            uVar15 = *local_118;
          }
          if (uVar15 != 0xffffffff) {
            lVar10 = *(long *)(local_100 + 0x20);
            do {
              fVar17 = *(float *)(lVar10 + (ulong)uVar15 * 0xc);
              if (fVar17 != 0.0 && fVar17 != fVar23) {
                local_138 = (dtPoly *)0x0;
                local_130 = (dtMeshTile *)0x0;
                dtNavMesh::getTileAndPolyByRefUnsafe
                          (*(dtNavMesh **)this,(uint)fVar17,&local_130,&local_138);
                this_02 = (dtNavMeshQuery *)
                          (***(code ***)param_4)(param_4,fVar17,local_130,local_138);
                if (((ulong)this_02 & 1) != 0) {
                  getPortalPoints(this_02,(uint)fVar19,(dtPoly *)local_118,local_100,(uint)fVar17,
                                  local_138,local_130,&local_d8,&local_f0);
                  fVar20 = (float)dtDistancePtSegSqr2D(param_2,&local_d8,&local_f0,&fStack_13c);
                  if (((fVar20 <= param_3 * param_3) &&
                      (pfVar12 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),
                                                              (uint)fVar17), pfVar12 != (float *)0x0
                      )) && (-1 < (int)pfVar12[5])) {
                    if ((uint)pfVar12[5] >> 0x1e == 0) {
                      fVar20 = (float)NEON_fmadd(local_f0 - local_d8,0x3f000000,local_d8);
                      *pfVar12 = fVar20;
                      fVar21 = (float)NEON_fmadd(local_ec - local_d4,0x3f000000,local_d4);
                      pfVar12[1] = fVar21;
                      fVar22 = (float)NEON_fmadd(local_e8 - local_d0,0x3f000000,local_d0);
                      pfVar12[2] = fVar22;
                    }
                    else {
                      fVar20 = *pfVar12;
                      fVar21 = pfVar12[1];
                      fVar22 = pfVar12[2];
                    }
                    fVar24 = pfVar5[4];
                    uVar18 = NEON_fmadd(fVar20 - *pfVar5,fVar20 - *pfVar5,
                                        (fVar21 - pfVar5[1]) * (fVar21 - pfVar5[1]));
                    fVar20 = (float)NEON_fmadd(fVar22 - pfVar5[2],fVar22 - pfVar5[2],uVar18);
                    fVar21 = (float)dtSqrt(fVar20);
                    fVar20 = pfVar12[5];
                    if ((((uint)fVar20 >> 0x1e & 1) == 0) || (fVar24 + fVar21 < pfVar12[4])) {
                      pfVar12[5] = (float)((uint)fVar20 & 0x7fffffff);
                      pfVar12[6] = fVar17;
                      iVar6 = **(int **)(this + 0x50);
                      pfVar12[4] = fVar24 + fVar21;
                      uVar1 = ((uint)((int)pfVar5 - iVar6) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar12[5] = (float)(uVar1 | (uint)fVar20 & 0x40000000);
                      if (((uint)fVar20 & 0x40000000) == 0) {
                        pfVar12[5] = (float)(uVar1 | 0x40000000);
                        this_03 = *(long **)(this + 0x58);
                        uVar4 = (ulong)*(uint *)((long)this_03 + 0xc);
                        *(uint *)((long)this_03 + 0xc) = *(uint *)((long)this_03 + 0xc) + 1;
LAB_00dd3b70:
                        dtNodeQueue::bubbleUp((dtNodeQueue *)this_03,(int)uVar4,(dtNode *)pfVar12);
                      }
                      else {
                        this_03 = *(long **)(this + 0x58);
                        if (0 < (int)*(uint *)((long)this_03 + 0xc)) {
                          uVar4 = 0;
                          do {
                            if (*(float **)(*this_03 + uVar4 * 8) == pfVar12) goto LAB_00dd3b70;
                            uVar4 = uVar4 + 1;
                          } while (*(uint *)((long)this_03 + 0xc) != uVar4);
                        }
                      }
                    }
                  }
                }
                lVar10 = *(long *)(local_100 + 0x20);
              }
              uVar15 = *(uint *)(lVar10 + (ulong)uVar15 * 0xc + 4);
            } while (uVar15 != 0xffffffff);
          }
          this_01 = *(long ***)(this + 0x58);
          iVar6 = *(int *)((long)this_01 + 0xc);
        } while (iVar6 != 0);
        if (local_148 == (uint *)0x0) {
          uVar18 = 0x80000000;
        }
        else {
          lVar10 = *(long *)(local_158 + 0x18);
          pfVar5 = (float *)(lVar10 + (ulong)*(ushort *)(local_148 + 1) * 0xc);
          local_d8 = *pfVar5;
          local_d4 = pfVar5[1];
          local_d0 = pfVar5[2];
          if (1 < (ulong)*(byte *)((long)local_148 + 0x1e)) {
            lVar8 = (ulong)*(byte *)((long)local_148 + 0x1e) - 1;
            puVar9 = (ushort *)((long)local_148 + 6);
            puVar11 = auStack_c4;
            do {
              lVar8 = lVar8 + -1;
              puVar14 = (undefined4 *)(lVar10 + (ulong)*puVar9 * 0xc);
              puVar11[-2] = *puVar14;
              puVar11[-1] = puVar14[1];
              *puVar11 = puVar14[2];
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 3;
            } while (lVar8 != 0);
          }
          fVar16 = (*param_5)();
          fVar19 = (*param_5)();
          dtRandomPointInConvexPoly
                    (&local_d8,(uint)*(byte *)((long)local_148 + 0x1e),&local_f0,fVar16,fVar19,
                     (float *)&local_100);
          local_118 = (uint *)((ulong)local_118 & 0xffffffff00000000);
          getPolyHeight(this,(uint)local_14c,(float *)&local_100,(float *)&local_118);
          uVar18 = 0x40000000;
          *param_7 = local_100._0_4_;
          param_7[1] = local_118._0_4_;
          param_7[2] = local_f8;
          *param_6 = (uint)local_14c;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


