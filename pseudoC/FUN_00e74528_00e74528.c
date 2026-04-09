// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e74528
// Entry Point: 00e74528
// Size: 2364 bytes
// Signature: undefined FUN_00e74528(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11)


uint FUN_00e74528(int *param_1,undefined (*param_2) [16],undefined (*param_3) [16],uint param_4,
                 uint param_5,uint param_6,undefined8 param_7,undefined4 param_8,undefined2 *param_9
                 ,undefined8 param_10,int param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  undefined2 uVar16;
  long lVar17;
  ulong uVar18;
  short *psVar19;
  ulong uVar20;
  ulong uVar21;
  short *psVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
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
  int iVar48;
  undefined auVar49 [16];
  short sVar51;
  undefined auVar50 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  short sVar54;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined4 uVar62;
  undefined4 *puVar63;
  int local_88;
  uint local_84;
  uint uStack_80;
  int local_7c;
  uint local_78;
  int iStack_74;
  uint local_6c;
  long local_68;
  
  iVar34 = param_11;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar33 = *param_1;
  uVar23 = *(undefined8 *)(param_1 + 8);
  local_6c = param_5;
  if (param_4 == 1) {
    if (param_1[10] < 8) {
      if (param_1[1] != 0) {
        *(undefined2 *)*param_2 = 0x4000;
        uVar16 = 0x4000;
        if (param_3 != (undefined (*) [16])0x0) goto LAB_00e74c50;
      }
    }
    else {
      if (iVar33 == 0) {
        uVar13 = ec_dec_bits(uVar23,1);
        iVar34 = param_1[10];
        iVar35 = param_1[1];
        param_1[10] = iVar34 + -8;
      }
      else {
        uVar9 = *(ushort *)*param_2 >> 0xf;
        uVar13 = (uint)uVar9;
        ec_enc_bits(uVar23,uVar9,1);
        iVar34 = param_1[10];
        iVar35 = param_1[1];
        param_1[10] = iVar34 + -8;
      }
      if (iVar35 != 0) {
        uVar16 = 0xc000;
        if (uVar13 == 0) {
          uVar16 = 0x4000;
        }
        *(undefined2 *)*param_2 = uVar16;
      }
      if (param_3 != (undefined (*) [16])0x0) {
        if (iVar34 < 0x10) {
          uVar13 = 0;
        }
        else {
          if (iVar33 == 0) {
            uVar13 = ec_dec_bits(uVar23,1);
          }
          else {
            uVar9 = *(ushort *)*param_3 >> 0xf;
            uVar13 = (uint)uVar9;
            ec_enc_bits(uVar23,uVar9,1);
          }
          iVar35 = param_1[1];
          param_1[10] = param_1[10] + -8;
        }
        if (iVar35 != 0) {
          uVar16 = 0xc000;
          if (uVar13 == 0) {
            uVar16 = 0x4000;
          }
LAB_00e74c50:
          *(undefined2 *)*param_3 = uVar16;
        }
      }
    }
    if (param_9 == (undefined2 *)0x0) {
      uVar13 = 1;
    }
    else {
      uVar13 = 1;
      *param_9 = (short)((ulong)(long)*(short *)*param_2 >> 4);
    }
    goto LAB_00e74e2c;
  }
  uVar20 = (ulong)param_4;
  puVar63 = &param_11;
  uVar62 = param_8;
  FUN_00e75978(param_1,&local_88,param_2,param_3,uVar20,&local_6c,param_6,param_6,param_8,1,puVar63)
  ;
  iVar35 = param_11;
  uVar16 = (undefined2)((uint)uVar62 >> 0x10);
  uVar62 = (undefined4)((ulong)puVar63 >> 0x20);
  sVar10 = (short)local_84;
  if (param_4 == 2) {
    iVar35 = 0;
    if ((local_78 & 0xffffbfff) != 0) {
      iVar35 = -8;
    }
    iVar36 = iVar35 + local_6c;
    pauVar14 = param_3;
    if ((int)local_78 < 0x2001) {
      pauVar14 = param_2;
    }
    pauVar15 = param_2;
    if ((int)local_78 < 0x2001) {
      pauVar15 = param_3;
    }
    param_1[10] = (iVar35 - iStack_74) + param_1[10];
    if ((local_78 & 0xffffbfff) == 0) {
      uVar9 = 0;
    }
    else if (iVar33 == 0) {
      uVar9 = ec_dec_bits(uVar23,1,uVar20,iVar36);
    }
    else {
      bVar7 = (int)*(short *)(*pauVar15 + 2) * (int)*(short *)*pauVar14 <
              (int)*(short *)*pauVar15 * (int)*(short *)(*pauVar14 + 2);
      uVar9 = (ushort)bVar7;
      ec_enc_bits(uVar23,bVar7,1);
    }
    sVar24 = (short)uStack_80;
    uVar13 = FUN_00e73d78(param_1,pauVar14,2,iVar36,param_6,param_7,param_8,param_9,
                          CONCAT22(uVar16,0x7fff),param_10,CONCAT44(uVar62,iVar34));
    sVar11 = uVar9 * -2 + 1;
    *(short *)*pauVar15 = -(*(short *)(*pauVar14 + 2) * sVar11);
    *(short *)(*pauVar15 + 2) = *(short *)*pauVar14 * sVar11;
    if (param_1[1] == 0) {
      iVar33 = param_1[1];
    }
    else {
      sVar11 = *(short *)(*param_2 + 2);
      *(short *)*param_2 = (short)((uint)((int)sVar10 * (int)*(short *)*param_2) >> 0xf);
      *(short *)(*param_2 + 2) = (short)((uint)((int)sVar10 * (int)sVar11) >> 0xf);
      sVar11 = *(short *)(*param_3 + 2);
      sVar25 = (short)((uint)((int)sVar24 * (int)*(short *)*param_3) >> 0xf);
      *(short *)*param_3 = sVar25;
      *(short *)(*param_3 + 2) = (short)((uint)((int)sVar24 * (int)sVar11) >> 0xf);
      sVar11 = *(short *)*param_2;
      *(short *)*param_2 = sVar11 - sVar25;
      sVar24 = *(short *)(*param_3 + 2);
      *(short *)*param_3 = *(short *)*param_3 + sVar11;
      sVar11 = *(short *)(*param_2 + 2);
      *(short *)(*param_2 + 2) = sVar11 - sVar24;
      *(short *)(*param_3 + 2) = *(short *)(*param_3 + 2) + sVar11;
      iVar33 = param_1[1];
    }
  }
  else {
    local_7c = local_6c - local_7c;
    iVar33 = param_1[10] - iStack_74;
    if (local_7c < 0) {
      local_7c = local_7c + 1;
    }
    param_1[10] = iVar33;
    uVar13 = local_6c;
    if (local_7c >> 1 <= (int)local_6c) {
      uVar13 = local_7c >> 1;
    }
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    iVar34 = local_6c - uVar13;
    if ((int)uVar13 < iVar34) {
      uVar12 = FUN_00e73d78(param_1,param_3,uVar20,iVar34,param_6,0,param_8,0,
                            CONCAT22(uVar16,(short)uStack_80),0,
                            CONCAT44(uVar62,param_11 >> (param_6 & 0x1f)));
      bVar8 = local_78 != 0x4000;
      iVar34 = (param_1[10] - iVar33) + iVar34;
      bVar7 = false;
      if (bVar8) {
        bVar7 = iVar34 + -0x18 < 0;
      }
      iVar33 = iVar34 + -0x18;
      if ((!bVar8 || iVar34 == 0x18) || bVar7 != (bVar8 && SBORROW4(iVar34,0x18))) {
        iVar33 = 0;
      }
      uVar13 = FUN_00e73d78(param_1,param_2,uVar20,iVar33 + uVar13,param_6,param_7,param_8,param_9,
                            0x7fff,param_10,iVar35);
    }
    else {
      uVar12 = FUN_00e73d78(param_1,param_2,uVar20,uVar13,param_6,param_7,param_8,param_9,
                            CONCAT22(uVar16,0x7fff),param_10,CONCAT44(uVar62,param_11),uStack_80);
      bVar8 = local_78 != 0;
      iVar33 = (param_1[10] - iVar33) + uVar13;
      bVar7 = false;
      if (bVar8) {
        bVar7 = iVar33 + -0x18 < 0;
      }
      iVar36 = iVar33 + -0x18;
      if ((!bVar8 || iVar33 == 0x18) || bVar7 != (bVar8 && SBORROW4(iVar33,0x18))) {
        iVar36 = 0;
      }
      uVar13 = FUN_00e73d78(param_1,param_3,uVar20,iVar36 + iVar34,param_6,0,param_8,0,
                            uStack_80 & 0xffff,0,iVar35 >> (param_6 & 0x1f));
    }
    uVar13 = uVar13 | uVar12;
    iVar33 = param_1[1];
  }
  if (iVar33 == 0) goto LAB_00e74e2c;
  if (param_4 != 2) {
    if ((int)param_4 < 1) {
      lVar17 = 0;
      iVar33 = 0;
    }
    else {
      if (param_4 < 0x10) {
        uVar18 = 0;
        iVar33 = 0;
        iVar41 = 0;
LAB_00e74ad0:
        lVar17 = uVar20 - uVar18;
        psVar19 = (short *)(*param_2 + uVar18 * 2);
        psVar22 = (short *)(*param_3 + uVar18 * 2);
        do {
          sVar11 = *psVar22;
          lVar17 = lVar17 + -1;
          iVar33 = iVar33 + (int)sVar11 * (int)sVar11;
          iVar41 = iVar41 + (int)*psVar19 * (int)sVar11;
          psVar19 = psVar19 + 1;
          psVar22 = psVar22 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar18 = uVar20 & 0xfffffff0;
        pauVar14 = param_3 + 1;
        pauVar15 = param_2 + 1;
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
        iVar48 = 0;
        uVar21 = uVar18;
        auVar31 = ZEXT816(0);
        auVar32 = ZEXT816(0);
        auVar49 = ZEXT816(0);
        auVar50 = ZEXT816(0);
        do {
          auVar52 = pauVar14[-1];
          auVar53 = *pauVar14;
          pauVar14 = pauVar14 + 2;
          uVar21 = uVar21 - 0x10;
          auVar55 = NEON_ext(auVar52,auVar52,8,1);
          sVar11 = auVar52._0_2_;
          sVar24 = auVar52._2_2_;
          sVar25 = auVar52._4_2_;
          sVar26 = auVar52._6_2_;
          auVar30._0_4_ = auVar31._0_4_ + (int)sVar11 * (int)sVar11;
          auVar30._4_4_ = auVar31._4_4_ + (int)sVar24 * (int)sVar24;
          auVar30._8_4_ = auVar31._8_4_ + (int)sVar25 * (int)sVar25;
          auVar30._12_4_ = auVar31._12_4_ + (int)sVar26 * (int)sVar26;
          auVar31 = pauVar15[-1];
          auVar52 = *pauVar15;
          auVar60 = NEON_ext(auVar53,auVar53,8,1);
          pauVar15 = pauVar15 + 2;
          sVar54 = auVar55._0_2_;
          sVar57 = auVar55._2_2_;
          sVar58 = auVar55._4_2_;
          sVar59 = auVar55._6_2_;
          auVar55._0_4_ = auVar32._0_4_ + (int)sVar54 * (int)sVar54;
          auVar55._4_4_ = auVar32._4_4_ + (int)sVar57 * (int)sVar57;
          auVar55._8_4_ = auVar32._8_4_ + (int)sVar58 * (int)sVar58;
          auVar55._12_4_ = auVar32._12_4_ + (int)sVar59 * (int)sVar59;
          sVar27 = auVar53._0_2_;
          sVar28 = auVar53._2_2_;
          sVar29 = auVar53._4_2_;
          sVar51 = auVar53._6_2_;
          iVar33 = iVar33 + (int)sVar27 * (int)sVar27;
          iVar34 = iVar34 + (int)sVar28 * (int)sVar28;
          iVar35 = iVar35 + (int)sVar29 * (int)sVar29;
          iVar36 = iVar36 + (int)sVar51 * (int)sVar51;
          auVar32 = NEON_ext(auVar31,auVar31,8,1);
          auVar53._0_4_ = auVar49._0_4_ + (int)auVar31._0_2_ * (int)sVar11;
          auVar53._4_4_ = auVar49._4_4_ + (int)auVar31._2_2_ * (int)sVar24;
          auVar53._8_4_ = auVar49._8_4_ + (int)auVar31._4_2_ * (int)sVar25;
          auVar53._12_4_ = auVar49._12_4_ + (int)auVar31._6_2_ * (int)sVar26;
          auVar31 = NEON_ext(auVar52,auVar52,8,1);
          iVar41 = iVar41 + (int)auVar52._0_2_ * (int)sVar27;
          iVar42 = iVar42 + (int)auVar52._2_2_ * (int)sVar28;
          iVar43 = iVar43 + (int)auVar52._4_2_ * (int)sVar29;
          iVar44 = iVar44 + (int)auVar52._6_2_ * (int)sVar51;
          auVar52._0_4_ = auVar50._0_4_ + (int)auVar32._0_2_ * (int)sVar54;
          auVar52._4_4_ = auVar50._4_4_ + (int)auVar32._2_2_ * (int)sVar57;
          auVar52._8_4_ = auVar50._8_4_ + (int)auVar32._4_2_ * (int)sVar58;
          auVar52._12_4_ = auVar50._12_4_ + (int)auVar32._6_2_ * (int)sVar59;
          sVar11 = auVar60._0_2_;
          sVar24 = auVar60._2_2_;
          sVar25 = auVar60._4_2_;
          sVar26 = auVar60._6_2_;
          iVar37 = iVar37 + (int)sVar11 * (int)sVar11;
          iVar38 = iVar38 + (int)sVar24 * (int)sVar24;
          iVar39 = iVar39 + (int)sVar25 * (int)sVar25;
          iVar40 = iVar40 + (int)sVar26 * (int)sVar26;
          iVar45 = iVar45 + (int)auVar31._0_2_ * (int)sVar11;
          iVar46 = iVar46 + (int)auVar31._2_2_ * (int)sVar24;
          iVar47 = iVar47 + (int)auVar31._4_2_ * (int)sVar25;
          iVar48 = iVar48 + (int)auVar31._6_2_ * (int)sVar26;
          auVar31 = auVar30;
          auVar32 = auVar55;
          auVar49 = auVar53;
          auVar50 = auVar52;
        } while (uVar21 != 0);
        iVar41 = iVar41 + auVar53._0_4_ + iVar45 + auVar52._0_4_ +
                 iVar42 + auVar53._4_4_ + iVar46 + auVar52._4_4_ +
                 iVar43 + auVar53._8_4_ + iVar47 + auVar52._8_4_ +
                 iVar44 + auVar53._12_4_ + iVar48 + auVar52._12_4_;
        iVar33 = iVar33 + auVar30._0_4_ + iVar37 + auVar55._0_4_ +
                 iVar34 + auVar30._4_4_ + iVar38 + auVar55._4_4_ +
                 iVar35 + auVar30._8_4_ + iVar39 + auVar55._8_4_ +
                 iVar36 + auVar30._12_4_ + iVar40 + auVar55._12_4_;
        if (uVar18 != uVar20) goto LAB_00e74ad0;
      }
      lVar17 = (long)iVar41;
    }
    iVar34 = (int)(local_84 << 0x10) >> 0x11;
    iVar33 = iVar33 + iVar34 * iVar34;
    uVar1 = (uint)((ulong)(lVar17 * sVar10) >> 0xe) & 0xfffffffe;
    uVar12 = uVar1 + iVar33;
    uVar1 = iVar33 - uVar1;
    bVar7 = true;
    if (0x27524 < (int)uVar12) {
      bVar7 = (int)(uVar1 - 0x27525) < 0;
    }
    if (bVar7 == (0x27524 < (int)uVar12 && SBORROW4(uVar1,0x27525))) {
      uVar4 = 0x1f - (uint)LZCOUNT(uVar1);
      uVar2 = uVar4 & 0xfffffffe;
      uVar5 = 0x1f - (uint)LZCOUNT(uVar12);
      uVar4 = (int)uVar4 >> 1;
      uVar3 = uVar1 >> (ulong)(uVar2 - 0xe & 0x1f);
      if (0xf < (uint)LZCOUNT(uVar1)) {
        uVar3 = uVar1 << (ulong)(0xe - uVar2 & 0x1f);
      }
      uVar1 = (int)uVar5 >> 1;
      sVar10 = celt_rsqrt_norm(uVar3);
      uVar5 = uVar5 & 0xfffffffe;
      uVar2 = uVar12 >> (ulong)(uVar5 - 0xe & 0x1f);
      if (0xf < (uint)LZCOUNT(uVar12)) {
        uVar2 = uVar12 << (ulong)(0xe - uVar5 & 0x1f);
      }
      sVar11 = celt_rsqrt_norm(uVar2);
      if ((int)uVar4 < 8) {
        uVar4 = 7;
      }
      if ((int)uVar1 < 8) {
        uVar1 = 7;
      }
      if ((int)param_4 < 1) goto LAB_00e74e2c;
      uVar12 = uVar1 + 1;
      iVar33 = (int)sVar10;
      iVar34 = (int)sVar11;
      uVar3 = -(local_84 >> 0xf & 1) & 0xfffe0000 | (local_84 & 0xffff) << 1;
      uVar2 = uVar4 + 1;
      uVar5 = (uint)(2 << (ulong)(uVar4 & 0x1f)) >> 1;
      uVar1 = (uint)(2 << (ulong)(uVar1 & 0x1f)) >> 1;
      if (param_4 < 8) {
        uVar18 = 0;
      }
      else if ((param_2 < (undefined (*) [16])(*param_3 + uVar20 * 2)) &&
              (param_3 < (undefined (*) [16])(*param_2 + uVar20 * 2))) {
        uVar18 = 0;
      }
      else {
        auVar31._4_4_ = uVar2;
        auVar31._0_4_ = uVar2;
        auVar31._8_4_ = uVar2;
        auVar31._12_4_ = uVar2;
        auVar32._4_4_ = uVar12;
        auVar32._0_4_ = uVar12;
        auVar32._8_4_ = uVar12;
        auVar32._12_4_ = uVar12;
        uVar18 = uVar20 & 0xfffffff8;
        auVar31 = NEON_neg(auVar31,4);
        auVar32 = NEON_neg(auVar32,4);
        pauVar14 = param_3;
        pauVar15 = param_2;
        uVar21 = uVar18;
        do {
          auVar49 = *pauVar15;
          uVar21 = uVar21 - 8;
          sVar10 = (short)(uVar3 * (int)auVar49._0_2_ + 0x8000 >> 0x10);
          sVar24 = (short)(uVar3 * (int)auVar49._2_2_ + 0x8000 >> 0x10);
          sVar26 = (short)(uVar3 * (int)auVar49._4_2_ + 0x8000 >> 0x10);
          sVar28 = (short)(uVar3 * (int)auVar49._6_2_ + 0x8000 >> 0x10);
          sVar11 = (short)(uVar3 * (int)auVar49._8_2_ + 0x8000 >> 0x10);
          sVar25 = (short)(uVar3 * (int)auVar49._10_2_ + 0x8000 >> 0x10);
          sVar27 = (short)(uVar3 * (int)auVar49._12_2_ + 0x8000 >> 0x10);
          sVar29 = (short)(uVar3 * (int)auVar49._14_2_ + 0x8000 >> 0x10);
          auVar49 = *pauVar14;
          auVar56._0_4_ = uVar5 + iVar33 * (short)(sVar11 - auVar49._8_2_);
          auVar56._4_4_ = uVar5 + iVar33 * (short)(sVar25 - auVar49._10_2_);
          auVar56._8_4_ = uVar5 + iVar33 * (short)(sVar27 - auVar49._12_2_);
          auVar56._12_4_ = uVar5 + iVar33 * (short)(sVar29 - auVar49._14_2_);
          auVar50._0_4_ = uVar5 + iVar33 * (short)(sVar10 - auVar49._0_2_);
          auVar50._4_4_ = uVar5 + iVar33 * (short)(sVar24 - auVar49._2_2_);
          auVar50._8_4_ = uVar5 + iVar33 * (short)(sVar26 - auVar49._4_2_);
          auVar50._12_4_ = uVar5 + iVar33 * (short)(sVar28 - auVar49._6_2_);
          auVar61._0_4_ = uVar1 + iVar34 * (short)(auVar49._8_2_ + sVar11);
          auVar61._4_4_ = uVar1 + iVar34 * (short)(auVar49._10_2_ + sVar25);
          auVar61._8_4_ = uVar1 + iVar34 * (short)(auVar49._12_2_ + sVar27);
          auVar61._12_4_ = uVar1 + iVar34 * (short)(auVar49._14_2_ + sVar29);
          auVar60._0_4_ = uVar1 + iVar34 * (short)(auVar49._0_2_ + sVar10);
          auVar60._4_4_ = uVar1 + iVar34 * (short)(auVar49._2_2_ + sVar24);
          auVar60._8_4_ = uVar1 + iVar34 * (short)(auVar49._4_2_ + sVar26);
          auVar60._12_4_ = uVar1 + iVar34 * (short)(auVar49._6_2_ + sVar28);
          auVar49 = NEON_sshl(auVar56,auVar31,4);
          auVar50 = NEON_sshl(auVar50,auVar31,4);
          auVar52 = NEON_sshl(auVar61,auVar32,4);
          auVar53 = NEON_sshl(auVar60,auVar32,4);
          *(short *)pauVar15[1] = auVar49._0_2_;
          *(short *)(pauVar15[1] + 2) = auVar49._4_2_;
          *(short *)(pauVar15[1] + 4) = auVar49._8_2_;
          *(short *)(pauVar15[1] + 6) = auVar49._12_2_;
          *(short *)*pauVar15 = auVar50._0_2_;
          *(short *)(*pauVar15 + 2) = auVar50._4_2_;
          *(short *)(*pauVar15 + 4) = auVar50._8_2_;
          *(short *)(*pauVar15 + 6) = auVar50._12_2_;
          *(short *)pauVar14[1] = auVar52._0_2_;
          *(short *)(pauVar14[1] + 2) = auVar52._4_2_;
          *(short *)(pauVar14[1] + 4) = auVar52._8_2_;
          *(short *)(pauVar14[1] + 6) = auVar52._12_2_;
          *(short *)*pauVar14 = auVar53._0_2_;
          *(short *)(*pauVar14 + 2) = auVar53._4_2_;
          *(short *)(*pauVar14 + 4) = auVar53._8_2_;
          *(short *)(*pauVar14 + 6) = auVar53._12_2_;
          pauVar14 = pauVar14 + 1;
          pauVar15 = pauVar15 + 1;
        } while (uVar21 != 0);
        if (uVar18 == uVar20) goto LAB_00e74dbc;
      }
      lVar17 = uVar20 - uVar18;
      psVar19 = (short *)(*param_3 + uVar18 * 2);
      psVar22 = (short *)(*param_2 + uVar18 * 2);
      do {
        lVar17 = lVar17 + -1;
        sVar10 = *psVar19;
        sVar11 = (short)(uVar3 * (int)*psVar22 + 0x8000 >> 0x10);
        *psVar22 = (short)((int)((short)(sVar11 - sVar10) * iVar33 + uVar5) >> (uVar2 & 0x1f));
        *psVar19 = (short)((int)((short)(sVar10 + sVar11) * iVar34 + uVar1) >> (uVar12 & 0x1f));
        psVar19 = psVar19 + 1;
        psVar22 = psVar22 + 1;
      } while (lVar17 != 0);
    }
    else {
      memcpy(param_3,param_2,-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1);
    }
  }
LAB_00e74dbc:
  if ((local_88 != 0) && (0 < (int)param_4)) {
    if (param_4 < 0x10) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar20 & 0xfffffff0;
      pauVar14 = param_3 + 1;
      uVar21 = uVar18;
      do {
        uVar21 = uVar21 - 0x10;
        auVar31 = NEON_neg(pauVar14[-1],2);
        auVar32 = NEON_neg(*pauVar14,2);
        *(long *)(pauVar14[-1] + 8) = auVar31._8_8_;
        *(long *)pauVar14[-1] = auVar31._0_8_;
        *(long *)(*pauVar14 + 8) = auVar32._8_8_;
        *(long *)*pauVar14 = auVar32._0_8_;
        pauVar14 = pauVar14 + 2;
      } while (uVar21 != 0);
      if (uVar18 == uVar20) goto LAB_00e74e2c;
    }
    lVar17 = uVar20 - uVar18;
    psVar19 = (short *)(*param_3 + uVar18 * 2);
    do {
      lVar17 = lVar17 + -1;
      *psVar19 = -*psVar19;
      psVar19 = psVar19 + 1;
    } while (lVar17 != 0);
  }
LAB_00e74e2c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


