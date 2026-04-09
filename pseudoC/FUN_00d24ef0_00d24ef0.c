// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d24ef0
// Entry Point: 00d24ef0
// Size: 2892 bytes
// Signature: undefined FUN_00d24ef0(void)


void FUN_00d24ef0(uint *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_7c;
  uint local_6c;
  undefined8 local_68;
  
  local_68 = 0;
  local_6c = 0;
  uVar19 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar11 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  local_7c = 0;
  piVar29 = &DAT_00545ce0;
  uVar30 = 0xfffffffffffffff0;
  uVar16 = param_1[5];
  uVar12 = *param_1;
  uVar20 = param_1[1];
  uVar18 = param_1[2];
  uVar17 = param_1[3];
  uVar32 = param_1[6];
  uVar31 = param_1[7];
  uVar15 = param_1[4];
  do {
    if (uVar30 == 0xfffffffffffffff0) {
      local_7c = *param_2;
LAB_00d2565c:
      uVar28 = param_2[1];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25668;
LAB_00d25530:
      uVar27 = ((uVar26 >> 7 | uVar26 << 0x19) ^ (uVar26 >> 0x12 | uVar26 << 0xe) ^ uVar26 >> 3) +
               uVar27 + local_68._4_4_ +
               ((local_7c >> 0x11 | local_7c << 0xf) ^ (local_7c >> 0x13 | local_7c << 0xd) ^
               local_7c >> 10);
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25564;
LAB_00d25674:
      uVar26 = param_2[3];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25680;
LAB_00d25594:
      uVar25 = ((uVar24 >> 7 | uVar24 << 0x19) ^ (uVar24 >> 0x12 | uVar24 << 0xe) ^ uVar24 >> 3) +
               uVar25 + uVar14 +
               ((uVar27 >> 0x11 | uVar27 << 0xf) ^ (uVar27 >> 0x13 | uVar27 << 0xd) ^ uVar27 >> 10);
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d255c4;
LAB_00d2568c:
      uVar24 = param_2[5];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25698;
LAB_00d255f4:
      uVar23 = ((uVar22 >> 7 | uVar22 << 0x19) ^ (uVar22 >> 0x12 | uVar22 << 0xe) ^ uVar22 >> 3) +
               uVar23 + uVar19 +
               ((uVar25 >> 0x11 | uVar25 << 0xf) ^ (uVar25 >> 0x13 | uVar25 << 0xd) ^ uVar25 >> 10);
    }
    else {
      local_7c = ((uVar28 >> 7 | uVar28 << 0x19) ^ (uVar28 >> 0x12 | uVar28 << 0xe) ^ uVar28 >> 3) +
                 local_7c + local_6c +
                 ((uVar13 >> 0x11 | uVar13 << 0xf) ^ (uVar13 >> 0x13 | uVar13 << 0xd) ^ uVar13 >> 10
                 );
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d2565c;
      uVar28 = ((uVar27 >> 7 | uVar27 << 0x19) ^ (uVar27 >> 0x12 | uVar27 << 0xe) ^ uVar27 >> 3) +
               uVar28 + (uint)local_68 +
               ((uVar19 >> 0x11 | uVar19 << 0xf) ^ (uVar19 >> 0x13 | uVar19 << 0xd) ^ uVar19 >> 10);
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25530;
LAB_00d25668:
      uVar27 = param_2[2];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25674;
LAB_00d25564:
      uVar26 = ((uVar25 >> 7 | uVar25 << 0x19) ^ (uVar25 >> 0x12 | uVar25 << 0xe) ^ uVar25 >> 3) +
               uVar26 + uVar11 +
               ((uVar28 >> 0x11 | uVar28 << 0xf) ^ (uVar28 >> 0x13 | uVar28 << 0xd) ^ uVar28 >> 10);
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25594;
LAB_00d25680:
      uVar25 = param_2[4];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d2568c;
LAB_00d255c4:
      uVar24 = ((uVar23 >> 7 | uVar23 << 0x19) ^ (uVar23 >> 0x12 | uVar23 << 0xe) ^ uVar23 >> 3) +
               uVar24 + uVar13 +
               ((uVar26 >> 0x11 | uVar26 << 0xf) ^ (uVar26 >> 0x13 | uVar26 << 0xd) ^ uVar26 >> 10);
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d255f4;
LAB_00d25698:
      uVar23 = param_2[6];
    }
    piVar1 = piVar29 + -8;
    piVar7 = piVar29 + -7;
    piVar2 = piVar29 + -6;
    piVar8 = piVar29 + -5;
    piVar3 = piVar29 + -4;
    piVar9 = piVar29 + -3;
    piVar4 = piVar29 + -2;
    piVar10 = piVar29 + -1;
    if (uVar30 == 0xfffffffffffffff0) {
      uVar22 = param_2[7];
      local_84 = *piVar29;
LAB_00d258d0:
      uVar21 = param_2[8];
      local_88 = piVar29[1];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d258e8;
LAB_00d25718:
      local_6c = (((uint)local_68 >> 7 | (uint)local_68 << 0x19) ^
                  ((uint)local_68 >> 0x12 | (uint)local_68 << 0xe) ^ (uint)local_68 >> 3) + local_6c
                 + uVar27 +
                 ((uVar22 >> 0x11 | uVar22 << 0xf) ^ (uVar22 >> 0x13 | uVar22 << 0xd) ^ uVar22 >> 10
                 );
      local_8c = piVar29[2];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d2575c;
LAB_00d25904:
      local_68._0_4_ = param_2[10];
      local_90 = piVar29[3];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25924;
LAB_00d257a0:
      local_68 = CONCAT44(((uVar11 >> 7 | uVar11 << 0x19) ^ (uVar11 >> 0x12 | uVar11 << 0xe) ^
                          uVar11 >> 3) + local_68._4_4_ + uVar25 +
                          ((local_6c >> 0x11 | local_6c << 0xf) ^
                           (local_6c >> 0x13 | local_6c << 0xd) ^ local_6c >> 10),(uint)local_68);
      local_98 = piVar29[4];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d257e4;
LAB_00d25940:
      uVar11 = param_2[0xc];
      local_9c = piVar29[5];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25954;
LAB_00d2581c:
      uVar14 = ((uVar13 >> 7 | uVar13 << 0x19) ^ (uVar13 >> 0x12 | uVar13 << 0xe) ^ uVar13 >> 3) +
               uVar14 + uVar23 +
               ((local_68._4_4_ >> 0x11 | local_68._4_4_ << 0xf) ^
                (local_68._4_4_ >> 0x13 | local_68._4_4_ << 0xd) ^ local_68._4_4_ >> 10);
      local_a0 = piVar29[6];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25858;
LAB_00d2596c:
      uVar13 = param_2[0xe];
      local_a4 = piVar29[7];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d24f90;
LAB_00d25980:
      uVar19 = ((local_7c >> 7 | local_7c << 0x19) ^ (local_7c >> 0x12 | local_7c << 0xe) ^
               local_7c >> 3) + uVar19 + uVar21 +
               ((uVar14 >> 0x11 | uVar14 << 0xf) ^ (uVar14 >> 0x13 | uVar14 << 0xd) ^ uVar14 >> 10);
    }
    else {
      uVar22 = ((uVar21 >> 7 | uVar21 << 0x19) ^ (uVar21 >> 0x12 | uVar21 << 0xe) ^ uVar21 >> 3) +
               uVar22 + local_7c +
               ((uVar24 >> 0x11 | uVar24 << 0xf) ^ (uVar24 >> 0x13 | uVar24 << 0xd) ^ uVar24 >> 10);
      local_84 = *piVar29;
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d258d0;
      uVar21 = ((local_6c >> 7 | local_6c << 0x19) ^ (local_6c >> 0x12 | local_6c << 0xe) ^
               local_6c >> 3) + uVar21 + uVar28 +
               ((uVar23 >> 0x11 | uVar23 << 0xf) ^ (uVar23 >> 0x13 | uVar23 << 0xd) ^ uVar23 >> 10);
      local_88 = piVar29[1];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25718;
LAB_00d258e8:
      local_6c = param_2[9];
      local_8c = piVar29[2];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25904;
LAB_00d2575c:
      local_68._0_4_ =
           ((local_68._4_4_ >> 7 | local_68._4_4_ << 0x19) ^
            (local_68._4_4_ >> 0x12 | local_68._4_4_ << 0xe) ^ local_68._4_4_ >> 3) + (uint)local_68
           + uVar26 +
           ((uVar21 >> 0x11 | uVar21 << 0xf) ^ (uVar21 >> 0x13 | uVar21 << 0xd) ^ uVar21 >> 10);
      local_90 = piVar29[3];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d257a0;
LAB_00d25924:
      local_68 = CONCAT44(param_2[0xb],(uint)local_68);
      local_98 = piVar29[4];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d25940;
LAB_00d257e4:
      uVar11 = ((uVar14 >> 7 | uVar14 << 0x19) ^ (uVar14 >> 0x12 | uVar14 << 0xe) ^ uVar14 >> 3) +
               uVar11 + uVar24 +
               (((uint)local_68 >> 0x11 | (uint)local_68 << 0xf) ^
                ((uint)local_68 >> 0x13 | (uint)local_68 << 0xd) ^ (uint)local_68 >> 10);
      local_9c = piVar29[5];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d2581c;
LAB_00d25954:
      uVar14 = param_2[0xd];
      local_a0 = piVar29[6];
      if (uVar30 == 0xfffffffffffffff0) goto LAB_00d2596c;
LAB_00d25858:
      uVar13 = ((uVar19 >> 7 | uVar19 << 0x19) ^ (uVar19 >> 0x12 | uVar19 << 0xe) ^ uVar19 >> 3) +
               uVar13 + uVar22 +
               ((uVar11 >> 0x11 | uVar11 << 0xf) ^ (uVar11 >> 0x13 | uVar11 << 0xd) ^ uVar11 >> 10);
      local_a4 = piVar29[7];
      if (uVar30 != 0xfffffffffffffff0) goto LAB_00d25980;
LAB_00d24f90:
      uVar19 = param_2[0xf];
    }
    uVar30 = uVar30 + 0x10;
    piVar29 = piVar29 + 0x10;
    uVar6 = uVar20 ^ uVar12;
    iVar5 = *piVar1 + ((uVar15 >> 6 | uVar15 << 0x1a) ^ (uVar15 >> 0xb | uVar15 << 0x15) ^
                      (uVar15 >> 0x19 | uVar15 << 7)) +
            (uVar16 & uVar15 | uVar32 & (uVar15 ^ 0xffffffff)) + local_7c + uVar31;
    uVar17 = uVar17 + iVar5;
    uVar31 = ((uVar12 >> 2 | uVar12 << 0x1e) ^ (uVar12 >> 0xd | uVar12 << 0x13) ^
             (uVar12 >> 0x16 | uVar12 << 10)) + iVar5 +
             (uVar18 & uVar6 | uVar20 & (uVar6 ^ 0xffffffff));
    iVar5 = (uVar15 & uVar17 | uVar16 & (uVar17 ^ 0xffffffff)) + uVar32 +
            ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 0x19 | uVar17 * 0x80)) + *piVar7 + uVar28;
    uVar18 = iVar5 + uVar18;
    uVar32 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
             (uVar31 >> 0x16 | uVar31 * 0x400)) + ((uVar31 ^ uVar12) & uVar6 ^ uVar12) + iVar5;
    iVar5 = *piVar2 + uVar16 + (uVar17 & uVar18 | uVar15 & (uVar18 ^ 0xffffffff)) +
            ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 0x19 | uVar18 * 0x80)) + uVar27;
    uVar20 = iVar5 + uVar20;
    uVar16 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
             (uVar32 >> 0x16 | uVar32 * 0x400)) + ((uVar32 ^ uVar31) & (uVar31 ^ uVar12) ^ uVar31) +
             iVar5;
    iVar5 = *piVar8 + uVar15 + (uVar18 & uVar20 | uVar17 & (uVar20 ^ 0xffffffff)) +
            ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 0x19 | uVar20 * 0x80)) + uVar26;
    uVar12 = iVar5 + uVar12;
    uVar15 = ((uVar16 >> 2 | uVar16 * 0x40000000) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
             (uVar16 >> 0x16 | uVar16 * 0x400)) + ((uVar16 ^ uVar32) & (uVar32 ^ uVar31) ^ uVar32) +
             iVar5;
    iVar5 = *piVar3 + uVar17 + (uVar20 & uVar12 | uVar18 & (uVar12 ^ 0xffffffff)) +
            ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 0x19 | uVar12 * 0x80)) + uVar25;
    uVar31 = iVar5 + uVar31;
    uVar17 = ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
             (uVar15 >> 0x16 | uVar15 * 0x400)) + ((uVar15 ^ uVar16) & (uVar16 ^ uVar32) ^ uVar16) +
             iVar5;
    iVar5 = *piVar9 + uVar18 + (uVar12 & uVar31 | uVar20 & (uVar31 ^ 0xffffffff)) +
            ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
            (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar24;
    uVar32 = iVar5 + uVar32;
    uVar18 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
             (uVar17 >> 0x16 | uVar17 * 0x400)) + ((uVar17 ^ uVar15) & (uVar15 ^ uVar16) ^ uVar15) +
             iVar5;
    iVar5 = *piVar4 + uVar20 + (uVar31 & uVar32 | uVar12 & (uVar32 ^ 0xffffffff)) +
            ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
            (uVar32 >> 0x19 | uVar32 * 0x80)) + uVar23;
    uVar16 = iVar5 + uVar16;
    uVar20 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
             (uVar18 >> 0x16 | uVar18 * 0x400)) + ((uVar18 ^ uVar17) & (uVar17 ^ uVar15) ^ uVar17) +
             iVar5;
    iVar5 = *piVar10 + uVar12 + (uVar32 & uVar16 | uVar31 & (uVar16 ^ 0xffffffff)) +
            ((uVar16 >> 6 | uVar16 * 0x4000000) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 0x19 | uVar16 * 0x80)) + uVar22;
    uVar15 = iVar5 + uVar15;
    uVar12 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 0x16 | uVar20 * 0x400)) + ((uVar20 ^ uVar18) & (uVar18 ^ uVar17) ^ uVar18) +
             iVar5;
    iVar5 = local_84 + uVar31 + (uVar16 & uVar15 | uVar32 & (uVar15 ^ 0xffffffff)) +
            ((uVar15 >> 6 | uVar15 * 0x4000000) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
            (uVar15 >> 0x19 | uVar15 * 0x80)) + uVar21;
    uVar17 = iVar5 + uVar17;
    uVar31 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
             (uVar12 >> 0x16 | uVar12 * 0x400)) + ((uVar12 ^ uVar20) & (uVar20 ^ uVar18) ^ uVar20) +
             iVar5;
    iVar5 = local_88 + uVar32 + (uVar15 & uVar17 | uVar16 & (uVar17 ^ 0xffffffff)) +
            ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
            (uVar17 >> 0x19 | uVar17 * 0x80)) + local_6c;
    uVar18 = iVar5 + uVar18;
    uVar32 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
             (uVar31 >> 0x16 | uVar31 * 0x400)) + ((uVar31 ^ uVar12) & (uVar12 ^ uVar20) ^ uVar12) +
             iVar5;
    iVar5 = local_8c + uVar16 + (uVar17 & uVar18 | uVar15 & (uVar18 ^ 0xffffffff)) +
            ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
            (uVar18 >> 0x19 | uVar18 * 0x80)) + (uint)local_68;
    uVar20 = iVar5 + uVar20;
    uVar16 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
             (uVar32 >> 0x16 | uVar32 * 0x400)) + ((uVar32 ^ uVar31) & (uVar31 ^ uVar12) ^ uVar31) +
             iVar5;
    iVar5 = local_90 + uVar15 + (uVar18 & uVar20 | uVar17 & (uVar20 ^ 0xffffffff)) +
            ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
            (uVar20 >> 0x19 | uVar20 * 0x80)) + local_68._4_4_;
    uVar12 = iVar5 + uVar12;
    uVar15 = ((uVar16 >> 2 | uVar16 * 0x40000000) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
             (uVar16 >> 0x16 | uVar16 * 0x400)) + ((uVar16 ^ uVar32) & (uVar32 ^ uVar31) ^ uVar32) +
             iVar5;
    iVar5 = local_98 + uVar17 + (uVar20 & uVar12 | uVar18 & (uVar12 ^ 0xffffffff)) +
            ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
            (uVar12 >> 0x19 | uVar12 * 0x80)) + uVar11;
    uVar31 = iVar5 + uVar31;
    uVar17 = ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
             (uVar15 >> 0x16 | uVar15 * 0x400)) + ((uVar15 ^ uVar16) & (uVar16 ^ uVar32) ^ uVar16) +
             iVar5;
    iVar5 = local_9c + uVar18 + (uVar12 & uVar31 | uVar20 & (uVar31 ^ 0xffffffff)) +
            ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
            (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar14;
    uVar32 = iVar5 + uVar32;
    uVar18 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
             (uVar17 >> 0x16 | uVar17 * 0x400)) + ((uVar17 ^ uVar15) & (uVar15 ^ uVar16) ^ uVar15) +
             iVar5;
    uVar6 = uVar18 ^ uVar17;
    iVar5 = local_a0 + uVar20 + (uVar31 & uVar32 | uVar12 & (uVar32 ^ 0xffffffff)) +
            ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
            (uVar32 >> 0x19 | uVar32 * 0x80)) + uVar13;
    uVar16 = iVar5 + uVar16;
    uVar20 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
             (uVar18 >> 0x16 | uVar18 * 0x400)) + (uVar6 & (uVar17 ^ uVar15) ^ uVar17) + iVar5;
    iVar5 = local_a4 + uVar12 + (uVar32 & uVar16 | uVar31 & (uVar16 ^ 0xffffffff)) +
            ((uVar16 >> 6 | uVar16 * 0x4000000) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
            (uVar16 >> 0x19 | uVar16 * 0x80)) + uVar19;
    uVar15 = iVar5 + uVar15;
    uVar12 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & uVar6 | uVar18 & (uVar6 ^ 0xffffffff)) +
             iVar5;
    if (0x2f < uVar30) {
      *param_1 = *param_1 + uVar12;
      param_1[1] = param_1[1] + uVar20;
      param_1[2] = param_1[2] + uVar18;
      param_1[3] = param_1[3] + uVar17;
      param_1[4] = param_1[4] + uVar15;
      param_1[5] = param_1[5] + uVar16;
      param_1[6] = param_1[6] + uVar32;
      param_1[7] = param_1[7] + uVar31;
      return;
    }
  } while( true );
}


