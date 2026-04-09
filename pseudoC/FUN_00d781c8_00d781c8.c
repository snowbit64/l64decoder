// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d781c8
// Entry Point: 00d781c8
// Size: 504 bytes
// Signature: undefined FUN_00d781c8(void)


void FUN_00d781c8(long param_1,long *param_2,uint param_3,byte **param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  undefined8 uVar25;
  byte bVar27;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined8 uVar38;
  byte bVar45;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x74);
    uVar12 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar13 = uVar12 & 0xfffffff0;
      uVar14 = uVar12 & 0xfffffff8;
      do {
        lVar15 = (ulong)param_3 * 8;
        pbVar10 = *param_4;
        puVar7 = *(undefined8 **)(*param_2 + lVar15);
        puVar18 = *(undefined8 **)(param_2[1] + lVar15);
        puVar16 = *(undefined8 **)(param_2[2] + lVar15);
        if (uVar2 < 8) {
LAB_00d7830c:
          pbVar8 = pbVar10;
          uVar9 = 0;
LAB_00d78310:
          lVar15 = uVar12 - uVar9;
          pbVar10 = (byte *)((long)puVar7 + uVar9);
          pbVar17 = (byte *)((long)puVar16 + uVar9);
          pbVar19 = (byte *)((long)puVar18 + uVar9);
          do {
            bVar23 = *pbVar10;
            bVar24 = *pbVar19;
            bVar26 = *pbVar17;
            lVar15 = lVar15 + -1;
            pbVar8[1] = bVar24;
            *pbVar8 = bVar24 + bVar23 ^ 0x80;
            pbVar8[2] = bVar26 + bVar24 ^ 0x80;
            pbVar8 = pbVar8 + 3;
            pbVar10 = pbVar10 + 1;
            pbVar17 = pbVar17 + 1;
            pbVar19 = pbVar19 + 1;
          } while (lVar15 != 0);
        }
        else {
          puVar11 = (undefined8 *)(pbVar10 + uVar12 * 3);
          if (((pbVar10 < (byte *)((long)puVar7 + uVar12) && puVar7 < puVar11) ||
              (pbVar10 < (byte *)((long)puVar18 + uVar12) && puVar18 < puVar11)) ||
             (pbVar10 < (byte *)((long)puVar16 + uVar12) && puVar16 < puVar11)) goto LAB_00d7830c;
          uVar9 = uVar13;
          puVar11 = puVar16;
          puVar20 = puVar18;
          puVar21 = puVar7;
          pbVar8 = pbVar10;
          if (uVar2 < 0x10) {
            uVar9 = 0;
LAB_00d782b8:
            pbVar8 = pbVar10 + uVar14 * 3;
            pbVar10 = pbVar10 + uVar9 * 3;
            lVar15 = uVar9 - uVar14;
            puVar11 = (undefined8 *)((long)puVar7 + uVar9);
            puVar20 = (undefined8 *)((long)puVar18 + uVar9);
            puVar21 = (undefined8 *)((long)puVar16 + uVar9);
            do {
              uVar22 = *puVar11;
              uVar29 = *puVar20;
              lVar15 = lVar15 + 8;
              bVar23 = (byte)uVar29;
              bVar24 = (byte)((ulong)uVar29 >> 8);
              bVar26 = (byte)((ulong)uVar29 >> 0x10);
              bVar27 = (byte)((ulong)uVar29 >> 0x18);
              bVar28 = (byte)((ulong)uVar29 >> 0x20);
              bVar30 = (byte)((ulong)uVar29 >> 0x28);
              bVar31 = (byte)((ulong)uVar29 >> 0x30);
              bVar32 = (byte)((ulong)uVar29 >> 0x38);
              uVar29 = *puVar21;
              *pbVar10 = bVar23 + (char)uVar22 ^ 0x80;
              pbVar10[1] = bVar23;
              pbVar10[2] = (char)uVar29 + bVar23 ^ 0x80;
              pbVar10[3] = bVar24 + (char)((ulong)uVar22 >> 8) ^ 0x80;
              pbVar10[4] = bVar24;
              pbVar10[5] = (char)((ulong)uVar29 >> 8) + bVar24 ^ 0x80;
              pbVar10[6] = bVar26 + (char)((ulong)uVar22 >> 0x10) ^ 0x80;
              pbVar10[7] = bVar26;
              pbVar10[8] = (char)((ulong)uVar29 >> 0x10) + bVar26 ^ 0x80;
              pbVar10[9] = bVar27 + (char)((ulong)uVar22 >> 0x18) ^ 0x80;
              pbVar10[10] = bVar27;
              pbVar10[0xb] = (char)((ulong)uVar29 >> 0x18) + bVar27 ^ 0x80;
              pbVar10[0xc] = bVar28 + (char)((ulong)uVar22 >> 0x20) ^ 0x80;
              pbVar10[0xd] = bVar28;
              pbVar10[0xe] = (char)((ulong)uVar29 >> 0x20) + bVar28 ^ 0x80;
              pbVar10[0xf] = bVar30 + (char)((ulong)uVar22 >> 0x28) ^ 0x80;
              pbVar10[0x10] = bVar30;
              pbVar10[0x11] = (char)((ulong)uVar29 >> 0x28) + bVar30 ^ 0x80;
              pbVar10[0x12] = bVar31 + (char)((ulong)uVar22 >> 0x30) ^ 0x80;
              pbVar10[0x13] = bVar31;
              pbVar10[0x14] = (char)((ulong)uVar29 >> 0x30) + bVar31 ^ 0x80;
              pbVar10[0x15] = bVar32 + (char)((ulong)uVar22 >> 0x38) ^ 0x80;
              pbVar10[0x16] = bVar32;
              pbVar10[0x17] = (char)((ulong)uVar29 >> 0x38) + bVar32 ^ 0x80;
              pbVar10 = pbVar10 + 0x18;
              puVar11 = puVar11 + 1;
              puVar20 = puVar20 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar15 != 0);
            uVar9 = uVar14;
            if (uVar14 == uVar12) goto LAB_00d78208;
            goto LAB_00d78310;
          }
          do {
            uVar29 = puVar21[1];
            uVar22 = *puVar21;
            uVar38 = puVar20[1];
            uVar25 = *puVar20;
            uVar9 = uVar9 - 0x10;
            bVar28 = (byte)uVar25;
            bVar30 = (byte)((ulong)uVar25 >> 8);
            bVar31 = (byte)((ulong)uVar25 >> 0x10);
            bVar32 = (byte)((ulong)uVar25 >> 0x18);
            bVar33 = (byte)((ulong)uVar25 >> 0x20);
            bVar34 = (byte)((ulong)uVar25 >> 0x28);
            bVar35 = (byte)((ulong)uVar25 >> 0x30);
            bVar36 = (byte)((ulong)uVar25 >> 0x38);
            bVar37 = (byte)uVar38;
            bVar23 = bVar37 + (char)uVar29;
            bVar39 = (byte)((ulong)uVar38 >> 8);
            bVar40 = (byte)((ulong)uVar38 >> 0x10);
            bVar41 = (byte)((ulong)uVar38 >> 0x18);
            bVar42 = (byte)((ulong)uVar38 >> 0x20);
            bVar43 = (byte)((ulong)uVar38 >> 0x28);
            bVar44 = (byte)((ulong)uVar38 >> 0x30);
            bVar45 = (byte)((ulong)uVar38 >> 0x38);
            bVar26 = bVar45 + (char)((ulong)uVar29 >> 0x38);
            uVar3 = CONCAT17(bVar26,CONCAT16(bVar44 + (char)((ulong)uVar29 >> 0x30),
                                             CONCAT15(bVar43 + (char)((ulong)uVar29 >> 0x28),
                                                      CONCAT14(bVar42 + (char)((ulong)uVar29 >> 0x20
                                                                              ),
                                                               CONCAT13(bVar41 + (char)((ulong)
                                                  uVar29 >> 0x18),
                                                  CONCAT12(bVar40 + (char)((ulong)uVar29 >> 0x10),
                                                           CONCAT11(bVar39 + (char)((ulong)uVar29 >>
                                                                                   8),bVar23)))))));
            uVar4 = uVar3 ^ 0x8080808080;
            uVar3 = uVar3 ^ 0x80808080808080;
            uVar25 = puVar11[1];
            uVar29 = *puVar11;
            bVar24 = (char)uVar25 + bVar37;
            bVar27 = (char)((ulong)uVar25 >> 0x38) + bVar45;
            uVar5 = CONCAT17(bVar27,CONCAT16((char)((ulong)uVar25 >> 0x30) + bVar44,
                                             CONCAT15((char)((ulong)uVar25 >> 0x28) + bVar43,
                                                      CONCAT14((char)((ulong)uVar25 >> 0x20) +
                                                               bVar42,CONCAT13((char)((ulong)uVar25
                                                                                     >> 0x18) +
                                                                               bVar41,CONCAT12((char
                                                  )((ulong)uVar25 >> 0x10) + bVar40,
                                                  CONCAT11((char)((ulong)uVar25 >> 8) + bVar39,
                                                           bVar24)))))));
            uVar6 = uVar5 ^ 0x8080808080;
            uVar5 = uVar5 ^ 0x80808080808080;
            *pbVar8 = bVar28 + (char)uVar22 ^ 0x80;
            pbVar8[1] = bVar28;
            pbVar8[2] = (char)uVar29 + bVar28 ^ 0x80;
            pbVar8[3] = bVar30 + (char)((ulong)uVar22 >> 8) ^ 0x80;
            pbVar8[4] = bVar30;
            pbVar8[5] = (char)((ulong)uVar29 >> 8) + bVar30 ^ 0x80;
            pbVar8[6] = bVar31 + (char)((ulong)uVar22 >> 0x10) ^ 0x80;
            pbVar8[7] = bVar31;
            pbVar8[8] = (char)((ulong)uVar29 >> 0x10) + bVar31 ^ 0x80;
            pbVar8[9] = bVar32 + (char)((ulong)uVar22 >> 0x18) ^ 0x80;
            pbVar8[10] = bVar32;
            pbVar8[0xb] = (char)((ulong)uVar29 >> 0x18) + bVar32 ^ 0x80;
            pbVar8[0xc] = bVar33 + (char)((ulong)uVar22 >> 0x20) ^ 0x80;
            pbVar8[0xd] = bVar33;
            pbVar8[0xe] = (char)((ulong)uVar29 >> 0x20) + bVar33 ^ 0x80;
            pbVar8[0xf] = bVar34 + (char)((ulong)uVar22 >> 0x28) ^ 0x80;
            pbVar8[0x10] = bVar34;
            pbVar8[0x11] = (char)((ulong)uVar29 >> 0x28) + bVar34 ^ 0x80;
            pbVar8[0x12] = bVar35 + (char)((ulong)uVar22 >> 0x30) ^ 0x80;
            pbVar8[0x13] = bVar35;
            pbVar8[0x14] = (char)((ulong)uVar29 >> 0x30) + bVar35 ^ 0x80;
            pbVar8[0x15] = bVar36 + (char)((ulong)uVar22 >> 0x38) ^ 0x80;
            pbVar8[0x16] = bVar36;
            pbVar8[0x17] = (char)((ulong)uVar29 >> 0x38) + bVar36 ^ 0x80;
            pbVar8[0x18] = bVar23 ^ 0x80;
            pbVar8[0x19] = bVar37;
            pbVar8[0x1a] = bVar24 ^ 0x80;
            pbVar8[0x1b] = (byte)(uVar4 >> 8);
            pbVar8[0x1c] = bVar39;
            pbVar8[0x1d] = (byte)(uVar6 >> 8);
            pbVar8[0x1e] = (byte)(uVar4 >> 0x10);
            pbVar8[0x1f] = bVar40;
            pbVar8[0x20] = (byte)(uVar6 >> 0x10);
            pbVar8[0x21] = (byte)(uVar4 >> 0x18);
            pbVar8[0x22] = bVar41;
            pbVar8[0x23] = (byte)(uVar6 >> 0x18);
            pbVar8[0x24] = (byte)(uVar4 >> 0x20);
            pbVar8[0x25] = bVar42;
            pbVar8[0x26] = (byte)(uVar6 >> 0x20);
            pbVar8[0x27] = (byte)(uVar3 >> 0x28);
            pbVar8[0x28] = bVar43;
            pbVar8[0x29] = (byte)(uVar5 >> 0x28);
            pbVar8[0x2a] = (byte)(uVar3 >> 0x30);
            pbVar8[0x2b] = bVar44;
            pbVar8[0x2c] = (byte)(uVar5 >> 0x30);
            pbVar8[0x2d] = bVar26 ^ 0x80;
            pbVar8[0x2e] = bVar45;
            pbVar8[0x2f] = bVar27 ^ 0x80;
            puVar11 = puVar11 + 2;
            puVar20 = puVar20 + 2;
            puVar21 = puVar21 + 2;
            pbVar8 = pbVar8 + 0x30;
          } while (uVar9 != 0);
          if (uVar13 != uVar12) {
            uVar9 = uVar13;
            if ((uVar2 >> 3 & 1) != 0) goto LAB_00d782b8;
            pbVar8 = pbVar10 + uVar13 * 3;
            goto LAB_00d78310;
          }
        }
LAB_00d78208:
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}


