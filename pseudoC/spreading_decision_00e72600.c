// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spreading_decision
// Entry Point: 00e72600
// Size: 848 bytes
// Signature: undefined spreading_decision(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined8 param_11)


undefined spreading_decision(long param_1,long param_2,int *param_3,int param_4,int *param_5,
                            uint *param_6,int param_7,uint param_8,uint param_9,int param_10,
                            long param_11)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
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
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  short sVar50;
  short sVar51;
  undefined8 uVar48;
  short sVar52;
  undefined auVar49 [16];
  short sVar55;
  short sVar56;
  undefined8 uVar53;
  short sVar57;
  undefined auVar54 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  
  psVar15 = *(short **)(param_1 + 0x18);
  if (((int)psVar15[(int)param_8] - (int)(psVar15 + (int)param_8)[-1]) * param_10 < 9) {
    return 0;
  }
  if ((int)param_8 < 1) {
    uVar12 = 0;
    iVar13 = 0;
    if (param_7 == 0) goto LAB_00e728e0;
    iVar28 = *param_5 >> 1;
    *param_5 = iVar28;
    uVar14 = *param_6;
joined_r0x00e72894:
    if (uVar14 != 0) goto LAB_00e72898;
LAB_00e728c4:
    iVar28 = iVar28 + -4;
  }
  else {
    uVar16 = 0;
    uVar12 = 0;
    iVar13 = 0;
    uVar6 = *(int *)(param_1 + 0x28) * param_10;
    uVar14 = 0;
    uVar4 = param_9;
    if ((int)param_9 < 2) {
      uVar4 = 1;
    }
    do {
      uVar17 = 0;
      sVar5 = *psVar15;
      do {
        uVar2 = uVar17 + 1;
        iVar28 = (int)sVar5;
        sVar5 = psVar15[uVar2];
        uVar7 = (sVar5 - iVar28) * param_10;
        uVar18 = (ulong)uVar7;
        if (8 < (int)uVar7) {
          iVar8 = (int)(short)uVar7;
          uVar20 = uVar18 & 0xfffffff8;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          lVar23 = (long)(iVar28 * param_10) * 2;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          iVar45 = 0;
          iVar46 = 0;
          iVar47 = 0;
          uVar22 = uVar20;
          lVar21 = lVar23;
          do {
            puVar3 = (undefined8 *)(param_2 + lVar21);
            lVar21 = lVar21 + 0x10;
            uVar22 = uVar22 - 8;
            uVar48 = *puVar3;
            uVar53 = puVar3[1];
            sVar50 = (short)((ulong)uVar48 >> 0x10);
            sVar51 = (short)((ulong)uVar48 >> 0x20);
            sVar52 = (short)((ulong)uVar48 >> 0x30);
            sVar55 = (short)((ulong)uVar53 >> 0x10);
            sVar56 = (short)((ulong)uVar53 >> 0x20);
            sVar57 = (short)((ulong)uVar53 >> 0x30);
            auVar49._0_4_ = ((int)(short)uVar48 * (int)(short)uVar48 * 2 >> 0x10) * iVar8;
            auVar49._4_4_ = ((int)sVar50 * (int)sVar50 * 2 >> 0x10) * iVar8;
            auVar49._8_4_ = ((int)sVar51 * (int)sVar51 * 2 >> 0x10) * iVar8;
            auVar49._12_4_ = ((int)sVar52 * (int)sVar52 * 2 >> 0x10) * iVar8;
            auVar54._0_4_ = ((int)(short)uVar53 * (int)(short)uVar53 * 2 >> 0x10) * iVar8;
            auVar54._4_4_ = ((int)sVar55 * (int)sVar55 * 2 >> 0x10) * iVar8;
            auVar54._8_4_ = ((int)sVar56 * (int)sVar56 * 2 >> 0x10) * iVar8;
            auVar54._12_4_ = ((int)sVar57 * (int)sVar57 * 2 >> 0x10) * iVar8;
            auVar58._8_4_ = 0x800;
            auVar58._0_8_ = 0x80000000800;
            auVar58._12_4_ = 0x800;
            auVar58 = NEON_cmgt(auVar58,auVar49,4);
            auVar60._8_4_ = 0x800;
            auVar60._0_8_ = 0x80000000800;
            auVar60._12_4_ = 0x800;
            auVar60 = NEON_cmgt(auVar60,auVar54,4);
            iVar40 = iVar40 - auVar58._0_4_;
            iVar41 = iVar41 - auVar58._4_4_;
            iVar42 = iVar42 - auVar58._8_4_;
            iVar43 = iVar43 - auVar58._12_4_;
            auVar59._8_4_ = 0x200;
            auVar59._0_8_ = 0x20000000200;
            auVar59._12_4_ = 0x200;
            auVar59 = NEON_cmgt(auVar59,auVar49,4);
            iVar44 = iVar44 - auVar60._0_4_;
            iVar45 = iVar45 - auVar60._4_4_;
            iVar46 = iVar46 - auVar60._8_4_;
            iVar47 = iVar47 - auVar60._12_4_;
            auVar61._8_4_ = 0x200;
            auVar61._0_8_ = 0x20000000200;
            auVar61._12_4_ = 0x200;
            auVar61 = NEON_cmgt(auVar61,auVar54,4);
            auVar9._8_4_ = 0x80;
            auVar9._0_8_ = 0x8000000080;
            auVar9._12_4_ = 0x80;
            auVar58 = NEON_cmgt(auVar9,auVar49,4);
            auVar10._8_4_ = 0x80;
            auVar10._0_8_ = 0x8000000080;
            auVar10._12_4_ = 0x80;
            auVar60 = NEON_cmgt(auVar10,auVar54,4);
            iVar32 = iVar32 - auVar59._0_4_;
            iVar33 = iVar33 - auVar59._4_4_;
            iVar34 = iVar34 - auVar59._8_4_;
            iVar35 = iVar35 - auVar59._12_4_;
            iVar36 = iVar36 - auVar61._0_4_;
            iVar37 = iVar37 - auVar61._4_4_;
            iVar38 = iVar38 - auVar61._8_4_;
            iVar39 = iVar39 - auVar61._12_4_;
            iVar24 = iVar24 - auVar58._0_4_;
            iVar25 = iVar25 - auVar58._4_4_;
            iVar26 = iVar26 - auVar58._8_4_;
            iVar27 = iVar27 - auVar58._12_4_;
            iVar28 = iVar28 - auVar60._0_4_;
            iVar29 = iVar29 - auVar60._4_4_;
            iVar30 = iVar30 - auVar60._8_4_;
            iVar31 = iVar31 - auVar60._12_4_;
          } while (uVar22 != 0);
          iVar40 = iVar44 + iVar40 + iVar45 + iVar41 + iVar46 + iVar42 + iVar47 + iVar43;
          iVar32 = iVar36 + iVar32 + iVar37 + iVar33 + iVar38 + iVar34 + iVar39 + iVar35;
          iVar28 = iVar28 + iVar24 + iVar29 + iVar25 + iVar30 + iVar26 + iVar31 + iVar27;
          if (uVar20 != uVar18) {
            lVar21 = uVar18 - uVar20;
            lVar23 = (uVar18 & 0xfffffff8) * 2 + lVar23;
            do {
              psVar1 = (short *)(param_2 + lVar23);
              lVar23 = lVar23 + 2;
              iVar24 = ((int)*psVar1 * (int)*psVar1 * 2 >> 0x10) * iVar8;
              if (iVar24 < 0x800) {
                iVar40 = iVar40 + 1;
              }
              if (iVar24 < 0x200) {
                iVar32 = iVar32 + 1;
              }
              if (iVar24 < 0x80) {
                iVar28 = iVar28 + 1;
              }
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
          uVar19 = 0;
          if (uVar7 != 0) {
            uVar19 = (uint)((iVar32 + iVar40) * 0x20) / uVar7;
          }
          iVar8 = *(int *)(param_11 + uVar17 * 4);
          uVar12 = iVar8 + uVar12;
          if ((long)*(int *)(param_1 + 8) + -4 < (long)uVar17) {
            uVar14 = uVar19 + uVar14;
          }
          uVar19 = (uint)(uVar7 == iVar32 * 2 ||
                         (int)(uVar7 + iVar32 * -2) < 0 != SBORROW4(uVar7,iVar32 * 2));
          if (uVar7 == iVar40 * 2 || (int)(uVar7 + iVar40 * -2) < 0 != SBORROW4(uVar7,iVar40 * 2)) {
            uVar19 = uVar19 + 1;
          }
          iVar24 = uVar7 + iVar28 * -2;
          if (iVar24 == 0 || iVar24 < 0 != SBORROW4(uVar7,iVar28 * 2)) {
            uVar19 = uVar19 + 1;
          }
          iVar13 = iVar13 + iVar8 * uVar19;
        }
        uVar17 = uVar2;
      } while (uVar2 != param_8);
      uVar16 = uVar16 + 1;
      param_2 = param_2 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1);
    } while (uVar16 != uVar4);
    if (param_7 == 0) goto LAB_00e728e0;
    if (uVar14 == 0) {
      iVar28 = *param_5 >> 1;
      *param_5 = iVar28;
      uVar14 = *param_6;
      goto joined_r0x00e72894;
    }
    param_9 = ((param_8 - *(int *)(param_1 + 8)) + 4) * param_9;
    uVar4 = 0;
    if (param_9 != 0) {
      uVar4 = uVar14 / param_9;
    }
    iVar28 = (int)(*param_5 + uVar4) >> 1;
    *param_5 = iVar28;
    uVar14 = *param_6;
    if (uVar14 == 0) goto LAB_00e728c4;
LAB_00e72898:
    if (uVar14 == 2) {
      iVar28 = iVar28 + 4;
    }
  }
  uVar14 = 2;
  if (iVar28 < 0x17) {
    uVar14 = (uint)(0x12 < iVar28);
  }
  *param_6 = uVar14;
LAB_00e728e0:
  uVar14 = 0;
  if (uVar12 != 0) {
    uVar14 = (uint)(iVar13 << 8) / uVar12;
  }
  iVar13 = (int)(*param_3 + uVar14) >> 1;
  uVar12 = (*param_3 + uVar14 & 0xfffffffe) + iVar13 + param_4 * -0x80 + 0x1c0;
  *param_3 = iVar13;
  if ((int)uVar12 < 0x13e) {
    uVar11 = 3;
  }
  else if (uVar12 < 0x3fe) {
    uVar11 = 2;
  }
  else {
    uVar11 = uVar12 < 0x5fe;
  }
  return uVar11;
}


