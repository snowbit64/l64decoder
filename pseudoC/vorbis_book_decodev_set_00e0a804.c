// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_decodev_set
// Entry Point: 00e0a804
// Size: 440 bytes
// Signature: undefined vorbis_book_decodev_set(void)


undefined8 vorbis_book_decodev_set(ulong *param_1,void *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((long)param_1[2] < 1) {
    if (0 < (int)param_4) {
      memset(param_2,0,(ulong)param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    lVar16 = 0;
    do {
      iVar4 = FUN_00e0a388(param_1,param_3);
      if (iVar4 == -1) {
        return 0xffffffffffffffff;
      }
      iVar15 = (int)lVar16;
      if (iVar15 < (int)param_4) {
        uVar8 = *param_1;
        uVar5 = param_1[4];
        uVar13 = (ulong)(param_4 - iVar15) - 1;
        uVar1 = uVar8;
        if ((long)uVar8 < 1) {
          uVar1 = 0;
        }
        lVar16 = uVar8 * (long)iVar4;
        lVar9 = (long)iVar15;
        uVar8 = uVar1;
        if (uVar13 <= uVar1) {
          uVar8 = uVar13;
        }
        if (uVar8 < 8) {
LAB_00e0a8e4:
          lVar12 = 0;
          lVar11 = lVar9;
        }
        else {
          uVar2 = uVar1;
          if (uVar13 <= uVar1) {
            uVar2 = uVar13;
          }
          if (((void *)((long)param_2 + lVar9 * 4) < (void *)(uVar5 + (uVar2 + lVar16) * 4 + 4)) &&
             (uVar5 + lVar16 * 4 < (long)param_2 + (uVar2 + lVar9) * 4 + 4)) goto LAB_00e0a8e4;
          uVar13 = uVar8 + 1;
          uVar2 = 8;
          if ((uVar13 & 7) != 0) {
            uVar2 = uVar13 & 7;
          }
          lVar12 = uVar13 - uVar2;
          puVar14 = (undefined8 *)(uVar5 + lVar16 * 4 + 0x10);
          lVar11 = lVar12 + lVar9;
          lVar7 = ~uVar8 + uVar2;
          puVar10 = (undefined8 *)((long)param_2 + lVar9 * 4 + 0x10);
          do {
            puVar3 = puVar14 + -1;
            uVar17 = puVar14[-2];
            uVar19 = puVar14[1];
            uVar18 = *puVar14;
            puVar14 = puVar14 + 4;
            lVar7 = lVar7 + 8;
            puVar10[-1] = *puVar3;
            puVar10[-2] = uVar17;
            puVar10[1] = uVar19;
            *puVar10 = uVar18;
            puVar10 = puVar10 + 4;
          } while (lVar7 != 0);
        }
        lVar7 = uVar1 - lVar12;
        lVar9 = (ulong)(param_4 - iVar15) - lVar12;
        puVar6 = (undefined4 *)(uVar5 + (lVar12 + lVar16) * 4);
        do {
          lVar16 = lVar11;
          if (lVar7 == 0) break;
          lVar16 = lVar11 + 1;
          lVar7 = lVar7 + -1;
          *(undefined4 *)((long)param_2 + lVar11 * 4) = *puVar6;
          lVar9 = lVar9 + -1;
          puVar6 = puVar6 + 1;
          lVar11 = lVar16;
        } while (lVar9 != 0);
      }
    } while ((int)lVar16 < (int)param_4);
  }
  return 0;
}


