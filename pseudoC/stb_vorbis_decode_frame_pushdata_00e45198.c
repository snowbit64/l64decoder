// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_decode_frame_pushdata
// Entry Point: 00e45198
// Size: 1472 bytes
// Signature: undefined stb_vorbis_decode_frame_pushdata(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void stb_vorbis_decode_frame_pushdata
               (long param_1,long param_2,uint param_3,uint *param_4,long *param_5,
               undefined4 *param_6)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong *puVar20;
  undefined (*pauVar21) [16];
  undefined4 uVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined auVar35 [16];
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
    goto LAB_00e45728;
  }
  uVar9 = (ulong)param_3;
  if (*(int *)(param_1 + 0x710) < 0) {
    *(long *)(param_1 + 0x40) = param_2;
    *(long *)(param_1 + 0x50) = param_2 + (int)param_3;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    uVar9 = FUN_00e45758(param_1);
    if ((int)uVar9 == 0) {
      *param_6 = 0;
      goto LAB_00e45728;
    }
    iVar8 = FUN_00e4589c(param_1,&local_5c,&local_64,&local_60);
    if (iVar8 == 0) {
      if (*(int *)(param_1 + 0x9c) == 0x20) {
        if (*(int *)(param_1 + 0x4f8) != 0) goto LAB_00e456d0;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        do {
          iVar8 = FUN_00e4c7e4(param_1);
          *(undefined4 *)(param_1 + 0x6f8) = 0;
          if (iVar8 == -1) break;
        } while (*(int *)(param_1 + 0x98) == 0);
      }
      else {
        if (*(int *)(param_1 + 0x9c) != 0x23) {
LAB_00e456d0:
          *(undefined4 *)(param_1 + 0x4f8) = 0;
          uVar9 = 1;
          *(undefined4 *)(param_1 + 0x710) = 0;
          *(undefined8 *)(param_1 + 0x708) = 0;
          *(undefined4 *)(param_1 + 0x584) = 0;
          *(undefined *)(param_1 + 0x6e5) = 0;
          *(undefined8 *)(param_1 + 0x764) = 0;
          *param_6 = 0;
          goto LAB_00e45728;
        }
        *(undefined4 *)(param_1 + 0x9c) = 0;
        do {
          iVar8 = FUN_00e4c7e4(param_1);
          *(undefined4 *)(param_1 + 0x6f8) = 0;
          if (iVar8 == -1) break;
        } while (*(int *)(param_1 + 0x98) == 0);
      }
      *param_6 = 0;
    }
    else {
      local_5c = FUN_00e46748(param_1,local_5c,local_64,local_60);
      uVar15 = *(uint *)(param_1 + 4);
      uVar9 = (ulong)uVar15;
      if (0 < (int)uVar15) {
        lVar11 = (long)local_64;
        if (uVar15 == 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar9 & 0xfffffffe;
          plVar14 = (long *)(param_1 + 0x3f8);
          uVar13 = uVar17;
          do {
            uVar13 = uVar13 - 2;
            plVar14[1] = plVar14[-0xf] + lVar11 * 4;
            *plVar14 = plVar14[-0x10] + lVar11 * 4;
            plVar14 = plVar14 + 2;
          } while (uVar13 != 0);
          if (uVar17 == uVar9) goto LAB_00e456b0;
        }
        lVar16 = uVar9 - uVar17;
        plVar14 = (long *)(param_1 + uVar17 * 8 + 0x3f8);
        do {
          lVar16 = lVar16 + -1;
          *plVar14 = plVar14[-0x10] + lVar11 * 4;
          plVar14 = plVar14 + 1;
        } while (lVar16 != 0);
      }
LAB_00e456b0:
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar15;
      }
      *param_6 = local_5c;
      *param_5 = param_1 + 0x3f8;
    }
    uVar9 = (ulong)(uint)(*(int *)(param_1 + 0x40) - (int)param_2);
    goto LAB_00e45728;
  }
  *param_6 = 0;
  uVar15 = *(uint *)(param_1 + 0x710);
  uVar13 = (ulong)uVar15;
  if ((int)uVar15 < 1) {
LAB_00e452c4:
    auVar7 = _DAT_004c4f40;
    auVar6 = _DAT_004c4d70;
    auVar5 = _DAT_004c4a50;
    auVar4 = _DAT_004c37b0;
    if ((int)param_3 < 4) {
      uVar9 = 0;
      goto LAB_00e45728;
    }
    uVar13 = 0;
    param_3 = param_3 - 3;
    uVar9 = (ulong)param_3;
    lVar11 = param_2 + 0x1b;
    do {
      if ((*(char *)(param_2 + uVar13) == 'O') &&
         (*(int *)(param_2 + uVar13) == s_OggSvorbis_010484d8._0_4_)) {
        lVar16 = uVar13 + 0x1a;
        iVar8 = (int)lVar16;
        if (iVar8 < (int)param_3) {
          bVar2 = *(byte *)(param_2 + lVar16);
          uVar17 = (ulong)bVar2;
          if ((int)((int)uVar13 + (uint)bVar2 + 0x1b) < (int)param_3) {
            iVar27 = bVar2 + 0x1b;
            if (bVar2 != 0) {
              if (bVar2 < 8) {
                uVar23 = 0;
              }
              else {
                if (bVar2 < 0x10) {
                  uVar10 = 0;
                }
                else {
                  iVar29 = 0;
                  iVar30 = 0;
                  uVar23 = uVar17 & 0xf0;
                  iVar31 = 0;
                  iVar32 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar36 = 0;
                  iVar37 = 0;
                  iVar38 = 0;
                  iVar39 = 0;
                  iVar28 = 0;
                  pauVar21 = (undefined (*) [16])(lVar11 + uVar13);
                  uVar10 = uVar23;
                  auVar35 = ZEXT816(0);
                  do {
                    uVar10 = uVar10 - 0x10;
                    auVar40 = a64_TBL(ZEXT816(0),*pauVar21,ZEXT816(0),auVar5);
                    auVar41 = a64_TBL(ZEXT816(0),*pauVar21,ZEXT816(0),auVar4);
                    auVar42 = a64_TBL(ZEXT816(0),*pauVar21,ZEXT816(0),auVar6);
                    auVar43 = a64_TBL(ZEXT816(0),*pauVar21,ZEXT816(0),auVar7);
                    iVar36 = iVar36 + auVar40._0_4_;
                    iVar37 = iVar37 + auVar40._4_4_;
                    iVar38 = iVar38 + auVar40._8_4_;
                    iVar39 = iVar39 + auVar40._12_4_;
                    auVar40._0_4_ = auVar35._0_4_ + auVar41._0_4_;
                    auVar40._4_4_ = auVar35._4_4_ + auVar41._4_4_;
                    auVar40._8_4_ = auVar35._8_4_ + auVar41._8_4_;
                    auVar40._12_4_ = auVar35._12_4_ + auVar41._12_4_;
                    iVar31 = iVar31 + auVar42._0_4_;
                    iVar32 = iVar32 + auVar42._4_4_;
                    iVar33 = iVar33 + auVar42._8_4_;
                    iVar34 = iVar34 + auVar42._12_4_;
                    iVar27 = iVar27 + auVar43._0_4_;
                    iVar28 = iVar28 + auVar43._4_4_;
                    iVar29 = iVar29 + auVar43._8_4_;
                    iVar30 = iVar30 + auVar43._12_4_;
                    pauVar21 = pauVar21 + 1;
                    auVar35 = auVar40;
                  } while (uVar10 != 0);
                  iVar27 = iVar27 + auVar40._0_4_ + iVar31 + iVar36 +
                           iVar28 + auVar40._4_4_ + iVar32 + iVar37 +
                           iVar29 + auVar40._8_4_ + iVar33 + iVar38 +
                           iVar30 + auVar40._12_4_ + iVar34 + iVar39;
                  if (uVar23 == uVar17) goto LAB_00e45480;
                  uVar10 = uVar23;
                  if ((bVar2 >> 3 & 1) == 0) goto LAB_00e45464;
                }
                iVar29 = 0;
                iVar30 = 0;
                uVar23 = uVar17 & 0xf8;
                iVar31 = 0;
                iVar32 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar28 = 0;
                lVar18 = uVar10 - uVar23;
                puVar20 = (ulong *)(lVar11 + uVar13 + uVar10);
                do {
                  auVar35._0_8_ = *puVar20;
                  auVar35._8_8_ = 0;
                  lVar18 = lVar18 + 8;
                  auVar40 = a64_TBL(ZEXT816(0),auVar35,ZEXT816(0),auVar6);
                  auVar35 = a64_TBL(ZEXT816(0),auVar35,ZEXT816(0),auVar7);
                  iVar31 = iVar31 + auVar40._0_4_;
                  iVar32 = iVar32 + auVar40._4_4_;
                  iVar33 = iVar33 + auVar40._8_4_;
                  iVar34 = iVar34 + auVar40._12_4_;
                  iVar27 = iVar27 + auVar35._0_4_;
                  iVar28 = iVar28 + auVar35._4_4_;
                  iVar29 = iVar29 + auVar35._8_4_;
                  iVar30 = iVar30 + auVar35._12_4_;
                  puVar20 = puVar20 + 1;
                } while (lVar18 != 0);
                iVar27 = iVar27 + iVar31 + iVar28 + iVar32 + iVar29 + iVar33 + iVar30 + iVar34;
                if (uVar23 == uVar17) goto LAB_00e45480;
              }
LAB_00e45464:
              lVar18 = uVar17 - uVar23;
              pbVar24 = (byte *)(lVar11 + uVar23 + uVar13);
              do {
                lVar18 = lVar18 + -1;
                iVar27 = iVar27 + (uint)*pbVar24;
                pbVar24 = pbVar24 + 1;
              } while (lVar18 != 0);
            }
LAB_00e45480:
            lVar18 = 0;
            uVar15 = 0;
            do {
              pbVar24 = (byte *)(param_2 + uVar13 + lVar18);
              lVar18 = lVar18 + 1;
              uVar15 = *(uint *)(&DAT_02122f7c + (ulong)((uint)*pbVar24 ^ uVar15 >> 0x18) * 4) ^
                       uVar15 << 8;
            } while (lVar18 != 0x16);
            uVar15 = *(uint *)(&DAT_02122f7c + (ulong)(uVar15 >> 0x18) * 4) ^ uVar15 << 8;
            uVar15 = *(uint *)(&DAT_02122f7c + (ulong)(uVar15 >> 0x18) * 4) ^ uVar15 << 8;
            uVar15 = *(uint *)(&DAT_02122f7c + (ulong)(uVar15 >> 0x18) * 4) ^ uVar15 << 8;
            iVar28 = *(int *)(param_1 + 0x710);
            lVar18 = param_1 + (long)iVar28 * 0x14;
            uVar19 = *(uint *)(&DAT_02122f7c + (ulong)(uVar15 >> 0x18) * 4);
            *(int *)(param_1 + 0x710) = iVar28 + 1;
            *(int *)(lVar18 + 0x718) = iVar27 + -0x1a;
            *(uint *)(lVar18 + 0x71c) = uVar19 ^ uVar15 << 8;
            *(undefined4 *)(lVar18 + 0x714) = *(undefined4 *)(uVar13 + param_2 + 0x16);
            if (*(char *)(param_2 + (int)(iVar8 + (uint)*(byte *)(param_2 + lVar16))) == -1) {
              uVar22 = 0xffffffff;
            }
            else {
              uVar22 = *(undefined4 *)(uVar13 + param_2 + 6);
            }
            lVar16 = param_1 + (long)iVar28 * 0x14;
            *(undefined4 *)(lVar16 + 0x724) = uVar22;
            *(int *)(lVar16 + 0x720) = iVar8;
            if (iVar28 + 1 != 4) goto LAB_00e45334;
            break;
          }
        }
        uVar9 = uVar13 & 0xffffffff;
        break;
      }
LAB_00e45334:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar9);
    uVar13 = (ulong)*(uint *)(param_1 + 0x710);
    if ((int)*(uint *)(param_1 + 0x710) < 1) goto LAB_00e45728;
  }
  else {
    if (uVar15 == 1) {
      uVar10 = 0;
LAB_00e452a0:
      lVar11 = uVar13 - uVar10;
      puVar12 = (undefined4 *)(param_1 + uVar10 * 0x14 + 0x720);
      do {
        lVar11 = lVar11 + -1;
        *puVar12 = 0;
        puVar12 = puVar12 + 5;
      } while (lVar11 != 0);
    }
    else {
      uVar10 = uVar13 & 0xfffffffe;
      puVar12 = (undefined4 *)(param_1 + 0x734);
      uVar17 = uVar10;
      do {
        uVar17 = uVar17 - 2;
        puVar12[-5] = 0;
        *puVar12 = 0;
        puVar12 = puVar12 + 10;
      } while (uVar17 != 0);
      if (uVar10 != uVar13) goto LAB_00e452a0;
    }
    if ((int)uVar15 < 4) goto LAB_00e452c4;
  }
  iVar8 = 0;
  do {
    lVar11 = param_1 + (long)iVar8 * 0x14;
    iVar27 = *(int *)(lVar11 + 0x720);
    uVar1 = *(uint *)(lVar11 + 0x718);
    uVar19 = *(uint *)(lVar11 + 0x71c);
    uVar15 = (int)uVar9 - iVar27;
    if ((int)uVar1 <= (int)uVar15) {
      uVar15 = uVar1;
    }
    uVar17 = (ulong)uVar15;
    if (0 < (int)uVar15) {
      pbVar24 = (byte *)(param_2 + iVar27);
      do {
        uVar17 = uVar17 - 1;
        uVar19 = *(uint *)(&DAT_02122f7c + (ulong)((uint)*pbVar24 ^ uVar19 >> 0x18) * 4) ^
                 uVar19 << 8;
        pbVar24 = pbVar24 + 1;
      } while (uVar17 != 0);
    }
    *(uint *)(lVar11 + 0x718) = uVar1 - uVar15;
    *(uint *)(lVar11 + 0x71c) = uVar19;
    if (uVar1 - uVar15 == 0) {
      if (uVar19 == *(uint *)(undefined8 *)(lVar11 + 0x714)) {
        uVar9 = (ulong)(uVar15 + iVar27);
        *(undefined4 *)(param_1 + 0x4f8) = 0;
        *(undefined4 *)(param_1 + 0x710) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x6e8) = 0xffffffff;
        iVar8 = *(int *)(param_1 + (long)iVar8 * 0x14 + 0x724);
        *(int *)(param_1 + 0x580) = iVar8;
        *(uint *)(param_1 + 0x584) = (uint)(iVar8 != -1);
        break;
      }
      lVar16 = (long)(int)uVar13 + -1;
      lVar18 = param_1 + lVar16 * 0x14;
      *(int *)(param_1 + 0x710) = (int)lVar16;
      uVar26 = *(undefined8 *)(lVar18 + 0x71c);
      uVar25 = *(undefined8 *)(lVar18 + 0x714);
      *(undefined4 *)(lVar11 + 0x724) = *(undefined4 *)(lVar18 + 0x724);
      uVar13 = (ulong)*(uint *)(param_1 + 0x710);
      *(undefined8 *)(lVar11 + 0x71c) = uVar26;
      *(undefined8 *)(lVar11 + 0x714) = uVar25;
    }
    else {
      iVar8 = iVar8 + 1;
    }
  } while (iVar8 < (int)uVar13);
LAB_00e45728:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


