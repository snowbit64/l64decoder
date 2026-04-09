// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975174
// Entry Point: 00975174
// Size: 800 bytes
// Signature: undefined FUN_00975174(void)


void FUN_00975174(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar4 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar10 = *(long *)(lVar4 + 0x28);
  if (uVar6 < 6) {
    bVar5 = true;
    switch(uVar6) {
    default:
      goto switchD_009751d4_caseD_0;
    case 2:
      puVar13 = param_2 + -3;
      if ((*(int *)param_1 < *(int *)puVar13) ||
         ((*(int *)puVar13 == *(int *)param_1 && ((double)param_2[-2] < (double)param_1[1])))) {
        uVar17 = *puVar13;
        bVar5 = true;
        uVar12 = param_2[-1];
        uVar20 = param_1[1];
        uVar19 = *param_1;
        uVar16 = param_1[2];
        param_1[1] = param_2[-2];
        *param_1 = uVar17;
        param_1[2] = uVar12;
        param_2[-2] = uVar20;
        *puVar13 = uVar19;
        param_2[-1] = uVar16;
        goto switchD_009751d4_caseD_0;
      }
      break;
    case 3:
      FUN_00974d38(param_1,param_1 + 3,param_2 + -3);
      break;
    case 4:
      puVar13 = param_1 + 3;
      puVar11 = param_1 + 6;
      FUN_00974d38(param_1,puVar13,puVar11);
      puVar8 = param_2 + -3;
      if ((*(int *)(param_1 + 6) < *(int *)puVar8) ||
         ((*(int *)puVar8 == *(int *)(param_1 + 6) && ((double)param_2[-2] < (double)param_1[7]))))
      {
        uVar17 = *puVar8;
        uVar12 = param_2[-1];
        uVar20 = param_1[7];
        uVar19 = *puVar11;
        uVar16 = param_1[8];
        param_1[7] = param_2[-2];
        *puVar11 = uVar17;
        param_1[8] = uVar12;
        param_2[-2] = uVar20;
        *puVar8 = uVar19;
        param_2[-1] = uVar16;
        if ((*(int *)puVar13 < *(int *)puVar11) ||
           ((*(int *)puVar11 == *(int *)puVar13 && ((double)param_1[7] < (double)param_1[4])))) {
          uVar17 = param_1[4];
          uVar16 = *puVar13;
          param_1[4] = param_1[7];
          *puVar13 = *puVar11;
          uVar12 = param_1[5];
          param_1[5] = param_1[8];
          param_1[7] = uVar17;
          *puVar11 = uVar16;
          param_1[8] = uVar12;
          if ((*(int *)param_1 < *(int *)(param_1 + 3)) ||
             ((*(int *)(param_1 + 3) == *(int *)param_1 && ((double)param_1[4] < (double)param_1[1])
              ))) {
            bVar5 = true;
            uVar17 = param_1[1];
            uVar16 = *param_1;
            uVar12 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = *puVar13;
            param_1[2] = param_1[5];
            param_1[4] = uVar17;
            *puVar13 = uVar16;
            param_1[5] = uVar12;
            goto switchD_009751d4_caseD_0;
          }
        }
      }
      break;
    case 5:
      FUN_00974ee0(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
    }
  }
  else {
    FUN_00974d38(param_1,param_1 + 3,param_1 + 6);
    if (param_1 + 9 != param_2) {
      lVar7 = 0;
      iVar9 = 0;
      puVar13 = param_1 + 9;
      puVar11 = param_1 + 6;
      do {
        puVar8 = puVar13;
        iVar1 = *(int *)puVar8;
        if (*(int *)puVar11 < iVar1) {
          dVar18 = (double)puVar8[1];
LAB_009752b0:
          iVar2 = *(int *)((long)puVar8 + 4);
          uVar17 = *puVar11;
          uVar16 = puVar11[2];
          uVar12 = puVar8[2];
          puVar8[1] = puVar11[1];
          *puVar8 = uVar17;
          puVar8[2] = uVar16;
          puVar13 = param_1;
          lVar15 = lVar7;
          if (puVar11 != param_1) {
            do {
              iVar3 = *(int *)((long)param_1 + lVar15 + 0x18);
              if (iVar1 <= iVar3) {
                puVar13 = puVar11;
                if (iVar1 != iVar3) break;
                if (*(double *)((long)param_1 + lVar15 + 0x20) <= dVar18) {
                  puVar13 = (undefined8 *)((long)param_1 + lVar15 + 0x30);
                  break;
                }
              }
              puVar11 = puVar11 + -3;
              lVar14 = lVar15 + -0x18;
              *(undefined8 *)((long)param_1 + lVar15 + 0x38) =
                   *(undefined8 *)((long)param_1 + lVar15 + 0x20);
              *(undefined8 *)((long)param_1 + lVar15 + 0x30) =
                   *(undefined8 *)((long)param_1 + lVar15 + 0x18);
              *(undefined8 *)((long)param_1 + lVar15 + 0x40) =
                   *(undefined8 *)((long)param_1 + lVar15 + 0x28);
              puVar13 = param_1;
              lVar15 = lVar14;
            } while (lVar14 != -0x30);
          }
          iVar9 = iVar9 + 1;
          *(int *)puVar13 = iVar1;
          *(int *)((long)puVar13 + 4) = iVar2;
          puVar13[1] = dVar18;
          puVar13[2] = uVar12;
          if (iVar9 == 8) {
            bVar5 = puVar8 + 3 == param_2;
            goto switchD_009751d4_caseD_0;
          }
        }
        else if ((iVar1 == *(int *)puVar11) &&
                (dVar18 = (double)puVar8[1], dVar18 < (double)puVar11[1])) goto LAB_009752b0;
        lVar7 = lVar7 + 0x18;
        puVar13 = puVar8 + 3;
        puVar11 = puVar8;
      } while (puVar8 + 3 != param_2);
    }
  }
  bVar5 = true;
switchD_009751d4_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


