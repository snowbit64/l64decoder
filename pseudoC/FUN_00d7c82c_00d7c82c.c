// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7c82c
// Entry Point: 00d7c82c
// Size: 364 bytes
// Signature: undefined FUN_00d7c82c(void)


void FUN_00d7c82c(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined uVar17;
  undefined8 uVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  iVar8 = *(int *)(param_1 + 0x184);
  if (0 < iVar8) {
    lVar6 = 0;
    lVar7 = *param_4;
    do {
      uVar4 = *(uint *)(param_1 + 0x74);
      if (uVar4 != 0) {
        puVar9 = *(undefined **)(lVar7 + lVar6 * 8);
        puVar10 = *(undefined **)(param_3 + lVar6 * 8);
        puVar2 = puVar9 + uVar4;
        puVar15 = puVar9 + 2;
        puVar5 = puVar2;
        if (puVar2 <= puVar15) {
          puVar5 = puVar15;
        }
        puVar5 = puVar5 + ~(ulong)puVar9;
        if (puVar5 < (undefined *)0xe) {
LAB_00d7c978:
          do {
            uVar17 = *puVar10;
            *puVar9 = uVar17;
            puVar9[1] = uVar17;
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 1;
          } while (puVar9 < puVar2);
        }
        else {
          puVar3 = puVar9 + uVar4;
          if (puVar9 + uVar4 <= puVar15) {
            puVar3 = puVar15;
          }
          if ((puVar9 < puVar10 + ((ulong)(puVar3 + ~(ulong)puVar9) >> 1) + 1) &&
             (puVar10 < puVar15 + ((ulong)(puVar3 + ~(ulong)puVar9) & 0xfffffffffffffffe)))
          goto LAB_00d7c978;
          if (puVar5 < (undefined *)0x3e) {
            uVar12 = 0;
LAB_00d7c914:
            puVar15 = puVar9 + uVar4;
            if (puVar9 + uVar4 <= puVar9 + 2) {
              puVar15 = puVar9 + 2;
            }
            puVar5 = puVar9 + uVar12 * 2;
            uVar1 = ((ulong)(puVar15 + ~(ulong)puVar9) >> 1) + 1;
            uVar14 = uVar1 & 0xfffffffffffffff8;
            puVar9 = puVar9 + uVar14 * 2;
            lVar13 = uVar12 - uVar14;
            puVar11 = (undefined8 *)(puVar10 + uVar12);
            do {
              uVar16 = *puVar11;
              lVar13 = lVar13 + 8;
              *puVar5 = (char)uVar16;
              puVar5[1] = (char)uVar16;
              uVar17 = (undefined)((ulong)uVar16 >> 8);
              puVar5[2] = uVar17;
              puVar5[3] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x10);
              puVar5[4] = uVar17;
              puVar5[5] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x18);
              puVar5[6] = uVar17;
              puVar5[7] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x20);
              puVar5[8] = uVar17;
              puVar5[9] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x28);
              puVar5[10] = uVar17;
              puVar5[0xb] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x30);
              puVar5[0xc] = uVar17;
              puVar5[0xd] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x38);
              puVar5[0xe] = uVar17;
              puVar5[0xf] = uVar17;
              puVar5 = puVar5 + 0x10;
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
            puVar10 = puVar10 + uVar14;
            if (uVar1 != uVar14) goto LAB_00d7c978;
          }
          else {
            puVar15 = puVar9 + 0x20;
            uVar1 = ((ulong)puVar5 >> 1) + 1;
            puVar11 = (undefined8 *)(puVar10 + 0x10);
            uVar12 = uVar1 & 0xffffffffffffffe0;
            uVar14 = uVar12;
            do {
              uVar20 = puVar11[-1];
              uVar19 = puVar11[-2];
              uVar18 = puVar11[1];
              uVar16 = *puVar11;
              puVar11 = puVar11 + 4;
              uVar14 = uVar14 - 0x20;
              puVar15[-0x20] = (char)uVar19;
              puVar15[-0x1f] = (char)uVar19;
              uVar17 = (undefined)((ulong)uVar19 >> 8);
              puVar15[-0x1e] = uVar17;
              puVar15[-0x1d] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x10);
              puVar15[-0x1c] = uVar17;
              puVar15[-0x1b] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x18);
              puVar15[-0x1a] = uVar17;
              puVar15[-0x19] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x20);
              puVar15[-0x18] = uVar17;
              puVar15[-0x17] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x28);
              puVar15[-0x16] = uVar17;
              puVar15[-0x15] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x30);
              puVar15[-0x14] = uVar17;
              puVar15[-0x13] = uVar17;
              uVar17 = (undefined)((ulong)uVar19 >> 0x38);
              puVar15[-0x12] = uVar17;
              puVar15[-0x11] = uVar17;
              puVar15[-0x10] = (char)uVar20;
              puVar15[-0xf] = (char)uVar20;
              uVar17 = (undefined)((ulong)uVar20 >> 8);
              puVar15[-0xe] = uVar17;
              puVar15[-0xd] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x10);
              puVar15[-0xc] = uVar17;
              puVar15[-0xb] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x18);
              puVar15[-10] = uVar17;
              puVar15[-9] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x20);
              puVar15[-8] = uVar17;
              puVar15[-7] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x28);
              puVar15[-6] = uVar17;
              puVar15[-5] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x30);
              puVar15[-4] = uVar17;
              puVar15[-3] = uVar17;
              uVar17 = (undefined)((ulong)uVar20 >> 0x38);
              puVar15[-2] = uVar17;
              puVar15[-1] = uVar17;
              *puVar15 = (char)uVar16;
              puVar15[1] = (char)uVar16;
              uVar17 = (undefined)((ulong)uVar16 >> 8);
              puVar15[2] = uVar17;
              puVar15[3] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x10);
              puVar15[4] = uVar17;
              puVar15[5] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x18);
              puVar15[6] = uVar17;
              puVar15[7] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x20);
              puVar15[8] = uVar17;
              puVar15[9] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x28);
              puVar15[10] = uVar17;
              puVar15[0xb] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x30);
              puVar15[0xc] = uVar17;
              puVar15[0xd] = uVar17;
              uVar17 = (undefined)((ulong)uVar16 >> 0x38);
              puVar15[0xe] = uVar17;
              puVar15[0xf] = uVar17;
              puVar15[0x10] = (char)uVar18;
              puVar15[0x11] = (char)uVar18;
              uVar17 = (undefined)((ulong)uVar18 >> 8);
              puVar15[0x12] = uVar17;
              puVar15[0x13] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x10);
              puVar15[0x14] = uVar17;
              puVar15[0x15] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x18);
              puVar15[0x16] = uVar17;
              puVar15[0x17] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x20);
              puVar15[0x18] = uVar17;
              puVar15[0x19] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x28);
              puVar15[0x1a] = uVar17;
              puVar15[0x1b] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x30);
              puVar15[0x1c] = uVar17;
              puVar15[0x1d] = uVar17;
              uVar17 = (undefined)((ulong)uVar18 >> 0x38);
              puVar15[0x1e] = uVar17;
              puVar15[0x1f] = uVar17;
              puVar15 = puVar15 + 0x40;
            } while (uVar14 != 0);
            if (uVar1 != uVar12) {
              if ((uVar1 & 0x18) == 0) {
                puVar9 = puVar9 + uVar12 * 2;
                puVar10 = puVar10 + uVar12;
                goto LAB_00d7c978;
              }
              goto LAB_00d7c914;
            }
          }
        }
        iVar8 = *(int *)(param_1 + 0x184);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return;
}


