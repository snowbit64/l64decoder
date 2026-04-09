// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00aa6efc
// Entry Point: 00aa6efc
// Size: 1492 bytes
// Signature: undefined FUN_00aa6efc(void)


void FUN_00aa6efc(long param_1,uint param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auVar16 [12];
  undefined (*pauVar17) [12];
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  int *piVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  undefined (*pauVar35) [12];
  undefined8 *puVar36;
  ulong uVar37;
  ulong uVar38;
  int *piVar39;
  undefined4 *puVar40;
  long lVar41;
  undefined8 uVar42;
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined8 uVar45;
  undefined8 uVar46;
  int local_7c [4];
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  if (*param_4 == 0) {
    uVar1 = param_2 + 4;
    if (4 < uVar1) {
      uVar38 = 0;
      piVar39 = (int *)(param_1 + 0x48);
      uVar26 = uVar1 / 5;
      uVar3 = uVar26 - 1;
      if (uVar1 / 5 < 2) {
        uVar26 = 1;
      }
      lVar41 = param_1;
      do {
        uVar1 = param_2 + uVar3 * -5;
        if (uVar38 != uVar3) {
          uVar1 = 5;
        }
        uVar2 = param_4[1];
        iVar20 = FUN_00aa74d0(param_3,uVar2);
        local_7c[0] = iVar20;
        uVar19 = FUN_00aa74d0(param_3,2);
        iVar21 = FUN_00aa74d0(param_3,uVar2);
        local_7c[1] = iVar21;
        iVar18 = FUN_00aa74d0(param_3,2);
        local_7c[2] = FUN_00aa74d0(param_3,uVar2);
        iVar22 = FUN_00aa74d0(param_3,1);
        local_7c[3] = FUN_00aa74d0(param_3,uVar2);
        iVar23 = FUN_00aa74d0(param_3,2);
        uStack_6c = FUN_00aa74d0(param_3,uVar2);
        iVar24 = FUN_00aa74d0(param_3,1);
        switch(uVar1) {
        case 1:
          iVar18 = 0;
        case 2:
          iVar22 = 0;
        case 3:
          iVar23 = 0;
        case 4:
          iVar24 = 0;
        }
        if (0 < (int)uVar1) {
          lVar32 = param_1 + uVar38 * 0x3c;
          uVar27 = (ulong)(uVar19 | iVar23 << 5 | iVar24 << 7 | iVar22 << 4 | iVar18 << 2);
          iVar18 = *(int *)(&DAT_00520dd8 + uVar27 * 0x14);
          piVar28 = (int *)(param_1 + uVar38 * 0x3c);
          *piVar28 = iVar20;
          *(int *)(lVar32 + 4) = iVar18;
          *(int *)(lVar32 + 8) = (iVar18 << (ulong)(uVar2 & 0x1f)) + iVar20;
          if (uVar1 != 1) {
            iVar18 = *(int *)(&DAT_00520ddc + uVar27 * 0x14);
            piVar28[3] = iVar21;
            piVar28[4] = iVar18;
            piVar28[5] = (iVar18 << (ulong)(uVar2 & 0x1f)) + iVar21;
            if (uVar1 != 2) {
              uVar31 = (ulong)uVar1 - 2;
              if (uVar31 < 8) {
                uVar29 = 2;
              }
              else {
                uVar33 = uVar31 & 0xfffffffffffffff8;
                uVar29 = uVar33 | 2;
                pauVar35 = (undefined (*) [12])(&DAT_00520df0 + uVar27 * 0x14);
                puVar36 = (undefined8 *)((long)&lStack_68 + 4);
                uVar37 = uVar33;
                piVar28 = piVar39;
                do {
                  pauVar17 = pauVar35 + -2;
                  uVar15 = *(undefined8 *)(pauVar35[-1] + 4);
                  iVar24 = (int)((ulong)uVar15 >> 0x20);
                  uVar14 = *(undefined8 *)*(undefined (*) [12])(*pauVar17 + 8);
                  uVar11 = *(undefined8 *)(*pauVar35 + 8);
                  iVar23 = (int)((ulong)uVar11 >> 0x20);
                  uVar10 = *(undefined8 *)*pauVar35;
                  auVar16 = *pauVar35;
                  uVar37 = uVar37 - 8;
                  pauVar35 = (undefined (*) [12])(pauVar35[2] + 8);
                  uVar46 = puVar36[-1];
                  uVar45 = puVar36[-2];
                  puVar5 = puVar36 + 1;
                  uVar42 = *puVar36;
                  auVar43._4_4_ = uVar2;
                  auVar43._0_4_ = uVar2;
                  auVar43._8_4_ = uVar2;
                  auVar43._12_4_ = uVar2;
                  auVar9._12_4_ = iVar23;
                  auVar9._0_12_ = auVar16;
                  auVar43 = NEON_ushl(auVar9,auVar43,4);
                  puVar36 = puVar36 + 4;
                  iVar18 = (int)uVar42;
                  iVar20 = (int)((ulong)uVar42 >> 0x20);
                  iVar21 = (int)*puVar5;
                  iVar22 = (int)((ulong)*puVar5 >> 0x20);
                  auVar44._4_4_ = uVar2;
                  auVar44._0_4_ = uVar2;
                  auVar44._8_4_ = uVar2;
                  auVar44._12_4_ = uVar2;
                  auVar13._12_4_ = iVar24;
                  auVar13._0_12_ = *(undefined (*) [12])(*pauVar17 + 8);
                  auVar44 = NEON_ushl(auVar13,auVar44,4);
                  *piVar28 = iVar18;
                  piVar28[1] = (int)uVar10;
                  piVar28[2] = auVar43._0_4_ + iVar18;
                  piVar28[3] = iVar20;
                  piVar28[4] = (int)((ulong)uVar10 >> 0x20);
                  piVar28[5] = auVar43._4_4_ + iVar20;
                  piVar28[6] = iVar21;
                  piVar28[7] = (int)uVar11;
                  piVar28[8] = auVar43._8_4_ + iVar21;
                  piVar28[9] = iVar22;
                  piVar28[10] = iVar23;
                  piVar28[0xb] = auVar43._12_4_ + iVar22;
                  iVar18 = (int)uVar45;
                  iVar20 = (int)((ulong)uVar45 >> 0x20);
                  iVar21 = (int)uVar46;
                  iVar22 = (int)((ulong)uVar46 >> 0x20);
                  piVar28[-0xc] = iVar18;
                  piVar28[-0xb] = (int)uVar14;
                  piVar28[-10] = auVar44._0_4_ + iVar18;
                  piVar28[-9] = iVar20;
                  piVar28[-8] = (int)((ulong)uVar14 >> 0x20);
                  piVar28[-7] = auVar44._4_4_ + iVar20;
                  piVar28[-6] = iVar21;
                  piVar28[-5] = (int)uVar15;
                  piVar28[-4] = auVar44._8_4_ + iVar21;
                  piVar28[-3] = iVar22;
                  piVar28[-2] = iVar24;
                  piVar28[-1] = auVar44._12_4_ + iVar22;
                  piVar28 = piVar28 + 0x18;
                } while (uVar37 != 0);
                if (uVar31 == uVar33) goto LAB_00aa71f4;
              }
              lVar32 = uVar1 - uVar29;
              piVar28 = (int *)(lVar41 + uVar29 * 0xc);
              piVar30 = local_7c + uVar29;
              piVar34 = (int *)(&DAT_00520dd8 + uVar29 * 4 + uVar27 * 0x14);
              do {
                iVar18 = *piVar30;
                lVar32 = lVar32 + -1;
                *piVar28 = iVar18;
                iVar20 = *piVar34;
                piVar28[1] = iVar20;
                piVar28[2] = (iVar20 << (ulong)(uVar2 & 0x1f)) + iVar18;
                piVar28 = piVar28 + 3;
                piVar30 = piVar30 + 1;
                piVar34 = piVar34 + 1;
              } while (lVar32 != 0);
            }
          }
        }
LAB_00aa71f4:
        uVar38 = uVar38 + 1;
        piVar39 = piVar39 + 0xf;
        lVar41 = lVar41 + 0x3c;
      } while (uVar38 != uVar26);
    }
  }
  else if (*param_4 == 1) {
    uVar1 = param_2 + 2;
    if (2 < uVar1) {
      uVar38 = 0;
      piVar39 = (int *)(param_1 + 0x48);
      uVar26 = uVar1 / 3;
      uVar3 = uVar26 - 1;
      if (uVar1 / 3 < 2) {
        uVar26 = 1;
      }
      lVar41 = param_1;
      do {
        uVar1 = uVar3 * -3 + param_2;
        if (uVar38 != uVar3) {
          uVar1 = 3;
        }
        uVar2 = param_4[1];
        iVar18 = FUN_00aa74d0(param_3,uVar2);
        local_7c[0] = iVar18;
        uVar19 = FUN_00aa74d0(param_3,3);
        iVar20 = FUN_00aa74d0(param_3,uVar2);
        local_7c[1] = iVar20;
        iVar21 = FUN_00aa74d0(param_3,2);
        local_7c[2] = FUN_00aa74d0(param_3,uVar2);
        iVar22 = FUN_00aa74d0(param_3,2);
        if (uVar1 == 2) {
LAB_00aa704c:
          uVar19 = uVar19 | iVar21 << 3;
LAB_00aa7064:
          lVar32 = param_1 + uVar38 * 0x24;
          iVar21 = *(int *)(&DAT_005221d8 + (ulong)uVar19 * 0xc);
          piVar28 = (int *)(param_1 + uVar38 * 0x24);
          *piVar28 = iVar18;
          *(int *)(lVar32 + 4) = iVar21;
          *(int *)(lVar32 + 8) = (iVar21 << (ulong)(uVar2 & 0x1f)) + iVar18;
          if (uVar1 != 1) {
            uVar27 = (ulong)uVar19;
            iVar18 = *(int *)(&DAT_005221dc + uVar27 * 0xc);
            piVar28[3] = iVar20;
            piVar28[4] = iVar18;
            piVar28[5] = (iVar18 << (ulong)(uVar2 & 0x1f)) + iVar20;
            if (uVar1 != 2) {
              uVar31 = (ulong)uVar1 - 2;
              if (uVar31 < 8) {
                uVar29 = 2;
              }
              else {
                uVar33 = uVar31 & 0xfffffffffffffff8;
                uVar29 = uVar33 | 2;
                pauVar35 = (undefined (*) [12])(&DAT_005221f0 + uVar27 * 0xc);
                puVar36 = (undefined8 *)((long)&lStack_68 + 4);
                uVar37 = uVar33;
                piVar28 = piVar39;
                do {
                  pauVar17 = pauVar35 + -2;
                  uVar15 = *(undefined8 *)(pauVar35[-1] + 4);
                  iVar24 = (int)((ulong)uVar15 >> 0x20);
                  uVar14 = *(undefined8 *)*(undefined (*) [12])(*pauVar17 + 8);
                  uVar11 = *(undefined8 *)(*pauVar35 + 8);
                  iVar23 = (int)((ulong)uVar11 >> 0x20);
                  uVar10 = *(undefined8 *)*pauVar35;
                  auVar16 = *pauVar35;
                  uVar37 = uVar37 - 8;
                  pauVar35 = (undefined (*) [12])(pauVar35[2] + 8);
                  uVar46 = puVar36[-1];
                  uVar45 = puVar36[-2];
                  puVar5 = puVar36 + 1;
                  uVar42 = *puVar36;
                  auVar6._4_4_ = uVar2;
                  auVar6._0_4_ = uVar2;
                  auVar6._8_4_ = uVar2;
                  auVar6._12_4_ = uVar2;
                  auVar8._12_4_ = iVar23;
                  auVar8._0_12_ = auVar16;
                  auVar43 = NEON_ushl(auVar8,auVar6,4);
                  puVar36 = puVar36 + 4;
                  iVar18 = (int)uVar42;
                  iVar20 = (int)((ulong)uVar42 >> 0x20);
                  iVar21 = (int)*puVar5;
                  iVar22 = (int)((ulong)*puVar5 >> 0x20);
                  auVar7._4_4_ = uVar2;
                  auVar7._0_4_ = uVar2;
                  auVar7._8_4_ = uVar2;
                  auVar7._12_4_ = uVar2;
                  auVar12._12_4_ = iVar24;
                  auVar12._0_12_ = *(undefined (*) [12])(*pauVar17 + 8);
                  auVar44 = NEON_ushl(auVar12,auVar7,4);
                  *piVar28 = iVar18;
                  piVar28[1] = (int)uVar10;
                  piVar28[2] = auVar43._0_4_ + iVar18;
                  piVar28[3] = iVar20;
                  piVar28[4] = (int)((ulong)uVar10 >> 0x20);
                  piVar28[5] = auVar43._4_4_ + iVar20;
                  piVar28[6] = iVar21;
                  piVar28[7] = (int)uVar11;
                  piVar28[8] = auVar43._8_4_ + iVar21;
                  piVar28[9] = iVar22;
                  piVar28[10] = iVar23;
                  piVar28[0xb] = auVar43._12_4_ + iVar22;
                  iVar18 = (int)uVar45;
                  iVar20 = (int)((ulong)uVar45 >> 0x20);
                  iVar21 = (int)uVar46;
                  iVar22 = (int)((ulong)uVar46 >> 0x20);
                  piVar28[-0xc] = iVar18;
                  piVar28[-0xb] = (int)uVar14;
                  piVar28[-10] = auVar44._0_4_ + iVar18;
                  piVar28[-9] = iVar20;
                  piVar28[-8] = (int)((ulong)uVar14 >> 0x20);
                  piVar28[-7] = auVar44._4_4_ + iVar20;
                  piVar28[-6] = iVar21;
                  piVar28[-5] = (int)uVar15;
                  piVar28[-4] = auVar44._8_4_ + iVar21;
                  piVar28[-3] = iVar22;
                  piVar28[-2] = iVar24;
                  piVar28[-1] = auVar44._12_4_ + iVar22;
                  piVar28 = piVar28 + 0x18;
                } while (uVar37 != 0);
                if (uVar31 == uVar33) goto LAB_00aa6fa0;
              }
              lVar32 = uVar1 - uVar29;
              piVar28 = (int *)(lVar41 + uVar29 * 0xc);
              piVar30 = local_7c + uVar29;
              piVar34 = (int *)(&DAT_005221d8 + uVar29 * 4 + uVar27 * 0xc);
              do {
                iVar18 = *piVar30;
                lVar32 = lVar32 + -1;
                *piVar28 = iVar18;
                iVar20 = *piVar34;
                piVar28[1] = iVar20;
                piVar28[2] = (iVar20 << (ulong)(uVar2 & 0x1f)) + iVar18;
                piVar28 = piVar28 + 3;
                piVar30 = piVar30 + 1;
                piVar34 = piVar34 + 1;
              } while (lVar32 != 0);
            }
          }
        }
        else {
          if (uVar1 == 1) {
            iVar21 = 0;
            goto LAB_00aa704c;
          }
          if (0 < (int)uVar1) {
            uVar19 = uVar19 | iVar21 << 3 | iVar22 << 5;
            goto LAB_00aa7064;
          }
        }
LAB_00aa6fa0:
        uVar38 = uVar38 + 1;
        piVar39 = piVar39 + 9;
        lVar41 = lVar41 + 0x24;
      } while (uVar38 != uVar26);
    }
  }
  else if (0 < (int)param_2) {
    uVar38 = (ulong)param_2;
    puVar40 = (undefined4 *)(param_1 + 8);
    do {
      uVar25 = FUN_00aa74d0(param_3,param_4[1]);
      uVar38 = uVar38 - 1;
      puVar40[-2] = uVar25;
      *puVar40 = uVar25;
      puVar40 = puVar40 + 3;
    } while (uVar38 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


