// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00da9e34
// Entry Point: 00da9e34
// Size: 2408 bytes
// Signature: undefined FUN_00da9e34(void)


void FUN_00da9e34(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  
  lVar9 = tpidr_el0;
  local_18 = *(long *)(lVar9 + 0x28);
  uVar15 = *param_2;
  if (uVar15 < 0x186a1) {
    uVar1 = param_2[1];
    uVar11 = 1;
    if (((int)uVar1 < 0) || ((int)(100000 - uVar15) < (int)uVar1)) goto LAB_00da9e64;
    uVar2 = param_2[2];
    if (100000 < uVar2) goto LAB_00da9e60;
    uVar3 = param_2[3];
    uVar11 = 1;
    if (((int)uVar3 < 0) || ((int)(100000 - uVar2) < (int)uVar3)) goto LAB_00da9e64;
    uVar4 = param_2[4];
    if (100000 < uVar4) goto LAB_00da9e60;
    uVar5 = param_2[5];
    uVar11 = 1;
    if (((int)uVar5 < 0) || ((int)(100000 - uVar4) < (int)uVar5)) goto LAB_00da9e64;
    uVar6 = param_2[6];
    if (100000 < uVar6) goto LAB_00da9e60;
    uVar7 = param_2[7];
    uVar11 = 1;
    if (((int)uVar7 < 5) || ((int)(100000 - uVar6) < (int)uVar7)) goto LAB_00da9e64;
    iVar19 = 0;
    iVar16 = uVar2 - uVar4;
    iVar14 = uVar1 - uVar5;
    if ((iVar16 != 0) && (iVar14 != 0)) {
      dVar20 = (double)(long)(((double)iVar16 * (double)iVar14) / 7.0 + 0.5);
      if (dVar20 <= 2147483647.0 && -2147483648.0 <= dVar20) {
        iVar19 = (int)dVar20;
        goto LAB_00da9f64;
      }
LAB_00daa060:
      uVar11 = 2;
      goto LAB_00da9e64;
    }
LAB_00da9f64:
    iVar10 = 0;
    iVar18 = uVar3 - uVar5;
    iVar17 = uVar15 - uVar4;
    if ((iVar17 != 0) && (iVar18 != 0)) {
      dVar20 = (double)(long)(((double)iVar17 * (double)iVar18) / 7.0 + 0.5);
      if (2147483647.0 < dVar20 || dVar20 < -2147483648.0) goto LAB_00daa060;
      iVar10 = (int)dVar20;
    }
    iVar13 = 0;
    iVar8 = uVar7 - uVar5;
    if ((iVar16 != 0) && (iVar8 != 0)) {
      dVar20 = (double)(long)(((double)iVar16 * (double)iVar8) / 7.0 + 0.5);
      if (2147483647.0 < dVar20 || dVar20 < -2147483648.0) goto LAB_00daa060;
      iVar13 = (int)dVar20;
    }
    iVar12 = 0;
    iVar16 = uVar6 - uVar4;
    if ((iVar18 != 0) && (iVar16 != 0)) {
      dVar20 = (double)(long)(((double)iVar18 * (double)iVar16) / 7.0 + 0.5);
      if (2147483647.0 < dVar20 || dVar20 < -2147483648.0) goto LAB_00daa060;
      iVar12 = (int)dVar20;
    }
    if (iVar13 - iVar12 != 0) {
      iVar19 = iVar19 - iVar10;
      if (iVar19 == 0) {
        iVar18 = 0;
      }
      else {
        uVar11 = 1;
        dVar20 = (double)(long)(((double)uVar7 * (double)iVar19) / (double)(iVar13 - iVar12) + 0.5);
        if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
        iVar18 = (int)dVar20;
      }
      if ((int)uVar7 < iVar18) {
        iVar10 = 0;
        if ((iVar14 != 0) && (iVar16 != 0)) {
          uVar11 = 2;
          dVar20 = (double)(long)(((double)iVar14 * (double)iVar16) / 7.0 + 0.5);
          if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
          iVar10 = (int)dVar20;
        }
        iVar16 = 0;
        if ((iVar17 != 0) && (iVar8 != 0)) {
          uVar11 = 2;
          dVar20 = (double)(long)(((double)iVar17 * (double)iVar8) / 7.0 + 0.5);
          if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
          iVar16 = (int)dVar20;
        }
        if (iVar10 - iVar16 != 0) {
          if (iVar19 == 0) {
            iVar16 = 0;
          }
          else {
            uVar11 = 1;
            dVar20 = (double)(long)(((double)uVar7 * (double)iVar19) / (double)(iVar10 - iVar16) +
                                   0.5);
            if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
            iVar16 = (int)dVar20;
          }
          if ((int)uVar7 < iVar16) {
            dVar21 = (double)iVar18;
            dVar20 = (double)iVar16;
            dVar22 = 10000000000.0 / (double)uVar7 + 0.5;
            dVar23 = (double)(long)dVar22;
            iVar14 = (int)dVar22;
            if ((dVar23 < -2147483648.0 || 2147483647.0 <= dVar23) &&
                (dVar23 < -2147483648.0 || dVar23 != 2147483647.0)) {
              iVar14 = 0;
            }
            dVar22 = 10000000000.0 / dVar21 + 0.5;
            dVar23 = (double)(long)dVar22;
            iVar19 = (int)dVar22;
            if ((dVar23 < -2147483648.0 || 2147483647.0 <= dVar23) &&
                (dVar23 < -2147483648.0 || dVar23 != 2147483647.0)) {
              iVar19 = 0;
            }
            dVar22 = 10000000000.0 / dVar20 + 0.5;
            dVar23 = (double)(long)dVar22;
            iVar17 = (int)dVar22;
            if ((dVar23 < -2147483648.0 || 2147483647.0 <= dVar23) &&
                (dVar23 < -2147483648.0 || dVar23 != 2147483647.0)) {
              iVar17 = 0;
            }
            iVar14 = iVar14 - (iVar19 + iVar17);
            if ((0 < iVar14) && (iVar18 != 0)) {
              if (uVar15 == 0) {
                iVar19 = 0;
              }
              else {
                uVar11 = 1;
                dVar22 = (double)(long)(((double)uVar15 * 100000.0) / dVar21 + 0.5);
                if ((2147483647.0 < dVar22) || (dVar22 < -2147483648.0)) goto LAB_00da9e64;
                iVar19 = (int)dVar22;
              }
              *param_1 = iVar19;
              uVar15 = param_2[1];
              if (uVar15 != 0) {
                uVar11 = 1;
                dVar22 = (double)(long)(((double)uVar15 * 100000.0) / dVar21 + 0.5);
                if ((2147483647.0 < dVar22) || (dVar22 < -2147483648.0)) goto LAB_00da9e64;
                uVar15 = (uint)dVar22;
              }
              param_1[1] = uVar15;
              if (param_2[1] + *param_2 == 100000) {
                iVar19 = 0;
              }
              else {
                uVar11 = 1;
                dVar21 = (double)(long)(((double)(100000 - (param_2[1] + *param_2)) * 100000.0) /
                                        dVar21 + 0.5);
                if ((2147483647.0 < dVar21) || (dVar21 < -2147483648.0)) goto LAB_00da9e64;
                iVar19 = (int)dVar21;
              }
              param_1[2] = iVar19;
              if (iVar16 != 0) {
                uVar15 = param_2[2];
                if (uVar15 != 0) {
                  uVar11 = 1;
                  dVar21 = (double)(long)(((double)uVar15 * 100000.0) / dVar20 + 0.5);
                  if ((2147483647.0 < dVar21) || (dVar21 < -2147483648.0)) goto LAB_00da9e64;
                  uVar15 = (uint)dVar21;
                }
                param_1[3] = uVar15;
                uVar15 = param_2[3];
                if (uVar15 != 0) {
                  uVar11 = 1;
                  dVar21 = (double)(long)(((double)uVar15 * 100000.0) / dVar20 + 0.5);
                  if ((2147483647.0 < dVar21) || (dVar21 < -2147483648.0)) goto LAB_00da9e64;
                  uVar15 = (uint)dVar21;
                }
                param_1[4] = uVar15;
                if (param_2[3] + param_2[2] == 100000) {
                  iVar16 = 0;
                }
                else {
                  uVar11 = 1;
                  dVar20 = (double)(long)(((double)(100000 - (param_2[3] + param_2[2])) * 100000.0)
                                          / dVar20 + 0.5);
                  if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
                  iVar16 = (int)dVar20;
                }
                param_1[5] = iVar16;
                dVar20 = (double)iVar14;
                uVar15 = param_2[4];
                if (uVar15 != 0) {
                  uVar11 = 1;
                  dVar21 = (double)(long)((dVar20 * (double)uVar15) / 100000.0 + 0.5);
                  if ((2147483647.0 < dVar21) || (dVar21 < -2147483648.0)) goto LAB_00da9e64;
                  uVar15 = (uint)dVar21;
                }
                param_1[6] = uVar15;
                uVar15 = param_2[5];
                if (uVar15 != 0) {
                  uVar11 = 1;
                  dVar21 = (double)(long)((dVar20 * (double)uVar15) / 100000.0 + 0.5);
                  if ((2147483647.0 < dVar21) || (dVar21 < -2147483648.0)) goto LAB_00da9e64;
                  uVar15 = (uint)dVar21;
                }
                param_1[7] = uVar15;
                if (param_2[5] + param_2[4] == 100000) {
                  iVar16 = 0;
                }
                else {
                  uVar11 = 1;
                  dVar20 = (double)(long)((dVar20 * (double)(100000 - (param_2[5] + param_2[4]))) /
                                          100000.0 + 0.5);
                  if ((2147483647.0 < dVar20) || (dVar20 < -2147483648.0)) goto LAB_00da9e64;
                  iVar16 = (int)dVar20;
                }
                param_1[8] = iVar16;
                iVar16 = FUN_00dae3d0(&local_38,param_1);
                if (((((((iVar16 == 0) && (local_20 + -5 <= (int)param_2[6])) &&
                       ((int)param_2[6] <= local_20 + 5)) &&
                      ((local_1c + -5 <= (int)param_2[7] && ((int)param_2[7] <= local_1c + 5)))) &&
                     ((local_38 + -5 <= (int)*param_2 &&
                      (((int)*param_2 <= local_38 + 5 && (local_34 + -5 <= (int)param_2[1])))))) &&
                    ((int)param_2[1] <= local_34 + 5)) &&
                   ((((local_30 + -5 <= (int)param_2[2] && ((int)param_2[2] <= local_30 + 5)) &&
                     (local_2c + -5 <= (int)param_2[3])) &&
                    ((((int)param_2[3] <= local_2c + 5 && (local_28 + -5 <= (int)param_2[4])) &&
                     (((int)param_2[4] <= local_28 + 5 &&
                      ((local_24 + -5 <= (int)param_2[5] && ((int)param_2[5] <= local_24 + 5))))))))
                   )) {
                  uVar11 = 0;
                  goto LAB_00da9e64;
                }
              }
            }
          }
          uVar11 = 1;
          goto LAB_00da9e64;
        }
      }
    }
  }
LAB_00da9e60:
  uVar11 = 1;
LAB_00da9e64:
  if (*(long *)(lVar9 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


