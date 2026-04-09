// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_decodev_add
// Entry Point: 00e0a650
// Size: 436 bytes
// Signature: undefined vorbis_book_decodev_add(void)


undefined8 vorbis_book_decodev_add(ulong *param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((0 < (long)param_1[2]) && (0 < param_4)) {
    lVar16 = 0;
    do {
      iVar4 = FUN_00e0a388(param_1,param_3);
      if (iVar4 == -1) {
        return 0xffffffffffffffff;
      }
      iVar15 = (int)lVar16;
      if (iVar15 < param_4) {
        uVar8 = *param_1;
        uVar5 = param_1[4];
        uVar13 = (ulong)(uint)(param_4 - iVar15) - 1;
        uVar1 = uVar8;
        if ((long)uVar8 < 1) {
          uVar1 = 0;
        }
        lVar9 = uVar8 * (long)iVar4;
        lVar10 = (long)iVar15;
        uVar8 = uVar1;
        if (uVar13 <= uVar1) {
          uVar8 = uVar13;
        }
        if (uVar8 < 8) {
LAB_00e0a730:
          lVar12 = 0;
          lVar16 = lVar10;
        }
        else {
          uVar2 = uVar1;
          if (uVar13 <= uVar1) {
            uVar2 = uVar13;
          }
          if (((ulong)(param_2 + lVar10 * 4) < uVar5 + (uVar2 + lVar9) * 4 + 4) &&
             (uVar5 + lVar9 * 4 < param_2 + 4 + (uVar2 + lVar10) * 4)) goto LAB_00e0a730;
          uVar13 = uVar8 + 1;
          uVar2 = 8;
          if ((uVar13 & 7) != 0) {
            uVar2 = uVar13 & 7;
          }
          lVar12 = uVar13 - uVar2;
          puVar14 = (undefined8 *)(uVar5 + lVar9 * 4 + 0x10);
          lVar16 = lVar12 + lVar10;
          lVar7 = ~uVar8 + uVar2;
          puVar11 = (undefined8 *)(param_2 + 0x10 + lVar10 * 4);
          do {
            puVar3 = puVar14 + -1;
            uVar17 = puVar14[-2];
            uVar19 = puVar14[1];
            uVar18 = *puVar14;
            puVar14 = puVar14 + 4;
            lVar7 = lVar7 + 8;
            puVar11[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                                   (float)((ulong)puVar11[-1] >> 0x20),
                                   (float)*puVar3 + (float)puVar11[-1]);
            puVar11[-2] = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                                   (float)((ulong)puVar11[-2] >> 0x20),
                                   (float)uVar17 + (float)puVar11[-2]);
            puVar11[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                                  (float)((ulong)puVar11[1] >> 0x20),
                                  (float)uVar19 + (float)puVar11[1]);
            *puVar11 = CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)*puVar11 >> 0x20),
                                (float)uVar18 + (float)*puVar11);
            puVar11 = puVar11 + 4;
          } while (lVar7 != 0);
        }
        lVar7 = uVar1 - lVar12;
        lVar10 = (ulong)(uint)(param_4 - iVar15) - lVar12;
        pfVar6 = (float *)(uVar5 + (lVar12 + lVar9) * 4);
        do {
          if (lVar7 == 0) break;
          lVar9 = lVar16 * 4;
          lVar16 = lVar16 + 1;
          lVar7 = lVar7 + -1;
          lVar10 = lVar10 + -1;
          *(float *)(param_2 + lVar9) = *pfVar6 + *(float *)(param_2 + lVar9);
          pfVar6 = pfVar6 + 1;
        } while (lVar10 != 0);
      }
    } while ((int)lVar16 < param_4);
  }
  return 0;
}


