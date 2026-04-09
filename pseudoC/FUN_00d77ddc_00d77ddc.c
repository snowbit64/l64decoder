// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77ddc
// Entry Point: 00d77ddc
// Size: 340 bytes
// Signature: undefined FUN_00d77ddc(void)


void FUN_00d77ddc(long param_1,long *param_2,uint param_3,ulong *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x74);
    uVar8 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar9 = uVar8 & 0xffffffe0;
      uVar10 = uVar8 & 0xfffffff8;
      do {
        puVar3 = (undefined *)*param_4;
        puVar11 = *(undefined **)(*param_2 + (ulong)param_3 * 8);
        if ((uVar2 < 8) || (puVar3 < puVar11 + uVar8 && puVar11 < puVar3 + uVar8 * 3)) {
          puVar5 = puVar3;
          uVar7 = 0;
LAB_00d77e68:
          lVar4 = uVar8 - uVar7;
          puVar5 = puVar5 + 2;
          puVar3 = puVar11 + uVar7;
          do {
            uVar12 = *puVar3;
            lVar4 = lVar4 + -1;
            *puVar5 = uVar12;
            puVar5[-1] = uVar12;
            puVar5[-2] = uVar12;
            puVar5 = puVar5 + 3;
            puVar3 = puVar3 + 1;
          } while (lVar4 != 0);
        }
        else if (uVar2 < 0x20) {
          uVar7 = 0;
LAB_00d77ee0:
          puVar5 = puVar3 + uVar10 * 3;
          puVar3 = puVar3 + uVar7 * 3;
          lVar4 = uVar7 - uVar10;
          puVar6 = (undefined8 *)(puVar11 + uVar7);
          do {
            uVar13 = *puVar6;
            lVar4 = lVar4 + 8;
            uVar12 = (undefined)uVar13;
            *puVar3 = uVar12;
            puVar3[1] = uVar12;
            puVar3[2] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 8);
            puVar3[3] = uVar12;
            puVar3[4] = uVar12;
            puVar3[5] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x10);
            puVar3[6] = uVar12;
            puVar3[7] = uVar12;
            puVar3[8] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x18);
            puVar3[9] = uVar12;
            puVar3[10] = uVar12;
            puVar3[0xb] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x20);
            puVar3[0xc] = uVar12;
            puVar3[0xd] = uVar12;
            puVar3[0xe] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x28);
            puVar3[0xf] = uVar12;
            puVar3[0x10] = uVar12;
            puVar3[0x11] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x30);
            puVar3[0x12] = uVar12;
            puVar3[0x13] = uVar12;
            puVar3[0x14] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x38);
            puVar3[0x15] = uVar12;
            puVar3[0x16] = uVar12;
            puVar3[0x17] = uVar12;
            puVar3 = puVar3 + 0x18;
            puVar6 = puVar6 + 1;
          } while (lVar4 != 0);
          uVar7 = uVar10;
          if (uVar10 != uVar8) goto LAB_00d77e68;
        }
        else {
          puVar6 = (undefined8 *)(puVar11 + 0x10);
          uVar7 = uVar9;
          puVar5 = puVar3;
          do {
            uVar14 = puVar6[-1];
            uVar13 = puVar6[-2];
            uVar16 = puVar6[1];
            uVar15 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar7 = uVar7 - 0x20;
            uVar12 = (undefined)uVar13;
            *puVar5 = uVar12;
            puVar5[1] = uVar12;
            puVar5[2] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 8);
            puVar5[3] = uVar12;
            puVar5[4] = uVar12;
            puVar5[5] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x10);
            puVar5[6] = uVar12;
            puVar5[7] = uVar12;
            puVar5[8] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x18);
            puVar5[9] = uVar12;
            puVar5[10] = uVar12;
            puVar5[0xb] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x20);
            puVar5[0xc] = uVar12;
            puVar5[0xd] = uVar12;
            puVar5[0xe] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x28);
            puVar5[0xf] = uVar12;
            puVar5[0x10] = uVar12;
            puVar5[0x11] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x30);
            puVar5[0x12] = uVar12;
            puVar5[0x13] = uVar12;
            puVar5[0x14] = uVar12;
            uVar12 = (undefined)((ulong)uVar13 >> 0x38);
            puVar5[0x15] = uVar12;
            puVar5[0x16] = uVar12;
            puVar5[0x17] = uVar12;
            uVar12 = (undefined)uVar14;
            puVar5[0x18] = uVar12;
            puVar5[0x19] = uVar12;
            puVar5[0x1a] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 8);
            puVar5[0x1b] = uVar12;
            puVar5[0x1c] = uVar12;
            puVar5[0x1d] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x10);
            puVar5[0x1e] = uVar12;
            puVar5[0x1f] = uVar12;
            puVar5[0x20] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x18);
            puVar5[0x21] = uVar12;
            puVar5[0x22] = uVar12;
            puVar5[0x23] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x20);
            puVar5[0x24] = uVar12;
            puVar5[0x25] = uVar12;
            puVar5[0x26] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x28);
            puVar5[0x27] = uVar12;
            puVar5[0x28] = uVar12;
            puVar5[0x29] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x30);
            puVar5[0x2a] = uVar12;
            puVar5[0x2b] = uVar12;
            puVar5[0x2c] = uVar12;
            uVar12 = (undefined)((ulong)uVar14 >> 0x38);
            puVar5[0x2d] = uVar12;
            puVar5[0x2e] = uVar12;
            puVar5[0x2f] = uVar12;
            uVar12 = (undefined)uVar15;
            puVar5[0x30] = uVar12;
            puVar5[0x31] = uVar12;
            puVar5[0x32] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 8);
            puVar5[0x33] = uVar12;
            puVar5[0x34] = uVar12;
            puVar5[0x35] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x10);
            puVar5[0x36] = uVar12;
            puVar5[0x37] = uVar12;
            puVar5[0x38] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x18);
            puVar5[0x39] = uVar12;
            puVar5[0x3a] = uVar12;
            puVar5[0x3b] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x20);
            puVar5[0x3c] = uVar12;
            puVar5[0x3d] = uVar12;
            puVar5[0x3e] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x28);
            puVar5[0x3f] = uVar12;
            puVar5[0x40] = uVar12;
            puVar5[0x41] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x30);
            puVar5[0x42] = uVar12;
            puVar5[0x43] = uVar12;
            puVar5[0x44] = uVar12;
            uVar12 = (undefined)((ulong)uVar15 >> 0x38);
            puVar5[0x45] = uVar12;
            puVar5[0x46] = uVar12;
            puVar5[0x47] = uVar12;
            uVar12 = (undefined)uVar16;
            puVar5[0x48] = uVar12;
            puVar5[0x49] = uVar12;
            puVar5[0x4a] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 8);
            puVar5[0x4b] = uVar12;
            puVar5[0x4c] = uVar12;
            puVar5[0x4d] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x10);
            puVar5[0x4e] = uVar12;
            puVar5[0x4f] = uVar12;
            puVar5[0x50] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x18);
            puVar5[0x51] = uVar12;
            puVar5[0x52] = uVar12;
            puVar5[0x53] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x20);
            puVar5[0x54] = uVar12;
            puVar5[0x55] = uVar12;
            puVar5[0x56] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x28);
            puVar5[0x57] = uVar12;
            puVar5[0x58] = uVar12;
            puVar5[0x59] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x30);
            puVar5[0x5a] = uVar12;
            puVar5[0x5b] = uVar12;
            puVar5[0x5c] = uVar12;
            uVar12 = (undefined)((ulong)uVar16 >> 0x38);
            puVar5[0x5d] = uVar12;
            puVar5[0x5e] = uVar12;
            puVar5[0x5f] = uVar12;
            puVar5 = puVar5 + 0x60;
          } while (uVar7 != 0);
          if (uVar9 != uVar8) {
            uVar7 = uVar9;
            if ((uVar2 & 0x18) == 0) {
              puVar5 = puVar3 + uVar9 * 3;
              goto LAB_00d77e68;
            }
            goto LAB_00d77ee0;
          }
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}


