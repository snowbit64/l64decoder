// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e14a2c
// Entry Point: 00e14a2c
// Size: 776 bytes
// Signature: undefined FUN_00e14a2c(void)


undefined4 * FUN_00e14a2c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  int local_6c;
  
  lVar13 = param_1 + 8;
  piVar15 = *(int **)(param_2 + 0x510);
  lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) + 0x1328);
  lVar10 = oggpack_read(lVar13,1);
  if (lVar10 == 1) {
    puVar11 = (undefined4 *)_vorbis_block_alloc(param_1,(long)*(int *)(param_2 + 0x504) << 2);
    uVar7 = ov_ilog(*(int *)(param_2 + 0x50c) + -1);
    uVar7 = oggpack_read(lVar13,uVar7);
    *puVar11 = uVar7;
    uVar7 = ov_ilog(*(int *)(param_2 + 0x50c) + -1);
    uVar7 = oggpack_read(lVar13,uVar7);
    puVar11[1] = uVar7;
    if (0 < *piVar15) {
      lVar10 = 0;
      local_6c = 2;
      do {
        lVar17 = (long)piVar15[lVar10 + 1];
        uVar1 = piVar15[lVar17 + 0x30];
        uVar2 = piVar15[lVar17 + 0x20];
        uVar14 = (ulong)uVar2;
        if (uVar1 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = vorbis_book_decode(lVar12 + (long)piVar15[lVar17 + 0x40] * 0x60,lVar13);
          if (uVar8 == 0xffffffff) goto LAB_00e14bd0;
        }
        if (0 < (int)uVar2) {
          piVar16 = puVar11 + local_6c;
          do {
            if (piVar15[lVar17 * 8 + (long)(int)(uVar8 & ~(-1 << (ulong)(uVar1 & 0x1f))) + 0x50] < 0
               ) {
              *piVar16 = 0;
            }
            else {
              iVar9 = vorbis_book_decode(lVar12 + (ulong)(uint)piVar15[lVar17 * 8 +
                                                                       (long)(int)(uVar8 & ~(-1 << (
                                                  ulong)(uVar1 & 0x1f))) + 0x50] * 0x60,lVar13);
              *piVar16 = iVar9;
              if (iVar9 == -1) goto LAB_00e14bd0;
            }
            uVar8 = (int)uVar8 >> (uVar1 & 0x1f);
            piVar16 = piVar16 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        lVar10 = lVar10 + 1;
        local_6c = uVar2 + local_6c;
      } while (lVar10 < *piVar15);
    }
    if (2 < *(int *)(param_2 + 0x504)) {
      lVar13 = 0;
      do {
        while( true ) {
          lVar10 = param_2 + lVar13 * 4;
          iVar4 = (puVar11[*(int *)(lVar10 + 0x30c)] & 0x7fff) -
                  (puVar11[*(int *)(lVar10 + 0x408)] & 0x7fff);
          iVar5 = piVar15[(long)*(int *)(lVar10 + 0x30c) + 0xd1] -
                  piVar15[(long)*(int *)(lVar10 + 0x408) + 0xd1];
          iVar9 = -iVar4;
          if (-1 < iVar4) {
            iVar9 = iVar4;
          }
          uVar1 = puVar11[lVar13 + 2];
          iVar3 = 0;
          if (iVar5 != 0) {
            iVar3 = (iVar9 * (piVar15[lVar13 + 0xd3] -
                             piVar15[(long)*(int *)(lVar10 + 0x408) + 0xd1])) / iVar5;
          }
          iVar9 = -iVar3;
          if (-1 < iVar4) {
            iVar9 = iVar3;
          }
          uVar2 = iVar9 + (puVar11[*(int *)(lVar10 + 0x408)] & 0x7fff);
          if (uVar1 == 0) break;
          uVar6 = *(int *)(param_2 + 0x50c) - uVar2;
          uVar8 = uVar6;
          if ((int)uVar2 <= (int)uVar6) {
            uVar8 = uVar2;
          }
          if ((int)(uVar1 + uVar8 * -2) < 0 == SBORROW4(uVar1,uVar8 * 2)) {
            if ((int)uVar2 < (int)uVar6) {
              iVar9 = uVar1 - uVar2;
            }
            else {
              iVar9 = uVar6 + ~uVar1;
            }
          }
          else if ((uVar1 & 1) == 0) {
            iVar9 = (int)uVar1 >> 1;
          }
          else {
            iVar9 = -((int)(uVar1 + 1) >> 1);
          }
          puVar11[lVar13 + 2] = iVar9 + uVar2 & 0x7fff;
          puVar11[*(int *)(lVar10 + 0x408)] = puVar11[*(int *)(lVar10 + 0x408)] & 0x7fff;
          puVar11[*(int *)(lVar10 + 0x30c)] = puVar11[*(int *)(lVar10 + 0x30c)] & 0x7fff;
          lVar10 = lVar13 + 3;
          lVar13 = lVar13 + 1;
          if (*(int *)(param_2 + 0x504) <= lVar10) {
            return puVar11;
          }
        }
        puVar11[lVar13 + 2] = uVar2 | 0x8000;
        lVar10 = lVar13 + 3;
        lVar13 = lVar13 + 1;
      } while (lVar10 < *(int *)(param_2 + 0x504));
    }
  }
  else {
LAB_00e14bd0:
    puVar11 = (undefined4 *)0x0;
  }
  return puVar11;
}


