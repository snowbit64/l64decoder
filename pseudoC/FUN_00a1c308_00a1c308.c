// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a1c308
// Entry Point: 00a1c308
// Size: 1148 bytes
// Signature: undefined FUN_00a1c308(void)


void FUN_00a1c308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  
  lVar3 = tpidr_el0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar11 = *(long *)(lVar3 + 0x28);
  if (uVar6 < 6) {
    bVar5 = true;
    switch(uVar6) {
    default:
      goto switchD_00a1c36c_caseD_0;
    case 2:
      if (*(float *)(param_2 + -1) < *(float *)(param_1 + 2)) {
        uVar15 = param_2[-3];
        bVar5 = true;
        uVar12 = param_2[-1];
        uVar18 = param_1[1];
        uVar17 = *param_1;
        uVar8 = param_1[2];
        param_1[1] = param_2[-2];
        *param_1 = uVar15;
        param_1[2] = uVar12;
        param_2[-2] = uVar18;
        param_2[-3] = uVar17;
        param_2[-1] = uVar8;
        goto switchD_00a1c36c_caseD_0;
      }
      break;
    case 3:
      fVar16 = *(float *)(param_1 + 5);
      puVar7 = param_1 + 3;
      puVar13 = param_2 + -3;
      if (*(float *)(param_1 + 2) <= fVar16) {
        if (*(float *)(param_2 + -1) < fVar16) {
          uVar15 = *puVar13;
          uVar12 = param_2[-1];
          uVar18 = param_1[4];
          uVar17 = *puVar7;
          uVar8 = param_1[5];
          param_1[4] = param_2[-2];
          *puVar7 = uVar15;
          param_1[5] = uVar12;
          param_2[-2] = uVar18;
          *puVar13 = uVar17;
          param_2[-1] = uVar8;
          if (*(float *)(param_1 + 5) < *(float *)(param_1 + 2)) {
            bVar5 = true;
            uVar15 = param_1[1];
            uVar8 = *param_1;
            uVar12 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = *puVar7;
            param_1[2] = param_1[5];
            param_1[4] = uVar15;
            *puVar7 = uVar8;
            param_1[5] = uVar12;
            goto switchD_00a1c36c_caseD_0;
          }
        }
      }
      else {
        if (*(float *)(param_2 + -1) < fVar16) {
          uVar15 = *puVar13;
          bVar5 = true;
          uVar12 = param_2[-1];
          uVar18 = param_1[1];
          uVar17 = *param_1;
          uVar8 = param_1[2];
          param_1[1] = param_2[-2];
          *param_1 = uVar15;
          param_1[2] = uVar12;
          param_2[-2] = uVar18;
          *puVar13 = uVar17;
          param_2[-1] = uVar8;
          goto switchD_00a1c36c_caseD_0;
        }
        uVar15 = param_1[1];
        uVar8 = *param_1;
        uVar12 = param_1[2];
        param_1[1] = param_1[4];
        *param_1 = *puVar7;
        param_1[2] = param_1[5];
        param_1[4] = uVar15;
        *puVar7 = uVar8;
        param_1[5] = uVar12;
        if (*(float *)(param_2 + -1) < *(float *)(param_1 + 5)) {
          uVar15 = *puVar13;
          bVar5 = true;
          uVar12 = param_2[-1];
          uVar18 = param_1[4];
          uVar17 = *puVar7;
          uVar8 = param_1[5];
          param_1[4] = param_2[-2];
          *puVar7 = uVar15;
          param_1[5] = uVar12;
          param_2[-2] = uVar18;
          *puVar13 = uVar17;
          param_2[-1] = uVar8;
          goto switchD_00a1c36c_caseD_0;
        }
      }
      break;
    case 4:
      FUN_00a1c120(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      break;
    case 5:
      puVar7 = param_1 + 3;
      puVar13 = param_1 + 6;
      puVar1 = param_1 + 9;
      FUN_00a1c120(param_1,puVar7,puVar13,puVar1);
      if (*(float *)(param_2 + -1) < *(float *)(param_1 + 0xb)) {
        uVar15 = param_2[-3];
        uVar12 = param_2[-1];
        uVar18 = param_1[10];
        uVar17 = *puVar1;
        uVar8 = param_1[0xb];
        param_1[10] = param_2[-2];
        *puVar1 = uVar15;
        param_1[0xb] = uVar12;
        param_2[-2] = uVar18;
        param_2[-3] = uVar17;
        param_2[-1] = uVar8;
        if (*(float *)(param_1 + 0xb) < *(float *)(param_1 + 8)) {
          uVar12 = param_1[8];
          param_1[8] = param_1[0xb];
          param_1[0xb] = uVar12;
          uVar8 = param_1[7];
          uVar12 = *puVar13;
          param_1[7] = param_1[10];
          *puVar13 = *puVar1;
          param_1[10] = uVar8;
          *puVar1 = uVar12;
          if (*(float *)(param_1 + 8) < *(float *)(param_1 + 5)) {
            uVar12 = param_1[5];
            param_1[5] = param_1[8];
            param_1[8] = uVar12;
            uVar8 = param_1[4];
            uVar12 = *puVar7;
            param_1[4] = param_1[7];
            *puVar7 = *puVar13;
            param_1[7] = uVar8;
            *puVar13 = uVar12;
            if (*(float *)(param_1 + 5) < *(float *)(param_1 + 2)) {
              bVar5 = true;
              uVar15 = param_1[1];
              uVar8 = *param_1;
              uVar12 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar7;
              param_1[2] = param_1[5];
              param_1[4] = uVar15;
              *puVar7 = uVar8;
              param_1[5] = uVar12;
              goto switchD_00a1c36c_caseD_0;
            }
          }
        }
      }
    }
  }
  else {
    fVar19 = *(float *)(param_1 + 5);
    puVar7 = param_1 + 6;
    puVar13 = param_1 + 3;
    fVar16 = *(float *)(param_1 + 8);
    if (*(float *)(param_1 + 2) <= fVar19) {
      if (fVar16 < fVar19) {
        uVar12 = param_1[5];
        param_1[5] = param_1[8];
        uVar15 = param_1[4];
        uVar8 = *puVar13;
        param_1[8] = uVar12;
        param_1[4] = param_1[7];
        *puVar13 = *puVar7;
        param_1[7] = uVar15;
        *puVar7 = uVar8;
        if (*(float *)(param_1 + 5) < *(float *)(param_1 + 2)) {
          uVar15 = param_1[1];
          uVar8 = *param_1;
          uVar12 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = *puVar13;
          param_1[2] = param_1[5];
          param_1[4] = uVar15;
          *puVar13 = uVar8;
          param_1[5] = uVar12;
        }
      }
    }
    else if (fVar19 <= fVar16) {
      uVar12 = param_1[5];
      param_1[5] = param_1[2];
      uVar15 = param_1[1];
      uVar8 = *param_1;
      param_1[2] = uVar12;
      param_1[1] = param_1[4];
      *param_1 = *puVar13;
      param_1[4] = uVar15;
      *puVar13 = uVar8;
      if (fVar16 < *(float *)(param_1 + 5)) {
        uVar15 = param_1[4];
        uVar8 = *puVar13;
        uVar12 = param_1[5];
        param_1[4] = param_1[7];
        *puVar13 = *puVar7;
        param_1[5] = param_1[8];
        param_1[7] = uVar15;
        *puVar7 = uVar8;
        param_1[8] = uVar12;
      }
    }
    else {
      uVar15 = param_1[1];
      uVar8 = *param_1;
      uVar12 = param_1[2];
      param_1[1] = param_1[7];
      *param_1 = *puVar7;
      param_1[2] = param_1[8];
      param_1[7] = uVar15;
      *puVar7 = uVar8;
      param_1[8] = uVar12;
    }
    if (param_1 + 9 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar13 = param_1 + 9;
      do {
        fVar16 = *(float *)(puVar13 + 2);
        if (fVar16 < *(float *)(puVar7 + 2)) {
          uVar8 = puVar13[1];
          uVar12 = *puVar13;
          uVar2 = *(undefined4 *)((long)puVar13 + 0x14);
          lVar4 = lVar9;
          do {
            lVar14 = lVar4;
            *(undefined8 *)((long)param_1 + lVar14 + 0x50) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x38);
            *(undefined8 *)((long)param_1 + lVar14 + 0x48) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x30);
            *(undefined8 *)((long)param_1 + lVar14 + 0x58) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x40);
            puVar7 = param_1;
            if (lVar14 == -0x30) goto LAB_00a1c6b4;
            lVar4 = lVar14 + -0x18;
          } while (fVar16 < *(float *)((long)param_1 + lVar14 + 0x28));
          puVar7 = (undefined8 *)((long)param_1 + lVar14 + 0x30);
LAB_00a1c6b4:
          iVar10 = iVar10 + 1;
          *(float *)(puVar7 + 2) = fVar16;
          *(undefined4 *)((long)puVar7 + 0x14) = uVar2;
          puVar7[1] = uVar8;
          *puVar7 = uVar12;
          if (iVar10 == 8) {
            bVar5 = puVar13 + 3 == param_2;
            goto switchD_00a1c36c_caseD_0;
          }
        }
        puVar1 = puVar13 + 3;
        lVar9 = lVar9 + 0x18;
        puVar7 = puVar13;
        puVar13 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  bVar5 = true;
switchD_00a1c36c_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


