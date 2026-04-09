// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_insertion_sort_decreasing_int16
// Entry Point: 00e6882c
// Size: 416 bytes
// Signature: undefined silk_insertion_sort_decreasing_int16(void)


void silk_insertion_sort_decreasing_int16(long param_1,long param_2,int param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  short sVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  
  if (0 < (int)param_4) {
    uVar7 = (ulong)param_4;
    if (7 < param_4) {
      uVar9 = uVar7 & 0xfffffff8;
      uVar18 = 0x300000002;
      uVar16 = 0x100000000;
      puVar11 = (undefined8 *)(param_2 + 0x10);
      uVar14 = uVar9;
      do {
        iVar17 = (int)((ulong)uVar16 >> 0x20);
        iVar19 = (int)((ulong)uVar18 >> 0x20);
        uVar14 = uVar14 - 8;
        puVar11[-1] = uVar18;
        puVar11[-2] = uVar16;
        puVar11[1] = CONCAT44(iVar19 + 4,(int)uVar18 + 4);
        *puVar11 = CONCAT44(iVar17 + 4,(int)uVar16 + 4);
        puVar11 = puVar11 + 4;
        uVar16 = CONCAT44(iVar17 + 8,(int)uVar16 + 8);
        uVar18 = CONCAT44(iVar19 + 8,(int)uVar18 + 8);
        if (uVar14 == 0) goto joined_r0x00e68880;
      } while( true );
    }
    uVar9 = 0;
    do {
      *(int *)(param_2 + uVar9 * 4) = (int)uVar9;
      uVar9 = uVar9 + 1;
joined_r0x00e68880:
    } while (uVar9 != uVar7);
    bVar2 = 1 < (int)param_4;
    if (1 < (int)param_4) {
      uVar9 = 1;
      do {
        sVar10 = *(short *)(param_1 + uVar9 * 2);
        uVar14 = uVar9;
        do {
          uVar15 = uVar14 - 1;
          sVar4 = *(short *)(param_1 + (uVar15 & 0xffffffff) * 2);
          if (sVar10 <= sVar4) goto LAB_00e688ac;
          *(short *)(param_1 + uVar14 * 2) = sVar4;
          *(undefined4 *)(param_2 + uVar14 * 4) =
               *(undefined4 *)(param_2 + (uVar15 & 0xffffffff) * 4);
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar15;
        } while (bVar1);
        uVar14 = 0;
LAB_00e688ac:
        *(int *)(param_2 + (-(uVar14 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar14 & 0xffffffff) << 2)
                ) = (int)uVar9;
        uVar9 = uVar9 + 1;
        *(short *)(param_1 +
                  (-(uVar14 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar14 & 0xffffffff) << 1)) =
             sVar10;
      } while (uVar9 != uVar7);
      goto LAB_00e6890c;
    }
  }
  bVar2 = false;
LAB_00e6890c:
  if ((int)param_4 < param_3) {
    lVar12 = (long)(int)param_4;
    lVar8 = lVar12 + -1;
    if (bVar2) {
      lVar12 = (long)(int)param_4;
      do {
        sVar10 = *(short *)(param_1 + lVar12 * 2);
        uVar5 = param_4 - 1;
        if (*(short *)(param_1 + lVar8 * 2) < sVar10) {
          do {
            uVar13 = uVar5 - 1;
            sVar4 = *(short *)(param_1 + (ulong)uVar13 * 2);
            if (sVar10 <= sVar4) goto LAB_00e6892c;
            uVar3 = *(undefined4 *)(param_2 + (ulong)uVar13 * 4);
            *(short *)(param_1 + (ulong)uVar5 * 2) = sVar4;
            *(undefined4 *)(param_2 + (ulong)uVar5 * 4) = uVar3;
            uVar5 = uVar13;
          } while (0 < (int)uVar13);
          uVar13 = 0xffffffff;
LAB_00e6892c:
          *(short *)(param_1 + (long)(int)(uVar13 + 1) * 2) = sVar10;
          *(int *)(param_2 + (long)(int)(uVar13 + 1) * 4) = (int)lVar12;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != param_3);
    }
    else {
      sVar10 = *(short *)(param_1 + lVar8 * 2);
      psVar6 = (short *)(param_1 + lVar12 * 2);
      lVar12 = param_3 - lVar12;
      do {
        sVar4 = *psVar6;
        if (sVar10 < sVar4) {
          *(short *)(param_1 + lVar8 * 2) = sVar4;
          *(uint *)(param_2 + lVar8 * 4) = param_4;
          sVar10 = sVar4;
        }
        param_4 = param_4 + 1;
        psVar6 = psVar6 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return;
}


