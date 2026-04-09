// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res2_inverse
// Entry Point: 00e18294
// Size: 856 bytes
// Signature: undefined res2_inverse(void)


undefined8
res2_inverse(long param_1,long **param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long local_88;
  
  plVar18 = *param_2;
  iVar8 = (int)param_5;
  iVar5 = *(int *)(param_1 + 0x48) * iVar8 >> 1;
  iVar13 = (int)plVar18[1];
  if ((long)iVar5 <= plVar18[1]) {
    iVar13 = iVar5;
  }
  if (0 < iVar13 - *(int *)plVar18) {
    iVar5 = *(int *)(plVar18 + 2);
    lVar17 = (long)iVar5;
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = (iVar13 - *(int *)plVar18) / iVar5;
    }
    lVar14 = *param_2[3];
    iVar13 = (int)lVar14;
    uVar4 = 0;
    if (iVar13 != 0) {
      uVar4 = (iVar13 + iVar3 + -1) / iVar13;
    }
    plVar6 = (long *)_vorbis_block_alloc(param_1,-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                                 (ulong)uVar4 << 3);
    if (iVar8 < 1) {
      lVar11 = 0;
LAB_00e18350:
      if (((lVar11 != iVar8) && (0 < *(int *)((long)param_2 + 0xc))) && (0 < iVar3)) {
        param_1 = param_1 + 8;
        if (lVar14 << 0x20 < 1) {
          uVar7 = vorbis_book_decode(param_2[3]);
          iVar5 = (int)uVar7;
          while (((iVar5 != -1 && ((int)uVar7 < *(int *)(plVar18 + 3))) &&
                 (lVar17 = *(long *)((long)param_2[6] +
                                    (-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                                    (uVar7 & 0xffffffff) << 3)), *plVar6 = lVar17, lVar17 != 0))) {
            uVar7 = vorbis_book_decode(param_2[3],param_1);
            plVar6 = plVar6 + 1;
            iVar5 = (int)uVar7;
          }
        }
        else {
          lVar14 = (long)iVar3;
          local_88 = 0;
          do {
            uVar4 = 1 << (ulong)((uint)local_88 & 0x1f);
            if (local_88 == 0) {
              lVar11 = 0;
              lVar15 = 0;
              do {
                uVar7 = vorbis_book_decode(param_2[3],param_1);
                if ((int)uVar7 == -1) {
                  return 0;
                }
                if (*(int *)(plVar18 + 3) <= (int)uVar7) {
                  return 0;
                }
                piVar10 = *(int **)((long)param_2[6] +
                                   (-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                                   (uVar7 & 0xffffffff) << 3));
                plVar6[lVar15] = (long)piVar10;
                if (piVar10 == (int *)0x0) {
                  return 0;
                }
                if (lVar11 < lVar14) {
                  lVar16 = lVar17 * lVar11;
                  lVar12 = 0;
                  lVar9 = (long)*piVar10;
                  uVar2 = *(uint *)((long)plVar18 + lVar9 * 4 + 0x20);
                  while( true ) {
                    if ((((uVar2 & uVar4) != 0) && (*(long *)param_2[4][lVar9] != 0)) &&
                       (lVar9 = vorbis_book_decodevv_add
                                          (*(long *)param_2[4][lVar9],param_3,lVar16 + *plVar18,
                                           param_5,param_1,iVar5), lVar9 == -1)) {
                      return 0;
                    }
                    if (((long)iVar13 <= lVar12 + 1) || (lVar14 <= lVar11 + 1 + lVar12)) break;
                    lVar16 = lVar16 + lVar17;
                    lVar12 = lVar12 + 1;
                    lVar9 = (long)*(int *)(plVar6[lVar15] + lVar12 * 4);
                    uVar2 = *(uint *)((long)plVar18 + lVar9 * 4 + 0x20);
                  }
                  lVar11 = lVar11 + lVar12 + 1;
                }
                lVar15 = lVar15 + 1;
              } while (lVar11 < lVar14);
            }
            else {
              lVar15 = 0;
              lVar11 = 0;
              do {
                if (lVar15 < lVar14) {
                  lVar12 = lVar17 * lVar15;
                  lVar16 = 0;
                  do {
                    lVar9 = (long)*(int *)(plVar6[lVar11] + lVar16 * 4);
                    if ((((*(uint *)((long)plVar18 + lVar9 * 4 + 0x20) & uVar4) != 0) &&
                        (lVar9 = *(long *)(param_2[4][lVar9] + local_88 * 8), lVar9 != 0)) &&
                       (lVar9 = vorbis_book_decodevv_add
                                          (lVar9,param_3,lVar12 + *plVar18,param_5,param_1,iVar5),
                       lVar9 == -1)) {
                      return 0;
                    }
                    lVar9 = lVar16 + 1;
                  } while ((lVar9 < iVar13) &&
                          (lVar1 = lVar15 + lVar16, lVar12 = lVar12 + lVar17, lVar16 = lVar9,
                          lVar1 + 1 < lVar14));
                  lVar15 = lVar15 + lVar9;
                }
                lVar11 = lVar11 + 1;
              } while (lVar15 < lVar14);
            }
            local_88 = local_88 + 1;
          } while (local_88 < *(int *)((long)param_2 + 0xc));
        }
      }
    }
    else {
      lVar11 = 0;
      do {
        if (*(int *)(param_4 + lVar11 * 4) != 0) goto LAB_00e18350;
        lVar11 = lVar11 + 1;
      } while (iVar8 != lVar11);
    }
  }
  return 0;
}


