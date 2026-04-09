// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyBufsEqual
// Entry Point: 00d09e48
// Size: 612 bytes
// Signature: undefined __cdecl VerifyBufsEqual(uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::VerifyBufsEqual(unsigned char const*, unsigned char const*, unsigned long) */

bool CryptoPP::VerifyBufsEqual(uchar *param_1,uchar *param_2,ulong param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  byte *pbVar13;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    if (param_3 < 4) {
      uVar5 = 0;
      uVar7 = 0;
      if (param_3 == 0) goto LAB_00d0a0a0;
    }
    else {
      uVar5 = param_3 >> 2;
      if (param_3 < 0x20) {
        uVar7 = 0;
        uVar10 = 0;
LAB_00d0a06c:
        lVar11 = uVar5 - uVar10;
        puVar12 = (uint *)(param_2 + uVar10 * 4);
        puVar14 = (uint *)(param_1 + uVar10 * 4);
        do {
          lVar11 = lVar11 + -1;
          uVar7 = *puVar12 ^ *puVar14 | uVar7;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 != 0);
      }
      else {
        uVar10 = uVar5 & 0x3ffffffffffffff8;
        puVar9 = (undefined8 *)(param_1 + 0x10);
        bVar15 = 0;
        bVar16 = 0;
        bVar17 = 0;
        bVar18 = 0;
        bVar19 = 0;
        bVar20 = 0;
        bVar21 = 0;
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 0;
        bVar25 = 0;
        bVar26 = 0;
        bVar27 = 0;
        bVar28 = 0;
        bVar29 = 0;
        bVar30 = 0;
        puVar8 = (undefined8 *)(param_2 + 0x10);
        uVar4 = uVar10;
        auVar33 = ZEXT816(0);
        do {
          uVar35 = puVar9[-1];
          uVar31 = puVar9[-2];
          uVar37 = puVar9[1];
          uVar36 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar4 = uVar4 - 8;
          uVar39 = puVar8[-1];
          uVar38 = puVar8[-2];
          uVar41 = puVar8[1];
          uVar40 = *puVar8;
          puVar8 = puVar8 + 4;
          bVar15 = (byte)uVar38 ^ (byte)uVar31 | bVar15;
          bVar16 = (byte)((ulong)uVar38 >> 8) ^ (byte)((ulong)uVar31 >> 8) | bVar16;
          bVar17 = (byte)((ulong)uVar38 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10) | bVar17;
          bVar18 = (byte)((ulong)uVar38 >> 0x18) ^ (byte)((ulong)uVar31 >> 0x18) | bVar18;
          bVar19 = (byte)((ulong)uVar38 >> 0x20) ^ (byte)((ulong)uVar31 >> 0x20) | bVar19;
          bVar20 = (byte)((ulong)uVar38 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28) | bVar20;
          bVar21 = (byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30) | bVar21;
          bVar22 = (byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38) | bVar22;
          bVar23 = (byte)uVar39 ^ (byte)uVar35 | bVar23;
          bVar24 = (byte)((ulong)uVar39 >> 8) ^ (byte)((ulong)uVar35 >> 8) | bVar24;
          bVar25 = (byte)((ulong)uVar39 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10) | bVar25;
          bVar26 = (byte)((ulong)uVar39 >> 0x18) ^ (byte)((ulong)uVar35 >> 0x18) | bVar26;
          bVar27 = (byte)((ulong)uVar39 >> 0x20) ^ (byte)((ulong)uVar35 >> 0x20) | bVar27;
          bVar28 = (byte)((ulong)uVar39 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28) | bVar28;
          bVar29 = (byte)((ulong)uVar39 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30) | bVar29;
          bVar30 = (byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38) | bVar30;
          auVar34[0] = (byte)uVar40 ^ (byte)uVar36 | auVar33[0];
          auVar34[1] = (byte)((ulong)uVar40 >> 8) ^ (byte)((ulong)uVar36 >> 8) | auVar33[1];
          auVar34[2] = (byte)((ulong)uVar40 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10) | auVar33[2];
          auVar34[3] = (byte)((ulong)uVar40 >> 0x18) ^ (byte)((ulong)uVar36 >> 0x18) | auVar33[3];
          auVar34[4] = (byte)((ulong)uVar40 >> 0x20) ^ (byte)((ulong)uVar36 >> 0x20) | auVar33[4];
          auVar34[5] = (byte)((ulong)uVar40 >> 0x28) ^ (byte)((ulong)uVar36 >> 0x28) | auVar33[5];
          auVar34[6] = (byte)((ulong)uVar40 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30) | auVar33[6];
          auVar34[7] = (byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38) | auVar33[7];
          auVar34[8] = (byte)uVar41 ^ (byte)uVar37 | auVar33[8];
          auVar34[9] = (byte)((ulong)uVar41 >> 8) ^ (byte)((ulong)uVar37 >> 8) | auVar33[9];
          auVar34[10] = (byte)((ulong)uVar41 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10) | auVar33[10];
          auVar34[11] = (byte)((ulong)uVar41 >> 0x18) ^ (byte)((ulong)uVar37 >> 0x18) | auVar33[11];
          auVar34[12] = (byte)((ulong)uVar41 >> 0x20) ^ (byte)((ulong)uVar37 >> 0x20) | auVar33[12];
          auVar34[13] = (byte)((ulong)uVar41 >> 0x28) ^ (byte)((ulong)uVar37 >> 0x28) | auVar33[13];
          auVar34[14] = (byte)((ulong)uVar41 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30) | auVar33[14];
          auVar34[15] = (byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38) | auVar33[15];
          auVar33 = auVar34;
        } while (uVar4 != 0);
        bVar15 = auVar34[0] | bVar15;
        bVar16 = auVar34[1] | bVar16;
        bVar17 = auVar34[2] | bVar17;
        bVar18 = auVar34[3] | bVar18;
        bVar19 = auVar34[4] | bVar19;
        bVar20 = auVar34[5] | bVar20;
        bVar21 = auVar34[6] | bVar21;
        bVar22 = auVar34[7] | bVar22;
        auVar33[1] = bVar16;
        auVar33[0] = bVar15;
        auVar33[2] = bVar17;
        auVar33[3] = bVar18;
        auVar33[4] = bVar19;
        auVar33[5] = bVar20;
        auVar33[6] = bVar21;
        auVar33[7] = bVar22;
        auVar33[8] = auVar34[8] | bVar23;
        auVar33[9] = auVar34[9] | bVar24;
        auVar33[10] = auVar34[10] | bVar25;
        auVar33[11] = auVar34[11] | bVar26;
        auVar33[12] = auVar34[12] | bVar27;
        auVar33[13] = auVar34[13] | bVar28;
        auVar33[14] = auVar34[14] | bVar29;
        auVar33[15] = auVar34[15] | bVar30;
        auVar3[1] = bVar16;
        auVar3[0] = bVar15;
        auVar3[2] = bVar17;
        auVar3[3] = bVar18;
        auVar3[4] = bVar19;
        auVar3[5] = bVar20;
        auVar3[6] = bVar21;
        auVar3[7] = bVar22;
        auVar3[8] = auVar34[8] | bVar23;
        auVar3[9] = auVar34[9] | bVar24;
        auVar3[10] = auVar34[10] | bVar25;
        auVar3[11] = auVar34[11] | bVar26;
        auVar3[12] = auVar34[12] | bVar27;
        auVar3[13] = auVar34[13] | bVar28;
        auVar3[14] = auVar34[14] | bVar29;
        auVar3[15] = auVar34[15] | bVar30;
        auVar33 = NEON_ext(auVar33,auVar3,8,1);
        uVar7 = CONCAT13(bVar18 | auVar33[3],
                         CONCAT12(bVar17 | auVar33[2],
                                  CONCAT11(bVar16 | auVar33[1],bVar15 | auVar33[0]))) |
                CONCAT13(bVar22 | auVar33[7],
                         CONCAT12(bVar21 | auVar33[6],
                                  CONCAT11(bVar20 | auVar33[5],bVar19 | auVar33[4])));
        if (uVar5 != uVar10) goto LAB_00d0a06c;
      }
      uVar5 = param_3 & 0xfffffffffffffffc;
      param_3 = param_3 - uVar5;
      if (param_3 == 0) {
LAB_00d0a0a0:
        return uVar7 == 0;
      }
    }
    param_1 = param_1 + uVar5;
    param_2 = param_2 + uVar5;
    uVar7 = uVar7 | uVar7 >> 8 | uVar7 >> 0x10 | uVar7 >> 0x18;
    bVar15 = (byte)uVar7;
    if (param_3 < 8) goto LAB_00d09e64;
LAB_00d09ea0:
    if (param_3 < 0x20) {
      uVar5 = 0;
LAB_00d09f64:
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      uVar4 = param_3 & 0xfffffffffffffff8;
      lVar11 = uVar5 - uVar4;
      puVar9 = (undefined8 *)(param_1 + uVar5);
      puVar8 = (undefined8 *)(param_2 + uVar5);
      do {
        uVar31 = *puVar9;
        uVar35 = *puVar8;
        lVar11 = lVar11 + 8;
        bVar15 = (byte)uVar35 ^ (byte)uVar31 | bVar15;
        bVar16 = (byte)((ulong)uVar35 >> 8) ^ (byte)((ulong)uVar31 >> 8) | bVar16;
        bVar17 = (byte)((ulong)uVar35 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10) | bVar17;
        bVar18 = (byte)((ulong)uVar35 >> 0x18) ^ (byte)((ulong)uVar31 >> 0x18) | bVar18;
        bVar19 = (byte)((ulong)uVar35 >> 0x20) ^ (byte)((ulong)uVar31 >> 0x20) | bVar19;
        bVar20 = (byte)((ulong)uVar35 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28) | bVar20;
        bVar21 = (byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30) | bVar21;
        bVar22 = (byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38) | bVar22;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar11 != 0);
      uVar7 = (uint)(byte)(bVar15 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 | bVar21 | bVar22);
      if (param_3 == uVar4) goto LAB_00d0a000;
    }
    else {
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      uVar4 = param_3 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(param_2 + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x10);
      uVar5 = uVar4;
      auVar33 = ZEXT816(0);
      do {
        uVar35 = puVar8[-1];
        uVar31 = puVar8[-2];
        uVar37 = puVar8[1];
        uVar36 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar5 = uVar5 - 0x20;
        uVar39 = puVar9[-1];
        uVar38 = puVar9[-2];
        uVar41 = puVar9[1];
        uVar40 = *puVar9;
        puVar9 = puVar9 + 4;
        bVar15 = (byte)uVar38 ^ (byte)uVar31 | bVar15;
        bVar16 = (byte)((ulong)uVar38 >> 8) ^ (byte)((ulong)uVar31 >> 8) | bVar16;
        bVar17 = (byte)((ulong)uVar38 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10) | bVar17;
        bVar18 = (byte)((ulong)uVar38 >> 0x18) ^ (byte)((ulong)uVar31 >> 0x18) | bVar18;
        bVar19 = (byte)((ulong)uVar38 >> 0x20) ^ (byte)((ulong)uVar31 >> 0x20) | bVar19;
        bVar20 = (byte)((ulong)uVar38 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28) | bVar20;
        bVar21 = (byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30) | bVar21;
        bVar22 = (byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38) | bVar22;
        bVar23 = (byte)uVar39 ^ (byte)uVar35 | bVar23;
        bVar24 = (byte)((ulong)uVar39 >> 8) ^ (byte)((ulong)uVar35 >> 8) | bVar24;
        bVar25 = (byte)((ulong)uVar39 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10) | bVar25;
        bVar26 = (byte)((ulong)uVar39 >> 0x18) ^ (byte)((ulong)uVar35 >> 0x18) | bVar26;
        bVar27 = (byte)((ulong)uVar39 >> 0x20) ^ (byte)((ulong)uVar35 >> 0x20) | bVar27;
        bVar28 = (byte)((ulong)uVar39 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28) | bVar28;
        bVar29 = (byte)((ulong)uVar39 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30) | bVar29;
        bVar30 = (byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38) | bVar30;
        auVar32[0] = (byte)uVar40 ^ (byte)uVar36 | auVar33[0];
        auVar32[1] = (byte)((ulong)uVar40 >> 8) ^ (byte)((ulong)uVar36 >> 8) | auVar33[1];
        auVar32[2] = (byte)((ulong)uVar40 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10) | auVar33[2];
        auVar32[3] = (byte)((ulong)uVar40 >> 0x18) ^ (byte)((ulong)uVar36 >> 0x18) | auVar33[3];
        auVar32[4] = (byte)((ulong)uVar40 >> 0x20) ^ (byte)((ulong)uVar36 >> 0x20) | auVar33[4];
        auVar32[5] = (byte)((ulong)uVar40 >> 0x28) ^ (byte)((ulong)uVar36 >> 0x28) | auVar33[5];
        auVar32[6] = (byte)((ulong)uVar40 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30) | auVar33[6];
        auVar32[7] = (byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38) | auVar33[7];
        auVar32[8] = (byte)uVar41 ^ (byte)uVar37 | auVar33[8];
        auVar32[9] = (byte)((ulong)uVar41 >> 8) ^ (byte)((ulong)uVar37 >> 8) | auVar33[9];
        auVar32[10] = (byte)((ulong)uVar41 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10) | auVar33[10];
        auVar32[11] = (byte)((ulong)uVar41 >> 0x18) ^ (byte)((ulong)uVar37 >> 0x18) | auVar33[11];
        auVar32[12] = (byte)((ulong)uVar41 >> 0x20) ^ (byte)((ulong)uVar37 >> 0x20) | auVar33[12];
        auVar32[13] = (byte)((ulong)uVar41 >> 0x28) ^ (byte)((ulong)uVar37 >> 0x28) | auVar33[13];
        auVar32[14] = (byte)((ulong)uVar41 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30) | auVar33[14];
        auVar32[15] = (byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38) | auVar33[15];
        auVar33 = auVar32;
      } while (uVar5 != 0);
      bVar15 = auVar32[0] | bVar15;
      bVar16 = auVar32[1] | bVar16;
      bVar17 = auVar32[2] | bVar17;
      bVar18 = auVar32[3] | bVar18;
      bVar19 = auVar32[4] | bVar19;
      bVar20 = auVar32[5] | bVar20;
      bVar21 = auVar32[6] | bVar21;
      bVar22 = auVar32[7] | bVar22;
      auVar1[1] = bVar16;
      auVar1[0] = bVar15;
      auVar1[2] = bVar17;
      auVar1[3] = bVar18;
      auVar1[4] = bVar19;
      auVar1[5] = bVar20;
      auVar1[6] = bVar21;
      auVar1[7] = bVar22;
      auVar1[8] = auVar32[8] | bVar23;
      auVar1[9] = auVar32[9] | bVar24;
      auVar1[10] = auVar32[10] | bVar25;
      auVar1[11] = auVar32[11] | bVar26;
      auVar1[12] = auVar32[12] | bVar27;
      auVar1[13] = auVar32[13] | bVar28;
      auVar1[14] = auVar32[14] | bVar29;
      auVar1[15] = auVar32[15] | bVar30;
      auVar2[1] = bVar16;
      auVar2[0] = bVar15;
      auVar2[2] = bVar17;
      auVar2[3] = bVar18;
      auVar2[4] = bVar19;
      auVar2[5] = bVar20;
      auVar2[6] = bVar21;
      auVar2[7] = bVar22;
      auVar2[8] = auVar32[8] | bVar23;
      auVar2[9] = auVar32[9] | bVar24;
      auVar2[10] = auVar32[10] | bVar25;
      auVar2[11] = auVar32[11] | bVar26;
      auVar2[12] = auVar32[12] | bVar27;
      auVar2[13] = auVar32[13] | bVar28;
      auVar2[14] = auVar32[14] | bVar29;
      auVar2[15] = auVar32[15] | bVar30;
      auVar33 = NEON_ext(auVar1,auVar2,8,1);
      bVar15 = bVar15 | auVar33[0] | bVar16 | auVar33[1] | bVar17 | auVar33[2] | bVar18 | auVar33[3]
               | bVar19 | auVar33[4] | bVar20 | auVar33[5] | bVar21 | auVar33[6] |
               bVar22 | auVar33[7];
      uVar7 = (uint)bVar15;
      if (param_3 == uVar4) goto LAB_00d0a000;
      uVar5 = uVar4;
      if ((param_3 & 0x18) != 0) goto LAB_00d09f64;
    }
  }
  else {
    uVar7 = 0;
    bVar15 = 0;
    if (param_3 == 0) goto LAB_00d0a000;
    if (7 < param_3) goto LAB_00d09ea0;
LAB_00d09e64:
    uVar4 = 0;
  }
  lVar11 = param_3 - uVar4;
  pbVar6 = param_1 + uVar4;
  pbVar13 = param_2 + uVar4;
  do {
    lVar11 = lVar11 + -1;
    uVar7 = *pbVar13 ^ *pbVar6 | uVar7;
    pbVar6 = pbVar6 + 1;
    pbVar13 = pbVar13 + 1;
  } while (lVar11 != 0);
LAB_00d0a000:
  return (uVar7 & 0xff) == 0;
}


