// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPolysAroundCircle
// Entry Point: 00dd742c
// Size: 1816 bytes
// Signature: undefined __thiscall findPolysAroundCircle(dtNavMeshQuery * this, uint param_1, float * param_2, float param_3, dtQueryFilter * param_4, uint * param_5, uint * param_6, float * param_7, int * param_8, int param_9)


/* dtNavMeshQuery::findPolysAroundCircle(unsigned int, float const*, float, dtQueryFilter const*,
   unsigned int*, unsigned int*, float*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPolysAroundCircle
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,float *param_7,int *param_8,int param_9)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  dtNodeQueue *this_00;
  long **this_01;
  float *pfVar7;
  long *this_02;
  int iVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_e4;
  uint local_e0;
  float fStack_dc;
  uint *local_d8;
  dtMeshTile *local_d0;
  dtPoly *local_c8;
  dtMeshTile *pdStack_c0;
  uint *local_b8;
  dtMeshTile *local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_e0 = 0x80000008;
  *param_8 = 0;
  if ((param_1 != 0) &&
     (uVar5 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar5 & 1) != 0)) {
    dtNodePool::clear();
    *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
    pfVar6 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1);
    *pfVar6 = *param_2;
    pfVar6[1] = param_2[1];
    fVar16 = param_2[2];
    pfVar6[3] = 0.0;
    pfVar6[4] = 0.0;
    pfVar6[5] = 2.0;
    pfVar6[6] = (float)param_1;
    pfVar6[2] = fVar16;
    this_00 = *(dtNodeQueue **)(this + 0x58);
    iVar8 = *(int *)(this_00 + 0xc);
    *(int *)(this_00 + 0xc) = iVar8 + 1;
    dtNodeQueue::bubbleUp(this_00,iVar8,(dtNode *)pfVar6);
    if (param_9 < 1) {
      this_01 = *(long ***)(this + 0x58);
      local_e4 = 0;
      local_e0 = 0x40000010;
      iVar8 = *(int *)((long)this_01 + 0xc);
    }
    else {
      if (param_5 != (uint *)0x0) {
        *param_5 = (uint)pfVar6[6];
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      if (param_7 == (float *)0x0) {
        local_e4 = 1;
        local_e0 = 0x40000000;
        this_01 = *(long ***)(this + 0x58);
        iVar8 = *(int *)((long)this_01 + 0xc);
      }
      else {
        *param_7 = 0.0;
        local_e4 = 1;
        local_e0 = 0x40000000;
        this_01 = *(long ***)(this + 0x58);
        iVar8 = *(int *)((long)this_01 + 0xc);
      }
    }
    if (iVar8 != 0) {
      do {
        pfVar6 = (float *)**this_01;
        *(int *)((long)this_01 + 0xc) = iVar8 + -1;
        dtNodeQueue::trickleDown((dtNodeQueue *)this_01,0,(dtNode *)(*this_01)[iVar8 + -1]);
        fVar16 = pfVar6[6];
        local_b0 = (dtMeshTile *)0x0;
        local_b8 = (uint *)0x0;
        pfVar6[5] = (float)((uint)pfVar6[5] & 0x3fffffff | 0x80000000);
        dtNavMesh::getTileAndPolyByRefUnsafe
                  (*(dtNavMesh **)this,(uint)fVar16,&local_b0,(dtPoly **)&local_b8);
        local_c8 = (dtPoly *)0x0;
        pdStack_c0 = (dtMeshTile *)0x0;
        if (((uint)pfVar6[5] & 0x3fffffff) == 0) {
          fVar15 = 0.0;
          uVar14 = *local_b8;
        }
        else {
          fVar15 = *(float *)(**(long **)(this + 0x50) +
                              (ulong)(((uint)pfVar6[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
          if (fVar15 != 0.0) {
            dtNavMesh::getTileAndPolyByRefUnsafe
                      (*(dtNavMesh **)this,(uint)fVar15,&pdStack_c0,&local_c8);
          }
          uVar14 = *local_b8;
        }
        if (uVar14 != 0xffffffff) {
          lVar9 = *(long *)(local_b0 + 0x20);
LAB_00dd768c:
          fVar2 = *(float *)(lVar9 + (ulong)uVar14 * 0xc);
          if (fVar2 != 0.0 && fVar2 != fVar15) {
            local_d8 = (uint *)0x0;
            local_d0 = (dtMeshTile *)0x0;
            dtNavMesh::getTileAndPolyByRefUnsafe
                      (*(dtNavMesh **)this,(uint)fVar2,&local_d0,(dtPoly **)&local_d8);
            uVar5 = (***(code ***)param_4)(param_4,fVar2,local_d0,local_d8);
            if ((uVar5 & 1) != 0) {
              uVar12 = *local_b8;
              if (uVar12 != 0xffffffff) {
                lVar9 = *(long *)(local_b0 + 0x20);
                uVar1 = uVar12;
                do {
                  uVar5 = (ulong)uVar1;
                  if (*(float *)(lVar9 + uVar5 * 0xc) == fVar2) {
                    if ((*(byte *)((long)local_b8 + 0x1f) & 0xc0) == 0x40) goto LAB_00dd772c;
                    if ((*(byte *)((long)local_d8 + 0x1f) & 0xc0) == 0x40) {
                      uVar12 = *local_d8;
                      if (uVar12 != 0xffffffff) {
                        lVar9 = *(long *)(local_d0 + 0x20);
                        goto LAB_00dd7774;
                      }
                    }
                    else {
                      lVar10 = lVar9 + uVar5 * 0xc;
                      bVar3 = *(byte *)((long)local_b8 + 0x1e);
                      uVar13 = (uint)*(byte *)(lVar10 + 8);
                      uVar12 = uVar13 + 1;
                      uVar1 = 0;
                      if (bVar3 != 0) {
                        uVar1 = uVar12 / bVar3;
                      }
                      pfVar7 = (float *)(*(long *)(local_b0 + 0x18) +
                                        (ulong)*(ushort *)((long)local_b8 + (ulong)uVar13 * 2 + 4) *
                                        0xc);
                      local_9c = *pfVar7;
                      local_98 = pfVar7[1];
                      pfVar11 = (float *)(*(long *)(local_b0 + 0x18) +
                                         (ulong)*(ushort *)
                                                 ((long)local_b8 +
                                                 (ulong)(uVar12 - uVar1 * bVar3) * 2 + 4) * 0xc);
                      local_94 = pfVar7[2];
                      local_a8 = *pfVar11;
                      local_a4 = pfVar11[1];
                      local_a0 = pfVar11[2];
                      if (*(char *)(lVar10 + 9) != -1) {
                        lVar9 = lVar9 + uVar5 * 0xc;
                        bVar3 = *(byte *)(lVar9 + 0xb);
                        uVar12 = (uint)*(byte *)(lVar9 + 10);
                        if ((uVar12 != 0) || (bVar3 != 0xff)) {
                          fVar17 = (float)(ulong)uVar12 * 0.003921569;
                          local_9c = (float)NEON_fmadd(*pfVar11 - *pfVar7,fVar17,*pfVar7);
                          local_98 = (float)NEON_fmadd(pfVar11[1] - pfVar7[1],fVar17,pfVar7[1]);
                          local_94 = (float)NEON_fmadd(pfVar11[2] - pfVar7[2],fVar17,pfVar7[2]);
                          fVar17 = (float)(ulong)bVar3 * 0.003921569;
                          local_a8 = (float)NEON_fmadd(*pfVar11 - *pfVar7,fVar17,*pfVar7);
                          local_a4 = (float)NEON_fmadd(pfVar11[1] - pfVar7[1],fVar17,pfVar7[1]);
                          local_a0 = (float)NEON_fmadd(pfVar11[2] - pfVar7[2],fVar17,pfVar7[2]);
                        }
                      }
                    }
                    break;
                  }
                  uVar1 = *(uint *)(lVar9 + uVar5 * 0xc + 4);
                } while (uVar1 != 0xffffffff);
              }
              goto LAB_00dd7918;
            }
            goto LAB_00dd7670;
          }
          goto LAB_00dd7678;
        }
LAB_00dd7598:
        this_01 = *(long ***)(this + 0x58);
        iVar8 = *(int *)((long)this_01 + 0xc);
      } while (iVar8 != 0);
    }
    *param_8 = local_e4;
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (uVar12 = *(uint *)(lVar9 + (ulong)uVar12 * 0xc + 4), uVar12 != 0xffffffff) {
LAB_00dd772c:
    if (*(float *)(lVar9 + (ulong)uVar12 * 0xc) == fVar2) {
      lVar9 = (long)local_b8 + (ulong)*(byte *)(lVar9 + (ulong)uVar12 * 0xc + 8) * 2;
      lVar10 = *(long *)(local_b0 + 0x18);
      goto LAB_00dd78dc;
    }
  }
LAB_00dd7918:
  fVar17 = (float)dtDistancePtSegSqr2D(param_2,&local_9c,&local_a8,&fStack_dc);
  if (fVar17 <= param_3 * param_3) {
    pfVar7 = (float *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),(uint)fVar2);
    if (pfVar7 == (float *)0x0) {
      local_e0 = local_e0 | 0x20;
    }
    else if (-1 < (int)pfVar7[5]) {
      if ((uint)pfVar7[5] >> 0x1e == 0) {
        fVar17 = (float)NEON_fmadd(local_a8 - local_9c,0x3f000000,local_9c);
        *pfVar7 = fVar17;
        fVar19 = (float)NEON_fmadd(local_a4 - local_98,0x3f000000,local_98);
        pfVar7[1] = fVar19;
        fVar20 = (float)NEON_fmadd(local_a0 - local_94,0x3f000000,local_94);
        pfVar7[2] = fVar20;
      }
      else {
        fVar17 = *pfVar7;
        fVar19 = pfVar7[1];
        fVar20 = pfVar7[2];
      }
      fVar21 = pfVar6[4];
      uVar18 = NEON_fmadd(fVar17 - *pfVar6,fVar17 - *pfVar6,
                          (fVar19 - pfVar6[1]) * (fVar19 - pfVar6[1]));
      fVar17 = (float)NEON_fmadd(fVar20 - pfVar6[2],fVar20 - pfVar6[2],uVar18);
      fVar17 = (float)dtSqrt(fVar17);
      fVar21 = fVar21 + fVar17;
      fVar17 = pfVar7[5];
      if ((((uint)fVar17 >> 0x1e & 1) == 0) || (fVar21 < pfVar7[4])) {
        pfVar7[5] = (float)((uint)fVar17 & 0x7fffffff);
        pfVar7[6] = fVar2;
        iVar8 = **(int **)(this + 0x50);
        pfVar7[4] = fVar21;
        fVar19 = (float)(((uint)((int)pfVar6 - iVar8) >> 2) * -0x49249249 + 1 & 0x3fffffff |
                        (uint)fVar17 & 0x40000000);
        pfVar7[5] = fVar19;
        if (((uint)fVar17 & 0x40000000) == 0) {
          if (local_e4 < param_9) {
            if (param_5 != (uint *)0x0) {
              param_5[local_e4] = (uint)fVar2;
            }
            if (param_6 != (uint *)0x0) {
              lVar9 = 0;
              if (((uint)pfVar7[5] & 0x3fffffff) != 0) {
                lVar9 = **(long **)(this + 0x50) +
                        (ulong)(((uint)pfVar7[5] & 0x3fffffff) - 1) * 0x1c;
              }
              param_6[local_e4] = *(uint *)(lVar9 + 0x18);
            }
            if (param_7 != (float *)0x0) {
              param_7[local_e4] = fVar21;
            }
            local_e4 = local_e4 + 1;
            fVar19 = pfVar7[5];
          }
          else {
            local_e0 = local_e0 | 0x10;
          }
          pfVar7[5] = (float)((uint)fVar19 & 0x3fffffff | 0x40000000);
          this_02 = *(long **)(this + 0x58);
          uVar5 = (ulong)*(uint *)((long)this_02 + 0xc);
          *(uint *)((long)this_02 + 0xc) = *(uint *)((long)this_02 + 0xc) + 1;
LAB_00dd7aec:
          dtNodeQueue::bubbleUp((dtNodeQueue *)this_02,(int)uVar5,(dtNode *)pfVar7);
        }
        else {
          this_02 = *(long **)(this + 0x58);
          if (0 < (int)*(uint *)((long)this_02 + 0xc)) {
            uVar5 = 0;
            do {
              if (*(float **)(*this_02 + uVar5 * 8) == pfVar7) goto LAB_00dd7aec;
              uVar5 = uVar5 + 1;
            } while (*(uint *)((long)this_02 + 0xc) != uVar5);
          }
        }
      }
    }
  }
LAB_00dd7670:
  lVar9 = *(long *)(local_b0 + 0x20);
LAB_00dd7678:
  uVar14 = *(uint *)(lVar9 + (ulong)uVar14 * 0xc + 4);
  if (uVar14 == 0xffffffff) goto LAB_00dd7598;
  goto LAB_00dd768c;
LAB_00dd7774:
  if (*(float *)(lVar9 + (ulong)uVar12 * 0xc) != fVar16) goto code_r0x00dd7788;
  lVar10 = *(long *)(local_d0 + 0x18);
  lVar9 = (long)local_d8 + (ulong)*(byte *)(lVar9 + (ulong)uVar12 * 0xc + 8) * 2;
LAB_00dd78dc:
  pfVar7 = (float *)(lVar10 + (ulong)*(ushort *)(lVar9 + 4) * 0xc);
  local_9c = *pfVar7;
  local_98 = pfVar7[1];
  local_94 = pfVar7[2];
  local_a8 = *pfVar7;
  local_a4 = pfVar7[1];
  local_a0 = pfVar7[2];
  goto LAB_00dd7918;
code_r0x00dd7788:
  uVar12 = *(uint *)(lVar9 + (ulong)uVar12 * 0xc + 4);
  if (uVar12 == 0xffffffff) goto LAB_00dd7918;
  goto LAB_00dd7774;
}


