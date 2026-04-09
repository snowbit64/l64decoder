// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFilterLedgeSpans
// Entry Point: 00dddf90
// Size: 1224 bytes
// Signature: undefined __cdecl rcFilterLedgeSpans(rcContext * param_1, int param_2, int param_3, rcHeightfield * param_4)


/* rcFilterLedgeSpans(rcContext*, int, int, rcHeightfield&) */

void rcFilterLedgeSpans(rcContext *param_1,int param_2,int param_3,rcHeightfield *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,7);
  }
  uVar6 = *(uint *)(param_4 + 4);
  if ((0 < (int)uVar6) && (uVar20 = (ulong)*(uint *)param_4, 0 < (int)*(uint *)param_4)) {
    uVar21 = 0;
    uVar8 = -param_3;
    do {
      uVar26 = 0;
      do {
        lVar3 = uVar26 + uVar21 * uVar20;
        puVar18 = *(uint **)(*(long *)(param_4 + 0x28) + lVar3 * 8);
        if (puVar18 != (uint *)0x0) {
          do {
            uVar7 = *puVar18;
            if (uVar7 >> 0x1a == 0) {
              puVar19 = *(uint **)(puVar18 + 2);
            }
            else {
              puVar19 = *(uint **)(puVar18 + 2);
              if (puVar19 == (uint *)0x0) {
                uVar28 = 0xffff;
              }
              else {
                uVar28 = *puVar19 & 0x1fff;
              }
              uVar12 = uVar7 >> 0xd & 0x1fff;
              lVar27 = *(long *)(param_4 + 0x28);
              iVar2 = uVar12 + param_3;
              iVar11 = uVar8 - uVar12;
              iVar9 = -iVar2;
              uVar17 = uVar12;
              if ((int)uVar12 <= (int)uVar8) {
                uVar17 = uVar8;
              }
              uVar29 = uVar12;
              if (uVar26 == 0) {
                iVar23 = iVar9;
                uVar22 = uVar12;
                if (0xfffe < iVar9) {
                  iVar23 = 0xffff;
                }
              }
              else {
                puVar24 = *(uint **)(lVar27 + (lVar3 + -1) * 8);
                if (puVar24 == (uint *)0x0) {
                  uVar22 = 0xffff;
                }
                else {
                  uVar22 = *puVar24 & 0x1fff;
                }
                uVar16 = uVar28;
                if (uVar22 <= uVar28) {
                  uVar16 = uVar22;
                }
                iVar10 = uVar16 - uVar17;
                bVar1 = iVar11 < 0xffff;
                bVar15 = false;
                if (bVar1) {
                  bVar15 = iVar10 - param_2 < 0;
                }
                uVar16 = uVar12;
                iVar23 = iVar11;
                if ((!bVar1 || iVar10 == param_2) || bVar15 != (bVar1 && SBORROW4(iVar10,param_2)))
                {
                  iVar23 = 0xffff;
                }
                while (uVar22 = uVar16, puVar24 != (uint *)0x0) {
                  puVar25 = *(uint **)(puVar24 + 2);
                  if (puVar25 == (uint *)0x0) {
                    uVar16 = 0xffff;
                  }
                  else {
                    uVar16 = *puVar25 & 0x1fff;
                  }
                  uVar5 = uVar28;
                  if (uVar16 <= uVar28) {
                    uVar5 = uVar16;
                  }
                  uVar13 = *puVar24 >> 0xd & 0x1fff;
                  iVar10 = uVar13 - uVar12;
                  uVar14 = uVar12;
                  if (uVar12 <= uVar13) {
                    uVar14 = uVar13;
                  }
                  uVar16 = uVar22;
                  puVar24 = puVar25;
                  if (param_2 < (int)(uVar5 - uVar14)) {
                    if (iVar10 <= iVar23) {
                      iVar23 = iVar10;
                    }
                    iVar4 = -iVar10;
                    if (-1 < iVar10) {
                      iVar4 = iVar10;
                    }
                    if (iVar4 <= param_3) {
                      uVar16 = uVar13;
                      if (uVar29 <= uVar13) {
                        uVar16 = uVar29;
                      }
                      uVar29 = uVar16;
                      uVar16 = uVar13;
                      if (uVar13 <= uVar22) {
                        uVar16 = uVar22;
                      }
                    }
                  }
                }
              }
              if (uVar21 + 1 < (ulong)uVar6) {
                puVar24 = *(uint **)(lVar27 + ((uVar21 + 1) * uVar20 + uVar26) * 8);
                if (puVar24 == (uint *)0x0) {
                  uVar16 = 0xffff;
                }
                else {
                  uVar16 = *puVar24 & 0x1fff;
                }
                uVar5 = uVar28;
                if (uVar16 <= uVar28) {
                  uVar5 = uVar16;
                }
                iVar10 = iVar23;
                if (iVar11 <= iVar23) {
                  iVar10 = iVar11;
                }
                uVar16 = uVar22;
                if ((int)(uVar5 - uVar17) <= param_2) {
                  iVar10 = iVar23;
                }
                while (uVar22 = uVar16, iVar23 = iVar10, puVar24 != (uint *)0x0) {
                  puVar25 = *(uint **)(puVar24 + 2);
                  if (puVar25 == (uint *)0x0) {
                    uVar16 = 0xffff;
                  }
                  else {
                    uVar16 = *puVar25 & 0x1fff;
                  }
                  uVar5 = uVar28;
                  if (uVar16 <= uVar28) {
                    uVar5 = uVar16;
                  }
                  uVar13 = *puVar24 >> 0xd & 0x1fff;
                  iVar23 = uVar13 - uVar12;
                  uVar14 = uVar12;
                  if (uVar12 <= uVar13) {
                    uVar14 = uVar13;
                  }
                  puVar24 = puVar25;
                  uVar16 = uVar22;
                  if (param_2 < (int)(uVar5 - uVar14)) {
                    if (iVar23 <= iVar10) {
                      iVar10 = iVar23;
                    }
                    iVar4 = -iVar23;
                    if (-1 < iVar23) {
                      iVar4 = iVar23;
                    }
                    if (iVar4 <= param_3) {
                      uVar16 = uVar13;
                      if (uVar29 <= uVar13) {
                        uVar16 = uVar29;
                      }
                      uVar29 = uVar16;
                      uVar16 = uVar13;
                      if (uVar13 <= uVar22) {
                        uVar16 = uVar22;
                      }
                    }
                  }
                }
              }
              else if (iVar23 + iVar2 < 0 == SBORROW4(iVar23,iVar9)) {
                iVar23 = iVar9;
              }
              if (uVar26 + 1 < uVar20) {
                puVar24 = *(uint **)(lVar27 + (uVar21 * uVar20 + uVar26 + 1) * 8);
                if (puVar24 == (uint *)0x0) {
                  uVar16 = 0xffff;
                }
                else {
                  uVar16 = *puVar24 & 0x1fff;
                }
                uVar5 = uVar28;
                if (uVar16 <= uVar28) {
                  uVar5 = uVar16;
                }
                iVar10 = iVar23;
                if (iVar11 <= iVar23) {
                  iVar10 = iVar11;
                }
                uVar16 = uVar22;
                if ((int)(uVar5 - uVar17) <= param_2) {
                  iVar10 = iVar23;
                }
                while (uVar22 = uVar16, iVar23 = iVar10, puVar24 != (uint *)0x0) {
                  puVar25 = *(uint **)(puVar24 + 2);
                  if (puVar25 == (uint *)0x0) {
                    uVar16 = 0xffff;
                  }
                  else {
                    uVar16 = *puVar25 & 0x1fff;
                  }
                  uVar5 = uVar28;
                  if (uVar16 <= uVar28) {
                    uVar5 = uVar16;
                  }
                  uVar13 = *puVar24 >> 0xd & 0x1fff;
                  iVar23 = uVar13 - uVar12;
                  uVar14 = uVar12;
                  if (uVar12 <= uVar13) {
                    uVar14 = uVar13;
                  }
                  puVar24 = puVar25;
                  uVar16 = uVar22;
                  if (param_2 < (int)(uVar5 - uVar14)) {
                    if (iVar23 <= iVar10) {
                      iVar10 = iVar23;
                    }
                    iVar4 = -iVar23;
                    if (-1 < iVar23) {
                      iVar4 = iVar23;
                    }
                    if (iVar4 <= param_3) {
                      uVar16 = uVar13;
                      if (uVar29 <= uVar13) {
                        uVar16 = uVar29;
                      }
                      uVar29 = uVar16;
                      uVar16 = uVar13;
                      if (uVar13 <= uVar22) {
                        uVar16 = uVar22;
                      }
                    }
                  }
                }
              }
              else if (iVar23 + iVar2 < 0 == SBORROW4(iVar23,iVar9)) {
                iVar23 = iVar9;
              }
              if (uVar21 == 0) {
                if (iVar23 + iVar2 < 0 == SBORROW4(iVar23,iVar9)) {
                  iVar23 = iVar9;
                }
              }
              else {
                puVar24 = *(uint **)(lVar27 + ((uVar21 - 1) * uVar20 + uVar26) * 8);
                if (puVar24 == (uint *)0x0) {
                  uVar16 = 0xffff;
                }
                else {
                  uVar16 = *puVar24 & 0x1fff;
                }
                uVar5 = uVar28;
                if (uVar16 <= uVar28) {
                  uVar5 = uVar16;
                }
                iVar2 = iVar23;
                if (iVar11 <= iVar23) {
                  iVar2 = iVar11;
                }
                uVar16 = uVar22;
                if ((int)(uVar5 - uVar17) <= param_2) {
                  iVar2 = iVar23;
                }
                while (uVar22 = uVar16, iVar23 = iVar2, puVar24 != (uint *)0x0) {
                  puVar25 = *(uint **)(puVar24 + 2);
                  if (puVar25 == (uint *)0x0) {
                    uVar17 = 0xffff;
                  }
                  else {
                    uVar17 = *puVar25 & 0x1fff;
                  }
                  uVar5 = uVar28;
                  if (uVar17 <= uVar28) {
                    uVar5 = uVar17;
                  }
                  uVar14 = *puVar24 >> 0xd & 0x1fff;
                  iVar9 = uVar14 - uVar12;
                  uVar17 = uVar12;
                  if (uVar12 <= uVar14) {
                    uVar17 = uVar14;
                  }
                  puVar24 = puVar25;
                  uVar16 = uVar22;
                  if (param_2 < (int)(uVar5 - uVar17)) {
                    if (iVar9 <= iVar2) {
                      iVar2 = iVar9;
                    }
                    iVar11 = -iVar9;
                    if (-1 < iVar9) {
                      iVar11 = iVar9;
                    }
                    if (iVar11 <= param_3) {
                      uVar17 = uVar14;
                      if (uVar29 <= uVar14) {
                        uVar17 = uVar29;
                      }
                      uVar29 = uVar17;
                      uVar16 = uVar14;
                      if (uVar14 <= uVar22) {
                        uVar16 = uVar22;
                      }
                    }
                  }
                }
              }
              iVar2 = uVar22 - uVar29;
              if ((iVar23 + param_3 < 0 != SBORROW4(iVar23,uVar8)) || (param_3 < iVar2)) {
                bVar1 = iVar23 + param_3 < 0 == SBORROW4(iVar23,uVar8);
                bVar15 = false;
                if (bVar1) {
                  bVar15 = iVar2 - param_3 < 0;
                }
                uVar28 = uVar7 & 0x3ffffff;
                if (bVar1 && iVar2 == param_3 || bVar15 != (bVar1 && SBORROW4(iVar2,param_3))) {
                  uVar28 = uVar7;
                }
                *puVar18 = uVar28;
              }
            }
            puVar18 = puVar19;
          } while (puVar18 != (uint *)0x0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar20);
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar6);
  }
  if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dde434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,7);
    return;
  }
  return;
}


