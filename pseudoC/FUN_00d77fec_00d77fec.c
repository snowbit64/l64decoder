// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77fec
// Entry Point: 00d77fec
// Size: 476 bytes
// Signature: undefined FUN_00d77fec(void)


void FUN_00d77fec(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x74);
    uVar8 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar9 = uVar8 & 0xffffffe0;
      uVar10 = uVar8 & 0xfffffff8;
      do {
        lVar11 = (ulong)param_3 * 8;
        puVar4 = *(undefined **)(*param_2 + lVar11);
        puVar3 = *(undefined **)(param_2[1] + lVar11);
        puVar12 = *(undefined **)(param_2[2] + lVar11);
        puVar5 = (undefined *)*param_4;
        if (uVar2 < 8) {
LAB_00d7806c:
          puVar6 = puVar5;
          uVar13 = 0;
LAB_00d78070:
          lVar11 = uVar8 - uVar13;
          puVar5 = puVar3 + uVar13;
          puVar3 = puVar4 + uVar13;
          puVar4 = puVar12 + uVar13;
          do {
            lVar11 = lVar11 + -1;
            *puVar6 = *puVar3;
            puVar6[1] = *puVar5;
            puVar6[2] = *puVar4;
            puVar6 = puVar6 + 3;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (lVar11 != 0);
        }
        else {
          puVar6 = puVar5 + uVar8 * 3;
          if (((puVar5 < puVar4 + uVar8 && puVar4 < puVar6) ||
              (puVar5 < puVar3 + uVar8 && puVar3 < puVar6)) ||
             (puVar5 < puVar12 + uVar8 && puVar12 < puVar6)) goto LAB_00d7806c;
          if (uVar2 < 0x20) {
            uVar13 = 0;
LAB_00d78168:
            puVar6 = puVar5 + uVar10 * 3;
            puVar5 = puVar5 + uVar13 * 3;
            lVar11 = uVar13 - uVar10;
            puVar7 = (undefined8 *)(puVar4 + uVar13);
            puVar14 = (undefined8 *)(puVar3 + uVar13);
            puVar15 = (undefined8 *)(puVar12 + uVar13);
            do {
              uVar16 = *puVar7;
              uVar17 = *puVar14;
              uVar20 = *puVar15;
              lVar11 = lVar11 + 8;
              *puVar5 = (char)uVar16;
              puVar5[1] = (char)uVar17;
              puVar5[2] = (char)uVar20;
              puVar5[3] = (char)((ulong)uVar16 >> 8);
              puVar5[4] = (char)((ulong)uVar17 >> 8);
              puVar5[5] = (char)((ulong)uVar20 >> 8);
              puVar5[6] = (char)((ulong)uVar16 >> 0x10);
              puVar5[7] = (char)((ulong)uVar17 >> 0x10);
              puVar5[8] = (char)((ulong)uVar20 >> 0x10);
              puVar5[9] = (char)((ulong)uVar16 >> 0x18);
              puVar5[10] = (char)((ulong)uVar17 >> 0x18);
              puVar5[0xb] = (char)((ulong)uVar20 >> 0x18);
              puVar5[0xc] = (char)((ulong)uVar16 >> 0x20);
              puVar5[0xd] = (char)((ulong)uVar17 >> 0x20);
              puVar5[0xe] = (char)((ulong)uVar20 >> 0x20);
              puVar5[0xf] = (char)((ulong)uVar16 >> 0x28);
              puVar5[0x10] = (char)((ulong)uVar17 >> 0x28);
              puVar5[0x11] = (char)((ulong)uVar20 >> 0x28);
              puVar5[0x12] = (char)((ulong)uVar16 >> 0x30);
              puVar5[0x13] = (char)((ulong)uVar17 >> 0x30);
              puVar5[0x14] = (char)((ulong)uVar20 >> 0x30);
              puVar5[0x15] = (char)((ulong)uVar16 >> 0x38);
              puVar5[0x16] = (char)((ulong)uVar17 >> 0x38);
              puVar5[0x17] = (char)((ulong)uVar20 >> 0x38);
              puVar5 = puVar5 + 0x18;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
            uVar13 = uVar10;
            if (uVar10 == uVar8) goto LAB_00d78028;
            goto LAB_00d78070;
          }
          puVar7 = (undefined8 *)(puVar12 + 0x10);
          puVar14 = (undefined8 *)(puVar4 + 0x10);
          puVar15 = (undefined8 *)(puVar3 + 0x10);
          uVar13 = uVar9;
          puVar6 = puVar5;
          do {
            uVar17 = puVar14[-1];
            uVar16 = puVar14[-2];
            uVar23 = puVar14[1];
            uVar22 = *puVar14;
            uVar13 = uVar13 - 0x20;
            puVar14 = puVar14 + 4;
            uVar18 = puVar15[-1];
            uVar20 = puVar15[-2];
            uVar25 = puVar15[1];
            uVar24 = *puVar15;
            puVar15 = puVar15 + 4;
            uVar21 = puVar7[-1];
            uVar19 = puVar7[-2];
            uVar27 = puVar7[1];
            uVar26 = *puVar7;
            puVar7 = puVar7 + 4;
            *puVar6 = (char)uVar16;
            puVar6[1] = (char)uVar20;
            puVar6[2] = (char)uVar19;
            puVar6[3] = (char)((ulong)uVar16 >> 8);
            puVar6[4] = (char)((ulong)uVar20 >> 8);
            puVar6[5] = (char)((ulong)uVar19 >> 8);
            puVar6[6] = (char)((ulong)uVar16 >> 0x10);
            puVar6[7] = (char)((ulong)uVar20 >> 0x10);
            puVar6[8] = (char)((ulong)uVar19 >> 0x10);
            puVar6[9] = (char)((ulong)uVar16 >> 0x18);
            puVar6[10] = (char)((ulong)uVar20 >> 0x18);
            puVar6[0xb] = (char)((ulong)uVar19 >> 0x18);
            puVar6[0xc] = (char)((ulong)uVar16 >> 0x20);
            puVar6[0xd] = (char)((ulong)uVar20 >> 0x20);
            puVar6[0xe] = (char)((ulong)uVar19 >> 0x20);
            puVar6[0xf] = (char)((ulong)uVar16 >> 0x28);
            puVar6[0x10] = (char)((ulong)uVar20 >> 0x28);
            puVar6[0x11] = (char)((ulong)uVar19 >> 0x28);
            puVar6[0x12] = (char)((ulong)uVar16 >> 0x30);
            puVar6[0x13] = (char)((ulong)uVar20 >> 0x30);
            puVar6[0x14] = (char)((ulong)uVar19 >> 0x30);
            puVar6[0x15] = (char)((ulong)uVar16 >> 0x38);
            puVar6[0x16] = (char)((ulong)uVar20 >> 0x38);
            puVar6[0x17] = (char)((ulong)uVar19 >> 0x38);
            puVar6[0x18] = (char)uVar17;
            puVar6[0x19] = (char)uVar18;
            puVar6[0x1a] = (char)uVar21;
            puVar6[0x1b] = (char)((ulong)uVar17 >> 8);
            puVar6[0x1c] = (char)((ulong)uVar18 >> 8);
            puVar6[0x1d] = (char)((ulong)uVar21 >> 8);
            puVar6[0x1e] = (char)((ulong)uVar17 >> 0x10);
            puVar6[0x1f] = (char)((ulong)uVar18 >> 0x10);
            puVar6[0x20] = (char)((ulong)uVar21 >> 0x10);
            puVar6[0x21] = (char)((ulong)uVar17 >> 0x18);
            puVar6[0x22] = (char)((ulong)uVar18 >> 0x18);
            puVar6[0x23] = (char)((ulong)uVar21 >> 0x18);
            puVar6[0x24] = (char)((ulong)uVar17 >> 0x20);
            puVar6[0x25] = (char)((ulong)uVar18 >> 0x20);
            puVar6[0x26] = (char)((ulong)uVar21 >> 0x20);
            puVar6[0x27] = (char)((ulong)uVar17 >> 0x28);
            puVar6[0x28] = (char)((ulong)uVar18 >> 0x28);
            puVar6[0x29] = (char)((ulong)uVar21 >> 0x28);
            puVar6[0x2a] = (char)((ulong)uVar17 >> 0x30);
            puVar6[0x2b] = (char)((ulong)uVar18 >> 0x30);
            puVar6[0x2c] = (char)((ulong)uVar21 >> 0x30);
            puVar6[0x2d] = (char)((ulong)uVar17 >> 0x38);
            puVar6[0x2e] = (char)((ulong)uVar18 >> 0x38);
            puVar6[0x2f] = (char)((ulong)uVar21 >> 0x38);
            puVar6[0x30] = (char)uVar22;
            puVar6[0x31] = (char)uVar24;
            puVar6[0x32] = (char)uVar26;
            puVar6[0x33] = (char)((ulong)uVar22 >> 8);
            puVar6[0x34] = (char)((ulong)uVar24 >> 8);
            puVar6[0x35] = (char)((ulong)uVar26 >> 8);
            puVar6[0x36] = (char)((ulong)uVar22 >> 0x10);
            puVar6[0x37] = (char)((ulong)uVar24 >> 0x10);
            puVar6[0x38] = (char)((ulong)uVar26 >> 0x10);
            puVar6[0x39] = (char)((ulong)uVar22 >> 0x18);
            puVar6[0x3a] = (char)((ulong)uVar24 >> 0x18);
            puVar6[0x3b] = (char)((ulong)uVar26 >> 0x18);
            puVar6[0x3c] = (char)((ulong)uVar22 >> 0x20);
            puVar6[0x3d] = (char)((ulong)uVar24 >> 0x20);
            puVar6[0x3e] = (char)((ulong)uVar26 >> 0x20);
            puVar6[0x3f] = (char)((ulong)uVar22 >> 0x28);
            puVar6[0x40] = (char)((ulong)uVar24 >> 0x28);
            puVar6[0x41] = (char)((ulong)uVar26 >> 0x28);
            puVar6[0x42] = (char)((ulong)uVar22 >> 0x30);
            puVar6[0x43] = (char)((ulong)uVar24 >> 0x30);
            puVar6[0x44] = (char)((ulong)uVar26 >> 0x30);
            puVar6[0x45] = (char)((ulong)uVar22 >> 0x38);
            puVar6[0x46] = (char)((ulong)uVar24 >> 0x38);
            puVar6[0x47] = (char)((ulong)uVar26 >> 0x38);
            puVar6[0x48] = (char)uVar23;
            puVar6[0x49] = (char)uVar25;
            puVar6[0x4a] = (char)uVar27;
            puVar6[0x4b] = (char)((ulong)uVar23 >> 8);
            puVar6[0x4c] = (char)((ulong)uVar25 >> 8);
            puVar6[0x4d] = (char)((ulong)uVar27 >> 8);
            puVar6[0x4e] = (char)((ulong)uVar23 >> 0x10);
            puVar6[0x4f] = (char)((ulong)uVar25 >> 0x10);
            puVar6[0x50] = (char)((ulong)uVar27 >> 0x10);
            puVar6[0x51] = (char)((ulong)uVar23 >> 0x18);
            puVar6[0x52] = (char)((ulong)uVar25 >> 0x18);
            puVar6[0x53] = (char)((ulong)uVar27 >> 0x18);
            puVar6[0x54] = (char)((ulong)uVar23 >> 0x20);
            puVar6[0x55] = (char)((ulong)uVar25 >> 0x20);
            puVar6[0x56] = (char)((ulong)uVar27 >> 0x20);
            puVar6[0x57] = (char)((ulong)uVar23 >> 0x28);
            puVar6[0x58] = (char)((ulong)uVar25 >> 0x28);
            puVar6[0x59] = (char)((ulong)uVar27 >> 0x28);
            puVar6[0x5a] = (char)((ulong)uVar23 >> 0x30);
            puVar6[0x5b] = (char)((ulong)uVar25 >> 0x30);
            puVar6[0x5c] = (char)((ulong)uVar27 >> 0x30);
            puVar6[0x5d] = (char)((ulong)uVar23 >> 0x38);
            puVar6[0x5e] = (char)((ulong)uVar25 >> 0x38);
            puVar6[0x5f] = (char)((ulong)uVar27 >> 0x38);
            puVar6 = puVar6 + 0x60;
          } while (uVar13 != 0);
          if (uVar9 != uVar8) {
            uVar13 = uVar9;
            if ((uVar2 & 0x18) != 0) goto LAB_00d78168;
            puVar6 = puVar5 + uVar9 * 3;
            goto LAB_00d78070;
          }
        }
LAB_00d78028:
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}


