// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcMarkConvexPolyArea
// Entry Point: 00ddbb50
// Size: 780 bytes
// Signature: undefined __cdecl rcMarkConvexPolyArea(rcContext * param_1, float * param_2, int param_3, float param_4, float param_5, uchar param_6, rcCompactHeightfield * param_7)


/* rcMarkConvexPolyArea(rcContext*, float const*, int, float, float, unsigned char,
   rcCompactHeightfield&) */

void rcMarkConvexPolyArea
               (rcContext *param_1,float *param_2,int param_3,float param_4,float param_5,
               uchar param_6,rcCompactHeightfield *param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x10);
  }
  fVar22 = *param_2;
  fVar21 = param_2[2];
  fVar23 = fVar21;
  if (param_3 < 2) {
    fVar24 = *(float *)(param_7 + 0x1c);
    fVar25 = *(float *)(param_7 + 0x34);
    fVar26 = (fVar22 - fVar24) / fVar25;
  }
  else {
    lVar16 = (ulong)(uint)param_3 - 1;
    pfVar14 = param_2 + 5;
    fVar26 = fVar22;
    do {
      fVar24 = pfVar14[-2];
      fVar25 = *pfVar14;
      if (fVar24 <= fVar22) {
        fVar22 = fVar24;
      }
      if (fVar25 <= fVar21) {
        fVar21 = fVar25;
      }
      if (fVar26 <= fVar24) {
        fVar26 = fVar24;
      }
      if (fVar23 <= fVar25) {
        fVar23 = fVar25;
      }
      lVar16 = lVar16 + -1;
      pfVar14 = pfVar14 + 3;
    } while (lVar16 != 0);
    fVar24 = *(float *)(param_7 + 0x1c);
    fVar25 = *(float *)(param_7 + 0x34);
    fVar26 = (fVar26 - fVar24) / fVar25;
  }
  uVar7 = (uint)fVar26;
  if (-1 < (int)uVar7) {
    iVar3 = *(int *)param_7;
    uVar18 = (uint)((fVar22 - fVar24) / fVar25);
    if ((int)uVar18 < iVar3) {
      uVar19 = (uint)((fVar23 - *(float *)(param_7 + 0x24)) / fVar25);
      if (-1 < (int)uVar19) {
        iVar4 = *(int *)(param_7 + 4);
        uVar17 = (uint)((fVar21 - *(float *)(param_7 + 0x24)) / fVar25);
        if ((int)uVar17 < iVar4) {
          if (iVar3 <= (int)uVar7) {
            uVar7 = iVar3 - 1;
          }
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          if (iVar4 <= (int)uVar19) {
            uVar19 = iVar4 - 1;
          }
          if ((((int)uVar17 <= (int)uVar19) &&
              (uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU), (int)uVar18 <= (int)uVar7)) &&
             (0 < param_3)) {
            fVar22 = *(float *)(param_7 + 0x20);
            fVar21 = *(float *)(param_7 + 0x38);
            uVar20 = (uint)((param_5 - fVar22) / fVar21);
            do {
              uVar6 = uVar18;
              do {
                uVar12 = *(uint *)(*(long *)(param_7 + 0x40) +
                                  (long)(int)(uVar6 + *(int *)param_7 * uVar17) * 4);
                if (uVar12 >> 0x18 != 0) {
                  uVar11 = (ulong)uVar12 & 0xffffff;
                  uVar2 = uVar11 + (uVar12 >> 0x18);
                  do {
                    if (*(char *)(*(long *)(param_7 + 0x58) + uVar11) != '\0') {
                      uVar5 = *(ushort *)(*(long *)(param_7 + 0x48) + uVar11 * 8);
                      bVar8 = false;
                      bVar9 = false;
                      bVar10 = false;
                      if ((int)((param_4 - fVar22) / fVar21) <= (int)(uint)uVar5) {
                        uVar12 = (uint)uVar5;
                        bVar10 = SBORROW4(uVar12,uVar20);
                        bVar8 = (int)(uVar12 - uVar20) < 0;
                        bVar9 = uVar12 == uVar20;
                      }
                      if (bVar9 || bVar8 != bVar10) {
                        bVar8 = false;
                        uVar15 = (ulong)(param_3 - 1);
                        fVar23 = (float)NEON_fmadd((float)uVar6 + 0.5,
                                                   *(undefined4 *)(param_7 + 0x34),
                                                   *(undefined4 *)(param_7 + 0x1c));
                        fVar24 = (float)NEON_fmadd((float)uVar17 + 0.5,
                                                   *(undefined4 *)(param_7 + 0x34),
                                                   *(undefined4 *)(param_7 + 0x24));
                        uVar13 = 0;
                        pfVar14 = param_2 + 2;
                        do {
                          fVar25 = *pfVar14;
                          fVar26 = (param_2 + (int)uVar15 * 3)[2];
                          if ((fVar25 <= fVar24 == fVar24 < fVar26) &&
                             (fVar23 < pfVar14[-2] +
                                       ((fVar24 - fVar25) * (param_2[(int)uVar15 * 3] - pfVar14[-2])
                                       ) / (fVar26 - fVar25))) {
                            bVar8 = !bVar8;
                          }
                          uVar1 = uVar13 + 1;
                          uVar15 = uVar13 & 0xffffffff;
                          pfVar14 = pfVar14 + 3;
                          uVar13 = uVar1;
                        } while ((uint)param_3 != uVar1);
                        if (bVar8) {
                          *(uchar *)(*(long *)(param_7 + 0x58) + uVar11) = param_6;
                        }
                      }
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar2);
                }
                bVar8 = uVar6 != uVar7;
                uVar6 = uVar6 + 1;
              } while (bVar8);
              bVar8 = uVar17 != uVar19;
              uVar17 = uVar17 + 1;
            } while (bVar8);
          }
          if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ddbe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)param_1 + 0x30))(param_1,0x10);
            return;
          }
        }
      }
    }
  }
  return;
}


