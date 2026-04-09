// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de1c90
// Entry Point: 00de1c90
// Size: 1096 bytes
// Signature: undefined FUN_00de1c90(void)


undefined8 FUN_00de1c90(uint param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  
  iVar6 = 0;
  if ((int)(param_1 + 1) < (int)param_3) {
    iVar6 = param_1 + 1;
  }
  uVar21 = param_1;
  if ((int)param_1 < 1) {
    uVar21 = param_3;
  }
  piVar2 = (int *)(param_4 +
                  ((ulong)(uint)(*(int *)(param_5 + (long)(int)param_1 * 4) << 2) & 0x3ffffffc) * 4)
  ;
  piVar3 = (int *)(param_4 +
                  ((ulong)(uint)(*(int *)(param_5 + (long)(int)param_2 * 4) << 2) & 0x3ffffffc) * 4)
  ;
  piVar4 = (int *)(param_4 +
                  ((ulong)(uint)(*(int *)(param_5 + (long)iVar6 * 4) << 2) & 0x3ffffffc) * 4);
  iVar6 = *piVar2;
  piVar5 = (int *)(param_4 +
                  ((ulong)(uint)(*(int *)(param_5 + (long)(int)(uVar21 - 1) * 4) << 2) & 0x3ffffffc)
                  * 4);
  iVar7 = piVar4[2];
  iVar8 = *piVar4;
  iVar9 = *piVar5;
  iVar10 = piVar5[2];
  iVar11 = piVar2[2];
  iVar12 = *piVar3;
  iVar16 = iVar12 - iVar6;
  if ((iVar7 - iVar10) * (iVar6 - iVar9) + (iVar10 - iVar11) * (iVar8 - iVar9) < 1) {
    iVar23 = piVar3[2];
    if ((iVar16 * (iVar10 - iVar11) + (iVar11 - iVar23) * (iVar9 - iVar6) < 0) &&
       ((iVar7 - iVar23) * (iVar6 - iVar12) + (iVar23 - iVar11) * (iVar8 - iVar12) < 0))
    goto LAB_00de1dc0;
  }
  else {
    iVar23 = piVar3[2];
    if ((0 < iVar16 * (iVar7 - iVar11) + (iVar11 - iVar23) * (iVar8 - iVar6)) ||
       (0 < (iVar10 - iVar23) * (iVar6 - iVar12) + (iVar23 - iVar11) * (iVar9 - iVar12))) {
LAB_00de1dc0:
      if (0 < (int)param_3) {
        iVar7 = iVar6 - iVar12;
        iVar8 = iVar11 - iVar23;
        uVar22 = 0;
        do {
          uVar1 = uVar22 + 1;
          uVar21 = (uint)uVar1;
          if (param_3 <= uVar1) {
            uVar21 = 0;
          }
          if (((uVar21 != param_2 && param_2 != uVar22) && param_1 != uVar22) && uVar21 != param_1)
          {
            piVar2 = (int *)(param_4 +
                            ((ulong)(uint)(*(int *)(param_5 + uVar22 * 4) << 2) & 0x3ffffffc) * 4);
            iVar9 = *piVar2;
            iVar10 = iVar6 - iVar9;
            if (((iVar10 != 0) || (iVar11 != piVar2[2])) &&
               ((iVar19 = iVar12 - iVar9, iVar19 != 0 || (iVar23 != piVar2[2])))) {
              piVar3 = (int *)(param_4 +
                              ((ulong)(uint)(*(int *)(param_5 + (ulong)uVar21 * 4) << 2) &
                              0x3ffffffc) * 4);
              iVar13 = *piVar3;
              iVar20 = iVar13 - iVar6;
              if (((iVar20 != 0) || (iVar11 != piVar3[2])) &&
                 ((iVar12 != iVar13 || (iVar23 != piVar3[2])))) {
                iVar14 = piVar2[2];
                iVar24 = iVar8 * (iVar9 - iVar6);
                if (iVar24 == (iVar14 - iVar11) * iVar7) {
                  if (iVar6 == iVar12) {
                    if ((iVar11 <= iVar14) && (iVar14 <= iVar23)) {
                      return 0;
                    }
                    if ((iVar14 <= iVar11) && (iVar23 <= iVar14)) {
                      return 0;
                    }
                    iVar24 = piVar3[2];
                    if (iVar8 * iVar20 == (iVar24 - iVar11) * iVar7) goto LAB_00de1f70;
                  }
                  else {
                    if ((iVar6 <= iVar9) && (iVar9 <= iVar12)) {
                      return 0;
                    }
                    if ((iVar9 <= iVar6) && (iVar12 <= iVar9)) {
                      return 0;
                    }
                    iVar24 = piVar3[2];
                    if (iVar8 * iVar20 == (iVar24 - iVar11) * iVar7) {
LAB_00de1fcc:
                      if ((iVar6 <= iVar13) && (iVar13 <= iVar12)) {
                        return 0;
                      }
                      if ((iVar13 <= iVar6) && (iVar12 <= iVar13)) {
                        return 0;
                      }
                    }
                  }
                }
                else {
                  iVar20 = iVar8 * iVar20;
                  iVar17 = piVar3[2] - iVar11;
                  if (iVar20 != iVar17 * iVar7) {
                    iVar18 = iVar14 - piVar3[2];
                    iVar15 = iVar18 * iVar10;
                    if (iVar15 != (iVar11 - iVar14) * (iVar9 - iVar13)) {
                      iVar18 = iVar18 * iVar19;
                      if (((iVar18 != (iVar23 - iVar14) * (iVar9 - iVar13)) &&
                          ((iVar20 + iVar17 * iVar16 ^ iVar24 + (iVar14 - iVar11) * iVar16) < 0)) &&
                         ((iVar15 + (iVar11 - iVar14) * (iVar13 - iVar9) ^
                          iVar18 + (iVar23 - iVar14) * (iVar13 - iVar9)) < 0)) {
                        return 0;
                      }
                    }
                  }
                  iVar24 = piVar3[2];
                  if (iVar20 == (iVar24 - iVar11) * iVar7) {
                    if (iVar6 != iVar12) goto LAB_00de1fcc;
LAB_00de1f70:
                    if ((iVar11 <= iVar24) && (iVar24 <= iVar23)) {
                      return 0;
                    }
                    if ((iVar24 <= iVar11) && (iVar23 <= iVar24)) {
                      return 0;
                    }
                  }
                }
                if ((iVar14 - iVar24) * iVar10 == (iVar11 - iVar14) * (iVar9 - iVar13)) {
                  if (iVar9 == iVar13) {
                    if ((iVar14 <= iVar11) && (iVar11 <= iVar24)) {
                      return 0;
                    }
                    if ((iVar11 <= iVar14) && (iVar24 <= iVar11)) {
                      return 0;
                    }
                  }
                  else {
                    if ((iVar9 <= iVar6) && (iVar6 <= iVar13)) {
                      return 0;
                    }
                    if ((iVar6 <= iVar9) && (iVar13 <= iVar6)) {
                      return 0;
                    }
                  }
                }
                if ((iVar14 - iVar24) * iVar19 == (iVar23 - iVar14) * (iVar9 - iVar13)) {
                  if (iVar9 == iVar13) {
                    if ((iVar14 <= iVar23) && (iVar23 <= iVar24)) {
                      return 0;
                    }
                    if ((iVar23 <= iVar14) && (iVar24 <= iVar23)) {
                      return 0;
                    }
                  }
                  else {
                    if ((iVar9 <= iVar12) && (iVar12 <= iVar13)) {
                      return 0;
                    }
                    if ((iVar12 <= iVar9) && (iVar13 <= iVar12)) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
          uVar22 = uVar1;
        } while (param_3 != uVar1);
      }
      return 1;
    }
  }
  return 0;
}


