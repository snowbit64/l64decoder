// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_repacketizer_out_range_impl
// Entry Point: 00ea0d28
// Size: 1228 bytes
// Signature: undefined opus_repacketizer_out_range_impl(void)


int opus_repacketizer_out_range_impl
              (byte *param_1,uint param_2,int param_3,byte *param_4,int param_5,int param_6,
              int param_7)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  bool bVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  short *psVar20;
  ulong uVar21;
  undefined (*pauVar22) [16];
  ulong uVar23;
  ulong uVar24;
  byte *__s;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  
  if ((int)param_2 < 0) {
    return -1;
  }
  uVar3 = param_3 - param_2;
  uVar25 = (ulong)uVar3;
  if (uVar3 == 0 || param_3 < (int)param_2) {
    return -1;
  }
  if (*(int *)(param_1 + 4) < param_3) {
    return -1;
  }
  uVar26 = (ulong)param_2;
  psVar1 = (short *)(param_1 + (ulong)param_2 * 2 + 0x188);
  if (param_6 == 0) {
    iVar30 = 0;
    if (uVar3 == 2) goto LAB_00ea0de0;
LAB_00ea0dac:
    if (uVar3 == 1) {
      iVar30 = iVar30 + *psVar1 + 1;
      if (param_5 < iVar30) {
        return -2;
      }
      bVar14 = *param_1 & 0xfc;
      goto LAB_00ea0e10;
    }
    __s = param_4;
    if ((int)uVar3 < 3) goto joined_r0x00ea0e28;
  }
  else {
    iVar30 = 1;
    if (0xfb < psVar1[(long)(int)uVar3 + -1]) {
      iVar30 = 2;
    }
    if (uVar3 != 2) goto LAB_00ea0dac;
LAB_00ea0de0:
    iVar13 = (int)*psVar1;
    if (*(short *)(param_1 + (ulong)param_2 * 2 + 0x18a) != *psVar1) {
      iVar30 = iVar30 + *(short *)(param_1 + (ulong)param_2 * 2 + 0x18a) + iVar13;
      if (0xfb < iVar13) {
        iVar30 = iVar30 + 1;
      }
      iVar30 = iVar30 + 2;
      if (param_5 < iVar30) {
        return -2;
      }
      *param_4 = *param_1 & 0xfc | 2;
      iVar13 = encode_size((long)*psVar1,param_4 + 1);
      __s = param_4 + 1 + iVar13;
      goto joined_r0x00ea0e28;
    }
    iVar30 = iVar30 + iVar13 * 2 + 1;
    if (param_5 < iVar30) {
      return -2;
    }
    bVar14 = *param_1 & 0xfc | 1;
LAB_00ea0e10:
    *param_4 = bVar14;
    __s = param_4 + 1;
joined_r0x00ea0e28:
    if ((param_7 == 0) || (param_5 <= iVar30)) goto LAB_00ea1158;
  }
  if (param_6 == 0) {
    iVar13 = 2;
    uVar18 = (uint)*psVar1;
    uVar15 = uVar18;
    if ((int)uVar3 < 2) goto LAB_00ea0f38;
LAB_00ea0e58:
    bVar12 = true;
    if ((uint)*(ushort *)(param_1 + (ulong)param_2 * 2 + 0x18a) == (uVar15 & 0xffff)) {
      lVar17 = 0;
      do {
        lVar16 = lVar17;
        if (uVar25 - 2 == lVar16) {
          bVar12 = lVar16 + 2U < uVar25;
          iVar30 = iVar13 + uVar3 * uVar15;
          goto joined_r0x00ea0f44;
        }
        lVar17 = lVar16 + 1;
      } while ((uint)*(ushort *)(param_1 + lVar16 * 2 + uVar26 * 2 + 0x18c) == (uVar15 & 0xffff));
      bVar12 = lVar16 + 2U < uVar25;
    }
    uVar2 = uVar3 - 1;
    uVar18 = uVar2;
    if ((int)uVar2 < 2) {
      uVar18 = 1;
    }
    iVar30 = 1;
    if (0xfb < (int)uVar15) {
      iVar30 = 2;
    }
    iVar30 = iVar13 + uVar15 + iVar30;
    if (1 < (int)uVar2) {
      uVar19 = (ulong)uVar18 - 1;
      if (uVar19 < 0x10) {
        uVar21 = 1;
      }
      else {
        iVar32 = 0;
        iVar33 = 0;
        uVar23 = uVar19 & 0xfffffffffffffff0;
        iVar13 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar29 = 0;
        uVar21 = uVar23 | 1;
        iVar31 = 0;
        pauVar22 = (undefined (*) [16])(param_1 + uVar26 * 2 + 0x19a);
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        iVar41 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        uVar24 = uVar23;
        do {
          auVar10 = pauVar22[-1];
          auVar11 = *pauVar22;
          pauVar22 = pauVar22 + 2;
          uVar24 = uVar24 - 0x10;
          auVar44._8_2_ = 0xfb;
          auVar44._0_8_ = 0xfb00fb00fb00fb;
          auVar44._10_2_ = 0xfb;
          auVar44._12_2_ = 0xfb;
          auVar44._14_2_ = 0xfb;
          auVar44 = NEON_cmgt(auVar10,auVar44,2);
          auVar47._8_2_ = 0xfb;
          auVar47._0_8_ = 0xfb00fb00fb00fb;
          auVar47._10_2_ = 0xfb;
          auVar47._12_2_ = 0xfb;
          auVar47._14_2_ = 0xfb;
          auVar47 = NEON_cmgt(auVar11,auVar47,2);
          auVar42._0_4_ = (int)auVar44._8_2_;
          auVar42._4_4_ = (int)auVar44._10_2_;
          auVar42._8_4_ = (int)auVar44._12_2_;
          auVar42._12_4_ = (int)auVar44._14_2_;
          auVar43._0_4_ = (int)auVar44._0_2_;
          auVar43._4_4_ = (int)auVar44._2_2_;
          auVar43._8_4_ = (int)auVar44._4_2_;
          auVar43._12_4_ = (int)auVar44._6_2_;
          auVar45._0_4_ = (int)auVar47._8_2_;
          auVar45._4_4_ = (int)auVar47._10_2_;
          auVar45._8_4_ = (int)auVar47._12_2_;
          auVar45._12_4_ = (int)auVar47._14_2_;
          auVar48._0_4_ = (int)auVar47._0_2_;
          auVar48._4_4_ = (int)auVar47._2_2_;
          auVar48._8_4_ = (int)auVar47._4_2_;
          auVar48._12_4_ = (int)auVar47._6_2_;
          auVar46._8_4_ = 1;
          auVar46._0_8_ = 0x100000001;
          auVar46._12_4_ = 1;
          auVar6._8_4_ = 2;
          auVar6._0_8_ = 0x200000002;
          auVar6._12_4_ = 2;
          auVar44 = NEON_bsl(auVar42,auVar6,auVar46,1);
          auVar49._8_4_ = 1;
          auVar49._0_8_ = 0x100000001;
          auVar49._12_4_ = 1;
          auVar7._8_4_ = 2;
          auVar7._0_8_ = 0x200000002;
          auVar7._12_4_ = 2;
          auVar47 = NEON_bsl(auVar43,auVar7,auVar49,1);
          auVar4._8_4_ = 1;
          auVar4._0_8_ = 0x100000001;
          auVar4._12_4_ = 1;
          auVar8._8_4_ = 2;
          auVar8._0_8_ = 0x200000002;
          auVar8._12_4_ = 2;
          auVar46 = NEON_bsl(auVar45,auVar8,auVar4,1);
          auVar5._8_4_ = 1;
          auVar5._0_8_ = 0x100000001;
          auVar5._12_4_ = 1;
          auVar9._8_4_ = 2;
          auVar9._0_8_ = 0x200000002;
          auVar9._12_4_ = 2;
          auVar49 = NEON_bsl(auVar48,auVar9,auVar5,1);
          iVar13 = iVar13 + auVar10._8_2_ + auVar44._0_4_;
          iVar27 = iVar27 + auVar10._10_2_ + auVar44._4_4_;
          iVar28 = iVar28 + auVar10._12_2_ + auVar44._8_4_;
          iVar29 = iVar29 + auVar10._14_2_ + auVar44._12_4_;
          iVar30 = iVar30 + auVar10._0_2_ + auVar47._0_4_;
          iVar31 = iVar31 + auVar10._2_2_ + auVar47._4_4_;
          iVar32 = iVar32 + auVar10._4_2_ + auVar47._8_4_;
          iVar33 = iVar33 + auVar10._6_2_ + auVar47._12_4_;
          iVar34 = iVar34 + auVar11._8_2_ + auVar46._0_4_;
          iVar35 = iVar35 + auVar11._10_2_ + auVar46._4_4_;
          iVar36 = iVar36 + auVar11._12_2_ + auVar46._8_4_;
          iVar37 = iVar37 + auVar11._14_2_ + auVar46._12_4_;
          iVar38 = iVar38 + auVar11._0_2_ + auVar49._0_4_;
          iVar39 = iVar39 + auVar11._2_2_ + auVar49._4_4_;
          iVar40 = iVar40 + auVar11._4_2_ + auVar49._8_4_;
          iVar41 = iVar41 + auVar11._6_2_ + auVar49._12_4_;
        } while (uVar24 != 0);
        iVar30 = iVar38 + iVar30 + iVar34 + iVar13 + iVar39 + iVar31 + iVar35 + iVar27 +
                 iVar40 + iVar32 + iVar36 + iVar28 + iVar41 + iVar33 + iVar37 + iVar29;
        if (uVar19 == uVar23) goto LAB_00ea1054;
      }
      lVar17 = uVar18 - uVar21;
      psVar20 = (short *)(param_1 + uVar21 * 2 + uVar26 * 2 + 0x188);
      do {
        iVar13 = 1;
        if (0xfb < *psVar20) {
          iVar13 = 2;
        }
        lVar17 = lVar17 + -1;
        iVar30 = iVar30 + *psVar20 + iVar13;
        psVar20 = psVar20 + 1;
      } while (lVar17 != 0);
    }
LAB_00ea1054:
    iVar30 = iVar30 + psVar1[(int)uVar2];
    if (param_5 < iVar30) {
      return -2;
    }
    *param_4 = *param_1 | 3;
    param_4[1] = (byte)(uVar3 | 0xffffff80);
    uVar15 = uVar3 | 0xffffff80;
  }
  else {
    iVar13 = 3;
    if (0xfb < psVar1[(long)(int)uVar3 + -1]) {
      iVar13 = 4;
    }
    uVar18 = (uint)*psVar1;
    uVar15 = (int)*psVar1;
    if (1 < (int)uVar3) goto LAB_00ea0e58;
LAB_00ea0f38:
    bVar12 = false;
    iVar30 = iVar13 + uVar3 * uVar18;
joined_r0x00ea0f44:
    if (param_5 < iVar30) {
      return -2;
    }
    bVar14 = *param_1;
    param_4[1] = (byte)uVar3;
    *param_4 = bVar14 | 3;
    uVar15 = uVar3;
  }
  __s = param_4 + 2;
  if ((param_7 != 0) && (iVar13 = param_5 - iVar30, iVar13 != 0)) {
    param_4[1] = (byte)uVar15 | 0x40;
    uVar15 = (iVar13 + -1) / 0xff;
    if (0xff < iVar13) {
      uVar18 = uVar15;
      if ((int)uVar15 < 2) {
        uVar18 = 1;
      }
      memset(__s,0xff,(ulong)uVar18);
      __s = param_4 + (ulong)(uVar18 - 1) + 3;
    }
    *__s = ((char)uVar15 + (char)iVar13) - 1;
    __s = __s + 1;
    iVar30 = param_5;
  }
  if (!(bool)(bVar12 ^ 1U | (int)uVar3 < 2)) {
    uVar19 = (ulong)(uVar3 - 1);
    psVar20 = (short *)(param_1 + uVar26 * 2 + 0x188);
    do {
      iVar13 = encode_size((long)*psVar20,__s);
      uVar19 = uVar19 - 1;
      __s = __s + iVar13;
      psVar20 = psVar20 + 1;
    } while (uVar19 != 0);
  }
LAB_00ea1158:
  if (param_6 != 0) {
    iVar13 = encode_size((long)psVar1[(long)(int)uVar3 + -1],__s);
    __s = __s + iVar13;
  }
  if (0 < (int)uVar3) {
    do {
      lVar17 = uVar26 * 2;
      memmove(__s,*(void **)(param_1 + uVar26 * 8 + 8),(long)*(short *)(param_1 + lVar17 + 0x188));
      uVar26 = uVar26 + 1;
      uVar25 = uVar25 - 1;
      __s = __s + *(short *)(param_1 + lVar17 + 0x188);
    } while (uVar25 != 0);
  }
  if (param_7 != 0) {
    if (__s < param_4 + param_5) {
      memset(__s,0,(long)(param_4 + param_5) - (long)__s);
      return iVar30;
    }
    return iVar30;
  }
  return iVar30;
}


