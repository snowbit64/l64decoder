// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f53c
// Entry Point: 00d8f53c
// Size: 480 bytes
// Signature: undefined FUN_00d8f53c(void)


void FUN_00d8f53c(long param_1)

{
  uint uVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  iVar7 = *(int *)(param_1 + 100);
  lVar18 = *(long *)(param_1 + 0x270);
  uVar8 = 0x2fe;
  if (iVar7 != 1) {
    uVar8 = 0x100;
  }
  *(bool *)(lVar18 + 0x38) = iVar7 == 1;
  lVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                    (param_1,1,uVar8,*(undefined4 *)(param_1 + 0x7c));
  iVar11 = *(int *)(param_1 + 0x7c);
  *(long *)(lVar18 + 0x30) = lVar6;
  if (0 < iVar11) {
    if (iVar7 == 1) {
      lVar9 = 0;
      iVar7 = *(int *)(lVar18 + 0x28);
      while( true ) {
        lVar16 = lVar9 * 8;
        lVar10 = 0;
        iVar11 = 0;
        iVar3 = *(int *)(lVar18 + lVar9 * 4 + 0x3c);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iVar7 / iVar3;
        }
        lVar13 = (long)iVar3 + -1;
        *(long *)(lVar6 + lVar16) = *(long *)(lVar6 + lVar16) + 0xff;
        lVar14 = (long)((int)lVar13 << 1);
        puVar12 = *(undefined **)(*(long *)(lVar18 + 0x30) + lVar16);
        lVar6 = 0;
        if (lVar14 != 0) {
          lVar6 = ((long)iVar3 + 0xfe) / lVar14;
        }
        do {
          if ((int)lVar6 < lVar10) {
            uVar1 = iVar11 * 2 + 3;
            do {
              uVar17 = (ulong)uVar1;
              lVar16 = (long)(int)uVar1;
              uVar5 = uVar1 >> 0x1f;
              iVar11 = iVar11 + 1;
              uVar1 = uVar1 + 2;
              lVar6 = 0;
              if (lVar14 != 0) {
                lVar6 = (long)(((-(ulong)uVar5 & 0xffffff0000000000 | uVar17 << 8) - lVar16) +
                              lVar13) / lVar14;
              }
            } while ((int)lVar6 < lVar10);
          }
          puVar12[lVar10] = (char)iVar11 * (char)iVar4;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x100);
        lVar10 = -1;
        lVar6 = 0x100;
        do {
          uVar2 = puVar12[0xff];
          puVar12[lVar10] = *puVar12;
          lVar10 = lVar10 + -1;
          puVar12[lVar6] = uVar2;
          lVar6 = lVar6 + 1;
        } while (lVar10 != -0x100);
        lVar9 = lVar9 + 1;
        if (*(int *)(param_1 + 0x7c) <= lVar9) break;
        lVar6 = *(long *)(lVar18 + 0x30);
        iVar7 = iVar4;
      }
    }
    else {
      lVar9 = 0;
      iVar7 = *(int *)(lVar18 + 0x28);
      while( true ) {
        lVar10 = 0;
        iVar11 = 0;
        iVar3 = *(int *)(lVar18 + lVar9 * 4 + 0x3c);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iVar7 / iVar3;
        }
        lVar16 = (long)iVar3 + -1;
        lVar14 = *(long *)(lVar6 + lVar9 * 8);
        lVar13 = (long)((int)lVar16 << 1);
        lVar6 = 0;
        if (lVar13 != 0) {
          lVar6 = ((long)iVar3 + 0xfe) / lVar13;
        }
        do {
          if ((int)lVar6 < lVar10) {
            uVar1 = iVar11 * 2 + 3;
            do {
              uVar17 = (ulong)uVar1;
              lVar15 = (long)(int)uVar1;
              uVar5 = uVar1 >> 0x1f;
              iVar11 = iVar11 + 1;
              uVar1 = uVar1 + 2;
              lVar6 = 0;
              if (lVar13 != 0) {
                lVar6 = (long)(((-(ulong)uVar5 & 0xffffff0000000000 | uVar17 << 8) - lVar15) +
                              lVar16) / lVar13;
              }
            } while ((int)lVar6 < lVar10);
          }
          *(char *)(lVar14 + lVar10) = (char)iVar11 * (char)iVar4;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x100);
        lVar9 = lVar9 + 1;
        if (*(int *)(param_1 + 0x7c) <= lVar9) break;
        lVar6 = *(long *)(lVar18 + 0x30);
        iVar7 = iVar4;
      }
    }
  }
  return;
}


