// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Transform
// Entry Point: 00d25d74
// Size: 2776 bytes
// Signature: undefined __cdecl Transform(ulong * param_1, ulong * param_2)


/* CryptoPP::SHA512::Transform(unsigned long*, unsigned long const*) */

void CryptoPP::SHA512::Transform(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar15 = 0;
  local_78 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar18 = 0;
  uVar19 = 0;
  local_90 = 0;
  uVar21 = 0;
  uVar23 = 0;
  uVar20 = 0;
  uVar22 = 0;
  plVar24 = &DAT_00545a80;
  uVar25 = 0xfffffffffffffff0;
  uVar7 = *param_1;
  uVar11 = param_1[5];
  uVar12 = param_1[4];
  uVar13 = param_1[6];
  uVar14 = param_1[2];
  uVar17 = param_1[1];
  uVar26 = param_1[7];
  uVar27 = param_1[3];
  do {
    if (uVar25 == 0xfffffffffffffff0) {
      uVar22 = *param_2;
LAB_00d264ac:
      uVar20 = param_2[1];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264b8;
LAB_00d2637c:
      uVar23 = uVar23 + uVar10 +
               ((uVar21 >> 1 | uVar21 << 0x3f) ^ (uVar21 >> 8 | uVar21 << 0x38) ^ uVar21 >> 7) +
               ((uVar22 >> 0x13 | uVar22 << 0x2d) ^ (uVar22 >> 0x3d | uVar22 << 3) ^ uVar22 >> 6);
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d263a8;
LAB_00d264c4:
      uVar21 = param_2[3];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264d0;
LAB_00d263d4:
      local_90 = local_90 + uVar8 +
                 ((local_80 >> 1 | local_80 << 0x3f) ^ (local_80 >> 8 | local_80 << 0x38) ^
                 local_80 >> 7) +
                 ((uVar23 >> 0x13 | uVar23 << 0x2d) ^ (uVar23 >> 0x3d | uVar23 << 3) ^ uVar23 >> 6);
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26404;
LAB_00d264dc:
      local_80 = param_2[5];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264f0;
LAB_00d26440:
      uVar19 = uVar19 + uVar15 +
               ((local_78 >> 1 | local_78 << 0x3f) ^ (local_78 >> 8 | local_78 << 0x38) ^
               local_78 >> 7) +
               ((local_90 >> 0x13 | local_90 << 0x2d) ^ (local_90 >> 0x3d | local_90 << 3) ^
               local_90 >> 6);
    }
    else {
      uVar22 = local_70 +
               ((local_68 >> 0x13 | local_68 << 0x2d) ^ (local_68 >> 0x3d | local_68 << 3) ^
               local_68 >> 6) + uVar22 +
               ((uVar20 >> 1 | uVar20 << 0x3f) ^ (uVar20 >> 8 | uVar20 << 0x38) ^ uVar20 >> 7);
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264ac;
      uVar20 = uVar18 + ((uVar15 >> 0x13 | uVar15 << 0x2d) ^ (uVar15 >> 0x3d | uVar15 << 3) ^
                        uVar15 >> 6) + uVar20 +
               ((uVar23 >> 1 | uVar23 << 0x3f) ^ (uVar23 >> 8 | uVar23 << 0x38) ^ uVar23 >> 7);
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d2637c;
LAB_00d264b8:
      uVar23 = param_2[2];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264c4;
LAB_00d263a8:
      uVar21 = uVar21 + uVar9 +
               ((local_90 >> 1 | local_90 << 0x3f) ^ (local_90 >> 8 | local_90 << 0x38) ^
               local_90 >> 7) +
               ((uVar20 >> 0x13 | uVar20 << 0x2d) ^ (uVar20 >> 0x3d | uVar20 << 3) ^ uVar20 >> 6);
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d263d4;
LAB_00d264d0:
      local_90 = param_2[4];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d264dc;
LAB_00d26404:
      local_80 = local_80 + local_68 +
                 ((uVar19 >> 1 | uVar19 << 0x3f) ^ (uVar19 >> 8 | uVar19 << 0x38) ^ uVar19 >> 7) +
                 ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (uVar21 >> 0x3d | uVar21 << 3) ^ uVar21 >> 6);
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26440;
LAB_00d264f0:
      uVar19 = param_2[6];
    }
    plVar4 = plVar24 + -5;
    plVar1 = plVar24 + -4;
    plVar5 = plVar24 + -3;
    plVar2 = plVar24 + -2;
    plVar6 = plVar24 + -1;
    if (uVar25 == 0xfffffffffffffff0) {
      local_78 = param_2[7];
      local_a0 = *plVar24;
LAB_00d2671c:
      local_88 = param_2[8];
      local_a8 = plVar24[1];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d26734;
LAB_00d26574:
      local_70 = ((uVar18 >> 1 | uVar18 << 0x3f) ^ (uVar18 >> 8 | uVar18 << 0x38) ^ uVar18 >> 7) +
                 local_70 + uVar23 +
                 ((local_78 >> 0x13 | local_78 << 0x2d) ^ (local_78 >> 0x3d | local_78 << 3) ^
                 local_78 >> 6);
      local_b0 = plVar24[2];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d265b0;
LAB_00d2674c:
      uVar18 = param_2[10];
      local_b8 = plVar24[3];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d26764;
LAB_00d265ec:
      uVar10 = ((uVar9 >> 1 | uVar9 << 0x3f) ^ (uVar9 >> 8 | uVar9 << 0x38) ^ uVar9 >> 7) + uVar10 +
               local_90 +
               ((local_70 >> 0x13 | local_70 << 0x2d) ^ (local_70 >> 0x3d | local_70 << 3) ^
               local_70 >> 6);
      local_c8 = plVar24[4];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26628;
LAB_00d26778:
      uVar9 = param_2[0xc];
      local_d0 = plVar24[5];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d2678c;
LAB_00d26660:
      uVar8 = ((local_68 >> 1 | local_68 << 0x3f) ^ (local_68 >> 8 | local_68 << 0x38) ^
              local_68 >> 7) + uVar8 + uVar19 +
              ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ (uVar10 >> 0x3d | uVar10 << 3) ^ uVar10 >> 6);
      local_d8 = plVar24[6];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26698;
LAB_00d267a0:
      local_68 = param_2[0xe];
      local_e0 = plVar24[7];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d25e00;
LAB_00d267b8:
      uVar15 = ((uVar22 >> 1 | uVar22 << 0x3f) ^ (uVar22 >> 8 | uVar22 << 0x38) ^ uVar22 >> 7) +
               uVar15 + local_88 +
               ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ (uVar8 >> 0x3d | uVar8 << 3) ^ uVar8 >> 6);
    }
    else {
      local_78 = ((local_88 >> 1 | local_88 << 0x3f) ^ (local_88 >> 8 | local_88 << 0x38) ^
                 local_88 >> 7) + local_78 + uVar22 +
                 ((local_80 >> 0x13 | local_80 << 0x2d) ^ (local_80 >> 0x3d | local_80 << 3) ^
                 local_80 >> 6);
      local_a0 = *plVar24;
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d2671c;
      local_88 = ((local_70 >> 1 | local_70 << 0x3f) ^ (local_70 >> 8 | local_70 << 0x38) ^
                 local_70 >> 7) + local_88 + uVar20 +
                 ((uVar19 >> 0x13 | uVar19 << 0x2d) ^ (uVar19 >> 0x3d | uVar19 << 3) ^ uVar19 >> 6);
      local_a8 = plVar24[1];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26574;
LAB_00d26734:
      local_70 = param_2[9];
      local_b0 = plVar24[2];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d2674c;
LAB_00d265b0:
      uVar18 = ((uVar10 >> 1 | uVar10 << 0x3f) ^ (uVar10 >> 8 | uVar10 << 0x38) ^ uVar10 >> 7) +
               uVar18 + uVar21 +
               ((local_88 >> 0x13 | local_88 << 0x2d) ^ (local_88 >> 0x3d | local_88 << 3) ^
               local_88 >> 6);
      local_b8 = plVar24[3];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d265ec;
LAB_00d26764:
      uVar10 = param_2[0xb];
      local_c8 = plVar24[4];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d26778;
LAB_00d26628:
      uVar9 = ((uVar8 >> 1 | uVar8 << 0x3f) ^ (uVar8 >> 8 | uVar8 << 0x38) ^ uVar8 >> 7) + uVar9 +
              local_80 +
              ((uVar18 >> 0x13 | uVar18 << 0x2d) ^ (uVar18 >> 0x3d | uVar18 << 3) ^ uVar18 >> 6);
      local_d0 = plVar24[5];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d26660;
LAB_00d2678c:
      uVar8 = param_2[0xd];
      local_d8 = plVar24[6];
      if (uVar25 == 0xfffffffffffffff0) goto LAB_00d267a0;
LAB_00d26698:
      local_68 = ((uVar15 >> 1 | uVar15 << 0x3f) ^ (uVar15 >> 8 | uVar15 << 0x38) ^ uVar15 >> 7) +
                 local_68 + local_78 +
                 ((uVar9 >> 0x13 | uVar9 << 0x2d) ^ (uVar9 >> 0x3d | uVar9 << 3) ^ uVar9 >> 6);
      local_e0 = plVar24[7];
      if (uVar25 != 0xfffffffffffffff0) goto LAB_00d267b8;
LAB_00d25e00:
      uVar15 = param_2[0xf];
    }
    uVar16 = uVar17 ^ uVar7;
    lVar3 = uVar26 + ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
                     (uVar12 >> 0x29 | uVar12 << 0x17)) +
            (uVar11 & uVar12 | uVar13 & (uVar12 ^ 0xffffffffffffffff)) + plVar24[-8] + uVar22;
    uVar27 = lVar3 + uVar27;
    uVar26 = (uVar14 & uVar16 | uVar17 & (uVar16 ^ 0xffffffffffffffff)) +
             ((uVar7 >> 0x1c | uVar7 << 0x24) ^ (uVar7 >> 0x22 | uVar7 << 0x1e) ^
             (uVar7 >> 0x27 | uVar7 << 0x19)) + lVar3;
    lVar3 = plVar24[-7] + uVar13 + (uVar12 & uVar27 | uVar11 & (uVar27 ^ 0xffffffffffffffff)) +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
            (uVar27 >> 0x29 | uVar27 * 0x800000)) + uVar20;
    uVar14 = lVar3 + uVar14;
    uVar13 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
             (uVar26 >> 0x27 | uVar26 * 0x2000000)) + ((uVar26 ^ uVar7) & uVar16 ^ uVar7) + lVar3;
    uVar25 = uVar25 + 0x10;
    lVar3 = plVar24[-6] + uVar11 + (uVar27 & uVar14 | uVar12 & (uVar14 ^ 0xffffffffffffffff)) +
            ((uVar14 >> 0xe | uVar14 << 0x32) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0x29 | uVar14 * 0x800000)) + uVar23;
    uVar17 = lVar3 + uVar17;
    uVar11 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
             (uVar13 >> 0x27 | uVar13 * 0x2000000)) +
             ((uVar13 ^ uVar26) & (uVar26 ^ uVar7) ^ uVar26) + lVar3;
    plVar24 = plVar24 + 0x10;
    lVar3 = *plVar4 + uVar12 + (uVar14 & uVar17 | uVar27 & (uVar17 ^ 0xffffffffffffffff)) +
            ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
            (uVar17 >> 0x29 | uVar17 * 0x800000)) + uVar21;
    uVar7 = lVar3 + uVar7;
    uVar12 = ((uVar11 >> 0x1c | uVar11 << 0x24) ^ (uVar11 >> 0x22 | uVar11 * 0x40000000) ^
             (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
             ((uVar11 ^ uVar13) & (uVar13 ^ uVar26) ^ uVar13) + lVar3;
    lVar3 = *plVar1 + uVar27 + (uVar17 & uVar7 | uVar14 & (uVar7 ^ 0xffffffffffffffff)) +
            ((uVar7 >> 0xe | uVar7 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0x29 | uVar7 * 0x800000)) + local_90;
    uVar26 = lVar3 + uVar26;
    uVar27 = ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 * 0x40000000) ^
             (uVar12 >> 0x27 | uVar12 * 0x2000000)) +
             ((uVar12 ^ uVar11) & (uVar11 ^ uVar13) ^ uVar11) + lVar3;
    lVar3 = *plVar5 + uVar14 + (uVar7 & uVar26 | uVar17 & (uVar26 ^ 0xffffffffffffffff)) +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
            (uVar26 >> 0x29 | uVar26 * 0x800000)) + local_80;
    uVar13 = lVar3 + uVar13;
    uVar14 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
             (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
             ((uVar27 ^ uVar12) & (uVar12 ^ uVar11) ^ uVar12) + lVar3;
    lVar3 = *plVar2 + uVar17 + (uVar26 & uVar13 | uVar7 & (uVar13 ^ 0xffffffffffffffff)) +
            ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0x29 | uVar13 * 0x800000)) + uVar19;
    uVar11 = lVar3 + uVar11;
    uVar17 = ((uVar14 >> 0x1c | uVar14 << 0x24) ^ (uVar14 >> 0x22 | uVar14 * 0x40000000) ^
             (uVar14 >> 0x27 | uVar14 * 0x2000000)) +
             ((uVar14 ^ uVar27) & (uVar27 ^ uVar12) ^ uVar27) + lVar3;
    lVar3 = *plVar6 + uVar7 + (uVar13 & uVar11 | uVar26 & (uVar11 ^ 0xffffffffffffffff)) +
            ((uVar11 >> 0xe | uVar11 << 0x32) ^ (uVar11 >> 0x12 | uVar11 << 0x2e) ^
            (uVar11 >> 0x29 | uVar11 * 0x800000)) + local_78;
    uVar12 = lVar3 + uVar12;
    uVar7 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
            (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
            ((uVar17 ^ uVar14) & (uVar14 ^ uVar27) ^ uVar14) + lVar3;
    lVar3 = local_a0 + uVar26 + (uVar11 & uVar12 | uVar13 & (uVar12 ^ 0xffffffffffffffff)) +
            ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
            (uVar12 >> 0x29 | uVar12 * 0x800000)) + local_88;
    uVar27 = lVar3 + uVar27;
    uVar26 = ((uVar7 >> 0x1c | uVar7 << 0x24) ^ (uVar7 >> 0x22 | uVar7 * 0x40000000) ^
             (uVar7 >> 0x27 | uVar7 * 0x2000000)) + ((uVar7 ^ uVar17) & (uVar17 ^ uVar14) ^ uVar17)
             + lVar3;
    lVar3 = local_a8 + uVar13 + (uVar12 & uVar27 | uVar11 & (uVar27 ^ 0xffffffffffffffff)) +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
            (uVar27 >> 0x29 | uVar27 * 0x800000)) + local_70;
    uVar14 = lVar3 + uVar14;
    uVar13 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
             (uVar26 >> 0x27 | uVar26 * 0x2000000)) + ((uVar26 ^ uVar7) & (uVar7 ^ uVar17) ^ uVar7)
             + lVar3;
    lVar3 = local_b0 + uVar11 + (uVar27 & uVar14 | uVar12 & (uVar14 ^ 0xffffffffffffffff)) +
            ((uVar14 >> 0xe | uVar14 << 0x32) ^ (uVar14 >> 0x12 | uVar14 << 0x2e) ^
            (uVar14 >> 0x29 | uVar14 * 0x800000)) + uVar18;
    uVar17 = lVar3 + uVar17;
    uVar11 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
             (uVar13 >> 0x27 | uVar13 * 0x2000000)) +
             ((uVar13 ^ uVar26) & (uVar26 ^ uVar7) ^ uVar26) + lVar3;
    lVar3 = local_b8 + uVar12 + (uVar14 & uVar17 | uVar27 & (uVar17 ^ 0xffffffffffffffff)) +
            ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
            (uVar17 >> 0x29 | uVar17 * 0x800000)) + uVar10;
    uVar7 = lVar3 + uVar7;
    uVar12 = ((uVar11 >> 0x1c | uVar11 << 0x24) ^ (uVar11 >> 0x22 | uVar11 * 0x40000000) ^
             (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
             ((uVar11 ^ uVar13) & (uVar13 ^ uVar26) ^ uVar13) + lVar3;
    lVar3 = local_c8 + uVar27 + (uVar17 & uVar7 | uVar14 & (uVar7 ^ 0xffffffffffffffff)) +
            ((uVar7 >> 0xe | uVar7 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0x29 | uVar7 * 0x800000)) + uVar9;
    uVar26 = lVar3 + uVar26;
    uVar27 = ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 * 0x40000000) ^
             (uVar12 >> 0x27 | uVar12 * 0x2000000)) +
             ((uVar12 ^ uVar11) & (uVar11 ^ uVar13) ^ uVar11) + lVar3;
    lVar3 = local_d0 + uVar14 + (uVar7 & uVar26 | uVar17 & (uVar26 ^ 0xffffffffffffffff)) +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
            (uVar26 >> 0x29 | uVar26 * 0x800000)) + uVar8;
    uVar13 = lVar3 + uVar13;
    uVar14 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
             (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
             ((uVar27 ^ uVar12) & (uVar12 ^ uVar11) ^ uVar12) + lVar3;
    uVar16 = uVar14 ^ uVar27;
    lVar3 = local_d8 + uVar17 + (uVar26 & uVar13 | uVar7 & (uVar13 ^ 0xffffffffffffffff)) +
            ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0x29 | uVar13 * 0x800000)) + local_68;
    uVar11 = lVar3 + uVar11;
    uVar17 = ((uVar14 >> 0x1c | uVar14 << 0x24) ^ (uVar14 >> 0x22 | uVar14 * 0x40000000) ^
             (uVar14 >> 0x27 | uVar14 * 0x2000000)) + (uVar16 & (uVar27 ^ uVar12) ^ uVar27) + lVar3;
    lVar3 = local_e0 + uVar7 + (uVar13 & uVar11 | uVar26 & (uVar11 ^ 0xffffffffffffffff)) +
            ((uVar11 >> 0xe | uVar11 << 0x32) ^ (uVar11 >> 0x12 | uVar11 << 0x2e) ^
            (uVar11 >> 0x29 | uVar11 * 0x800000)) + uVar15;
    uVar12 = lVar3 + uVar12;
    uVar7 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
            (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
            (uVar17 & uVar16 | uVar14 & (uVar16 ^ 0xffffffffffffffff)) + lVar3;
    if (0x3f < uVar25) {
      *param_1 = uVar7 + *param_1;
      param_1[1] = uVar17 + param_1[1];
      param_1[2] = uVar14 + param_1[2];
      param_1[3] = uVar27 + param_1[3];
      param_1[4] = uVar12 + param_1[4];
      param_1[5] = uVar11 + param_1[5];
      param_1[6] = uVar13 + param_1[6];
      param_1[7] = uVar26 + param_1[7];
      return;
    }
  } while( true );
}


