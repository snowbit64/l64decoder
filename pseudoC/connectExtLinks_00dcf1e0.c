// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectExtLinks
// Entry Point: 00dcf1e0
// Size: 864 bytes
// Signature: undefined __thiscall connectExtLinks(dtNavMesh * this, dtMeshTile * param_1, dtMeshTile * param_2, int param_3)


/* dtNavMesh::connectExtLinks(dtMeshTile*, dtMeshTile*, int) */

void __thiscall
dtNavMesh::connectExtLinks(dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  undefined uVar4;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined local_a8 [4];
  float afStack_a4 [7];
  float local_88 [4];
  long local_78;
  undefined uVar5;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if ((param_1 != (dtMeshTile *)0x0) && (lVar8 = *(long *)(param_1 + 8), 0 < *(int *)(lVar8 + 0x18))
     ) {
    lVar17 = 0;
    do {
      lVar18 = *(long *)(param_1 + 0x10);
      pfVar1 = (float *)(lVar18 + lVar17 * 0x20);
      uVar14 = (ulong)*(byte *)((long)pfVar1 + 0x1e);
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          uVar3 = *(ushort *)(lVar18 + lVar17 * 0x20 + uVar13 * 2 + 0x10);
          if (((short)uVar3 < 0) && ((param_3 == -1 || ((uVar3 & 0xff) == param_3)))) {
            uVar9 = 0;
            if (uVar13 + 1 != uVar14) {
              uVar9 = uVar13 + 1 & 0xffffffff;
            }
            lVar8 = lVar18 + lVar17 * 0x20 + 4;
            pfVar15 = (float *)(*(long *)(param_1 + 0x18) +
                               (ulong)*(ushort *)(lVar8 + uVar13 * 2) * 0xc);
            pfVar16 = (float *)(*(long *)(param_1 + 0x18) +
                               (ulong)*(ushort *)(lVar8 + uVar9 * 2) * 0xc);
            uVar7 = findConnectingPolys((float *)this,pfVar15,(dtMeshTile *)pfVar16,(int)param_2,
                                        (uint *)(ulong)(uVar3 + 4 & 7),local_88,(int)local_a8);
            if (0 < (int)uVar7) {
              fVar21 = *(float *)(param_1 + 4);
              uVar4 = (undefined)uVar13;
              uVar5 = (undefined)uVar3;
              if ((uVar3 & 0xfb) == 0) {
                uVar9 = (ulong)uVar7;
                pfVar10 = local_88;
                pfVar11 = afStack_a4;
                do {
                  if (fVar21 != -NAN) {
                    fVar20 = *pfVar10;
                    fVar19 = pfVar11[-1];
                    fVar22 = *pfVar11;
                    pfVar12 = (float *)(*(long *)(param_1 + 0x20) + (ulong)(uint)fVar21 * 0xc);
                    fVar2 = pfVar12[1];
                    *(float *)(param_1 + 4) = fVar2;
                    *pfVar12 = fVar20;
                    *(undefined *)(pfVar12 + 2) = uVar4;
                    *(undefined *)((long)pfVar12 + 9) = uVar5;
                    pfVar12[1] = *pfVar1;
                    *pfVar1 = fVar21;
                    fVar21 = pfVar15[2];
                    fVar19 = (fVar19 - fVar21) / (pfVar16[2] - fVar21);
                    fVar21 = (fVar22 - fVar21) / (pfVar16[2] - fVar21);
                    fVar20 = fVar19;
                    if (fVar19 <= fVar21) {
                      fVar20 = fVar21;
                      fVar21 = fVar19;
                    }
                    fVar22 = (float)NEON_fmin(fVar21,0x3f800000);
                    fVar23 = (float)NEON_fmin(fVar20,0x3f800000);
                    fVar19 = 0.0;
                    if (0.0 <= fVar21) {
                      fVar19 = fVar22 * 255.0;
                    }
                    fVar21 = 0.0;
                    if (0.0 <= fVar20) {
                      fVar21 = fVar23 * 255.0;
                    }
                    *(char *)((long)pfVar12 + 10) = (char)(int)fVar19;
                    *(char *)((long)pfVar12 + 0xb) = (char)(int)fVar21;
                    fVar21 = fVar2;
                  }
                  pfVar11 = pfVar11 + 2;
                  pfVar10 = pfVar10 + 1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              else if ((uVar3 & 0xfb) == 2) {
                uVar9 = (ulong)uVar7;
                pfVar10 = local_88;
                pfVar11 = afStack_a4;
                do {
                  if (fVar21 != -NAN) {
                    fVar20 = *pfVar10;
                    fVar19 = pfVar11[-1];
                    fVar22 = *pfVar11;
                    pfVar12 = (float *)(*(long *)(param_1 + 0x20) + (ulong)(uint)fVar21 * 0xc);
                    fVar2 = pfVar12[1];
                    *(float *)(param_1 + 4) = fVar2;
                    *pfVar12 = fVar20;
                    *(undefined *)(pfVar12 + 2) = uVar4;
                    *(undefined *)((long)pfVar12 + 9) = uVar5;
                    pfVar12[1] = *pfVar1;
                    *pfVar1 = fVar21;
                    fVar21 = *pfVar15;
                    fVar19 = (fVar19 - fVar21) / (*pfVar16 - fVar21);
                    fVar21 = (fVar22 - fVar21) / (*pfVar16 - fVar21);
                    fVar20 = fVar19;
                    if (fVar19 <= fVar21) {
                      fVar20 = fVar21;
                      fVar21 = fVar19;
                    }
                    fVar22 = (float)NEON_fmin(fVar21,0x3f800000);
                    fVar23 = (float)NEON_fmin(fVar20,0x3f800000);
                    fVar19 = 0.0;
                    if (0.0 <= fVar21) {
                      fVar19 = fVar22 * 255.0;
                    }
                    fVar21 = 0.0;
                    if (0.0 <= fVar20) {
                      fVar21 = fVar23 * 255.0;
                    }
                    *(char *)((long)pfVar12 + 10) = (char)(int)fVar19;
                    *(char *)((long)pfVar12 + 0xb) = (char)(int)fVar21;
                    fVar21 = fVar2;
                  }
                  pfVar11 = pfVar11 + 2;
                  pfVar10 = pfVar10 + 1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              else {
                uVar9 = (ulong)uVar7;
                pfVar15 = local_88;
                do {
                  if (fVar21 != -NAN) {
                    fVar20 = *pfVar15;
                    pfVar16 = (float *)(*(long *)(param_1 + 0x20) + (ulong)(uint)fVar21 * 0xc);
                    fVar2 = pfVar16[1];
                    *(float *)(param_1 + 4) = fVar2;
                    *pfVar16 = fVar20;
                    *(undefined *)(pfVar16 + 2) = uVar4;
                    *(undefined *)((long)pfVar16 + 9) = uVar5;
                    pfVar16[1] = *pfVar1;
                    *pfVar1 = fVar21;
                    fVar21 = fVar2;
                  }
                  pfVar15 = pfVar15 + 1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
        lVar8 = *(long *)(param_1 + 8);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar8 + 0x18));
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


