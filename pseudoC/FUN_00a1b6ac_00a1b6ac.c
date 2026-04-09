// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a1b6ac
// Entry Point: 00a1b6ac
// Size: 2024 bytes
// Signature: undefined FUN_00a1b6ac(void)


void FUN_00a1b6ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
LAB_00a1b6f4:
  puVar15 = param_2 + -3;
  puVar11 = param_1;
LAB_00a1b6fc:
  param_1 = puVar11;
  uVar7 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar7 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00a1bca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00a1bca8 +
              (ulong)*(ushort *)(&DAT_0051d596 + ((long)uVar7 >> 3) * 0x5555555555555556) * 4))();
    return;
  }
  if ((long)uVar7 < 0x2e8) {
    fVar24 = *(float *)(param_1 + 5);
    puVar11 = param_1 + 6;
    puVar15 = param_1 + 3;
    fVar23 = *(float *)(param_1 + 8);
    if (*(float *)(param_1 + 2) <= fVar24) {
      if (fVar23 < fVar24) {
        uVar8 = param_1[5];
        param_1[5] = param_1[8];
        uVar20 = param_1[4];
        uVar19 = *puVar15;
        param_1[8] = uVar8;
        param_1[4] = param_1[7];
        *puVar15 = *puVar11;
        param_1[7] = uVar20;
        *puVar11 = uVar19;
        if (*(float *)(param_1 + 5) < *(float *)(param_1 + 2)) {
          uVar8 = param_1[2];
          uVar20 = param_1[1];
          uVar19 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = *puVar15;
          param_1[2] = param_1[5];
          param_1[4] = uVar20;
          *puVar15 = uVar19;
          param_1[5] = uVar8;
        }
      }
    }
    else if (fVar24 <= fVar23) {
      uVar8 = param_1[2];
      uVar20 = param_1[1];
      uVar19 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = *puVar15;
      param_1[2] = param_1[5];
      param_1[5] = uVar8;
      param_1[4] = uVar20;
      *puVar15 = uVar19;
      if (fVar23 < *(float *)(param_1 + 5)) {
        uVar20 = param_1[4];
        uVar19 = *puVar15;
        uVar8 = param_1[5];
        param_1[4] = param_1[7];
        *puVar15 = *puVar11;
        param_1[5] = param_1[8];
        param_1[7] = uVar20;
        *puVar11 = uVar19;
        param_1[8] = uVar8;
      }
    }
    else {
      uVar8 = param_1[2];
      uVar20 = param_1[1];
      uVar19 = *param_1;
      param_1[1] = param_1[7];
      *param_1 = *puVar11;
      param_1[2] = param_1[8];
      param_1[7] = uVar20;
      *puVar11 = uVar19;
      param_1[8] = uVar8;
    }
    if (param_1 + 9 == param_2) goto LAB_00a1c0e8;
    lVar14 = 0;
    puVar15 = param_1 + 9;
    goto LAB_00a1c088;
  }
  if (uVar7 < 0x5da9) {
    puVar11 = param_1 + (ulong)(((uint)uVar7 & 0xffff) / 0x30) * 3;
    puVar10 = puVar11 + 2;
    fVar23 = *(float *)puVar10;
    if (*(float *)(param_1 + 2) <= fVar23) {
      if (fVar23 <= *(float *)(param_2 + -1)) {
        iVar5 = 0;
      }
      else {
        uVar8 = puVar11[2];
        uVar21 = puVar11[1];
        uVar19 = *puVar11;
        uVar22 = param_2[-2];
        uVar20 = *puVar15;
        puVar11[2] = param_2[-1];
        puVar11[1] = uVar22;
        *puVar11 = uVar20;
        param_2[-1] = uVar8;
        param_2[-2] = uVar21;
        *puVar15 = uVar19;
        if (*(float *)(param_1 + 2) <= *(float *)puVar10) goto LAB_00a1b9e4;
        uVar8 = param_1[2];
        iVar5 = 2;
        uVar21 = param_1[1];
        uVar19 = *param_1;
        uVar22 = puVar11[1];
        uVar20 = *puVar11;
        param_1[2] = puVar11[2];
        param_1[1] = uVar22;
        *param_1 = uVar20;
        puVar11[2] = uVar8;
        puVar11[1] = uVar21;
        *puVar11 = uVar19;
      }
    }
    else {
      if (fVar23 <= *(float *)(param_2 + -1)) {
        uVar8 = param_1[2];
        uVar21 = param_1[1];
        uVar19 = *param_1;
        uVar22 = puVar11[1];
        uVar20 = *puVar11;
        param_1[2] = puVar11[2];
        param_1[1] = uVar22;
        *param_1 = uVar20;
        puVar11[2] = uVar8;
        puVar11[1] = uVar21;
        *puVar11 = uVar19;
        if (*(float *)puVar10 <= *(float *)(param_2 + -1)) {
LAB_00a1b9e4:
          iVar5 = 1;
          goto LAB_00a1b9fc;
        }
        local_80 = puVar11[2];
        iVar5 = 2;
        uStack_88 = puVar11[1];
        local_90 = *puVar11;
        uVar19 = param_2[-2];
        uVar8 = *puVar15;
        puVar11[2] = param_2[-1];
        puVar11[1] = uVar19;
        *puVar11 = uVar8;
      }
      else {
        local_80 = param_1[2];
        iVar5 = 1;
        uStack_88 = param_1[1];
        local_90 = *param_1;
        uVar19 = param_2[-2];
        uVar8 = *puVar15;
        param_1[2] = param_2[-1];
        param_1[1] = uVar19;
        *param_1 = uVar8;
      }
      param_2[-1] = local_80;
      param_2[-2] = uStack_88;
      *puVar15 = local_90;
    }
  }
  else {
    uVar18 = uVar7 / 0x60;
    puVar11 = param_1 + (uVar7 / 0x30) * 3;
    puVar10 = param_1 + uVar18 * 3;
    puVar12 = puVar11 + uVar18 * 3;
    iVar5 = FUN_00a1c120(param_1,puVar10,puVar11,puVar12);
    if (*(float *)(param_2 + -1) < *(float *)(puVar12 + 2)) {
      uVar8 = puVar12[2];
      uVar21 = puVar12[1];
      uVar19 = *puVar12;
      uVar22 = param_2[-2];
      uVar20 = *puVar15;
      puVar12[2] = param_2[-1];
      puVar12[1] = uVar22;
      *puVar12 = uVar20;
      param_2[-1] = uVar8;
      param_2[-2] = uVar21;
      *puVar15 = uVar19;
      if (*(float *)(param_1 + (uVar7 / 0x30) * 3 + 2) <= *(float *)(puVar12 + 2)) {
        iVar5 = iVar5 + 1;
      }
      else {
        uVar8 = puVar11[2];
        uVar21 = puVar11[1];
        uVar19 = *puVar11;
        uVar22 = puVar12[1];
        uVar20 = *puVar12;
        puVar11[2] = puVar12[2];
        puVar11[1] = uVar22;
        *puVar11 = uVar20;
        puVar12[2] = uVar8;
        fVar23 = *(float *)(param_1 + (uVar7 / 0x30) * 3 + 2);
        puVar12[1] = uVar21;
        *puVar12 = uVar19;
        if (*(float *)(param_1 + uVar18 * 3 + 2) <= fVar23) {
          iVar5 = iVar5 + 2;
        }
        else {
          uVar8 = puVar10[2];
          uVar21 = puVar10[1];
          uVar19 = *puVar10;
          uVar22 = puVar11[1];
          uVar20 = *puVar11;
          puVar10[2] = puVar11[2];
          puVar10[1] = uVar22;
          *puVar10 = uVar20;
          puVar11[2] = uVar8;
          fVar23 = *(float *)(param_1 + uVar18 * 3 + 2);
          puVar11[1] = uVar21;
          *puVar11 = uVar19;
          if (*(float *)(param_1 + 2) <= fVar23) {
            iVar5 = iVar5 + 3;
          }
          else {
            uVar8 = param_1[2];
            iVar5 = iVar5 + 4;
            uVar21 = param_1[1];
            uVar19 = *param_1;
            uVar22 = puVar10[1];
            uVar20 = *puVar10;
            param_1[2] = puVar10[2];
            param_1[1] = uVar22;
            *param_1 = uVar20;
            puVar10[2] = uVar8;
            puVar10[1] = uVar21;
            *puVar10 = uVar19;
          }
        }
      }
    }
  }
LAB_00a1b9fc:
  fVar23 = *(float *)(param_1 + 2);
  puVar10 = puVar15;
  if (*(float *)(puVar11 + 2) <= fVar23) {
    do {
      puVar12 = puVar10;
      puVar10 = puVar12 + -3;
      if (puVar10 == param_1) {
        puVar10 = param_1 + 3;
        puVar11 = puVar10;
        if (*(float *)(param_2 + -1) <= fVar23) goto joined_r0x00a1bbac;
        goto LAB_00a1bbfc;
      }
    } while (*(float *)(puVar11 + 2) <= *(float *)(puVar12 + -1));
    uVar8 = param_1[2];
    iVar5 = iVar5 + 1;
    uVar21 = param_1[1];
    uVar19 = *param_1;
    uVar22 = puVar12[-2];
    uVar20 = *puVar10;
    param_1[2] = puVar12[-1];
    param_1[1] = uVar22;
    *param_1 = uVar20;
    puVar12[-1] = uVar8;
    puVar12[-2] = uVar21;
    *puVar10 = uVar19;
  }
  puVar12 = param_1 + 3;
  puVar17 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar12 = puVar17 + -3;
      do {
        puVar13 = puVar12;
        puVar12 = puVar13 + 3;
      } while (*(float *)(puVar13 + 5) < *(float *)(puVar11 + 2));
      puVar17 = puVar13 + 6;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + -3;
      } while (*(float *)(puVar11 + 2) <= *(float *)(puVar9 + -1));
      if (puVar10 < puVar12) break;
      uVar8 = puVar13[5];
      uVar20 = puVar13[4];
      uVar19 = *puVar12;
      iVar5 = iVar5 + 1;
      puVar1 = puVar10;
      if (puVar12 != puVar11) {
        puVar1 = puVar11;
      }
      uVar22 = puVar9[-2];
      uVar21 = *puVar10;
      puVar13[5] = puVar9[-1];
      puVar13[4] = uVar22;
      *puVar12 = uVar21;
      puVar9[-1] = uVar8;
      puVar9[-2] = uVar20;
      *puVar10 = uVar19;
      puVar11 = puVar1;
    }
  }
  if ((puVar12 != puVar11) && (*(float *)(puVar11 + 2) < *(float *)(puVar12 + 2))) {
    uVar8 = puVar12[2];
    iVar5 = iVar5 + 1;
    uVar21 = puVar12[1];
    uVar19 = *puVar12;
    uVar22 = puVar11[1];
    uVar20 = *puVar11;
    puVar12[2] = puVar11[2];
    puVar12[1] = uVar22;
    *puVar12 = uVar20;
    puVar11[2] = uVar8;
    puVar11[1] = uVar21;
    *puVar11 = uVar19;
  }
  if (iVar5 == 0) {
    uVar7 = FUN_00a1c308(param_1,puVar12);
    uVar18 = FUN_00a1c308(puVar12 + 3,param_2);
    if ((uVar18 & 1) != 0) goto LAB_00a1bc84;
    puVar11 = puVar12 + 3;
    if ((uVar7 & 1) != 0) goto LAB_00a1b6fc;
  }
  if (((long)param_2 - (long)puVar12 >> 3) * -0x5555555555555555 <=
      ((long)puVar12 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_00a1b6ac(puVar12 + 3,param_2);
    param_2 = puVar12;
    goto LAB_00a1b6f4;
  }
  FUN_00a1b6ac(param_1,puVar12);
  puVar11 = puVar12 + 3;
  goto LAB_00a1b6fc;
joined_r0x00a1bbac:
  if (puVar11 == puVar15) goto LAB_00a1c0e8;
  if (fVar23 < *(float *)(puVar11 + 2)) goto LAB_00a1bbcc;
  puVar11 = puVar11 + 3;
  goto joined_r0x00a1bbac;
LAB_00a1bbcc:
  uVar8 = puVar11[2];
  uVar21 = puVar11[1];
  uVar19 = *puVar11;
  uVar22 = param_2[-2];
  uVar20 = *puVar15;
  puVar11[2] = param_2[-1];
  puVar10 = puVar11 + 3;
  puVar11[1] = uVar22;
  *puVar11 = uVar20;
  param_2[-1] = uVar8;
  param_2[-2] = uVar21;
  *puVar15 = uVar19;
LAB_00a1bbfc:
  puVar12 = puVar15;
  if (puVar10 == puVar15) goto LAB_00a1c0e8;
  while( true ) {
    puVar11 = puVar10 + -3;
    do {
      puVar17 = puVar11;
      puVar11 = puVar17 + 3;
    } while (*(float *)(puVar17 + 5) <= *(float *)(param_1 + 2));
    puVar10 = puVar17 + 6;
    do {
      puVar13 = puVar12;
      puVar12 = puVar13 + -3;
    } while (*(float *)(param_1 + 2) < *(float *)(puVar13 + -1));
    if (puVar12 <= puVar11) break;
    uVar8 = puVar17[5];
    uVar21 = puVar17[4];
    uVar19 = *puVar11;
    uVar22 = puVar13[-2];
    uVar20 = *puVar12;
    puVar17[5] = puVar13[-1];
    puVar17[4] = uVar22;
    *puVar11 = uVar20;
    puVar13[-1] = uVar8;
    puVar13[-2] = uVar21;
    *puVar12 = uVar19;
  }
  goto LAB_00a1b6fc;
LAB_00a1bc84:
  param_2 = puVar12;
  if ((uVar7 & 1) != 0) goto LAB_00a1c0e8;
  goto LAB_00a1b6f4;
LAB_00a1c088:
  do {
    fVar23 = *(float *)(puVar15 + 2);
    if (fVar23 < *(float *)(puVar11 + 2)) {
      uVar19 = puVar15[1];
      uVar8 = *puVar15;
      uVar2 = *(undefined4 *)((long)puVar15 + 0x14);
      lVar4 = lVar14;
      do {
        lVar16 = lVar4;
        *(undefined8 *)((long)param_1 + lVar16 + 0x50) =
             *(undefined8 *)((long)param_1 + lVar16 + 0x38);
        *(undefined8 *)((long)param_1 + lVar16 + 0x48) =
             *(undefined8 *)((long)param_1 + lVar16 + 0x30);
        *(undefined8 *)((long)param_1 + lVar16 + 0x58) =
             *(undefined8 *)((long)param_1 + lVar16 + 0x40);
        puVar11 = param_1;
        if (lVar16 == -0x30) goto LAB_00a1c068;
        lVar4 = lVar16 + -0x18;
      } while (fVar23 < *(float *)((long)param_1 + lVar16 + 0x28));
      puVar11 = (undefined8 *)((long)param_1 + lVar16 + 0x30);
LAB_00a1c068:
      *(float *)(puVar11 + 2) = fVar23;
      *(undefined4 *)((long)puVar11 + 0x14) = uVar2;
      puVar11[1] = uVar19;
      *puVar11 = uVar8;
    }
    puVar10 = puVar15 + 3;
    lVar14 = lVar14 + 0x18;
    puVar11 = puVar15;
    puVar15 = puVar10;
  } while (puVar10 != param_2);
LAB_00a1c0e8:
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


