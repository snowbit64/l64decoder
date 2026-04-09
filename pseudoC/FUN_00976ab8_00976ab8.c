// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00976ab8
// Entry Point: 00976ab8
// Size: 1140 bytes
// Signature: undefined FUN_00976ab8(void)


void FUN_00976ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  
  lVar2 = tpidr_el0;
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar9 = *(long *)(lVar2 + 0x28);
  if (uVar5 < 6) {
    bVar4 = true;
    switch(uVar5) {
    default:
      goto switchD_00976b1c_caseD_0;
    case 2:
      if ((double)param_2[-2] < (double)param_1[1]) {
        uVar14 = param_2[-3];
        bVar4 = true;
        uVar10 = param_2[-1];
        uVar17 = param_1[1];
        uVar15 = *param_1;
        uVar12 = param_1[2];
        param_1[1] = param_2[-2];
        *param_1 = uVar14;
        param_1[2] = uVar10;
        param_2[-2] = uVar17;
        param_2[-3] = uVar15;
        param_2[-1] = uVar12;
        goto switchD_00976b1c_caseD_0;
      }
      break;
    case 3:
      dVar16 = (double)param_1[4];
      puVar6 = param_1 + 3;
      puVar11 = param_2 + -3;
      if ((double)param_1[1] <= dVar16) {
        if ((double)param_2[-2] < dVar16) {
          uVar14 = *puVar11;
          uVar10 = param_2[-1];
          uVar17 = param_1[4];
          uVar15 = *puVar6;
          uVar12 = param_1[5];
          param_1[4] = param_2[-2];
          *puVar6 = uVar14;
          param_1[5] = uVar10;
          param_2[-2] = uVar17;
          *puVar11 = uVar15;
          param_2[-1] = uVar12;
          if ((double)param_1[4] < (double)param_1[1]) {
            bVar4 = true;
            uVar14 = param_1[1];
            uVar12 = *param_1;
            uVar10 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = *puVar6;
            param_1[2] = param_1[5];
            param_1[4] = uVar14;
            *puVar6 = uVar12;
            param_1[5] = uVar10;
            goto switchD_00976b1c_caseD_0;
          }
        }
      }
      else {
        if ((double)param_2[-2] < dVar16) {
          uVar14 = *puVar11;
          bVar4 = true;
          uVar10 = param_2[-1];
          uVar17 = param_1[1];
          uVar15 = *param_1;
          uVar12 = param_1[2];
          param_1[1] = param_2[-2];
          *param_1 = uVar14;
          param_1[2] = uVar10;
          param_2[-2] = uVar17;
          *puVar11 = uVar15;
          param_2[-1] = uVar12;
          goto switchD_00976b1c_caseD_0;
        }
        uVar14 = param_1[1];
        uVar12 = *param_1;
        uVar10 = param_1[2];
        param_1[1] = param_1[4];
        *param_1 = *puVar6;
        param_1[2] = param_1[5];
        param_1[4] = uVar14;
        *puVar6 = uVar12;
        param_1[5] = uVar10;
        if ((double)param_2[-2] < (double)param_1[4]) {
          uVar14 = *puVar11;
          bVar4 = true;
          uVar10 = param_2[-1];
          uVar17 = param_1[4];
          uVar15 = *puVar6;
          uVar12 = param_1[5];
          param_1[4] = param_2[-2];
          *puVar6 = uVar14;
          param_1[5] = uVar10;
          param_2[-2] = uVar17;
          *puVar11 = uVar15;
          param_2[-1] = uVar12;
          goto switchD_00976b1c_caseD_0;
        }
      }
      break;
    case 4:
      FUN_009768d0(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      break;
    case 5:
      puVar6 = param_1 + 3;
      puVar11 = param_1 + 6;
      puVar1 = param_1 + 9;
      FUN_009768d0(param_1,puVar6,puVar11,puVar1);
      if ((double)param_2[-2] < (double)param_1[10]) {
        uVar14 = param_2[-3];
        uVar10 = param_2[-1];
        uVar17 = param_1[10];
        uVar15 = *puVar1;
        uVar12 = param_1[0xb];
        param_1[10] = param_2[-2];
        *puVar1 = uVar14;
        param_1[0xb] = uVar10;
        param_2[-2] = uVar17;
        param_2[-3] = uVar15;
        param_2[-1] = uVar12;
        if ((double)param_1[10] < (double)param_1[7]) {
          uVar14 = param_1[7];
          uVar12 = *puVar11;
          param_1[7] = param_1[10];
          *puVar11 = *puVar1;
          uVar10 = param_1[8];
          param_1[8] = param_1[0xb];
          param_1[10] = uVar14;
          *puVar1 = uVar12;
          param_1[0xb] = uVar10;
          if ((double)param_1[7] < (double)param_1[4]) {
            uVar14 = param_1[4];
            uVar12 = *puVar6;
            param_1[4] = param_1[7];
            *puVar6 = *puVar11;
            uVar10 = param_1[5];
            param_1[5] = param_1[8];
            param_1[7] = uVar14;
            *puVar11 = uVar12;
            param_1[8] = uVar10;
            if ((double)param_1[4] < (double)param_1[1]) {
              bVar4 = true;
              uVar14 = param_1[1];
              uVar12 = *param_1;
              uVar10 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar6;
              param_1[2] = param_1[5];
              param_1[4] = uVar14;
              *puVar6 = uVar12;
              param_1[5] = uVar10;
              goto switchD_00976b1c_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    dVar18 = (double)param_1[4];
    puVar6 = param_1 + 6;
    puVar11 = param_1 + 3;
    dVar16 = (double)param_1[7];
    if ((double)param_1[1] <= dVar18) {
      if (dVar16 < dVar18) {
        uVar14 = param_1[4];
        uVar12 = *puVar11;
        param_1[4] = param_1[7];
        *puVar11 = *puVar6;
        uVar10 = param_1[5];
        param_1[5] = param_1[8];
        param_1[7] = uVar14;
        *puVar6 = uVar12;
        param_1[8] = uVar10;
        if ((double)param_1[4] < (double)param_1[1]) {
          uVar14 = param_1[1];
          uVar12 = *param_1;
          uVar10 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = *puVar11;
          param_1[2] = param_1[5];
          param_1[4] = uVar14;
          *puVar11 = uVar12;
          param_1[5] = uVar10;
        }
      }
    }
    else if (dVar18 <= dVar16) {
      uVar14 = param_1[4];
      uVar12 = *puVar11;
      param_1[4] = param_1[1];
      *puVar11 = *param_1;
      uVar10 = param_1[5];
      param_1[5] = param_1[2];
      param_1[1] = uVar14;
      *param_1 = uVar12;
      param_1[2] = uVar10;
      if (dVar16 < (double)param_1[4]) {
        uVar14 = param_1[4];
        uVar12 = *puVar11;
        uVar10 = param_1[5];
        param_1[4] = param_1[7];
        *puVar11 = *puVar6;
        param_1[5] = param_1[8];
        param_1[7] = uVar14;
        *puVar6 = uVar12;
        param_1[8] = uVar10;
      }
    }
    else {
      uVar14 = param_1[1];
      uVar12 = *param_1;
      uVar10 = param_1[2];
      param_1[1] = param_1[7];
      *param_1 = *puVar6;
      param_1[2] = param_1[8];
      param_1[7] = uVar14;
      *puVar6 = uVar12;
      param_1[8] = uVar10;
    }
    if (param_1 + 9 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar11 = param_1 + 9;
      do {
        dVar16 = (double)puVar11[1];
        if (dVar16 < (double)puVar6[1]) {
          uVar12 = *puVar11;
          uVar10 = puVar11[2];
          lVar3 = lVar7;
          do {
            lVar13 = lVar3;
            *(undefined8 *)((long)param_1 + lVar13 + 0x50) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x38);
            *(undefined8 *)((long)param_1 + lVar13 + 0x48) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x30);
            *(undefined8 *)((long)param_1 + lVar13 + 0x58) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x40);
            puVar6 = param_1;
            if (lVar13 == -0x30) goto LAB_00976e64;
            lVar3 = lVar13 + -0x18;
          } while (dVar16 < *(double *)((long)param_1 + lVar13 + 0x20));
          puVar6 = (undefined8 *)((long)param_1 + lVar13 + 0x30);
LAB_00976e64:
          iVar8 = iVar8 + 1;
          *puVar6 = uVar12;
          puVar6[1] = dVar16;
          puVar6[2] = uVar10;
          if (iVar8 == 8) {
            bVar4 = puVar11 + 3 == param_2;
            goto switchD_00976b1c_caseD_0;
          }
        }
        puVar1 = puVar11 + 3;
        lVar7 = lVar7 + 0x18;
        puVar6 = puVar11;
        puVar11 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  bVar4 = true;
switchD_00976b1c_caseD_0:
  if (*(long *)(lVar2 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


