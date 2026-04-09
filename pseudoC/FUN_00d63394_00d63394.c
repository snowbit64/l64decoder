// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d63394
// Entry Point: 00d63394
// Size: 640 bytes
// Signature: undefined FUN_00d63394(void)


undefined8 FUN_00d63394(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  code **ppcVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  short *psVar16;
  long *plVar17;
  long lVar18;
  
  lVar12 = param_1[0x44];
  if (*(int *)(param_1 + 0x26) != 0) {
    iVar9 = *(int *)(lVar12 + 0x38);
    if ((*(int *)(lVar12 + 0x38) == 0) &&
       (iVar9 = *(int *)(param_1 + 0x26), 0 < *(int *)((long)param_1 + 0x164))) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar12 + 0x24 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 0x164));
      iVar9 = *(int *)(param_1 + 0x26);
    }
    *(int *)(lVar12 + 0x38) = iVar9 + -1;
  }
  if (0 < *(int *)(param_1 + 0x32)) {
    lVar6 = 0;
    do {
      psVar16 = *(short **)(param_2 + lVar6 * 8);
      uVar3 = *(uint *)(param_1 + 0x3b);
      lVar18 = param_1[0x3a];
      lVar7 = (long)*(int *)((long)param_1 + lVar6 * 4 + 0x194);
      piVar15 = (int *)(lVar12 + lVar7 * 4 + 0x24);
      lVar13 = *(long *)(lVar12 + (long)*(int *)(param_1[lVar7 + 0x2d] + 0x14) * 8 + 0x80);
      plVar17 = *(long **)(lVar12 + (long)*(int *)(param_1[lVar7 + 0x2d] + 0x1c) * 8 + 0xa0);
      uVar14 = (int)*psVar16 - *piVar15;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar10 = -uVar14;
        if (-1 < (int)uVar14) {
          uVar10 = uVar14;
        }
        uVar2 = 0xffffffff;
        do {
          uVar14 = uVar2;
          uVar2 = uVar14 + 1;
          bVar1 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar1);
        uVar14 = uVar14 + 2;
        if (10 < uVar2) {
          ppcVar8 = (code **)*param_1;
          *(undefined4 *)(ppcVar8 + 5) = 6;
          (**ppcVar8)(param_1);
        }
      }
      *(long *)(lVar13 + (ulong)uVar14 * 8) = *(long *)(lVar13 + (ulong)uVar14 * 8) + 1;
      if (0 < (int)uVar3) {
        lVar7 = (ulong)uVar3 + 1;
        lVar13 = 1;
        iVar9 = 0;
        do {
          while (iVar5 = iVar9, sVar4 = psVar16[*(int *)(lVar18 + lVar13 * 4)], sVar4 == 0) {
            lVar13 = lVar13 + 1;
            iVar9 = iVar5 + 1;
            if (lVar13 == lVar7) {
              if (-1 < iVar5) {
                *plVar17 = *plVar17 + 1;
              }
              goto LAB_00d63420;
            }
          }
          if (0xf < iVar5) {
            iVar9 = iVar5;
            if (0x1e < iVar5) {
              iVar9 = 0x1f;
            }
            uVar3 = (iVar5 - iVar9) + 0xf;
            iVar5 = (iVar5 - (uVar3 & 0xfffffff0)) + -0x10;
            plVar17[0xf0] = plVar17[0xf0] + (ulong)((uVar3 >> 4) + 1);
          }
          uVar14 = (uint)sVar4;
          uVar3 = -uVar14;
          if (-1 < (int)uVar14) {
            uVar3 = uVar14;
          }
          if ((uVar3 & 0xffff) < 2) {
            iVar9 = 1;
          }
          else {
            uVar14 = uVar3 & 0xffff;
            uVar3 = 0;
            do {
              uVar10 = uVar3;
              uVar3 = uVar10 + 1;
              bVar1 = 3 < uVar14;
              uVar14 = uVar14 >> 1;
            } while (bVar1);
            iVar9 = uVar10 + 2;
            if (9 < uVar3) {
              ppcVar8 = (code **)*param_1;
              *(undefined4 *)(ppcVar8 + 5) = 6;
              (**ppcVar8)(param_1);
            }
          }
          uVar3 = iVar9 + iVar5 * 0x10;
          uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
          lVar13 = lVar13 + 1;
          *(long *)((long)plVar17 + uVar11) = *(long *)((long)plVar17 + uVar11) + 1;
          iVar9 = 0;
        } while (lVar13 != lVar7);
      }
LAB_00d63420:
      lVar7 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      *piVar15 = (int)**(short **)(param_2 + lVar7);
    } while (lVar6 < *(int *)(param_1 + 0x32));
  }
  return 1;
}


