// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00740638
// Entry Point: 00740638
// Size: 656 bytes
// Signature: undefined FUN_00740638(void)


void FUN_00740638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uStack_69;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined uStack_5d;
  undefined7 uStack_5c;
  
  lVar6 = (long)param_2 - (long)param_1 >> 2;
  lVar2 = tpidr_el0;
  lVar9 = *(long *)(lVar2 + 0x28);
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x007406a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_007406a4 + (ulong)*(ushort *)(&DAT_005177f0 + lVar6 * -0x2492492492492492) * 4))
              (1);
    return;
  }
  fVar16 = *(float *)((long)param_1 + 0x24);
  puVar7 = param_1 + 7;
  puVar10 = (undefined8 *)((long)param_1 + 0x1c);
  fVar14 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 1) <= fVar16) {
    if (fVar14 < fVar16) {
      uVar15 = *(undefined8 *)((long)param_1 + 0x24);
      uVar11 = *puVar10;
      uVar17 = param_1[5];
      *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
      *puVar10 = *puVar7;
      *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_1 + 0x4b);
      *(undefined8 *)((long)param_1 + 0x27) = *(undefined8 *)((long)param_1 + 0x43);
      uStack_69._1_3_ = (undefined3)uVar15;
      uStack_5c = (undefined7)param_1[6];
      uStack_65._0_1_ = (undefined)((ulong)uVar15 >> 0x18);
      uStack_65._1_3_ = (undefined3)uVar17;
      uStack_61 = (undefined4)((ulong)uVar17 >> 0x18);
      uVar3 = uStack_61;
      uStack_5d = (undefined)((ulong)uVar17 >> 0x38);
      uStack_61._0_1_ = (undefined)((ulong)uVar17 >> 0x18);
      param_1[8] = CONCAT17((undefined)uStack_61,CONCAT43(uStack_65,uStack_69._1_3_));
      *puVar7 = uVar11;
      *(ulong *)((long)param_1 + 0x4b) = CONCAT71(uStack_5c,uStack_5d);
      *(ulong *)((long)param_1 + 0x43) = CONCAT44(uVar3,uStack_65);
      if (*(float *)((long)param_1 + 0x24) < *(float *)(param_1 + 1)) {
        uVar11 = *param_1;
        uVar15 = *(undefined8 *)((long)param_1 + 0xc);
        uStack_69._1_3_ = (undefined3)param_1[1];
        uStack_5c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
        uStack_65._0_1_ = (undefined)((ulong)param_1[1] >> 0x18);
        uStack_65._1_3_ = (undefined3)uVar15;
        uStack_61 = (undefined4)((ulong)uVar15 >> 0x18);
        uVar3 = uStack_61;
        uStack_5d = (undefined)((ulong)uVar15 >> 0x38);
        uStack_61._0_1_ = (undefined)((ulong)uVar15 >> 0x18);
        param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
        *param_1 = *puVar10;
        *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x2f);
        *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x27);
        *(ulong *)((long)param_1 + 0x24) =
             CONCAT17((undefined)uStack_61,CONCAT43(uStack_65,uStack_69._1_3_));
        *puVar10 = uVar11;
        *(ulong *)((long)param_1 + 0x2f) = CONCAT71(uStack_5c,uStack_5d);
        *(ulong *)((long)param_1 + 0x27) = CONCAT44(uVar3,uStack_65);
      }
    }
  }
  else {
    if (fVar16 <= fVar14) {
      uVar11 = *param_1;
      uVar15 = *(undefined8 *)((long)param_1 + 0xc);
      uStack_69._1_3_ = (undefined3)param_1[1];
      uStack_5c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_65._0_1_ = (undefined)((ulong)param_1[1] >> 0x18);
      uStack_65._1_3_ = (undefined3)uVar15;
      uStack_61 = (undefined4)((ulong)uVar15 >> 0x18);
      uVar3 = uStack_61;
      uStack_5d = (undefined)((ulong)uVar15 >> 0x38);
      uStack_61._0_1_ = (undefined)((ulong)uVar15 >> 0x18);
      param_1[1] = *(undefined8 *)((long)param_1 + 0x24);
      *param_1 = *puVar10;
      *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x2f);
      *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x27);
      *(ulong *)((long)param_1 + 0x24) =
           CONCAT17((undefined)uStack_61,CONCAT43(uStack_65,uStack_69._1_3_));
      *puVar10 = uVar11;
      *(ulong *)((long)param_1 + 0x2f) = CONCAT71(uStack_5c,uStack_5d);
      *(ulong *)((long)param_1 + 0x27) = CONCAT44(uVar3,uStack_65);
      if (*(float *)((long)param_1 + 0x24) <= fVar14) goto LAB_00740aac;
      uVar13 = *puVar10;
      uVar11 = param_1[5];
      uStack_69._1_3_ = (undefined3)*(undefined8 *)((long)param_1 + 0x24);
      uStack_5c = (undefined7)param_1[6];
      uStack_65._0_1_ = (undefined)((ulong)*(undefined8 *)((long)param_1 + 0x24) >> 0x18);
      uStack_65._1_3_ = (undefined3)uVar11;
      uStack_61 = (undefined4)((ulong)uVar11 >> 0x18);
      uVar3 = uStack_61;
      uStack_5d = (undefined)((ulong)uVar11 >> 0x38);
      uStack_61._0_1_ = (undefined)((ulong)uVar11 >> 0x18);
      uVar11 = CONCAT17((undefined)uStack_61,CONCAT43(uStack_65,uStack_69._1_3_));
      *(undefined8 *)((long)param_1 + 0x24) = param_1[8];
      *puVar10 = *puVar7;
      uVar17 = CONCAT71(uStack_5c,uStack_5d);
      uVar15 = CONCAT44(uVar3,uStack_65);
      *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_1 + 0x4b);
      *(undefined8 *)((long)param_1 + 0x27) = *(undefined8 *)((long)param_1 + 0x43);
    }
    else {
      uVar13 = *param_1;
      uVar11 = *(undefined8 *)((long)param_1 + 0xc);
      uStack_69._1_3_ = (undefined3)param_1[1];
      uStack_5c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_65._0_1_ = (undefined)((ulong)param_1[1] >> 0x18);
      uStack_65._1_3_ = (undefined3)uVar11;
      uStack_61 = (undefined4)((ulong)uVar11 >> 0x18);
      uVar3 = uStack_61;
      uStack_5d = (undefined)((ulong)uVar11 >> 0x38);
      uStack_61._0_1_ = (undefined)((ulong)uVar11 >> 0x18);
      uVar11 = CONCAT17((undefined)uStack_61,CONCAT43(uStack_65,uStack_69._1_3_));
      param_1[1] = param_1[8];
      *param_1 = *puVar7;
      uVar17 = CONCAT71(uStack_5c,uStack_5d);
      uVar15 = CONCAT44(uVar3,uStack_65);
      *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_1 + 0x4b);
      *(undefined8 *)((long)param_1 + 0xb) = *(undefined8 *)((long)param_1 + 0x43);
    }
    param_1[8] = uVar11;
    *puVar7 = uVar13;
    *(undefined8 *)((long)param_1 + 0x4b) = uVar17;
    *(undefined8 *)((long)param_1 + 0x43) = uVar15;
  }
LAB_00740aac:
  if ((undefined8 *)((long)param_1 + 0x54) != param_2) {
    lVar6 = 0;
    iVar8 = 0;
    puVar10 = (undefined8 *)((long)param_1 + 0x54);
    do {
      fVar14 = *(float *)(puVar10 + 1);
      if (fVar14 < *(float *)(puVar7 + 1)) {
        uVar15 = *(undefined8 *)((long)puVar10 + 0xc);
        uVar11 = *puVar10;
        uStack_69._1_3_ = (undefined3)*(undefined8 *)((long)puVar10 + 0x14);
        uStack_65 = (undefined4)((ulong)*(undefined8 *)((long)puVar10 + 0x14) >> 0x18);
        lVar4 = lVar6;
        do {
          lVar12 = lVar4;
          *(undefined8 *)((long)param_1 + lVar12 + 0x5c) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x40);
          *(undefined8 *)((long)param_1 + lVar12 + 0x54) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x38);
          *(undefined8 *)((long)param_1 + lVar12 + 0x67) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x4b);
          *(undefined8 *)((long)param_1 + lVar12 + 0x5f) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x43);
          puVar7 = param_1;
          if (lVar12 == -0x38) goto LAB_00740ac8;
          lVar4 = lVar12 + -0x1c;
        } while (fVar14 < *(float *)((long)param_1 + lVar12 + 0x24));
        puVar7 = (undefined8 *)((long)param_1 + lVar12 + 0x38);
LAB_00740ac8:
        *puVar7 = uVar11;
        iVar8 = iVar8 + 1;
        *(float *)(puVar7 + 1) = fVar14;
        *(undefined8 *)((long)puVar7 + 0xc) = uVar15;
        *(ulong *)((long)puVar7 + 0x13) = CONCAT44(uStack_65,uStack_69);
        if (iVar8 == 8) {
          bVar5 = (undefined8 *)((long)puVar10 + 0x1c) == param_2;
          goto LAB_00740b60;
        }
      }
      puVar1 = (undefined8 *)((long)puVar10 + 0x1c);
      lVar6 = lVar6 + 0x1c;
      puVar7 = puVar10;
      puVar10 = puVar1;
    } while (puVar1 != param_2);
  }
  bVar5 = true;
LAB_00740b60:
  if (*(long *)(lVar2 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


