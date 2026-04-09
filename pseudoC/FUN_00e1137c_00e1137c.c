// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1137c
// Entry Point: 00e1137c
// Size: 500 bytes
// Signature: undefined FUN_00e1137c(void)


void FUN_00e1137c(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  float fVar20;
  undefined4 uVar21;
  float fStack_24;
  long alStack_20 [2];
  
  lVar1 = tpidr_el0;
  alStack_20[1] = *(long *)(lVar1 + 0x28);
  lVar2 = -0x20 - (param_3 * 8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar2 - (param_3 * 4 + 0xfU & 0xfffffffffffffff0);
  if (0 < param_3) {
    lVar11 = 0;
    lVar10 = (long)param_2;
    uVar12 = 0;
    do {
      while (uVar9 = uVar12, (long)uVar9 < 2) {
        uVar21 = *(undefined4 *)(param_1 + lVar11 * 4);
        *(long *)((long)alStack_20 + uVar9 * 8 + lVar2 + 0x20) = lVar11;
        lVar11 = lVar11 + 1;
        *(undefined4 *)((long)alStack_20 + uVar9 * 4 + lVar3 + 0x20) = uVar21;
        uVar12 = uVar9 + 1;
        if (lVar11 == param_3) goto LAB_00e11480;
      }
      fVar20 = *(float *)(param_1 + lVar11 * 4);
      pfVar16 = (float *)((long)&fStack_24 + uVar9 * 4 + lVar3 + 0x20);
      plVar4 = (long *)((long)alStack_20 + uVar9 * 8 + lVar2 + 0x20);
      uVar12 = uVar9;
      do {
        uVar9 = uVar12;
        plVar6 = plVar4;
        if ((((fVar20 < *pfVar16) || (plVar6[-1] + lVar10 <= lVar11)) || (uVar9 < 2)) ||
           (pfVar16[-1] < *pfVar16)) break;
        pfVar16 = pfVar16 + -1;
        plVar4 = plVar6 + -1;
        uVar12 = uVar9 - 1;
      } while (lVar11 < plVar6[-2] + lVar10);
      *plVar6 = lVar11;
      lVar11 = lVar11 + 1;
      *(float *)((long)alStack_20 + uVar9 * 4 + lVar3 + 0x20) = fVar20;
      uVar12 = uVar9 + 1;
    } while (lVar11 != param_3);
LAB_00e11480:
    if (-1 < (long)uVar9) {
      uVar12 = 0;
      lVar11 = 0;
      do {
        lVar15 = param_3;
        lVar13 = lVar11;
        if (((long)uVar9 <= (long)uVar12) ||
           (*(float *)((long)alStack_20 + (uVar12 + 1) * 4 + lVar3 + 0x20) <=
            *(float *)((long)alStack_20 + uVar12 * 4 + lVar3 + 0x20))) {
          lVar17 = lVar10 + 1 + *(long *)((long)alStack_20 + uVar12 * 8 + lVar2 + 0x20);
          if (lVar17 <= param_3) {
            lVar15 = lVar17;
          }
          uVar18 = lVar15 - lVar11;
          if (uVar18 != 0 && lVar11 <= lVar15) goto LAB_00e114f8;
        }
        else {
          lVar17 = *(long *)((long)alStack_20 + (uVar12 + 1) * 8 + lVar2 + 0x20);
          if (lVar17 <= param_3) {
            lVar15 = lVar17;
          }
          uVar18 = lVar15 - lVar11;
          if (uVar18 != 0 && lVar11 <= lVar15) {
LAB_00e114f8:
            lVar13 = lVar15;
            uVar21 = *(undefined4 *)((long)alStack_20 + uVar12 * 4 + lVar3 + 0x20);
            if (7 < uVar18) {
              uVar7 = uVar18 & 0xfffffffffffffff8;
              puVar14 = (undefined8 *)(param_1 + 0x10 + lVar11 * 4);
              uVar8 = uVar7;
              do {
                puVar14[-1] = CONCAT44(uVar21,uVar21);
                puVar14[-2] = CONCAT44(uVar21,uVar21);
                puVar14[1] = CONCAT44(uVar21,uVar21);
                *puVar14 = CONCAT44(uVar21,uVar21);
                uVar8 = uVar8 - 8;
                puVar14 = puVar14 + 4;
              } while (uVar8 != 0);
              lVar11 = lVar11 + uVar7;
              if (uVar18 == uVar7) goto LAB_00e1149c;
            }
            lVar15 = lVar13 - lVar11;
            puVar19 = (undefined4 *)(param_1 + lVar11 * 4);
            do {
              lVar15 = lVar15 + -1;
              *puVar19 = uVar21;
              puVar19 = puVar19 + 1;
            } while (lVar15 != 0);
          }
        }
LAB_00e1149c:
        bVar5 = uVar12 != uVar9;
        uVar12 = uVar12 + 1;
        lVar11 = lVar13;
      } while (bVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) != alStack_20[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


