// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009737f4
// Entry Point: 009737f4
// Size: 1780 bytes
// Signature: undefined FUN_009737f4(void)


void FUN_009737f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
LAB_0097383c:
  do {
    puVar14 = param_2 + -3;
    puVar15 = param_1;
LAB_00973848:
    while( true ) {
      param_1 = puVar15;
      uVar7 = (long)param_2 - (long)param_1;
      switch(((long)uVar7 >> 3) * -0x5555555555555555) {
      case 0:
      case 1:
        goto switchD_00973c1c_caseD_0;
      case 2:
        puVar15 = param_2 + -3;
        if ((*(int *)puVar15 < *(int *)param_1) ||
           ((*(int *)puVar15 == *(int *)param_1 && ((double)param_2[-2] < (double)param_1[1])))) {
          uVar12 = param_1[2];
          uVar19 = param_1[1];
          uVar18 = *param_1;
          uVar22 = param_2[-2];
          uVar21 = *puVar15;
          param_1[2] = param_2[-1];
          param_1[1] = uVar22;
          *param_1 = uVar21;
          param_2[-1] = uVar12;
          param_2[-2] = uVar19;
          *puVar15 = uVar18;
        }
        goto switchD_00973c1c_caseD_0;
      case 3:
        FUN_00973ee8(param_1,param_1 + 3,puVar14);
        goto switchD_00973c1c_caseD_0;
      case 4:
        puVar15 = param_1 + 3;
        puVar14 = param_1 + 6;
        FUN_00973ee8(param_1,puVar15,puVar14);
        puVar8 = param_2 + -3;
        if ((*(int *)puVar8 < *(int *)(param_1 + 6)) ||
           ((*(int *)puVar8 == *(int *)(param_1 + 6) && ((double)param_2[-2] < (double)param_1[7])))
           ) {
          uVar19 = param_1[7];
          uVar21 = *puVar14;
          uVar12 = param_1[8];
          uVar22 = *puVar8;
          uVar18 = param_2[-1];
          param_1[7] = param_2[-2];
          *puVar14 = uVar22;
          param_1[8] = uVar18;
          param_2[-1] = uVar12;
          param_2[-2] = uVar19;
          *puVar8 = uVar21;
          if ((*(int *)puVar14 < *(int *)puVar15) ||
             ((*(int *)puVar14 == *(int *)puVar15 && ((double)param_1[7] < (double)param_1[4])))) {
            uVar21 = param_1[4];
            uVar18 = *puVar15;
            param_1[4] = param_1[7];
            *puVar15 = *puVar14;
            uVar12 = param_1[5];
            param_1[5] = param_1[8];
            param_1[7] = uVar21;
            *puVar14 = uVar18;
            param_1[8] = uVar12;
            if ((*(int *)(param_1 + 3) < *(int *)param_1) ||
               ((*(int *)(param_1 + 3) == *(int *)param_1 &&
                ((double)param_1[4] < (double)param_1[1])))) {
              uVar12 = param_1[2];
              uVar21 = param_1[1];
              uVar18 = *param_1;
              param_1[1] = param_1[4];
              *param_1 = *puVar15;
              param_1[2] = param_1[5];
              param_1[4] = uVar21;
              *puVar15 = uVar18;
              param_1[5] = uVar12;
            }
          }
        }
        goto switchD_00973c1c_caseD_0;
      case 5:
        FUN_00974090(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar14);
        goto switchD_00973c1c_caseD_0;
      }
      if ((long)uVar7 < 0x2e8) {
        FUN_00973ee8(param_1,param_1 + 3,param_1 + 6);
        if (param_1 + 9 == param_2) goto switchD_00973c1c_caseD_0;
        lVar11 = 0;
        puVar15 = param_1 + 9;
        puVar14 = param_1 + 6;
        goto LAB_00973de4;
      }
      if (uVar7 < 0x5da9) {
        puVar15 = param_1 + (ulong)(((uint)uVar7 & 0xffff) / 0x30) * 3;
        iVar4 = FUN_00973ee8(param_1,puVar15,puVar14);
      }
      else {
        puVar15 = param_1 + (uVar7 / 0x30) * 3;
        iVar4 = FUN_00974090(param_1,param_1 + (uVar7 / 0x60) * 3,puVar15,
                             puVar15 + (uVar7 / 0x60) * 3,puVar14);
      }
      iVar13 = *(int *)param_1;
      iVar2 = *(int *)puVar15;
      puVar8 = puVar14;
      if ((iVar13 < iVar2) ||
         ((puVar9 = param_2 + -6, iVar13 == iVar2 && ((double)param_1[1] < (double)puVar15[1]))))
      break;
      for (; param_1 != puVar9; puVar9 = puVar9 + -3) {
        if ((*(int *)puVar9 < iVar2) ||
           ((*(int *)puVar9 == iVar2 && ((double)puVar9[1] < (double)puVar15[1])))) {
          uVar12 = param_1[2];
          iVar4 = iVar4 + 1;
          uVar19 = param_1[1];
          uVar18 = *param_1;
          uVar22 = puVar9[1];
          uVar21 = *puVar9;
          param_1[2] = puVar9[2];
          param_1[1] = uVar22;
          *param_1 = uVar21;
          puVar9[2] = uVar12;
          puVar9[1] = uVar19;
          *puVar9 = uVar18;
          puVar8 = puVar9;
          goto LAB_009738dc;
        }
      }
      puVar8 = param_1 + 3;
      if ((*(int *)puVar14 <= iVar13) &&
         ((iVar13 != *(int *)puVar14 || ((double)param_2[-2] <= (double)param_1[1])))) {
        while( true ) {
          if (puVar8 == puVar14) goto switchD_00973c1c_caseD_0;
          if ((iVar13 < *(int *)puVar8) ||
             ((iVar13 == *(int *)puVar8 && ((double)param_1[1] < (double)puVar8[1])))) break;
          puVar8 = puVar8 + 3;
        }
        uVar12 = puVar8[2];
        uVar19 = puVar8[1];
        uVar18 = *puVar8;
        uVar22 = param_2[-2];
        uVar21 = *puVar14;
        puVar8[2] = param_2[-1];
        puVar8[1] = uVar22;
        *puVar8 = uVar21;
        param_2[-1] = uVar12;
        param_2[-2] = uVar19;
        *puVar14 = uVar18;
        puVar8 = puVar8 + 3;
      }
      puVar9 = puVar14;
      if (puVar8 == puVar14) goto switchD_00973c1c_caseD_0;
      while( true ) {
        iVar4 = *(int *)param_1;
        iVar13 = *(int *)puVar8;
        puVar15 = puVar8;
        while ((iVar13 <= iVar4 && ((iVar4 != iVar13 || ((double)puVar15[1] <= (double)param_1[1])))
               )) {
          puVar15 = puVar15 + 3;
          iVar13 = *(int *)puVar15;
        }
        do {
          do {
            puVar10 = puVar9;
            puVar9 = puVar10 + -3;
          } while (iVar4 < *(int *)puVar9);
        } while ((iVar4 == *(int *)puVar9) && ((double)param_1[1] < (double)puVar10[-2]));
        if (puVar9 <= puVar15) break;
        uVar12 = puVar15[2];
        uVar19 = puVar15[1];
        uVar18 = *puVar15;
        uVar22 = puVar10[-2];
        uVar21 = *puVar9;
        puVar15[2] = puVar10[-1];
        puVar8 = puVar15 + 3;
        puVar15[1] = uVar22;
        *puVar15 = uVar21;
        puVar10[-1] = uVar12;
        puVar10[-2] = uVar19;
        *puVar9 = uVar18;
      }
    }
LAB_009738dc:
    puVar9 = param_1 + 3;
    if (puVar9 < puVar8) {
      do {
        iVar13 = *(int *)puVar15;
        for (; (*(int *)puVar9 < iVar13 ||
               ((*(int *)puVar9 == iVar13 && ((double)puVar9[1] < (double)puVar15[1]))));
            puVar9 = puVar9 + 3) {
        }
        do {
          puVar10 = puVar8;
          puVar8 = puVar10 + -3;
          if (*(int *)puVar8 < iVar13) break;
        } while ((*(int *)puVar8 != iVar13) || ((double)puVar15[1] <= (double)puVar10[-2]));
        if (puVar8 < puVar9) break;
        uVar12 = puVar9[2];
        uVar21 = puVar9[1];
        uVar18 = *puVar9;
        iVar4 = iVar4 + 1;
        puVar1 = puVar8;
        if (puVar9 != puVar15) {
          puVar1 = puVar15;
        }
        uVar22 = puVar10[-2];
        uVar19 = *puVar8;
        puVar9[2] = puVar10[-1];
        puVar9[1] = uVar22;
        *puVar9 = uVar19;
        puVar9 = puVar9 + 3;
        puVar10[-1] = uVar12;
        puVar10[-2] = uVar21;
        *puVar8 = uVar18;
        puVar15 = puVar1;
      } while( true );
    }
    if ((puVar9 != puVar15) &&
       ((*(int *)puVar15 < *(int *)puVar9 ||
        ((*(int *)puVar15 == *(int *)puVar9 && ((double)puVar15[1] < (double)puVar9[1])))))) {
      uVar12 = puVar9[2];
      iVar4 = iVar4 + 1;
      uVar19 = puVar9[1];
      uVar18 = *puVar9;
      uVar22 = puVar15[1];
      uVar21 = *puVar15;
      puVar9[2] = puVar15[2];
      puVar9[1] = uVar22;
      *puVar9 = uVar21;
      puVar15[2] = uVar12;
      puVar15[1] = uVar19;
      *puVar15 = uVar18;
    }
    if (iVar4 != 0) goto LAB_00973bb4;
    uVar7 = FUN_00974324(param_1,puVar9);
    uVar5 = FUN_00974324(puVar9 + 3,param_2);
    if ((uVar5 & 1) == 0) goto code_r0x00973bb0;
    param_2 = puVar9;
  } while ((uVar7 & 1) == 0);
  goto switchD_00973c1c_caseD_0;
LAB_00973de4:
  puVar8 = puVar15;
  iVar4 = *(int *)puVar8;
  if (iVar4 < *(int *)puVar14) {
    dVar20 = (double)puVar8[1];
LAB_00973e00:
    iVar13 = *(int *)((long)puVar8 + 4);
    uVar21 = *puVar14;
    uVar18 = puVar14[2];
    uVar12 = puVar8[2];
    puVar8[1] = puVar14[1];
    *puVar8 = uVar21;
    puVar8[2] = uVar18;
    puVar15 = param_1;
    lVar17 = lVar11;
    if (puVar14 != param_1) {
      do {
        iVar2 = *(int *)((long)param_1 + lVar17 + 0x18);
        if (iVar2 <= iVar4) {
          if (iVar4 != iVar2) {
            puVar15 = (undefined8 *)((long)param_1 + lVar17 + 0x30);
            break;
          }
          puVar15 = puVar14;
          if (*(double *)((long)param_1 + lVar17 + 0x20) <= dVar20) break;
        }
        puVar14 = puVar14 + -3;
        lVar16 = lVar17 + -0x18;
        *(undefined8 *)((long)param_1 + lVar17 + 0x38) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x20);
        *(undefined8 *)((long)param_1 + lVar17 + 0x30) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x18);
        *(undefined8 *)((long)param_1 + lVar17 + 0x40) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x28);
        puVar15 = param_1;
        lVar17 = lVar16;
      } while (lVar16 != -0x30);
    }
    *(int *)puVar15 = iVar4;
    *(int *)((long)puVar15 + 4) = iVar13;
    puVar15[1] = dVar20;
    puVar15[2] = uVar12;
  }
  else if ((iVar4 == *(int *)puVar14) && (dVar20 = (double)puVar8[1], dVar20 < (double)puVar14[1]))
  goto LAB_00973e00;
  lVar11 = lVar11 + 0x18;
  puVar15 = puVar8 + 3;
  puVar14 = puVar8;
  if (puVar8 + 3 == param_2) {
switchD_00973c1c_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00973de4;
code_r0x00973bb0:
  puVar15 = puVar9 + 3;
  if ((uVar7 & 1) == 0) {
LAB_00973bb4:
    if (((long)param_2 - (long)puVar9 >> 3) * -0x5555555555555555 <=
        ((long)puVar9 - (long)param_1 >> 3) * -0x5555555555555555) {
      FUN_009737f4(puVar9 + 3,param_2);
      param_2 = puVar9;
      goto LAB_0097383c;
    }
    FUN_009737f4(param_1,puVar9);
    puVar15 = puVar9 + 3;
  }
  goto LAB_00973848;
}


