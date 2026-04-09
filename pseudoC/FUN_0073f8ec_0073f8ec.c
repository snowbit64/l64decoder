// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073f8ec
// Entry Point: 0073f8ec
// Size: 2088 bytes
// Signature: undefined FUN_0073f8ec(void)


void FUN_0073f8ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined7 local_90;
  undefined4 uStack_89;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined uStack_7d;
  undefined7 uStack_7c;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
LAB_0073f93c:
  puVar18 = (undefined8 *)((long)param_2 - 0x1c);
  puVar19 = param_1;
LAB_0073f944:
  param_1 = puVar19;
  uVar8 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar8 >> 2) * 0x6db6db6db6db6db7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0073fefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0073ff00 +
              (ulong)*(ushort *)(&DAT_005177e4 + ((long)uVar8 >> 2) * -0x2492492492492492) * 4))();
    return;
  }
  if ((long)uVar8 < 0x364) {
    fVar26 = *(float *)((long)param_1 + 0x24);
    puVar19 = param_1 + 7;
    puVar18 = (undefined8 *)((long)param_1 + 0x1c);
    fVar21 = *(float *)(param_1 + 8);
    if (*(float *)(param_1 + 1) <= fVar26) {
      if (fVar21 < fVar26) {
        uVar23 = *(undefined8 *)((long)param_1 + 0x24);
        uVar16 = *puVar18;
        uVar22 = param_1[5];
        *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
        *puVar18 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_1 + 0x4b);
        *(undefined8 *)((long)param_1 + 0x27) = *(undefined8 *)((long)param_1 + 0x43);
        uStack_89._1_3_ = (undefined3)uVar23;
        uStack_7c = (undefined7)param_1[6];
        uStack_85._0_1_ = (undefined)((ulong)uVar23 >> 0x18);
        uStack_85._1_3_ = (undefined3)uVar22;
        uStack_81 = (undefined4)((ulong)uVar22 >> 0x18);
        uVar3 = uStack_81;
        uStack_7d = (undefined)((ulong)uVar22 >> 0x38);
        uStack_81._0_1_ = (undefined)((ulong)uVar22 >> 0x18);
        param_1[8] = CONCAT17((undefined)uStack_81,CONCAT43(uStack_85,uStack_89._1_3_));
        *puVar19 = uVar16;
        *(ulong *)((long)param_1 + 0x4b) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)param_1 + 0x43) = CONCAT44(uVar3,uStack_85);
        if (*(float *)((long)param_1 + 0x24) < *(float *)(param_1 + 1)) {
          uVar23 = param_1[1];
          uVar16 = *param_1;
          uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
          uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
          uStack_85 = (undefined4)((ulong)uVar23 >> 0x18);
          uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
          uStack_81._0_1_ = (undefined)((ulong)uVar23 >> 0x38);
          param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
          *param_1 = *puVar18;
          *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x2f);
          *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x27);
          *(undefined8 *)((long)param_1 + 0x24) = uVar23;
          *puVar18 = uVar16;
          *(ulong *)((long)param_1 + 0x2f) = CONCAT71(uStack_7c,uStack_7d);
          *(ulong *)((long)param_1 + 0x27) = CONCAT44(uStack_81,uStack_85);
        }
      }
    }
    else if (fVar26 <= fVar21) {
      uVar23 = param_1[1];
      uVar16 = *param_1;
      uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
      uStack_85 = (undefined4)((ulong)uVar23 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
      uStack_81._0_1_ = (undefined)((ulong)uVar23 >> 0x38);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      *param_1 = *puVar18;
      *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x2f);
      *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x27);
      *(undefined8 *)((long)param_1 + 0x24) = uVar23;
      *puVar18 = uVar16;
      *(ulong *)((long)param_1 + 0x2f) = CONCAT71(uStack_7c,uStack_7d);
      *(ulong *)((long)param_1 + 0x27) = CONCAT44(uStack_81,uStack_85);
      if (fVar21 < *(float *)((long)param_1 + 0x24)) {
        uVar16 = *puVar18;
        uVar23 = param_1[5];
        uStack_89._1_3_ = (undefined3)*(undefined8 *)((long)param_1 + 0x24);
        uStack_7c = (undefined7)param_1[6];
        uStack_85._0_1_ = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0x24) >> 0x18);
        uStack_85._1_3_ = (undefined3)uVar23;
        uStack_81 = (undefined4)((ulong)uVar23 >> 0x18);
        uVar3 = uStack_81;
        uStack_7d = (undefined)((ulong)uVar23 >> 0x38);
        uStack_81._0_1_ = (undefined)((ulong)uVar23 >> 0x18);
        *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
        *puVar18 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_1 + 0x4b);
        *(undefined8 *)((long)param_1 + 0x27) = *(undefined8 *)((long)param_1 + 0x43);
        param_1[8] = CONCAT17((undefined)uStack_81,CONCAT43(uStack_85,uStack_89._1_3_));
        *puVar19 = uVar16;
        *(ulong *)((long)param_1 + 0x4b) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)param_1 + 0x43) = CONCAT44(uVar3,uStack_85);
      }
    }
    else {
      uVar23 = param_1[1];
      uVar16 = *param_1;
      uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
      uStack_85 = (undefined4)((ulong)uVar23 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
      uStack_81._0_1_ = (undefined)((ulong)uVar23 >> 0x38);
      param_1[1] = param_1[8];
      *param_1 = *puVar19;
      *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x4b);
      *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x43);
      param_1[8] = uVar23;
      *puVar19 = uVar16;
      *(ulong *)((long)param_1 + 0x4b) = CONCAT71(uStack_7c,uStack_7d);
      *(ulong *)((long)param_1 + 0x43) = CONCAT44(uStack_81,uStack_85);
    }
    if ((undefined8 *)((long)param_1 + 0x54U) == param_2) goto LAB_007403a0;
    lVar9 = 0;
    puVar18 = (undefined8 *)((long)param_1 + 0x54U);
    goto LAB_00740340;
  }
  if (uVar8 < 0x6d45) {
    puVar19 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 >> 3 & 0x1fff) / 7) * 0x1c);
    puVar12 = puVar19 + 1;
    fVar21 = *(float *)puVar12;
    if (*(float *)(param_1 + 1) <= fVar21) {
      if (fVar21 <= *(float *)((long)param_2 - 0x14)) {
        iVar5 = 0;
      }
      else {
        uVar24 = puVar19[1];
        uVar23 = *puVar19;
        uStack_7c = (undefined7)*(undefined8 *)((long)puVar19 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x38);
        uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
        uVar16 = *(undefined8 *)((long)param_2 - 0x11);
        uVar25 = *(undefined8 *)((long)param_2 - 0x14);
        uVar22 = *puVar18;
        *(undefined8 *)((long)puVar19 + 0x13) = *(undefined8 *)((long)param_2 - 9);
        *(undefined8 *)((long)puVar19 + 0xb) = uVar16;
        puVar19[1] = uVar25;
        *puVar19 = uVar22;
        *(ulong *)((long)param_2 - 9) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)param_2 - 0x11) = CONCAT44(uStack_81,uStack_85);
        *(undefined8 *)((long)param_2 - 0x14) = uVar24;
        *puVar18 = uVar23;
        if (*(float *)(param_1 + 1) <= *(float *)puVar12) goto LAB_0073fc3c;
        iVar5 = 2;
        uVar24 = param_1[1];
        uVar23 = *param_1;
        uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
        uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
        uVar16 = *(undefined8 *)((long)puVar19 + 0xb);
        uVar25 = puVar19[1];
        uVar22 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)puVar19 + 0x13);
        *(undefined8 *)((long)param_1 + 0xb) = uVar16;
        param_1[1] = uVar25;
        *param_1 = uVar22;
        *(ulong *)((long)puVar19 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)puVar19 + 0xb) = CONCAT44(uStack_81,uStack_85);
        puVar19[1] = uVar24;
        *puVar19 = uVar23;
      }
    }
    else {
      if (fVar21 <= *(float *)((long)param_2 - 0x14)) {
        uVar24 = param_1[1];
        uVar23 = *param_1;
        uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
        uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
        uVar16 = *(undefined8 *)((long)puVar19 + 0xb);
        uVar25 = puVar19[1];
        uVar22 = *puVar19;
        *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)puVar19 + 0x13);
        *(undefined8 *)((long)param_1 + 0xb) = uVar16;
        param_1[1] = uVar25;
        *param_1 = uVar22;
        *(ulong *)((long)puVar19 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)puVar19 + 0xb) = CONCAT44(uStack_81,uStack_85);
        puVar19[1] = uVar24;
        *puVar19 = uVar23;
        if (*(float *)puVar12 <= *(float *)((long)param_2 - 0x14)) {
LAB_0073fc3c:
          iVar5 = 1;
          goto LAB_0073fc54;
        }
        iVar5 = 2;
        uVar16 = puVar19[1];
        uStack_7c = (undefined7)*(undefined8 *)((long)puVar19 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x38);
        uStack_89._1_3_ = (undefined3)uVar16;
        uStack_85 = (undefined4)((ulong)uVar16 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar16 >> 0x38);
        local_90 = (undefined7)*puVar19;
        uStack_89._0_1_ = (undefined)((ulong)*puVar19 >> 0x38);
        uVar16 = *(undefined8 *)((long)param_2 - 0x11);
        uVar22 = *(undefined8 *)((long)param_2 - 0x14);
        uVar23 = *puVar18;
        *(undefined8 *)((long)puVar19 + 0x13) = *(undefined8 *)((long)param_2 - 9);
        *(undefined8 *)((long)puVar19 + 0xb) = uVar16;
        puVar19[1] = uVar22;
        *puVar19 = uVar23;
      }
      else {
        iVar5 = 1;
        uVar16 = param_1[1];
        uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
        uStack_89._1_3_ = (undefined3)uVar16;
        uStack_85 = (undefined4)((ulong)uVar16 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar16 >> 0x38);
        local_90 = (undefined7)*param_1;
        uStack_89._0_1_ = (undefined)((ulong)*param_1 >> 0x38);
        uVar16 = *(undefined8 *)((long)param_2 - 0x11);
        uVar22 = *(undefined8 *)((long)param_2 - 0x14);
        uVar23 = *puVar18;
        *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_2 - 9);
        *(undefined8 *)((long)param_1 + 0xb) = uVar16;
        param_1[1] = uVar22;
        *param_1 = uVar23;
      }
      *(ulong *)((long)param_2 - 9) = CONCAT71(uStack_7c,uStack_7d);
      *(ulong *)((long)param_2 - 0x11) = CONCAT44(uStack_81,uStack_85);
      *(ulong *)((long)param_2 - 0x14) =
           CONCAT17((undefined)uStack_81,CONCAT43(uStack_85,uStack_89._1_3_));
      *puVar18 = CONCAT17((undefined)uStack_89,local_90);
    }
  }
  else {
    puVar19 = (undefined8 *)((long)param_1 + (uVar8 / 0x38) * 0x1c);
    lVar9 = (uVar8 / 0x70) * 0x1c;
    puVar12 = (undefined8 *)((long)param_1 + lVar9);
    puVar15 = (undefined8 *)((long)puVar19 + lVar9);
    iVar5 = FUN_007403d8(param_1,puVar12,puVar19,puVar15);
    if (*(float *)((long)param_2 - 0x14) < *(float *)(puVar15 + 1)) {
      uVar24 = puVar15[1];
      uVar23 = *puVar15;
      uStack_7c = (undefined7)*(undefined8 *)((long)puVar15 + 0x14);
      uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x38);
      uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20);
      uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
      uVar16 = *(undefined8 *)((long)param_2 - 0x11);
      uVar25 = *(undefined8 *)((long)param_2 - 0x14);
      uVar22 = *puVar18;
      *(undefined8 *)((long)puVar15 + 0x13) = *(undefined8 *)((long)param_2 - 9);
      *(undefined8 *)((long)puVar15 + 0xb) = uVar16;
      puVar15[1] = uVar25;
      *puVar15 = uVar22;
      *(ulong *)((long)param_2 - 9) = CONCAT71(uStack_7c,uStack_7d);
      *(ulong *)((long)param_2 - 0x11) = CONCAT44(uStack_81,uStack_85);
      *(undefined8 *)((long)param_2 - 0x14) = uVar24;
      *puVar18 = uVar23;
      pfVar10 = (float *)((long)param_1 + (uVar8 / 0x38) * 0x1c + 8);
      if (*pfVar10 <= *(float *)(puVar15 + 1)) {
        iVar5 = iVar5 + 1;
      }
      else {
        uVar24 = puVar19[1];
        uVar23 = *puVar19;
        uStack_7c = (undefined7)*(undefined8 *)((long)puVar19 + 0x14);
        uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x38);
        uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
        uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
        uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
        uVar16 = *(undefined8 *)((long)puVar15 + 0xb);
        uVar25 = puVar15[1];
        uVar22 = *puVar15;
        *(undefined8 *)((long)puVar19 + 0x13) = *(undefined8 *)((long)puVar15 + 0x13);
        *(undefined8 *)((long)puVar19 + 0xb) = uVar16;
        puVar19[1] = uVar25;
        *puVar19 = uVar22;
        *(ulong *)((long)puVar15 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
        *(ulong *)((long)puVar15 + 0xb) = CONCAT44(uStack_81,uStack_85);
        puVar15[1] = uVar24;
        *puVar15 = uVar23;
        pfVar13 = (float *)((long)param_1 + (uVar8 / 0x70) * 0x1c + 8);
        if (*pfVar13 <= *pfVar10) {
          iVar5 = iVar5 + 2;
        }
        else {
          uVar24 = puVar12[1];
          uVar23 = *puVar12;
          uStack_7c = (undefined7)*(undefined8 *)((long)puVar12 + 0x14);
          uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x38);
          uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
          uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20);
          uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
          uVar16 = *(undefined8 *)((long)puVar19 + 0xb);
          uVar25 = puVar19[1];
          uVar22 = *puVar19;
          *(undefined8 *)((long)puVar12 + 0x13) = *(undefined8 *)((long)puVar19 + 0x13);
          *(undefined8 *)((long)puVar12 + 0xb) = uVar16;
          puVar12[1] = uVar25;
          *puVar12 = uVar22;
          *(ulong *)((long)puVar19 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
          *(ulong *)((long)puVar19 + 0xb) = CONCAT44(uStack_81,uStack_85);
          puVar19[1] = uVar24;
          *puVar19 = uVar23;
          if (*(float *)(param_1 + 1) <= *pfVar13) {
            iVar5 = iVar5 + 3;
          }
          else {
            iVar5 = iVar5 + 4;
            uVar24 = param_1[1];
            uVar23 = *param_1;
            uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
            uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
            uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
            uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
            uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
            uVar16 = *(undefined8 *)((long)puVar12 + 0xb);
            uVar25 = puVar12[1];
            uVar22 = *puVar12;
            *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)puVar12 + 0x13);
            *(undefined8 *)((long)param_1 + 0xb) = uVar16;
            param_1[1] = uVar25;
            *param_1 = uVar22;
            *(ulong *)((long)puVar12 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
            *(ulong *)((long)puVar12 + 0xb) = CONCAT44(uStack_81,uStack_85);
            puVar12[1] = uVar24;
            *puVar12 = uVar23;
          }
        }
      }
    }
  }
LAB_0073fc54:
  fVar21 = *(float *)(param_1 + 1);
  puVar12 = puVar18;
  if (*(float *)(puVar19 + 1) <= fVar21) {
    do {
      puVar15 = puVar12;
      puVar12 = (undefined8 *)((long)puVar15 - 0x1c);
      if (puVar12 == param_1) {
        puVar12 = (undefined8 *)((long)param_1 + 0x1c);
        puVar19 = puVar12;
        if (*(float *)((long)param_2 - 0x14) <= fVar21) goto joined_r0x0073fe04;
        goto LAB_0073fe54;
      }
    } while (*(float *)(puVar19 + 1) <= *(float *)((long)puVar15 - 0x14));
    iVar5 = iVar5 + 1;
    uVar24 = param_1[1];
    uVar23 = *param_1;
    uStack_7c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
    uStack_7d = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x38);
    uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
    uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
    uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
    uVar16 = *(undefined8 *)((long)puVar15 - 0x11);
    uVar25 = *(undefined8 *)((long)puVar15 - 0x14);
    uVar22 = *puVar12;
    *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)puVar15 - 9);
    *(undefined8 *)((long)param_1 + 0xb) = uVar16;
    param_1[1] = uVar25;
    *param_1 = uVar22;
    *(ulong *)((long)puVar15 - 9) = CONCAT71(uStack_7c,uStack_7d);
    *(ulong *)((long)puVar15 - 0x11) = CONCAT44(uStack_81,uStack_85);
    *(undefined8 *)((long)puVar15 - 0x14) = uVar24;
    *puVar12 = uVar23;
  }
  puVar15 = (undefined8 *)((long)param_1 + 0x1c);
  puVar20 = puVar15;
  if (puVar15 < puVar12) {
    while( true ) {
      puVar15 = (undefined8 *)((long)puVar20 - 0x1c);
      do {
        puVar14 = puVar15;
        puVar15 = (undefined8 *)((long)puVar14 + 0x1c);
      } while (*(float *)((long)puVar14 + 0x24) < *(float *)(puVar19 + 1));
      puVar20 = puVar14 + 7;
      do {
        puVar11 = puVar12;
        puVar12 = (undefined8 *)((long)puVar11 + -0x1c);
      } while (*(float *)(puVar19 + 1) <= *(float *)((long)puVar11 + -0x14));
      if (puVar12 < puVar15) break;
      uVar23 = *(undefined8 *)((long)puVar14 + 0x24);
      uVar16 = *puVar15;
      iVar5 = iVar5 + 1;
      puVar1 = puVar12;
      if (puVar15 != puVar19) {
        puVar1 = puVar19;
      }
      uStack_7c = (undefined7)puVar14[6];
      uStack_7d = (undefined)((ulong)puVar14[5] >> 0x38);
      uStack_85 = (undefined4)((ulong)uVar23 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulong)puVar14[5] >> 0x20);
      uStack_81._0_1_ = (undefined)((ulong)uVar23 >> 0x38);
      uVar22 = *(undefined8 *)((long)puVar11 + -0x11);
      uVar25 = *(undefined8 *)((long)puVar11 + -0x14);
      uVar24 = *puVar12;
      *(undefined8 *)((long)puVar14 + 0x2f) = *(undefined8 *)((long)puVar11 + -9);
      *(undefined8 *)((long)puVar14 + 0x27) = uVar22;
      *(undefined8 *)((long)puVar14 + 0x24) = uVar25;
      *puVar15 = uVar24;
      *(ulong *)((long)puVar11 + -9) = CONCAT71(uStack_7c,uStack_7d);
      *(ulong *)((long)puVar11 + -0x11) = CONCAT44(uStack_81,uStack_85);
      *(undefined8 *)((long)puVar11 + -0x14) = uVar23;
      *puVar12 = uVar16;
      puVar19 = puVar1;
    }
  }
  if ((puVar15 != puVar19) && (*(float *)(puVar19 + 1) < *(float *)(puVar15 + 1))) {
    iVar5 = iVar5 + 1;
    uVar24 = puVar15[1];
    uVar23 = *puVar15;
    uStack_7c = (undefined7)*(undefined8 *)((long)puVar15 + 0x14);
    uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x38);
    uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
    uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20);
    uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
    uVar16 = *(undefined8 *)((long)puVar19 + 0xb);
    uVar25 = puVar19[1];
    uVar22 = *puVar19;
    *(undefined8 *)((long)puVar15 + 0x13) = *(undefined8 *)((long)puVar19 + 0x13);
    *(undefined8 *)((long)puVar15 + 0xb) = uVar16;
    puVar15[1] = uVar25;
    *puVar15 = uVar22;
    *(ulong *)((long)puVar19 + 0x13) = CONCAT71(uStack_7c,uStack_7d);
    *(ulong *)((long)puVar19 + 0xb) = CONCAT44(uStack_81,uStack_85);
    puVar19[1] = uVar24;
    *puVar19 = uVar23;
  }
  if (iVar5 == 0) {
    uVar8 = FUN_00740638(param_1,puVar15);
    uVar6 = FUN_00740638((undefined8 *)((long)puVar15 + 0x1cU),param_2);
    if ((uVar6 & 1) != 0) goto LAB_0073fedc;
    puVar19 = (undefined8 *)((long)puVar15 + 0x1cU);
    if ((uVar8 & 1) != 0) goto LAB_0073f944;
  }
  if (((long)param_2 - (long)puVar15 >> 2) * 0x6db6db6db6db6db7 <=
      ((long)puVar15 - (long)param_1 >> 2) * 0x6db6db6db6db6db7) {
    FUN_0073f8ec((long)puVar15 + 0x1c,param_2);
    param_2 = puVar15;
    goto LAB_0073f93c;
  }
  FUN_0073f8ec(param_1,puVar15);
  puVar19 = (undefined8 *)((long)puVar15 + 0x1c);
  goto LAB_0073f944;
joined_r0x0073fe04:
  if (puVar19 == puVar18) goto LAB_007403a0;
  if (fVar21 < *(float *)(puVar19 + 1)) goto LAB_0073fe24;
  puVar19 = (undefined8 *)((long)puVar19 + 0x1c);
  goto joined_r0x0073fe04;
LAB_0073fe24:
  uVar24 = puVar19[1];
  uVar23 = *puVar19;
  uStack_7c = (undefined7)*(undefined8 *)((long)puVar19 + 0x14);
  uStack_7d = (undefined)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x38);
  uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
  uStack_81._1_3_ = (undefined3)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
  uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
  uVar16 = *(undefined8 *)((long)param_2 - 0x11);
  uVar25 = *(undefined8 *)((long)param_2 - 0x14);
  uVar22 = *puVar18;
  *(undefined8 *)((long)puVar19 + 0x13) = *(undefined8 *)((long)param_2 - 9);
  *(undefined8 *)((long)puVar19 + 0xb) = uVar16;
  puVar12 = (undefined8 *)((long)puVar19 + 0x1c);
  puVar19[1] = uVar25;
  *puVar19 = uVar22;
  *(ulong *)((long)param_2 - 9) = CONCAT71(uStack_7c,uStack_7d);
  *(ulong *)((long)param_2 - 0x11) = CONCAT44(uStack_81,uStack_85);
  *(undefined8 *)((long)param_2 - 0x14) = uVar24;
  *puVar18 = uVar23;
LAB_0073fe54:
  puVar15 = puVar18;
  if (puVar12 == puVar18) goto LAB_007403a0;
  while( true ) {
    puVar19 = (undefined8 *)((long)puVar12 - 0x1c);
    do {
      puVar20 = puVar19;
      puVar19 = (undefined8 *)((long)puVar20 + 0x1c);
    } while (*(float *)((long)puVar20 + 0x24) <= *(float *)(param_1 + 1));
    puVar12 = puVar20 + 7;
    do {
      puVar14 = puVar15;
      puVar15 = (undefined8 *)((long)puVar14 - 0x1c);
    } while (*(float *)(param_1 + 1) < *(float *)((long)puVar14 - 0x14));
    if (puVar15 <= puVar19) break;
    uVar24 = *(undefined8 *)((long)puVar20 + 0x24);
    uVar23 = *puVar19;
    uStack_7c = (undefined7)puVar20[6];
    uStack_7d = (undefined)((ulong)puVar20[5] >> 0x38);
    uStack_85 = (undefined4)((ulong)uVar24 >> 0x18);
    uStack_81._1_3_ = (undefined3)((ulong)puVar20[5] >> 0x20);
    uStack_81._0_1_ = (undefined)((ulong)uVar24 >> 0x38);
    uVar16 = *(undefined8 *)((long)puVar14 - 0x11);
    uVar25 = *(undefined8 *)((long)puVar14 - 0x14);
    uVar22 = *puVar15;
    *(undefined8 *)((long)puVar20 + 0x2f) = *(undefined8 *)((long)puVar14 - 9);
    *(undefined8 *)((long)puVar20 + 0x27) = uVar16;
    *(undefined8 *)((long)puVar20 + 0x24) = uVar25;
    *puVar19 = uVar22;
    *(ulong *)((long)puVar14 - 9) = CONCAT71(uStack_7c,uStack_7d);
    *(ulong *)((long)puVar14 - 0x11) = CONCAT44(uStack_81,uStack_85);
    *(undefined8 *)((long)puVar14 - 0x14) = uVar24;
    *puVar15 = uVar23;
  }
  goto LAB_0073f944;
LAB_0073fedc:
  param_2 = puVar15;
  if ((uVar8 & 1) != 0) goto LAB_007403a0;
  goto LAB_0073f93c;
LAB_00740340:
  do {
    fVar21 = *(float *)(puVar18 + 1);
    if (fVar21 < *(float *)(puVar19 + 1)) {
      uVar23 = *(undefined8 *)((long)puVar18 + 0xc);
      uVar16 = *puVar18;
      uStack_89._1_3_ = (undefined3)*(undefined8 *)((long)puVar18 + 0x14);
      uStack_85 = (undefined4)((ulong)*(undefined8 *)((long)puVar18 + 0x14) >> 0x18);
      uStack_89._0_1_ = (undefined)((ulong)uVar23 >> 0x38);
      lVar4 = lVar9;
      do {
        lVar17 = lVar4;
        *(undefined8 *)((long)param_1 + lVar17 + 0x5c) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x40);
        *(undefined8 *)((long)param_1 + lVar17 + 0x54) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x38);
        *(undefined8 *)((long)param_1 + lVar17 + 0x67) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x4b);
        *(undefined8 *)((long)param_1 + lVar17 + 0x5f) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x43);
        puVar19 = param_1;
        if (lVar17 == -0x38) goto LAB_00740318;
        lVar4 = lVar17 + -0x1c;
      } while (fVar21 < *(float *)((long)param_1 + lVar17 + 0x24));
      puVar19 = (undefined8 *)((long)param_1 + lVar17 + 0x38);
LAB_00740318:
      *puVar19 = uVar16;
      *(float *)(puVar19 + 1) = fVar21;
      *(undefined8 *)((long)puVar19 + 0xc) = uVar23;
      *(ulong *)((long)puVar19 + 0x13) = CONCAT44(uStack_85,uStack_89);
    }
    puVar12 = (undefined8 *)((long)puVar18 + 0x1c);
    lVar9 = lVar9 + 0x1c;
    puVar19 = puVar18;
    puVar18 = puVar12;
  } while (puVar12 != param_2);
LAB_007403a0:
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


