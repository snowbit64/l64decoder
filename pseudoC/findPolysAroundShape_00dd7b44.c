// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPolysAroundShape
// Entry Point: 00dd7b44
// Size: 2052 bytes
// Signature: undefined __thiscall findPolysAroundShape(dtNavMeshQuery * this, uint param_1, float * param_2, int param_3, dtQueryFilter * param_4, uint * param_5, uint * param_6, float * param_7, int * param_8, int param_9)


/* dtNavMeshQuery::findPolysAroundShape(unsigned int, float const*, int, dtQueryFilter const*,
   unsigned int*, unsigned int*, float*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPolysAroundShape
          (dtNavMeshQuery *this,uint param_1,float *param_2,int param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,float *param_7,int *param_8,int param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  dtNodeQueue *this_00;
  long **this_01;
  float *pfVar9;
  long *this_02;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  float *pfVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  int local_fc;
  uint local_ec;
  int iStack_e8;
  int iStack_e4;
  float local_e0;
  float local_dc;
  uint *local_d8;
  dtMeshTile *local_d0;
  dtPoly *local_c8;
  dtMeshTile *local_c0;
  uint *local_b8;
  dtMeshTile *local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  local_ec = 0x80000008;
  *param_8 = 0;
  if (param_1 == 0) goto LAB_00dd8308;
  uVar16 = (ulong)(uint)param_3;
  uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1);
  if ((uVar7 & 1) == 0) goto LAB_00dd8308;
  dtNodePool::clear();
  *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
  if (param_3 < 1) {
    fVar19 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
  }
  else {
    if (param_3 == 1) {
      fVar19 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      uVar11 = 0;
    }
    else {
      uVar11 = uVar16 & 0xfffffffe;
      fVar19 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      puVar8 = (undefined8 *)(param_2 + 3);
      uVar7 = uVar11;
      do {
        puVar2 = (undefined8 *)((long)puVar8 + -0xc);
        uVar7 = uVar7 - 2;
        pfVar18 = (float *)((long)puVar8 + -4);
        uVar26 = *puVar8;
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 3;
        fVar19 = fVar19 + (float)*puVar2 + (float)uVar26;
        fVar21 = fVar21 + (float)((ulong)*puVar2 >> 0x20) + (float)((ulong)uVar26 >> 0x20);
        fVar22 = fVar22 + *pfVar18 + *(float *)puVar1;
      } while (uVar7 != 0);
      if (uVar11 == uVar16) goto LAB_00dd7c74;
    }
    lVar10 = uVar16 - uVar11;
    pfVar18 = param_2 + uVar11 * 3 + 2;
    do {
      lVar10 = lVar10 + -1;
      fVar19 = fVar19 + (float)*(undefined8 *)(pfVar18 + -2);
      fVar21 = fVar21 + (float)((ulong)*(undefined8 *)(pfVar18 + -2) >> 0x20);
      fVar22 = fVar22 + *pfVar18;
      pfVar18 = pfVar18 + 3;
    } while (lVar10 != 0);
  }
LAB_00dd7c74:
  fVar24 = 1.0 / (float)param_3;
  puVar8 = (undefined8 *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1);
  *puVar8 = CONCAT44(fVar21 * fVar24,fVar19 * fVar24);
  *(float *)(puVar8 + 1) = fVar24 * fVar22;
  *(undefined4 *)((long)puVar8 + 0xc) = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x40000000;
  *(uint *)(puVar8 + 3) = param_1;
  this_00 = *(dtNodeQueue **)(this + 0x58);
  iVar3 = *(int *)(this_00 + 0xc);
  *(int *)(this_00 + 0xc) = iVar3 + 1;
  dtNodeQueue::bubbleUp(this_00,iVar3,(dtNode *)puVar8);
  if (param_9 < 1) {
    local_fc = 0;
    local_ec = 0x40000010;
    this_01 = *(long ***)(this + 0x58);
    iVar3 = *(int *)((long)this_01 + 0xc);
  }
  else {
    if (param_5 != (uint *)0x0) {
      *param_5 = *(uint *)(puVar8 + 3);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    if (param_7 == (float *)0x0) {
      this_01 = *(long ***)(this + 0x58);
      iVar3 = *(int *)((long)this_01 + 0xc);
    }
    else {
      *param_7 = 0.0;
      this_01 = *(long ***)(this + 0x58);
      iVar3 = *(int *)((long)this_01 + 0xc);
    }
    local_fc = 1;
    local_ec = 0x40000000;
  }
  while (iVar3 != 0) {
    pfVar18 = (float *)**this_01;
    *(int *)((long)this_01 + 0xc) = iVar3 + -1;
    dtNodeQueue::trickleDown((dtNodeQueue *)this_01,0,(dtNode *)(*this_01)[iVar3 + -1]);
    fVar19 = pfVar18[6];
    local_b8 = (uint *)0x0;
    local_b0 = (dtMeshTile *)0x0;
    pfVar18[5] = (float)((uint)pfVar18[5] & 0x3fffffff | 0x80000000);
    dtNavMesh::getTileAndPolyByRefUnsafe
              (*(dtNavMesh **)this,(uint)fVar19,&local_b0,(dtPoly **)&local_b8);
    local_c0 = (dtMeshTile *)0x0;
    local_c8 = (dtPoly *)0x0;
    if (((uint)pfVar18[5] & 0x3fffffff) == 0) {
      fVar21 = 0.0;
      uVar17 = *local_b8;
    }
    else {
      fVar21 = *(float *)(**(long **)(this + 0x50) +
                          (ulong)(((uint)pfVar18[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
      if (fVar21 != 0.0) {
        dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,(uint)fVar21,&local_c0,&local_c8);
      }
      uVar17 = *local_b8;
    }
    if (uVar17 != 0xffffffff) {
      lVar10 = *(long *)(local_b0 + 0x20);
LAB_00dd7e6c:
      fVar22 = *(float *)(lVar10 + (ulong)uVar17 * 0xc);
      if (fVar22 != 0.0 && fVar22 != fVar21) {
        local_d8 = (uint *)0x0;
        local_d0 = (dtMeshTile *)0x0;
        dtNavMesh::getTileAndPolyByRefUnsafe
                  (*(dtNavMesh **)this,(uint)fVar22,&local_d0,(dtPoly **)&local_d8);
        uVar7 = (***(code ***)param_4)(param_4,fVar22,local_d0,local_d8);
        if ((uVar7 & 1) != 0) {
          uVar14 = *local_b8;
          if (uVar14 != 0xffffffff) {
            lVar10 = *(long *)(local_b0 + 0x20);
            uVar4 = uVar14;
            do {
              uVar7 = (ulong)uVar4;
              if (*(float *)(lVar10 + uVar7 * 0xc) == fVar22) {
                if ((*(byte *)((long)local_b8 + 0x1f) & 0xc0) == 0x40) goto LAB_00dd7f0c;
                if ((*(byte *)((long)local_d8 + 0x1f) & 0xc0) == 0x40) {
                  uVar14 = *local_d8;
                  if (uVar14 != 0xffffffff) {
                    lVar10 = *(long *)(local_d0 + 0x20);
                    goto LAB_00dd7f54;
                  }
                }
                else {
                  lVar12 = lVar10 + uVar7 * 0xc;
                  bVar5 = *(byte *)((long)local_b8 + 0x1e);
                  uVar15 = (uint)*(byte *)(lVar12 + 8);
                  uVar14 = uVar15 + 1;
                  uVar4 = 0;
                  if (bVar5 != 0) {
                    uVar4 = uVar14 / bVar5;
                  }
                  pfVar9 = (float *)(*(long *)(local_b0 + 0x18) +
                                    (ulong)*(ushort *)((long)local_b8 + (ulong)uVar15 * 2 + 4) * 0xc
                                    );
                  local_9c = *pfVar9;
                  local_98 = pfVar9[1];
                  pfVar13 = (float *)(*(long *)(local_b0 + 0x18) +
                                     (ulong)*(ushort *)
                                             ((long)local_b8 +
                                             (ulong)(uVar14 - uVar4 * bVar5) * 2 + 4) * 0xc);
                  local_94 = pfVar9[2];
                  local_a8 = *pfVar13;
                  local_a4 = pfVar13[1];
                  local_a0 = pfVar13[2];
                  if (*(char *)(lVar12 + 9) != -1) {
                    lVar10 = lVar10 + uVar7 * 0xc;
                    bVar5 = *(byte *)(lVar10 + 0xb);
                    uVar14 = (uint)*(byte *)(lVar10 + 10);
                    if ((uVar14 != 0) || (bVar5 != 0xff)) {
                      fVar24 = (float)(ulong)uVar14 * 0.003921569;
                      local_9c = (float)NEON_fmadd(*pfVar13 - *pfVar9,fVar24,*pfVar9);
                      local_98 = (float)NEON_fmadd(pfVar13[1] - pfVar9[1],fVar24,pfVar9[1]);
                      local_94 = (float)NEON_fmadd(pfVar13[2] - pfVar9[2],fVar24,pfVar9[2]);
                      fVar24 = (float)(ulong)bVar5 * 0.003921569;
                      local_a8 = (float)NEON_fmadd(*pfVar13 - *pfVar9,fVar24,*pfVar9);
                      local_a4 = (float)NEON_fmadd(pfVar13[1] - pfVar9[1],fVar24,pfVar9[1]);
                      local_a0 = (float)NEON_fmadd(pfVar13[2] - pfVar9[2],fVar24,pfVar9[2]);
                    }
                  }
                }
                break;
              }
              uVar4 = *(uint *)(lVar10 + uVar7 * 0xc + 4);
            } while (uVar4 != 0xffffffff);
          }
          goto LAB_00dd80f8;
        }
        goto LAB_00dd7e50;
      }
      goto LAB_00dd7e58;
    }
LAB_00dd7d74:
    this_01 = *(long ***)(this + 0x58);
    iVar3 = *(int *)((long)this_01 + 0xc);
  }
  *param_8 = local_fc;
LAB_00dd8308:
  if (*(long *)(lVar6 + 0x28) == local_90) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (uVar14 = *(uint *)(lVar10 + (ulong)uVar14 * 0xc + 4), uVar14 != 0xffffffff) {
LAB_00dd7f0c:
    if (*(float *)(lVar10 + (ulong)uVar14 * 0xc) == fVar22) {
      lVar10 = (long)local_b8 + (ulong)*(byte *)(lVar10 + (ulong)uVar14 * 0xc + 8) * 2;
      lVar12 = *(long *)(local_b0 + 0x18);
      goto LAB_00dd80bc;
    }
  }
LAB_00dd80f8:
  uVar7 = dtIntersectSegmentPoly2D
                    (&local_9c,&local_a8,param_2,param_3,&local_dc,&local_e0,&iStack_e4,&iStack_e8);
  if ((((uVar7 & 1) != 0) && (local_dc <= 1.0)) && (0.0 <= local_e0)) {
    pfVar9 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),(uint)fVar22);
    if (pfVar9 == (float *)0x0) {
      local_ec = local_ec | 0x20;
    }
    else if (-1 < (int)pfVar9[5]) {
      if ((uint)pfVar9[5] >> 0x1e == 0) {
        fVar24 = (float)NEON_fmadd(local_a8 - local_9c,0x3f000000,local_9c);
        *pfVar9 = fVar24;
        fVar23 = (float)NEON_fmadd(local_a4 - local_98,0x3f000000,local_98);
        pfVar9[1] = fVar23;
        fVar25 = (float)NEON_fmadd(local_a0 - local_94,0x3f000000,local_94);
        pfVar9[2] = fVar25;
      }
      else {
        fVar24 = *pfVar9;
        fVar23 = pfVar9[1];
        fVar25 = pfVar9[2];
      }
      fVar27 = pfVar18[4];
      uVar20 = NEON_fmadd(fVar24 - *pfVar18,fVar24 - *pfVar18,
                          (fVar23 - pfVar18[1]) * (fVar23 - pfVar18[1]));
      fVar24 = (float)NEON_fmadd(fVar25 - pfVar18[2],fVar25 - pfVar18[2],uVar20);
      fVar24 = (float)dtSqrt(fVar24);
      fVar27 = fVar27 + fVar24;
      fVar24 = pfVar9[5];
      if ((((uint)fVar24 >> 0x1e & 1) == 0) || (fVar27 < pfVar9[4])) {
        pfVar9[5] = (float)((uint)fVar24 & 0x7fffffff);
        pfVar9[6] = fVar22;
        iVar3 = **(int **)(this + 0x50);
        pfVar9[4] = fVar27;
        fVar23 = (float)(((uint)((int)pfVar18 - iVar3) >> 2) * -0x49249249 + 1 & 0x3fffffff |
                        (uint)fVar24 & 0x40000000);
        pfVar9[5] = fVar23;
        if (((uint)fVar24 & 0x40000000) == 0) {
          if (local_fc < param_9) {
            if (param_5 != (uint *)0x0) {
              param_5[local_fc] = (uint)fVar22;
            }
            if (param_6 != (uint *)0x0) {
              lVar10 = 0;
              if (((uint)pfVar9[5] & 0x3fffffff) != 0) {
                lVar10 = **(long **)(this + 0x50) +
                         (ulong)(((uint)pfVar9[5] & 0x3fffffff) - 1) * 0x1c;
              }
              param_6[local_fc] = *(uint *)(lVar10 + 0x18);
            }
            if (param_7 != (float *)0x0) {
              param_7[local_fc] = fVar27;
            }
            local_fc = local_fc + 1;
            fVar23 = pfVar9[5];
          }
          else {
            local_ec = local_ec | 0x10;
          }
          pfVar9[5] = (float)((uint)fVar23 & 0x3fffffff | 0x40000000);
          this_02 = *(long **)(this + 0x58);
          uVar7 = (ulong)*(uint *)((long)this_02 + 0xc);
          *(uint *)((long)this_02 + 0xc) = *(uint *)((long)this_02 + 0xc) + 1;
LAB_00dd82f0:
          dtNodeQueue::bubbleUp((dtNodeQueue *)this_02,(int)uVar7,(dtNode *)pfVar9);
        }
        else {
          this_02 = *(long **)(this + 0x58);
          if (0 < (int)*(uint *)((long)this_02 + 0xc)) {
            uVar7 = 0;
            do {
              if (*(float **)(*this_02 + uVar7 * 8) == pfVar9) goto LAB_00dd82f0;
              uVar7 = uVar7 + 1;
            } while (*(uint *)((long)this_02 + 0xc) != uVar7);
          }
        }
      }
    }
  }
LAB_00dd7e50:
  lVar10 = *(long *)(local_b0 + 0x20);
LAB_00dd7e58:
  uVar17 = *(uint *)(lVar10 + (ulong)uVar17 * 0xc + 4);
  if (uVar17 == 0xffffffff) goto LAB_00dd7d74;
  goto LAB_00dd7e6c;
LAB_00dd7f54:
  if (*(float *)(lVar10 + (ulong)uVar14 * 0xc) != fVar19) goto code_r0x00dd7f68;
  lVar12 = *(long *)(local_d0 + 0x18);
  lVar10 = (long)local_d8 + (ulong)*(byte *)(lVar10 + (ulong)uVar14 * 0xc + 8) * 2;
LAB_00dd80bc:
  pfVar9 = (float *)(lVar12 + (ulong)*(ushort *)(lVar10 + 4) * 0xc);
  local_9c = *pfVar9;
  local_98 = pfVar9[1];
  local_94 = pfVar9[2];
  local_a8 = *pfVar9;
  local_a4 = pfVar9[1];
  local_a0 = pfVar9[2];
  goto LAB_00dd80f8;
code_r0x00dd7f68:
  uVar14 = *(uint *)(lVar10 + (ulong)uVar14 * 0xc + 4);
  if (uVar14 == 0xffffffff) goto LAB_00dd80f8;
  goto LAB_00dd7f54;
}


