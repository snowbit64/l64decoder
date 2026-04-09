// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d91718
// Entry Point: 00d91718
// Size: 2892 bytes
// Signature: undefined FUN_00d91718(void)


void FUN_00d91718(long param_1,ulong param_2,int param_3,uint param_4)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  byte **ppbVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  byte local_9f0 [128];
  byte local_970 [256];
  long local_870 [4];
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  long local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  long local_70;
  
  lVar9 = tpidr_el0;
  uVar3 = (int)(param_2 >> 2) << 5 | 4;
  local_70 = *(long *)(lVar9 + 0x28);
  uVar6 = param_4 << 3;
  uVar4 = *(uint *)(param_1 + 0x88);
  uVar15 = (long)(param_3 << 2) & 0xffffffffffffffe0U | 2;
  lVar25 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  uVar35 = (long)(int)uVar6 & 0xffffffffffffffe0U | 4;
  iVar14 = (int)uVar15;
  iVar34 = (int)uVar35;
  if ((int)uVar4 < 1) {
    uVar24 = 0;
  }
  else {
    ppbVar12 = *(byte ***)(param_1 + 0x90);
    uVar26 = (long)(param_3 << 2) | 0x1e;
    uVar24 = (uint)param_2 << 3 | 0x1c;
    uVar31 = (long)(int)uVar6 | 0x1c;
    iVar23 = (int)uVar26;
    pbVar16 = *ppbVar12;
    pbVar17 = ppbVar12[1];
    iVar30 = (int)uVar31;
    pbVar36 = ppbVar12[2];
    lVar22 = 0x7fffffff;
    plVar27 = local_870;
    uVar37 = (ulong)uVar4;
    do {
      bVar5 = *pbVar16;
      uVar10 = uVar3;
      uVar11 = uVar24;
      if (((int)(uint)bVar5 < (int)uVar3) ||
         (uVar18 = (uint)bVar5, uVar10 = uVar24, uVar11 = uVar3, (int)uVar24 < (int)uVar18)) {
        iVar7 = (bVar5 - uVar10) * 2;
        iVar8 = (bVar5 - uVar11) * 2;
        lVar38 = (long)iVar7 * (long)iVar7;
        lVar39 = (long)iVar8 * (long)iVar8;
        bVar5 = *pbVar17;
joined_r0x00d91880:
        uVar21 = (ulong)bVar5;
        if ((int)(uint)bVar5 < iVar14) goto LAB_00d91854;
LAB_00d918a4:
        if (iVar23 < (int)uVar21) {
          lVar13 = uVar21 - (long)iVar23;
          lVar19 = uVar21 - (long)iVar14;
          goto LAB_00d918b4;
        }
        if (iVar14 + iVar23 >> 1 < (int)uVar21) {
          lVar13 = (uVar21 - (long)iVar14) * 3;
          lVar13 = lVar13 * lVar13;
          bVar5 = *pbVar36;
          goto joined_r0x00d91900;
        }
        lVar13 = (uVar21 - (long)iVar23) * 3;
        lVar13 = lVar13 * lVar13;
        uVar21 = (ulong)*pbVar36;
        if ((int)(uint)*pbVar36 < iVar34) goto LAB_00d917d8;
LAB_00d918d0:
        if (iVar30 < (int)uVar21) {
          lVar19 = uVar21 - (long)iVar30;
          lVar20 = uVar21 - (long)iVar34;
          goto LAB_00d917e0;
        }
        if (iVar34 + iVar30 >> 1 < (int)uVar21) {
          lVar20 = uVar21 - (long)iVar34;
        }
        else {
          lVar20 = uVar21 - (long)iVar30;
        }
      }
      else {
        if ((int)(uVar3 + uVar24) >> 1 < (int)uVar18) {
          iVar7 = (uVar18 - uVar3) * 2;
          lVar38 = 0;
          lVar39 = (long)iVar7 * (long)iVar7;
          bVar5 = *pbVar17;
          goto joined_r0x00d91880;
        }
        iVar7 = (uVar18 - uVar24) * 2;
        lVar38 = 0;
        lVar39 = (long)iVar7 * (long)iVar7;
        uVar21 = (ulong)*pbVar17;
        if (iVar14 <= (int)(uint)*pbVar17) goto LAB_00d918a4;
LAB_00d91854:
        lVar13 = uVar21 - uVar15;
        lVar19 = uVar21 - uVar26;
LAB_00d918b4:
        lVar38 = lVar38 + lVar13 * 3 * lVar13 * 3;
        lVar13 = lVar19 * 3 * lVar19 * 3;
        bVar5 = *pbVar36;
joined_r0x00d91900:
        uVar21 = (ulong)bVar5;
        if (iVar34 <= (int)(uint)bVar5) goto LAB_00d918d0;
LAB_00d917d8:
        lVar19 = uVar21 - uVar35;
        lVar20 = uVar21 - uVar31;
LAB_00d917e0:
        lVar38 = lVar38 + lVar19 * lVar19;
      }
      pbVar36 = pbVar36 + 1;
      pbVar17 = pbVar17 + 1;
      lVar39 = lVar13 + lVar39 + lVar20 * lVar20;
      pbVar16 = pbVar16 + 1;
      if (lVar22 <= lVar39) {
        lVar39 = lVar22;
      }
      uVar37 = uVar37 - 1;
      *plVar27 = lVar38;
      lVar22 = lVar39;
      plVar27 = plVar27 + 1;
    } while (uVar37 != 0);
    uVar15 = 0;
    uVar24 = 0;
    do {
      if (local_870[uVar15] <= lVar39) {
        local_970[(int)uVar24] = (byte)uVar15;
        uVar24 = uVar24 + 1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar4 != uVar15);
  }
  local_870[1] = 0x7fffffff;
  local_870[0] = 0x7fffffff;
  local_870[3] = 0x7fffffff;
  local_870[2] = 0x7fffffff;
  uStack_848 = 0x7fffffff;
  local_850 = 0x7fffffff;
  local_838 = 0x7fffffff;
  local_840 = 0x7fffffff;
  uStack_828 = 0x7fffffff;
  local_830 = 0x7fffffff;
  local_818 = 0x7fffffff;
  local_820 = 0x7fffffff;
  uStack_808 = 0x7fffffff;
  local_810 = 0x7fffffff;
  local_7f8 = 0x7fffffff;
  local_800 = 0x7fffffff;
  uStack_7e8 = 0x7fffffff;
  local_7f0 = 0x7fffffff;
  local_7d8 = 0x7fffffff;
  local_7e0 = 0x7fffffff;
  uStack_7c8 = 0x7fffffff;
  local_7d0 = 0x7fffffff;
  local_7b8 = 0x7fffffff;
  local_7c0 = 0x7fffffff;
  uStack_7a8 = 0x7fffffff;
  local_7b0 = 0x7fffffff;
  local_798 = 0x7fffffff;
  local_7a0 = 0x7fffffff;
  uStack_788 = 0x7fffffff;
  local_790 = 0x7fffffff;
  local_778 = 0x7fffffff;
  local_780 = 0x7fffffff;
  uStack_768 = 0x7fffffff;
  local_770 = 0x7fffffff;
  uStack_758 = 0x7fffffff;
  uStack_760 = 0x7fffffff;
  uStack_748 = 0x7fffffff;
  local_750 = 0x7fffffff;
  uStack_738 = 0x7fffffff;
  uStack_740 = 0x7fffffff;
  uStack_728 = 0x7fffffff;
  local_730 = 0x7fffffff;
  uStack_718 = 0x7fffffff;
  uStack_720 = 0x7fffffff;
  uStack_708 = 0x7fffffff;
  local_710 = 0x7fffffff;
  uStack_6f8 = 0x7fffffff;
  uStack_700 = 0x7fffffff;
  uStack_6e8 = 0x7fffffff;
  local_6f0 = 0x7fffffff;
  uStack_6d8 = 0x7fffffff;
  uStack_6e0 = 0x7fffffff;
  uStack_6c8 = 0x7fffffff;
  local_6d0 = 0x7fffffff;
  uStack_6b8 = 0x7fffffff;
  uStack_6c0 = 0x7fffffff;
  uStack_6a8 = 0x7fffffff;
  local_6b0 = 0x7fffffff;
  uStack_698 = 0x7fffffff;
  uStack_6a0 = 0x7fffffff;
  uStack_688 = 0x7fffffff;
  local_690 = 0x7fffffff;
  uStack_678 = 0x7fffffff;
  uStack_680 = 0x7fffffff;
  uStack_668 = 0x7fffffff;
  local_670 = 0x7fffffff;
  uStack_658 = 0x7fffffff;
  uStack_660 = 0x7fffffff;
  uStack_648 = 0x7fffffff;
  local_650 = 0x7fffffff;
  uStack_638 = 0x7fffffff;
  uStack_640 = 0x7fffffff;
  uStack_628 = 0x7fffffff;
  local_630 = 0x7fffffff;
  uStack_618 = 0x7fffffff;
  uStack_620 = 0x7fffffff;
  uStack_608 = 0x7fffffff;
  local_610 = 0x7fffffff;
  uStack_5f8 = 0x7fffffff;
  local_600 = 0x7fffffff;
  uStack_5e8 = 0x7fffffff;
  local_5f0 = 0x7fffffff;
  uStack_5d8 = 0x7fffffff;
  local_5e0 = 0x7fffffff;
  uStack_5c8 = 0x7fffffff;
  local_5d0 = 0x7fffffff;
  uStack_5b8 = 0x7fffffff;
  local_5c0 = 0x7fffffff;
  uStack_5a8 = 0x7fffffff;
  local_5b0 = 0x7fffffff;
  uStack_598 = 0x7fffffff;
  local_5a0 = 0x7fffffff;
  uStack_588 = 0x7fffffff;
  local_590 = 0x7fffffff;
  uStack_578 = 0x7fffffff;
  local_580 = 0x7fffffff;
  uStack_568 = 0x7fffffff;
  local_570 = 0x7fffffff;
  uStack_558 = 0x7fffffff;
  local_560 = 0x7fffffff;
  uStack_548 = 0x7fffffff;
  local_550 = 0x7fffffff;
  uStack_538 = 0x7fffffff;
  local_540 = 0x7fffffff;
  uStack_528 = 0x7fffffff;
  local_530 = 0x7fffffff;
  uStack_518 = 0x7fffffff;
  local_520 = 0x7fffffff;
  uStack_508 = 0x7fffffff;
  local_510 = 0x7fffffff;
  uStack_4f8 = 0x7fffffff;
  local_500 = 0x7fffffff;
  uStack_4e8 = 0x7fffffff;
  local_4f0 = 0x7fffffff;
  uStack_4d8 = 0x7fffffff;
  local_4e0 = 0x7fffffff;
  uStack_4c8 = 0x7fffffff;
  local_4d0 = 0x7fffffff;
  uStack_4b8 = 0x7fffffff;
  local_4c0 = 0x7fffffff;
  uStack_4a8 = 0x7fffffff;
  local_4b0 = 0x7fffffff;
  uStack_498 = 0x7fffffff;
  local_4a0 = 0x7fffffff;
  uStack_488 = 0x7fffffff;
  local_490 = 0x7fffffff;
  uStack_478 = 0x7fffffff;
  local_480 = 0x7fffffff;
  if (0 < (int)uVar24) {
    uVar15 = 0;
    plVar27 = *(long **)(param_1 + 0x90);
    do {
      bVar5 = local_970[uVar15];
      uVar35 = (ulong)bVar5;
      lVar19 = 0;
      lVar28 = (long)iVar14 - (ulong)*(byte *)(plVar27[1] + uVar35);
      uVar4 = (uVar3 - *(byte *)(*plVar27 + uVar35)) * 2;
      lVar32 = (long)(int)(uVar6 & 0xffffffe0 | 4) - (ulong)*(byte *)(plVar27[2] + uVar35);
      lVar20 = lVar28 * 3;
      lVar39 = lVar32 * 0x10;
      lVar28 = lVar28 * 0x48;
      lVar22 = lVar39 + 0x40;
      lVar38 = lVar39 + 0xc0;
      lVar39 = lVar39 + 0x140;
      lVar13 = lVar28 + 0x90;
      lVar20 = lVar20 * lVar20 + (long)(int)uVar4 * (long)(int)uVar4 + lVar32 * lVar32;
      plVar29 = &local_7f0;
      pbVar36 = local_9f0 + 0xf;
      do {
        if (lVar20 < plVar29[-0x10]) {
          plVar29[-0x10] = lVar20;
          pbVar36[-0xf] = bVar5;
          if (lVar20 + lVar22 < plVar29[-0xf]) goto LAB_00d91dac;
LAB_00d91b40:
          lVar32 = lVar20 + lVar22 + lVar38;
          if (plVar29[-0xe] <= lVar32) goto LAB_00d91dc4;
LAB_00d91b50:
          plVar29[-0xe] = lVar32;
          pbVar36[-0xd] = bVar5;
          lVar32 = lVar32 + lVar39;
          if (lVar32 < plVar29[-0xd]) goto LAB_00d91dd4;
LAB_00d91b68:
          if (plVar29[-0xc] <= lVar13 + lVar20) goto LAB_00d91dec;
LAB_00d91b78:
          plVar29[-0xc] = lVar13 + lVar20;
          pbVar36[-0xb] = bVar5;
          lVar32 = lVar13 + lVar20 + lVar22;
          if (lVar32 < plVar29[-0xb]) goto LAB_00d91dfc;
LAB_00d91b90:
          lVar32 = lVar32 + lVar38;
          if (plVar29[-10] <= lVar32) goto LAB_00d91e14;
LAB_00d91ba0:
          plVar29[-10] = lVar32;
          pbVar36[-9] = bVar5;
          lVar32 = lVar32 + lVar39;
          if (lVar32 < plVar29[-9]) goto LAB_00d91e24;
LAB_00d91bb8:
          lVar32 = lVar28 + 0x1b0 + lVar13 + lVar20;
          if (plVar29[-8] <= lVar32) goto LAB_00d91e3c;
LAB_00d91bc8:
          plVar29[-8] = lVar32;
          pbVar36[-7] = bVar5;
          lVar33 = lVar32 + lVar22;
          if (lVar33 < plVar29[-7]) goto LAB_00d91e4c;
LAB_00d91be0:
          lVar33 = lVar33 + lVar38;
          if (plVar29[-6] <= lVar33) goto LAB_00d91e64;
LAB_00d91bf0:
          plVar29[-6] = lVar33;
          pbVar36[-5] = bVar5;
          lVar33 = lVar33 + lVar39;
          if (lVar33 < plVar29[-5]) goto LAB_00d91e74;
LAB_00d91c08:
          lVar32 = lVar28 + 0x2d0 + lVar32;
          if (plVar29[-4] <= lVar32) goto LAB_00d91e8c;
LAB_00d91c18:
          plVar29[-4] = lVar32;
          pbVar36[-3] = bVar5;
          lVar33 = lVar32 + lVar22;
          if (lVar33 < plVar29[-3]) goto LAB_00d91e9c;
LAB_00d91c30:
          lVar33 = lVar33 + lVar38;
          if (plVar29[-2] <= lVar33) goto LAB_00d91eb4;
LAB_00d91c40:
          plVar29[-2] = lVar33;
          pbVar36[-1] = bVar5;
          lVar33 = lVar33 + lVar39;
          if (lVar33 < plVar29[-1]) goto LAB_00d91ec4;
LAB_00d91c58:
          lVar32 = lVar28 + 0x3f0 + lVar32;
          if (*plVar29 <= lVar32) goto LAB_00d91edc;
LAB_00d91c68:
          *plVar29 = lVar32;
          pbVar36[1] = bVar5;
          lVar33 = lVar32 + lVar22;
          if (lVar33 < plVar29[1]) goto LAB_00d91eec;
LAB_00d91c80:
          lVar33 = lVar33 + lVar38;
          if (plVar29[2] <= lVar33) goto LAB_00d91f04;
LAB_00d91c90:
          plVar29[2] = lVar33;
          pbVar36[3] = bVar5;
          lVar33 = lVar33 + lVar39;
          if (lVar33 < plVar29[3]) goto LAB_00d91f14;
LAB_00d91ca8:
          lVar32 = lVar28 + 0x510 + lVar32;
          if (plVar29[4] <= lVar32) goto LAB_00d91f2c;
LAB_00d91cb8:
          plVar29[4] = lVar32;
          pbVar36[5] = bVar5;
          lVar33 = lVar32 + lVar22;
          if (lVar33 < plVar29[5]) goto LAB_00d91f3c;
LAB_00d91cd0:
          lVar33 = lVar33 + lVar38;
          if (plVar29[6] <= lVar33) goto LAB_00d91f54;
LAB_00d91ce0:
          plVar29[6] = lVar33;
          pbVar36[7] = bVar5;
          lVar33 = lVar33 + lVar39;
          if (lVar33 < plVar29[7]) goto LAB_00d91f64;
LAB_00d91cf8:
          lVar32 = lVar28 + 0x630 + lVar32;
          if (plVar29[8] <= lVar32) goto LAB_00d91f7c;
LAB_00d91d08:
          plVar29[8] = lVar32;
          pbVar36[9] = bVar5;
          lVar33 = lVar32 + lVar22;
          if (lVar33 < plVar29[9]) goto LAB_00d91f8c;
LAB_00d91d20:
          lVar33 = lVar33 + lVar38;
          if (plVar29[10] <= lVar33) goto LAB_00d91fa4;
LAB_00d91d30:
          plVar29[10] = lVar33;
          pbVar36[0xb] = bVar5;
          lVar33 = lVar33 + lVar39;
          if (lVar33 < plVar29[0xb]) goto LAB_00d91fb4;
LAB_00d91d48:
          lVar32 = lVar28 + 0x750 + lVar32;
          if (plVar29[0xc] <= lVar32) goto LAB_00d91fcc;
LAB_00d91d58:
          plVar29[0xc] = lVar32;
          pbVar36[0xd] = bVar5;
          lVar32 = lVar32 + lVar22;
          if (lVar32 < plVar29[0xd]) goto LAB_00d91fdc;
LAB_00d91d70:
          lVar32 = lVar32 + lVar38;
          if (plVar29[0xe] <= lVar32) goto LAB_00d91ff4;
LAB_00d91d80:
          plVar29[0xe] = lVar32;
          pbVar36[0xf] = bVar5;
          lVar32 = lVar32 + lVar39;
          if (lVar32 < plVar29[0xf]) {
LAB_00d92004:
            plVar29[0xf] = lVar32;
            pbVar36[0x10] = bVar5;
          }
        }
        else {
          if (plVar29[-0xf] <= lVar20 + lVar22) goto LAB_00d91b40;
LAB_00d91dac:
          plVar29[-0xf] = lVar20 + lVar22;
          pbVar36[-0xe] = bVar5;
          lVar32 = lVar20 + lVar22 + lVar38;
          if (lVar32 < plVar29[-0xe]) goto LAB_00d91b50;
LAB_00d91dc4:
          lVar32 = lVar32 + lVar39;
          if (plVar29[-0xd] <= lVar32) goto LAB_00d91b68;
LAB_00d91dd4:
          plVar29[-0xd] = lVar32;
          pbVar36[-0xc] = bVar5;
          if (lVar13 + lVar20 < plVar29[-0xc]) goto LAB_00d91b78;
LAB_00d91dec:
          lVar32 = lVar13 + lVar20 + lVar22;
          if (plVar29[-0xb] <= lVar32) goto LAB_00d91b90;
LAB_00d91dfc:
          plVar29[-0xb] = lVar32;
          pbVar36[-10] = bVar5;
          lVar32 = lVar32 + lVar38;
          if (lVar32 < plVar29[-10]) goto LAB_00d91ba0;
LAB_00d91e14:
          lVar32 = lVar32 + lVar39;
          if (plVar29[-9] <= lVar32) goto LAB_00d91bb8;
LAB_00d91e24:
          plVar29[-9] = lVar32;
          pbVar36[-8] = bVar5;
          lVar32 = lVar28 + 0x1b0 + lVar13 + lVar20;
          if (lVar32 < plVar29[-8]) goto LAB_00d91bc8;
LAB_00d91e3c:
          lVar33 = lVar32 + lVar22;
          if (plVar29[-7] <= lVar33) goto LAB_00d91be0;
LAB_00d91e4c:
          plVar29[-7] = lVar33;
          pbVar36[-6] = bVar5;
          lVar33 = lVar33 + lVar38;
          if (lVar33 < plVar29[-6]) goto LAB_00d91bf0;
LAB_00d91e64:
          lVar33 = lVar33 + lVar39;
          if (plVar29[-5] <= lVar33) goto LAB_00d91c08;
LAB_00d91e74:
          plVar29[-5] = lVar33;
          pbVar36[-4] = bVar5;
          lVar32 = lVar28 + 0x2d0 + lVar32;
          if (lVar32 < plVar29[-4]) goto LAB_00d91c18;
LAB_00d91e8c:
          lVar33 = lVar32 + lVar22;
          if (plVar29[-3] <= lVar33) goto LAB_00d91c30;
LAB_00d91e9c:
          plVar29[-3] = lVar33;
          pbVar36[-2] = bVar5;
          lVar33 = lVar33 + lVar38;
          if (lVar33 < plVar29[-2]) goto LAB_00d91c40;
LAB_00d91eb4:
          lVar33 = lVar33 + lVar39;
          if (plVar29[-1] <= lVar33) goto LAB_00d91c58;
LAB_00d91ec4:
          plVar29[-1] = lVar33;
          *pbVar36 = bVar5;
          lVar32 = lVar28 + 0x3f0 + lVar32;
          if (lVar32 < *plVar29) goto LAB_00d91c68;
LAB_00d91edc:
          lVar33 = lVar32 + lVar22;
          if (plVar29[1] <= lVar33) goto LAB_00d91c80;
LAB_00d91eec:
          plVar29[1] = lVar33;
          pbVar36[2] = bVar5;
          lVar33 = lVar33 + lVar38;
          if (lVar33 < plVar29[2]) goto LAB_00d91c90;
LAB_00d91f04:
          lVar33 = lVar33 + lVar39;
          if (plVar29[3] <= lVar33) goto LAB_00d91ca8;
LAB_00d91f14:
          plVar29[3] = lVar33;
          pbVar36[4] = bVar5;
          lVar32 = lVar28 + 0x510 + lVar32;
          if (lVar32 < plVar29[4]) goto LAB_00d91cb8;
LAB_00d91f2c:
          lVar33 = lVar32 + lVar22;
          if (plVar29[5] <= lVar33) goto LAB_00d91cd0;
LAB_00d91f3c:
          plVar29[5] = lVar33;
          pbVar36[6] = bVar5;
          lVar33 = lVar33 + lVar38;
          if (lVar33 < plVar29[6]) goto LAB_00d91ce0;
LAB_00d91f54:
          lVar33 = lVar33 + lVar39;
          if (plVar29[7] <= lVar33) goto LAB_00d91cf8;
LAB_00d91f64:
          plVar29[7] = lVar33;
          pbVar36[8] = bVar5;
          lVar32 = lVar28 + 0x630 + lVar32;
          if (lVar32 < plVar29[8]) goto LAB_00d91d08;
LAB_00d91f7c:
          lVar33 = lVar32 + lVar22;
          if (plVar29[9] <= lVar33) goto LAB_00d91d20;
LAB_00d91f8c:
          plVar29[9] = lVar33;
          pbVar36[10] = bVar5;
          lVar33 = lVar33 + lVar38;
          if (lVar33 < plVar29[10]) goto LAB_00d91d30;
LAB_00d91fa4:
          lVar33 = lVar33 + lVar39;
          if (plVar29[0xb] <= lVar33) goto LAB_00d91d48;
LAB_00d91fb4:
          plVar29[0xb] = lVar33;
          pbVar36[0xc] = bVar5;
          lVar32 = lVar28 + 0x750 + lVar32;
          if (lVar32 < plVar29[0xc]) goto LAB_00d91d58;
LAB_00d91fcc:
          lVar32 = lVar32 + lVar22;
          if (plVar29[0xd] <= lVar32) goto LAB_00d91d70;
LAB_00d91fdc:
          plVar29[0xd] = lVar32;
          pbVar36[0xe] = bVar5;
          lVar32 = lVar32 + lVar38;
          if (lVar32 < plVar29[0xe]) goto LAB_00d91d80;
LAB_00d91ff4:
          lVar32 = lVar32 + lVar39;
          if (lVar32 < plVar29[0xf]) goto LAB_00d92004;
        }
        lVar32 = (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5) + 0x100 + lVar19
        ;
        lVar19 = lVar19 + 0x200;
        lVar20 = lVar20 + lVar32;
        plVar29 = plVar29 + 0x20;
        pbVar36 = pbVar36 + 0x20;
      } while ((int)lVar19 != 0x800);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar24);
  }
  lVar22 = 0;
  pbVar36 = local_9f0;
  uVar15 = (long)param_3 & 0xfffffffffffffff8;
  lVar38 = (ulong)(param_4 & 0xfffffffc) * 2;
  do {
    lVar39 = *(long *)(lVar25 + (long)(int)((uint)param_2 & 0xfffffffc) * 8 + lVar22);
    lVar22 = lVar22 + 8;
    psVar1 = (short *)(lVar39 + uVar15 * 0x40 + lVar38);
    *psVar1 = *pbVar36 + 1;
    psVar1[1] = pbVar36[1] + 1;
    psVar1[2] = pbVar36[2] + 1;
    psVar1[3] = pbVar36[3] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 1) * 0x40 + lVar38);
    *psVar1 = pbVar36[4] + 1;
    psVar1[1] = pbVar36[5] + 1;
    psVar1[2] = pbVar36[6] + 1;
    psVar1[3] = pbVar36[7] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 2) * 0x40 + lVar38);
    *psVar1 = pbVar36[8] + 1;
    psVar1[1] = pbVar36[9] + 1;
    psVar1[2] = pbVar36[10] + 1;
    psVar1[3] = pbVar36[0xb] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 3) * 0x40 + lVar38);
    *psVar1 = pbVar36[0xc] + 1;
    psVar1[1] = pbVar36[0xd] + 1;
    psVar1[2] = pbVar36[0xe] + 1;
    psVar1[3] = pbVar36[0xf] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 4) * 0x40 + lVar38);
    *psVar1 = pbVar36[0x10] + 1;
    psVar1[1] = pbVar36[0x11] + 1;
    psVar1[2] = pbVar36[0x12] + 1;
    psVar1[3] = pbVar36[0x13] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 5) * 0x40 + lVar38);
    *psVar1 = pbVar36[0x14] + 1;
    psVar1[1] = pbVar36[0x15] + 1;
    psVar1[2] = pbVar36[0x16] + 1;
    psVar1[3] = pbVar36[0x17] + 1;
    psVar1 = (short *)(lVar39 + (uVar15 | 6) * 0x40 + lVar38);
    psVar2 = (short *)(lVar39 + (uVar15 | 7) * 0x40 + lVar38);
    *psVar1 = pbVar36[0x18] + 1;
    psVar1[1] = pbVar36[0x19] + 1;
    psVar1[2] = pbVar36[0x1a] + 1;
    psVar1[3] = pbVar36[0x1b] + 1;
    *psVar2 = pbVar36[0x1c] + 1;
    psVar2[1] = pbVar36[0x1d] + 1;
    psVar2[2] = pbVar36[0x1e] + 1;
    pbVar17 = pbVar36 + 0x1f;
    pbVar36 = pbVar36 + 0x20;
    psVar2[3] = *pbVar17 + 1;
  } while (lVar22 != 0x20);
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


