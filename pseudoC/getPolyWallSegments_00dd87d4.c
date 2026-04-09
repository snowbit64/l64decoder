// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPolyWallSegments
// Entry Point: 00dd87d4
// Size: 1684 bytes
// Signature: undefined __thiscall getPolyWallSegments(dtNavMeshQuery * this, uint param_1, dtQueryFilter * param_2, float * param_3, uint * param_4, int * param_5, int param_6)


/* dtNavMeshQuery::getPolyWallSegments(unsigned int, dtQueryFilter const*, float*, unsigned int*,
   int*, int) const */

void __thiscall
dtNavMeshQuery::getPolyWallSegments
          (dtNavMeshQuery *this,uint param_1,dtQueryFilter *param_2,float *param_3,uint *param_4,
          int *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  short *psVar15;
  short *psVar16;
  float *pfVar17;
  ulong uVar18;
  float *pfVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint *puVar23;
  float fVar24;
  float fVar25;
  short sVar26;
  dtPoly *local_110;
  dtMeshTile *local_108;
  uint *local_100;
  dtMeshTile *local_f8;
  undefined8 local_f0;
  undefined local_e8 [6];
  short local_e2 [57];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *param_5 = 0;
  local_100 = (uint *)0x0;
  local_f8 = (dtMeshTile *)0x0;
  iVar8 = dtNavMesh::getTileAndPolyByRef
                    (*(dtNavMesh **)this,param_1,&local_f8,(dtPoly **)&local_100);
  if (iVar8 < 0) {
    uVar9 = 0x80000008;
  }
  else {
    if (*(byte *)((long)local_100 + 0x1e) == 0) {
      iVar8 = 0;
      uVar9 = 0x40000000;
    }
    else {
      iVar8 = 0;
      uVar20 = *(byte *)((long)local_100 + 0x1e) - 1;
      psVar16 = (short *)((ulong)&local_f0 | 4);
      uVar9 = 0x40000000;
      uVar18 = 0;
      do {
        uVar3 = *(ushort *)((long)local_100 + (long)(int)uVar20 * 2 + 0x10);
        if ((short)uVar3 < 0) {
          uVar10 = *local_100;
          if (uVar10 == 0xffffffff) {
            uVar22 = 0;
            uVar11 = 0;
LAB_00dd8b5c:
            uVar10 = uVar22 + 1;
            (&local_f0)[uVar11] = 0xffff00000000;
            if ((int)uVar22 < 0xf) {
              if ((int)uVar22 < 0) {
                uVar11 = 0;
              }
              else {
                uVar12 = 0;
                psVar15 = psVar16;
                do {
                  uVar11 = uVar12;
                  if (0xff < *psVar15) break;
                  uVar12 = uVar12 + 1;
                  psVar15 = psVar15 + 4;
                  uVar11 = (ulong)uVar10;
                } while (uVar10 != uVar12);
                uVar10 = uVar10 - (int)uVar11;
                uVar11 = uVar11 & 0xffffffff;
              }
              if (uVar10 != 0) {
                memmove(local_e8 + uVar11 * 8,&local_f0 + uVar11,
                        -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3);
              }
              (&local_f0)[uVar11] = 0x10000ff00000000;
              uVar10 = uVar22 + 2;
            }
          }
          else {
            uVar22 = 0;
            lVar21 = *(long *)(local_f8 + 0x20);
            do {
              uVar11 = (ulong)uVar10;
              if (uVar20 == *(byte *)(lVar21 + (ulong)uVar10 * 0xc + 8)) {
                puVar23 = (uint *)(lVar21 + uVar11 * 0xc);
                if (*puVar23 != 0) {
                  local_110 = (dtPoly *)0x0;
                  local_108 = (dtMeshTile *)0x0;
                  dtNavMesh::getTileAndPolyByRefUnsafe
                            (*(dtNavMesh **)this,*puVar23,&local_108,&local_110);
                  uVar12 = (***(code ***)param_2)(param_2,*puVar23,local_108,local_110);
                  if (((uVar12 & 1) != 0) && ((int)uVar22 < 0x10)) {
                    lVar21 = lVar21 + uVar11 * 0xc;
                    bVar1 = *(byte *)(lVar21 + 0xb);
                    if ((int)uVar22 < 1) {
                      bVar2 = *(byte *)(lVar21 + 10);
                      uVar10 = *puVar23;
                      uVar12 = 0;
                      uVar5 = uVar22;
                    }
                    else {
                      uVar13 = 0;
                      psVar15 = psVar16;
                      do {
                        uVar12 = uVar13;
                        if ((short)(ushort)bVar1 <= *psVar15) break;
                        uVar13 = uVar13 + 1;
                        psVar15 = psVar15 + 4;
                        uVar12 = (ulong)uVar22;
                      } while (uVar22 != uVar13);
                      bVar2 = *(byte *)(lVar21 + 10);
                      uVar5 = uVar22 - (int)uVar12;
                      uVar10 = *puVar23;
                      uVar12 = uVar12 & 0xffffffff;
                    }
                    if (uVar5 != 0) {
                      memmove(local_e8 + uVar12 * 8,&local_f0 + uVar12,
                              -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
                    }
                    uVar22 = uVar22 + 1;
                    *(ushort *)(local_e8 + uVar12 * 8 + -4) = (ushort)bVar2;
                    *(uint *)(&local_f0 + uVar12) = uVar10;
                    *(ushort *)(local_e8 + uVar12 * 8 + -2) = (ushort)bVar1;
                  }
                  lVar21 = *(long *)(local_f8 + 0x20);
                }
              }
              uVar10 = *(uint *)(lVar21 + uVar11 * 0xc + 4);
            } while (uVar10 != 0xffffffff);
            uVar10 = uVar22;
            if ((int)uVar22 < 0x10) {
              if ((int)uVar22 < 1) {
                uVar11 = 0;
              }
              else {
                uVar12 = 0;
                psVar15 = psVar16;
                do {
                  uVar11 = uVar12;
                  if (-1 < *psVar15) break;
                  uVar12 = uVar12 + 1;
                  psVar15 = psVar15 + 4;
                  uVar11 = (ulong)uVar22;
                } while (uVar22 != uVar12);
                uVar10 = uVar22 - (int)uVar11;
                uVar11 = uVar11 & 0xffffffff;
              }
              if (uVar10 != 0) {
                memmove(local_e8 + uVar11 * 8,&local_f0 + uVar11,
                        -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3);
              }
              goto LAB_00dd8b5c;
            }
          }
          if (1 < (int)uVar10) {
            pfVar14 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)((long)local_100 + (long)(int)uVar20 * 2 + 4) * 0xc
                               );
            pfVar17 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)((long)local_100 + uVar18 * 2 + 4) * 0xc);
            lVar21 = (ulong)uVar10 - 1;
            psVar15 = local_e2;
            do {
              if ((param_4 == (uint *)0x0) || (uVar20 = *(uint *)(psVar15 + -3), uVar20 == 0)) {
LAB_00dd8d08:
                sVar26 = psVar15[-4];
                sVar4 = psVar15[-1];
                if (sVar26 != sVar4) {
LAB_00dd8d18:
                  if (iVar8 < param_6) {
                    pfVar19 = param_3 + (long)iVar8 * 6;
                    fVar7 = (float)(int)sVar26 / 255.0;
                    fVar24 = (float)(int)sVar4 / 255.0;
                    fVar25 = (float)NEON_fmadd(*pfVar17 - *pfVar14,fVar7,*pfVar14);
                    *pfVar19 = fVar25;
                    fVar25 = (float)NEON_fmadd(pfVar17[1] - pfVar14[1],fVar7,pfVar14[1]);
                    pfVar19[1] = fVar25;
                    fVar7 = (float)NEON_fmadd(pfVar17[2] - pfVar14[2],fVar7,pfVar14[2]);
                    pfVar19[2] = fVar7;
                    fVar7 = (float)NEON_fmadd(*pfVar17 - *pfVar14,fVar24,*pfVar14);
                    pfVar19[3] = fVar7;
                    fVar7 = (float)NEON_fmadd(pfVar17[1] - pfVar14[1],fVar24,pfVar14[1]);
                    pfVar19[4] = fVar7;
                    fVar7 = (float)NEON_fmadd(pfVar17[2] - pfVar14[2],fVar24,pfVar14[2]);
                    pfVar19[5] = fVar7;
                    if (param_4 != (uint *)0x0) {
                      param_4[iVar8] = 0;
                    }
                    iVar8 = iVar8 + 1;
                  }
                  else {
                    uVar9 = uVar9 | 0x10;
                  }
                }
              }
              else {
                if (iVar8 < param_6) {
                  pfVar19 = param_3 + (long)iVar8 * 6;
                  fVar7 = (float)(int)psVar15[-1] / 255.0;
                  fVar24 = (float)NEON_fmadd(*pfVar17 - *pfVar14,fVar7,*pfVar14);
                  *pfVar19 = fVar24;
                  fVar24 = (float)NEON_fmadd(pfVar17[1] - pfVar14[1],fVar7,pfVar14[1]);
                  sVar26 = *psVar15;
                  pfVar19[1] = fVar24;
                  fVar24 = (float)(int)sVar26 / 255.0;
                  fVar7 = (float)NEON_fmadd(pfVar17[2] - pfVar14[2],fVar7,pfVar14[2]);
                  pfVar19[2] = fVar7;
                  fVar7 = (float)NEON_fmadd(*pfVar17 - *pfVar14,fVar24,*pfVar14);
                  pfVar19[3] = fVar7;
                  fVar7 = (float)NEON_fmadd(pfVar17[1] - pfVar14[1],fVar24,pfVar14[1]);
                  pfVar19[4] = fVar7;
                  fVar7 = (float)NEON_fmadd(pfVar17[2] - pfVar14[2],fVar24,pfVar14[2]);
                  pfVar19[5] = fVar7;
                  param_4[iVar8] = uVar20;
                  iVar8 = iVar8 + 1;
                  goto LAB_00dd8d08;
                }
                uVar9 = uVar9 | 0x10;
                sVar26 = psVar15[-4];
                sVar4 = psVar15[-1];
                if (sVar26 != sVar4) goto LAB_00dd8d18;
              }
              psVar15 = psVar15 + 4;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        else {
          if (uVar3 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_f8);
            uVar10 = uVar10 | uVar3 - 1;
            uVar11 = (***(code ***)param_2)
                               (param_2,uVar10,local_f8,
                                *(long *)(local_f8 + 0x10) + (ulong)(uVar3 - 1) * 0x20);
            if ((uVar11 & 1) == 0) {
              uVar10 = 0;
            }
            if ((param_4 == (uint *)0x0) && (uVar10 != 0)) goto LAB_00dd8888;
          }
          if (iVar8 < param_6) {
            pfVar19 = param_3 + (long)iVar8 * 6;
            pfVar17 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)((long)local_100 + (long)(int)uVar20 * 2 + 4) * 0xc
                               );
            pfVar14 = (float *)(*(long *)(local_f8 + 0x18) +
                               (ulong)*(ushort *)((long)local_100 + uVar18 * 2 + 4) * 0xc);
            *pfVar19 = *pfVar17;
            pfVar19[1] = pfVar17[1];
            pfVar19[2] = pfVar17[2];
            pfVar19[3] = *pfVar14;
            pfVar19[4] = pfVar14[1];
            pfVar19[5] = pfVar14[2];
            if (param_4 != (uint *)0x0) {
              param_4[iVar8] = uVar10;
            }
            iVar8 = iVar8 + 1;
          }
          else {
            uVar9 = uVar9 | 0x10;
          }
        }
LAB_00dd8888:
        uVar11 = uVar18 + 1;
        uVar20 = (uint)uVar18;
        uVar18 = uVar11;
      } while (uVar11 < *(byte *)((long)local_100 + 0x1e));
    }
    *param_5 = iVar8;
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


