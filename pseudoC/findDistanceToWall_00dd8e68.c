// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findDistanceToWall
// Entry Point: 00dd8e68
// Size: 1580 bytes
// Signature: undefined __thiscall findDistanceToWall(dtNavMeshQuery * this, uint param_1, float * param_2, float param_3, dtQueryFilter * param_4, float * param_5, float * param_6, float * param_7)


/* dtNavMeshQuery::findDistanceToWall(unsigned int, float const*, float, dtQueryFilter const*,
   float*, float*, float*) const */

uint __thiscall
dtNavMeshQuery::findDistanceToWall
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          float *param_5,float *param_6,float *param_7)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  dtNodeQueue *this_00;
  long **this_01;
  ulong uVar10;
  undefined8 *this_02;
  long *this_03;
  uint uVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  uint local_ec;
  float fStack_e4;
  dtPoly *local_e0;
  dtMeshTile *pdStack_d8;
  dtPoly *local_d0;
  dtMeshTile *pdStack_c8;
  uint *local_c0;
  dtMeshTile *local_b8;
  dtPoly *local_b0;
  float local_a8;
  dtMeshTile *local_a0;
  float local_98;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  local_ec = 0x80000008;
  if ((param_1 != 0) &&
     (uVar8 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar8 & 1) != 0)) {
    dtNodePool::clear();
    *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
    pfVar9 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1);
    *pfVar9 = *param_2;
    pfVar9[1] = param_2[1];
    fVar18 = param_2[2];
    pfVar9[3] = 0.0;
    pfVar9[4] = 0.0;
    pfVar9[5] = 2.0;
    pfVar9[6] = (float)param_1;
    pfVar9[2] = fVar18;
    this_00 = *(dtNodeQueue **)(this + 0x58);
    iVar7 = *(int *)(this_00 + 0xc);
    *(int *)(this_00 + 0xc) = iVar7 + 1;
    dtNodeQueue::bubbleUp(this_00,iVar7,(dtNode *)pfVar9);
    this_01 = *(long ***)(this + 0x58);
    fVar18 = param_3 * param_3;
    iVar7 = *(int *)((long)this_01 + 0xc);
    if (iVar7 == 0) {
      local_ec = 0x40000000;
    }
    else {
      local_ec = 0x40000000;
      do {
        pfVar9 = (float *)**this_01;
        *(int *)((long)this_01 + 0xc) = iVar7 + -1;
        dtNodeQueue::trickleDown((dtNodeQueue *)this_01,0,(dtNode *)(*this_01)[iVar7 + -1]);
        fVar21 = pfVar9[6];
        local_c0 = (uint *)0x0;
        local_b8 = (dtMeshTile *)0x0;
        pfVar9[5] = (float)((uint)pfVar9[5] & 0x3fffffff | 0x80000000);
        dtNavMesh::getTileAndPolyByRefUnsafe
                  (*(dtNavMesh **)this,(uint)fVar21,&local_b8,(dtPoly **)&local_c0);
        local_d0 = (dtPoly *)0x0;
        pdStack_c8 = (dtMeshTile *)0x0;
        if (((uint)pfVar9[5] & 0x3fffffff) == 0) {
          uVar15 = 0;
          bVar2 = *(byte *)((long)local_c0 + 0x1e);
        }
        else {
          uVar15 = *(uint *)(**(long **)(this + 0x50) +
                             (ulong)(((uint)pfVar9[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
          if (uVar15 != 0) {
            dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar15,&pdStack_c8,&local_d0);
          }
          bVar2 = *(byte *)((long)local_c0 + 0x1e);
        }
        if (bVar2 != 0) {
          uVar14 = bVar2 - 1;
          uVar8 = 0;
          do {
            uVar3 = *(ushort *)((long)local_c0 + (long)(int)uVar14 * 2 + 0x10);
            if ((short)uVar3 < 0) {
              uVar6 = *local_c0;
              if (uVar6 != 0xffffffff) {
                lVar13 = *(long *)(local_b8 + 0x20);
                do {
                  if (uVar14 == *(byte *)(lVar13 + (ulong)uVar6 * 0xc + 8)) {
                    puVar16 = (uint *)(lVar13 + (ulong)uVar6 * 0xc);
                    uVar6 = *puVar16;
                    if (uVar6 != 0) {
                      local_a0 = (dtMeshTile *)0x0;
                      local_b0 = (dtPoly *)0x0;
                      dtNavMesh::getTileAndPolyByRefUnsafe
                                (*(dtNavMesh **)this,uVar6,&local_a0,&local_b0);
                      uVar10 = (***(code ***)param_4)(param_4,*puVar16,local_a0,local_b0);
                      if ((uVar10 & 1) != 0) goto LAB_00dd901c;
                    }
                    break;
                  }
                  uVar6 = *(uint *)(lVar13 + (ulong)uVar6 * 0xc + 4);
                } while (uVar6 != 0xffffffff);
              }
LAB_00dd9108:
              pfVar12 = (float *)(*(long *)(local_b8 + 0x18) +
                                 (ulong)*(ushort *)((long)local_c0 + (long)(int)uVar14 * 2 + 4) *
                                 0xc);
              pfVar17 = (float *)(*(long *)(local_b8 + 0x18) +
                                 (ulong)*(ushort *)((long)local_c0 + uVar8 * 2 + 4) * 0xc);
              fVar19 = (float)dtDistancePtSegSqr2D(param_2,pfVar12,pfVar17,(float *)&local_a0);
              if (fVar19 <= fVar18) {
                fVar18 = (float)NEON_fmadd(*pfVar17 - *pfVar12,local_a0._0_4_,*pfVar12);
                *param_6 = fVar18;
                fVar18 = (float)NEON_fmadd(pfVar17[1] - pfVar12[1],local_a0._0_4_,pfVar12[1]);
                param_6[1] = fVar18;
                fVar18 = (float)NEON_fmadd(pfVar17[2] - pfVar12[2],local_a0._0_4_,pfVar12[2]);
                param_6[2] = fVar18;
                fVar18 = fVar19;
              }
            }
            else {
              if (uVar3 == 0) goto LAB_00dd9108;
              uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_b8);
              uVar10 = (***(code ***)param_4)
                                 (param_4,uVar6 | uVar3 - 1,local_b8,
                                  *(long *)(local_b8 + 0x10) + (ulong)(uVar3 - 1) * 0x20);
              if ((uVar10 & 1) == 0) goto LAB_00dd9108;
            }
LAB_00dd901c:
            uVar10 = uVar8 + 1;
            uVar14 = (uint)uVar8;
            uVar8 = uVar10;
          } while (uVar10 < *(byte *)((long)local_c0 + 0x1e));
        }
        uVar14 = *local_c0;
        if (uVar14 != 0xffffffff) {
          lVar13 = *(long *)(local_b8 + 0x20);
          do {
            uVar6 = *(uint *)(lVar13 + (ulong)uVar14 * 0xc);
            if (uVar6 != 0 && uVar6 != uVar15) {
              local_e0 = (dtPoly *)0x0;
              pdStack_d8 = (dtMeshTile *)0x0;
              dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar6,&pdStack_d8,&local_e0);
              if (((byte)local_e0[0x1f] & 0xc0) != 0x40) {
                bVar2 = *(byte *)((long)local_c0 + 0x1e);
                uVar11 = (uint)*(byte *)(lVar13 + (ulong)uVar14 * 0xc + 8);
                uVar1 = uVar11 + 1;
                uVar4 = 0;
                if (bVar2 != 0) {
                  uVar4 = uVar1 / bVar2;
                }
                fVar19 = (float)dtDistancePtSegSqr2D
                                          (param_2,(float *)(*(long *)(local_b8 + 0x18) +
                                                            (ulong)*(ushort *)
                                                                    ((long)local_c0 +
                                                                    (ulong)uVar11 * 2 + 4) * 0xc),
                                           (float *)(*(long *)(local_b8 + 0x18) +
                                                    (ulong)*(ushort *)
                                                            ((long)local_c0 +
                                                            (ulong)(uVar1 - uVar4 * bVar2) * 2 + 4)
                                                    * 0xc),&fStack_e4);
                if ((fVar19 <= fVar18) &&
                   (uVar8 = (***(code ***)param_4)(param_4,uVar6,pdStack_d8,local_e0),
                   (uVar8 & 1) != 0)) {
                  this_02 = (undefined8 *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),uVar6);
                  if (this_02 == (undefined8 *)0x0) {
                    local_ec = local_ec | 0x20;
                  }
                  else if (-1 < (int)*(uint *)((long)this_02 + 0x14)) {
                    if ((*(uint *)((long)this_02 + 0x14) >> 0x1e == 0) &&
                       (iVar7 = getPortalPoints((dtNavMeshQuery *)this_02,(uint)fVar21,
                                                (dtPoly *)local_c0,local_b8,uVar6,local_e0,
                                                pdStack_d8,(float *)&local_a0,(float *)&local_b0),
                       -1 < iVar7)) {
                      *this_02 = CONCAT44(((float)((ulong)local_a0 >> 0x20) +
                                          (float)((ulong)local_b0 >> 0x20)) * 0.5,
                                          (SUB84(local_a0,0) + SUB84(local_b0,0)) * 0.5);
                      *(float *)(this_02 + 1) = (local_98 + local_a8) * 0.5;
                    }
                    fVar22 = pfVar9[4];
                    fVar19 = *(float *)((long)this_02 + 4) - pfVar9[1];
                    uVar20 = NEON_fmadd(*(float *)this_02 - *pfVar9,*(float *)this_02 - *pfVar9,
                                        fVar19 * fVar19);
                    fVar19 = (float)NEON_fmadd(*(float *)(this_02 + 1) - pfVar9[2],
                                               *(float *)(this_02 + 1) - pfVar9[2],uVar20);
                    fVar19 = (float)dtSqrt(fVar19);
                    uVar1 = *(uint *)((long)this_02 + 0x14);
                    if (((uVar1 >> 0x1e & 1) == 0) || (fVar22 + fVar19 < *(float *)(this_02 + 2))) {
                      *(uint *)((long)this_02 + 0x14) = uVar1 & 0x7fffffff;
                      *(uint *)(this_02 + 3) = uVar6;
                      iVar7 = **(int **)(this + 0x50);
                      *(float *)(this_02 + 2) = fVar22 + fVar19;
                      uVar6 = ((uint)((int)pfVar9 - iVar7) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      *(uint *)((long)this_02 + 0x14) = uVar6 | uVar1 & 0x40000000;
                      if ((uVar1 & 0x40000000) == 0) {
                        *(uint *)((long)this_02 + 0x14) = uVar6 | 0x40000000;
                        this_03 = *(long **)(this + 0x58);
                        uVar8 = (ulong)*(uint *)((long)this_03 + 0xc);
                        *(uint *)((long)this_03 + 0xc) = *(uint *)((long)this_03 + 0xc) + 1;
LAB_00dd93c4:
                        dtNodeQueue::bubbleUp((dtNodeQueue *)this_03,(int)uVar8,(dtNode *)this_02);
                      }
                      else {
                        this_03 = *(long **)(this + 0x58);
                        if (0 < (int)*(uint *)((long)this_03 + 0xc)) {
                          uVar8 = 0;
                          do {
                            if (*(undefined8 **)(*this_03 + uVar8 * 8) == this_02)
                            goto LAB_00dd93c4;
                            uVar8 = uVar8 + 1;
                          } while (*(uint *)((long)this_03 + 0xc) != uVar8);
                        }
                      }
                    }
                  }
                }
              }
              lVar13 = *(long *)(local_b8 + 0x20);
            }
            uVar14 = *(uint *)(lVar13 + (ulong)uVar14 * 0xc + 4);
          } while (uVar14 != 0xffffffff);
        }
        this_01 = *(long ***)(this + 0x58);
        iVar7 = *(int *)((long)this_01 + 0xc);
      } while (iVar7 != 0);
    }
    fVar21 = *param_2 - *param_6;
    *param_7 = fVar21;
    fVar19 = param_2[1] - param_6[1];
    param_7[1] = fVar19;
    fVar22 = param_2[2] - param_6[2];
    param_7[2] = fVar22;
    fVar21 = (float)dtSqrt(fVar21 * fVar21 + fVar19 * fVar19 + fVar22 * fVar22);
    fVar21 = 1.0 / fVar21;
    *(ulong *)param_7 =
         CONCAT44((float)((ulong)*(undefined8 *)param_7 >> 0x20) * fVar21,
                  (float)*(undefined8 *)param_7 * fVar21);
    param_7[2] = fVar21 * param_7[2];
    *param_5 = SQRT(fVar18);
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


