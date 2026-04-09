// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c998
// Entry Point: 00d7c998
// Size: 448 bytes
// Signature: undefined FUN_00d7c998(void)


void FUN_00d7c998(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined uVar18;
  undefined8 uVar17;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (0 < *(int *)(param_1 + 0x184)) {
    lVar16 = 0;
    uVar14 = 0;
    lVar15 = *param_4;
    do {
      uVar4 = *(uint *)(param_1 + 0x74);
      if (uVar4 == 0) {
        uVar6 = 0;
      }
      else {
        puVar7 = *(undefined **)(lVar15 + uVar14 * 8);
        puVar8 = *(undefined **)(param_3 + lVar16 * 8);
        puVar2 = puVar7 + uVar4;
        puVar13 = puVar7 + 2;
        puVar5 = puVar2;
        if (puVar2 <= puVar13) {
          puVar5 = puVar13;
        }
        puVar5 = puVar5 + ~(ulong)puVar7;
        if (puVar5 < (undefined *)0xe) {
LAB_00d7cb24:
          do {
            uVar18 = *puVar8;
            *puVar7 = uVar18;
            puVar7[1] = uVar18;
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 1;
          } while (puVar7 < puVar2);
        }
        else {
          puVar3 = puVar7 + uVar4;
          if (puVar7 + uVar4 <= puVar13) {
            puVar3 = puVar13;
          }
          if ((puVar7 < puVar8 + ((ulong)(puVar3 + ~(ulong)puVar7) >> 1) + 1) &&
             (puVar8 < puVar13 + ((ulong)(puVar3 + ~(ulong)puVar7) & 0xfffffffffffffffe)))
          goto LAB_00d7cb24;
          if (puVar5 < (undefined *)0x3e) {
            uVar10 = 0;
LAB_00d7cac0:
            puVar13 = puVar7 + uVar4;
            if (puVar7 + uVar4 <= puVar7 + 2) {
              puVar13 = puVar7 + 2;
            }
            puVar5 = puVar7 + uVar10 * 2;
            uVar1 = ((ulong)(puVar13 + ~(ulong)puVar7) >> 1) + 1;
            uVar12 = uVar1 & 0xfffffffffffffff8;
            puVar7 = puVar7 + uVar12 * 2;
            lVar11 = uVar10 - uVar12;
            puVar9 = (undefined8 *)(puVar8 + uVar10);
            do {
              uVar17 = *puVar9;
              lVar11 = lVar11 + 8;
              *puVar5 = (char)uVar17;
              puVar5[1] = (char)uVar17;
              uVar18 = (undefined)((ulong)uVar17 >> 8);
              puVar5[2] = uVar18;
              puVar5[3] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x10);
              puVar5[4] = uVar18;
              puVar5[5] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x18);
              puVar5[6] = uVar18;
              puVar5[7] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x20);
              puVar5[8] = uVar18;
              puVar5[9] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x28);
              puVar5[10] = uVar18;
              puVar5[0xb] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x30);
              puVar5[0xc] = uVar18;
              puVar5[0xd] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x38);
              puVar5[0xe] = uVar18;
              puVar5[0xf] = uVar18;
              puVar5 = puVar5 + 0x10;
              puVar9 = puVar9 + 1;
            } while (lVar11 != 0);
            puVar8 = puVar8 + uVar12;
            if (uVar1 != uVar12) goto LAB_00d7cb24;
          }
          else {
            puVar13 = puVar7 + 0x20;
            uVar1 = ((ulong)puVar5 >> 1) + 1;
            puVar9 = (undefined8 *)(puVar8 + 0x10);
            uVar10 = uVar1 & 0xffffffffffffffe0;
            uVar12 = uVar10;
            do {
              uVar21 = puVar9[-1];
              uVar20 = puVar9[-2];
              uVar19 = puVar9[1];
              uVar17 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar12 = uVar12 - 0x20;
              puVar13[-0x20] = (char)uVar20;
              puVar13[-0x1f] = (char)uVar20;
              uVar18 = (undefined)((ulong)uVar20 >> 8);
              puVar13[-0x1e] = uVar18;
              puVar13[-0x1d] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x10);
              puVar13[-0x1c] = uVar18;
              puVar13[-0x1b] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x18);
              puVar13[-0x1a] = uVar18;
              puVar13[-0x19] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x20);
              puVar13[-0x18] = uVar18;
              puVar13[-0x17] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x28);
              puVar13[-0x16] = uVar18;
              puVar13[-0x15] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x30);
              puVar13[-0x14] = uVar18;
              puVar13[-0x13] = uVar18;
              uVar18 = (undefined)((ulong)uVar20 >> 0x38);
              puVar13[-0x12] = uVar18;
              puVar13[-0x11] = uVar18;
              puVar13[-0x10] = (char)uVar21;
              puVar13[-0xf] = (char)uVar21;
              uVar18 = (undefined)((ulong)uVar21 >> 8);
              puVar13[-0xe] = uVar18;
              puVar13[-0xd] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x10);
              puVar13[-0xc] = uVar18;
              puVar13[-0xb] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x18);
              puVar13[-10] = uVar18;
              puVar13[-9] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x20);
              puVar13[-8] = uVar18;
              puVar13[-7] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x28);
              puVar13[-6] = uVar18;
              puVar13[-5] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x30);
              puVar13[-4] = uVar18;
              puVar13[-3] = uVar18;
              uVar18 = (undefined)((ulong)uVar21 >> 0x38);
              puVar13[-2] = uVar18;
              puVar13[-1] = uVar18;
              *puVar13 = (char)uVar17;
              puVar13[1] = (char)uVar17;
              uVar18 = (undefined)((ulong)uVar17 >> 8);
              puVar13[2] = uVar18;
              puVar13[3] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x10);
              puVar13[4] = uVar18;
              puVar13[5] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x18);
              puVar13[6] = uVar18;
              puVar13[7] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x20);
              puVar13[8] = uVar18;
              puVar13[9] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x28);
              puVar13[10] = uVar18;
              puVar13[0xb] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x30);
              puVar13[0xc] = uVar18;
              puVar13[0xd] = uVar18;
              uVar18 = (undefined)((ulong)uVar17 >> 0x38);
              puVar13[0xe] = uVar18;
              puVar13[0xf] = uVar18;
              puVar13[0x10] = (char)uVar19;
              puVar13[0x11] = (char)uVar19;
              uVar18 = (undefined)((ulong)uVar19 >> 8);
              puVar13[0x12] = uVar18;
              puVar13[0x13] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x10);
              puVar13[0x14] = uVar18;
              puVar13[0x15] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x18);
              puVar13[0x16] = uVar18;
              puVar13[0x17] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x20);
              puVar13[0x18] = uVar18;
              puVar13[0x19] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x28);
              puVar13[0x1a] = uVar18;
              puVar13[0x1b] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x30);
              puVar13[0x1c] = uVar18;
              puVar13[0x1d] = uVar18;
              uVar18 = (undefined)((ulong)uVar19 >> 0x38);
              puVar13[0x1e] = uVar18;
              puVar13[0x1f] = uVar18;
              puVar13 = puVar13 + 0x40;
            } while (uVar12 != 0);
            if (uVar1 != uVar10) {
              if ((uVar1 & 0x18) == 0) {
                puVar7 = puVar7 + uVar10 * 2;
                puVar8 = puVar8 + uVar10;
                goto LAB_00d7cb24;
              }
              goto LAB_00d7cac0;
            }
          }
        }
        uVar6 = *(undefined4 *)(param_1 + 0x74);
      }
      jcopy_sample_rows(lVar15,uVar14 & 0xffffffff,lVar15,(uint)uVar14 | 1,1,uVar6);
      lVar16 = lVar16 + 1;
      uVar14 = uVar14 + 2;
    } while ((int)uVar14 < *(int *)(param_1 + 0x184));
  }
  return;
}


