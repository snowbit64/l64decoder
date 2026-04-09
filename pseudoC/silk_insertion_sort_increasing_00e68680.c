// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_insertion_sort_increasing
// Entry Point: 00e68680
// Size: 428 bytes
// Signature: undefined silk_insertion_sort_increasing(void)


void silk_insertion_sort_increasing(long param_1,long param_2,int param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    if (7 < param_4) {
      uVar7 = uVar5 & 0xfffffff8;
      uVar15 = 0x300000002;
      uVar13 = 0x100000000;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      uVar11 = uVar7;
      do {
        iVar14 = (int)((ulong)uVar13 >> 0x20);
        iVar16 = (int)((ulong)uVar15 >> 0x20);
        uVar11 = uVar11 - 8;
        puVar8[-1] = uVar15;
        puVar8[-2] = uVar13;
        puVar8[1] = CONCAT44(iVar16 + 4,(int)uVar15 + 4);
        *puVar8 = CONCAT44(iVar14 + 4,(int)uVar13 + 4);
        puVar8 = puVar8 + 4;
        uVar13 = CONCAT44(iVar14 + 8,(int)uVar13 + 8);
        uVar15 = CONCAT44(iVar16 + 8,(int)uVar15 + 8);
        if (uVar11 == 0) goto joined_r0x00e686d4;
      } while( true );
    }
    uVar7 = 0;
    do {
      *(int *)(param_2 + uVar7 * 4) = (int)uVar7;
      uVar7 = uVar7 + 1;
joined_r0x00e686d4:
    } while (uVar7 != uVar5);
    bVar2 = 1 < (int)param_4;
    if (1 < (int)param_4) {
      uVar7 = 1;
      do {
        iVar14 = *(int *)(param_1 + uVar7 * 4);
        uVar11 = uVar7;
        do {
          uVar12 = uVar11 - 1;
          iVar16 = *(int *)(param_1 + (uVar12 & 0xffffffff) * 4);
          if (iVar16 <= iVar14) goto LAB_00e68700;
          *(int *)(param_1 + uVar11 * 4) = iVar16;
          *(undefined4 *)(param_2 + uVar11 * 4) =
               *(undefined4 *)(param_2 + (uVar12 & 0xffffffff) * 4);
          bVar1 = 1 < (long)uVar11;
          uVar11 = uVar12;
        } while (bVar1);
        uVar11 = 0;
LAB_00e68700:
        uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
        *(int *)(param_1 + uVar11) = iVar14;
        *(int *)(param_2 + uVar11) = (int)uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
      goto LAB_00e68760;
    }
  }
  bVar2 = false;
LAB_00e68760:
  if ((int)param_4 < param_3) {
    lVar9 = (long)(int)param_4;
    lVar6 = lVar9 + -1;
    if (bVar2) {
      lVar9 = (long)(int)param_4;
      do {
        iVar14 = *(int *)(param_1 + lVar9 * 4);
        uVar3 = param_4 - 1;
        if (iVar14 < *(int *)(param_1 + lVar6 * 4)) {
          do {
            uVar10 = uVar3 - 1;
            iVar16 = *(int *)(param_1 + (ulong)uVar10 * 4);
            if (iVar16 <= iVar14) goto LAB_00e68780;
            *(int *)(param_1 + (ulong)uVar3 * 4) = iVar16;
            *(undefined4 *)(param_2 + (ulong)uVar3 * 4) =
                 *(undefined4 *)(param_2 + (ulong)uVar10 * 4);
            uVar3 = uVar10;
          } while (0 < (int)uVar10);
          uVar10 = 0xffffffff;
LAB_00e68780:
          uVar5 = -(ulong)(uVar10 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar10 + 1) << 2;
          *(int *)(param_1 + uVar5) = iVar14;
          *(int *)(param_2 + uVar5) = (int)lVar9;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != param_3);
    }
    else {
      piVar4 = (int *)(param_1 + lVar9 * 4);
      lVar9 = param_3 - lVar9;
      do {
        if (*piVar4 < *(int *)(param_1 + lVar6 * 4)) {
          *(int *)(param_1 + lVar6 * 4) = *piVar4;
          *(uint *)(param_2 + lVar6 * 4) = param_4;
        }
        param_4 = param_4 + 1;
        piVar4 = piVar4 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}


