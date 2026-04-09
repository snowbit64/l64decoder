// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcSplittingAxis
// Entry Point: 00f5b65c
// Size: 2672 bytes
// Signature: undefined __thiscall calcSplittingAxis(btQuantizedBvh * this, int param_1, int param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* btQuantizedBvh::calcSplittingAxis(int, int) */

undefined __thiscall btQuantizedBvh::calcSplittingAxis(btQuantizedBvh *this,int param_1,int param_2)

{
  float *pfVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined (*pauVar7) [12];
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  undefined uVar29;
  int iVar30;
  undefined (*pauVar31) [12];
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  undefined (*pauVar36) [12];
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined8 uVar43;
  undefined auVar44 [16];
  undefined8 uVar45;
  undefined auVar46 [12];
  undefined auVar47 [12];
  unkbyte10 Var48;
  undefined *puVar49;
  undefined (*pauVar50) [12];
  undefined (*pauVar51) [12];
  undefined (*pauVar52) [12];
  undefined (*pauVar53) [12];
  undefined (*pauVar54) [12];
  float *pfVar55;
  float *pfVar56;
  float *pfVar57;
  float *pfVar58;
  long lVar59;
  ushort *puVar60;
  float *pfVar61;
  long lVar62;
  long lVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  unkbyte10 *pVar67;
  ulong uVar68;
  long lVar69;
  undefined8 *puVar70;
  float *pfVar71;
  float *pfVar72;
  float *pfVar73;
  float *pfVar74;
  float *pfVar75;
  float *pfVar76;
  long lVar77;
  float *pfVar78;
  float *pfVar79;
  float *pfVar80;
  undefined (*pauVar81) [12];
  float *pfVar82;
  float *pfVar83;
  float *pfVar84;
  float *pfVar85;
  float *pfVar86;
  ushort uVar87;
  ushort uVar88;
  undefined2 uVar89;
  undefined2 uVar90;
  undefined2 uVar91;
  undefined2 uVar92;
  undefined2 uVar93;
  undefined4 uVar94;
  float fVar95;
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined4 uVar98;
  float fVar99;
  undefined8 uVar100;
  undefined auVar102 [16];
  undefined8 uVar101;
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined4 uVar109;
  float fVar110;
  undefined auVar111 [16];
  float fVar112;
  undefined8 uVar113;
  undefined auVar114 [16];
  float fVar115;
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  float fVar126;
  float fVar128;
  float fVar129;
  undefined auVar127 [16];
  float fVar130;
  float fVar131;
  undefined auVar132 [16];
  undefined auVar133 [16];
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined2 uVar139;
  float fVar140;
  float fVar141;
  undefined auVar142 [16];
  float fVar143;
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  float fVar150;
  float fVar151;
  float fVar157;
  float fVar158;
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  float fVar159;
  undefined4 uVar160;
  undefined8 uVar161;
  undefined4 uVar162;
  float fVar163;
  float fVar167;
  float fVar168;
  undefined auVar164 [16];
  undefined auVar165 [16];
  float fVar169;
  undefined auVar166 [16];
  undefined auVar171 [16];
  undefined auVar172 [16];
  undefined auVar173 [16];
  undefined auVar174 [16];
  float fVar175;
  undefined8 uVar176;
  float fVar177;
  undefined4 uVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar200;
  undefined8 uVar201;
  undefined auVar202 [16];
  float fVar203;
  float fVar204;
  float fVar205;
  float fVar206;
  undefined in_q31 [16];
  undefined auVar207 [16];
  undefined auVar208 [16];
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_88;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_58;
  float fVar170;
  
  iVar30 = param_2 - param_1;
  if (iVar30 == 0 || param_2 < param_1) {
    auVar114 = ZEXT816(0);
    auVar104 = ZEXT816(0);
    fVar112 = 0.0;
  }
  else {
    fVar187 = *(float *)(this + 0x28);
    fVar192 = *(float *)(this + 0x2c);
    fVar175 = *(float *)(this + 8);
    uVar178 = *(undefined4 *)(this + 0xc);
    lVar63 = *(long *)(this + 0x98);
    lVar59 = (long)param_1;
    fVar177 = *(float *)(this + 0x30);
    lVar62 = (long)param_2;
    fVar183 = *(float *)(this + 0x10);
    lVar66 = *(long *)(this + 0x58);
    fVar110 = (float)uStack_88;
    fVar131 = (float)((ulong)uStack_88 >> 0x20);
    fVar95 = (float)uStack_58;
    fVar99 = (float)((ulong)uStack_58 >> 0x20);
    fVar143 = (float)uStack_78;
    fVar151 = (float)((ulong)uStack_78 >> 0x20);
    if (this[0x40] == (btQuantizedBvh)0x0) {
      uVar65 = lVar62 - lVar59;
      auVar107 = ZEXT816(0);
      puVar70 = (undefined8 *)(lVar66 + lVar59 * 0x40 + 0x14);
      uVar68 = uVar65;
      auVar114 = ZEXT816(0);
      do {
        pfVar61 = (float *)((long)puVar70 + -4);
        uVar68 = uVar68 - 1;
        uVar101 = *puVar70;
        pfVar4 = (float *)((long)puVar70 + -0x14);
        puVar37 = puVar70 + -2;
        puVar70 = puVar70 + 8;
        auVar107._0_4_ = (float)NEON_fmadd(*pfVar4 + *pfVar61,0x3f000000,auVar107._0_4_);
        auVar111._0_4_ =
             auVar114._0_4_ +
             SUB164(ZEXT816(0x3f0000003f000000),0) * ((float)*puVar37 + (float)uVar101);
        auVar111._4_4_ =
             auVar114._4_4_ +
             SUB164(ZEXT816(0x3f0000003f000000),4) *
             ((float)((ulong)*puVar37 >> 0x20) + (float)((ulong)uVar101 >> 0x20));
        auVar111._8_8_ = 0;
        auVar114 = auVar111;
      } while (uVar68 != 0);
      auVar103 = ZEXT416((uint)auVar111._4_4_);
    }
    else {
      uVar68 = 0;
      auVar111 = ZEXT816(0);
      uVar64 = 0;
      uVar65 = lVar62 - lVar59;
      lVar77 = lVar59;
      if (8 < uVar65) {
        auVar114 = NEON_fmov(0x3f800000,4);
        fVar112 = auVar114._0_4_;
        fVar115 = fVar112 / fVar187;
        uVar68 = 8;
        if ((uVar65 & 7) != 0) {
          uVar68 = uVar65 & 7;
        }
        lVar77 = (uVar68 + lVar59) - lVar62;
        fVar179 = 0.0;
        fVar180 = 0.0;
        fVar181 = 0.0;
        fVar182 = 0.0;
        fVar188 = 0.0;
        fVar189 = 0.0;
        fVar190 = 0.0;
        fVar191 = 0.0;
        auVar138._0_4_ = fVar112 / fVar192;
        auVar138._4_4_ = auVar114._4_4_ / 0.0;
        auVar138._8_4_ = auVar114._8_4_ / 0.0;
        auVar138._12_4_ = auVar114._12_4_ / 0.0;
        fVar193 = 0.0;
        fVar195 = 0.0;
        fVar197 = 0.0;
        fVar199 = 0.0;
        pauVar81 = (undefined (*) [12])(lVar63 + lVar59 * 0x10 + 0x40);
        fVar112 = fVar112 / fVar177;
        auVar120._4_4_ = auVar138._0_4_;
        auVar120._0_4_ = auVar138._0_4_;
        auVar120._8_4_ = auVar138._0_4_;
        auVar120._12_4_ = auVar138._0_4_;
        uStack_b8 = auVar120._8_8_;
        auVar132 = auVar138;
        auVar114 = ZEXT816(0);
        auVar104 = ZEXT816(0);
        auVar107 = ZEXT816(0);
        do {
          puVar49 = *pauVar81;
          uVar101 = *(undefined8 *)*pauVar81;
          auVar47 = *pauVar81;
          auVar46 = *pauVar81;
          auVar103 = *(undefined (*) [16])(pauVar81[1] + 4);
          lVar77 = lVar77 + 8;
          pauVar50 = pauVar81 + -6;
          pauVar51 = pauVar81 + -5;
          uVar45 = *(undefined8 *)*(undefined (*) [12])(*pauVar50 + 8);
          pauVar31 = pauVar81 + -4;
          pauVar52 = pauVar81 + -4;
          uVar201 = *(undefined8 *)*pauVar31;
          uVar87 = (ushort)((ulong)uVar101 >> 0x10);
          auVar207._6_10_ = in_q31._6_10_;
          auVar207._4_2_ = (short)((ulong)uVar101 >> 0x30);
          auVar207._2_2_ = auVar103._2_2_;
          auVar207._0_2_ = uVar87;
          uVar100 = NEON_ext(CONCAT26(auVar103._6_2_,auVar207._0_6_),uVar101,4,1);
          auVar120 = *(undefined (*) [16])(pauVar81[2] + 8);
          auVar155 = *(undefined (*) [16])(pauVar81 + 4);
          uVar88 = (ushort)((ulong)uVar45 >> 0x10);
          auVar121._6_10_ = auVar132._6_10_;
          auVar121._4_2_ = (short)((ulong)uVar45 >> 0x30);
          uVar90 = (undefined2)((ulong)uVar201 >> 0x10);
          auVar121._2_2_ = uVar90;
          auVar121._0_2_ = uVar88;
          uVar43 = NEON_ext(CONCAT26((short)((ulong)uVar201 >> 0x30),auVar121._0_6_),uVar45,4,1);
          pauVar7 = (undefined (*) [12])(pauVar81[-3] + 4);
          pauVar36 = pauVar81 + -2;
          uVar38 = *(undefined8 *)*pauVar7;
          pauVar53 = pauVar81 + -2;
          pauVar54 = pauVar81 + -1;
          uVar39 = *(undefined8 *)*(undefined (*) [12])(*pauVar53 + 8);
          uVar139 = (undefined2)((ulong)uVar39 >> 0x30);
          uVar93 = auVar155._6_2_;
          auVar144._6_10_ = auVar111._6_10_;
          auVar144._4_2_ = auVar120._6_2_;
          auVar144._2_2_ = auVar155._2_2_;
          auVar144._0_2_ = auVar120._2_2_;
          pauVar81 = (undefined (*) [12])(pauVar81[10] + 8);
          uVar92 = (undefined2)((ulong)uVar38 >> 0x30);
          uVar89 = (undefined2)((ulong)uVar38 >> 0x10);
          uVar91 = (undefined2)((ulong)uVar39 >> 0x10);
          auVar153._6_2_ = 0;
          auVar153._0_6_ = CONCAT24((short)((ulong)uVar100 >> 0x10),(int)uVar100) & 0xffff0000ffff;
          auVar153._8_2_ = auVar120._6_2_;
          auVar153._10_2_ = 0;
          auVar153._12_2_ = uVar93;
          auVar153._14_2_ = 0;
          auVar102._12_4_ = (int)((ulong)*(undefined8 *)*pauVar36 >> 0x20);
          auVar102._0_12_ = *pauVar7;
          auVar116._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar54 + 4) >> 0x20);
          auVar116._0_12_ = *(undefined (*) [12])(*pauVar53 + 8);
          auVar142 = a64_TBL(ZEXT816(0),auVar102,auVar116,_DAT_004c42e0);
          auVar111 = a64_TBL(ZEXT816(0),auVar120,auVar155,_DAT_004c42e0);
          uVar100 = NEON_ext(uVar38,CONCAT26(uVar91,(int6)CONCAT44(CONCAT22(uVar93,uVar89),
                                                                   CONCAT22((short)uVar39,
                                                                            (short)uVar38))),4,1);
          uVar161 = NEON_ext(uVar38,CONCAT26(uVar139,CONCAT24(uVar92,CONCAT22(uVar91,uVar89))),4,1);
          auVar123._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar51 + 4) >> 0x20);
          auVar123._0_12_ = *(undefined (*) [12])(*pauVar50 + 8);
          auVar134._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar52 + 8) >> 0x20);
          auVar134._0_12_ = *pauVar31;
          auVar132 = a64_TBL(ZEXT816(0),auVar123,auVar134,_DAT_004c4160);
          auVar102 = NEON_ucvtf(auVar153,4);
          uVar176 = NEON_ext(auVar120._0_8_,
                             CONCAT26(auVar155._2_2_,
                                      CONCAT24(auVar120._2_2_,
                                               CONCAT22(auVar155._0_2_,auVar120._0_2_))),4,1);
          uVar113 = NEON_ext(auVar120._0_8_,CONCAT26(uVar93,auVar144._0_6_),4,1);
          auVar118._6_2_ = 0;
          auVar118._0_6_ = CONCAT24((short)((ulong)uVar43 >> 0x10),(int)uVar43) & 0xffff0000ffff;
          auVar118._8_2_ = uVar92;
          auVar118._10_2_ = 0;
          auVar118._12_2_ = uVar139;
          auVar118._14_2_ = 0;
          auVar116 = NEON_ucvtf(auVar118,4);
          auVar145._12_4_ = (int)((ulong)*(undefined8 *)(puVar49 + 8) >> 0x20);
          auVar145._0_12_ = auVar47;
          auVar145 = a64_TBL(ZEXT816(0),auVar145,auVar103,_DAT_004c4160);
          auVar117._2_2_ = 0;
          auVar117._0_2_ = (ushort)*(undefined8 *)(*pauVar51 + 4);
          auVar117._4_2_ = (short)*(undefined8 *)(*pauVar52 + 8);
          auVar117._6_2_ = 0;
          auVar117._8_2_ = auVar142._4_2_;
          auVar117._10_2_ = 0;
          auVar117._12_2_ = auVar142._6_2_;
          auVar117._14_2_ = 0;
          auVar152._6_2_ = 0;
          auVar152._0_6_ =
               CONCAT24(auVar103._8_2_,CONCAT22(auVar103._8_2_,auVar46._8_2_)) & 0xffff0000ffff;
          auVar152._8_2_ = auVar111._4_2_;
          auVar152._10_2_ = 0;
          auVar152._12_2_ = auVar111._6_2_;
          auVar152._14_2_ = 0;
          auVar133._6_2_ = 0;
          auVar133._0_6_ = CONCAT24(auVar132._2_2_,auVar132._0_4_) & 0xffff0000ffff;
          auVar133._8_2_ = SUB122(*pauVar7,10);
          auVar133._10_2_ = 0;
          auVar133._12_2_ = (short)((ulong)*(undefined8 *)(*pauVar54 + 4) >> 0x10);
          auVar133._14_2_ = 0;
          auVar118 = NEON_ucvtf(auVar117,4);
          auVar153 = NEON_ucvtf(auVar152,4);
          auVar146._6_2_ = 0;
          auVar146._0_6_ = CONCAT24(auVar145._2_2_,auVar145._0_4_) & 0xffff0000ffff;
          auVar146._8_2_ = auVar120._10_2_;
          auVar146._10_2_ = 0;
          auVar146._12_2_ = auVar155._10_2_;
          auVar146._14_2_ = 0;
          auVar134 = NEON_ucvtf(auVar133,4);
          auVar142._2_2_ = 0;
          auVar142._0_2_ = (ushort)uVar45;
          auVar142._4_2_ = (short)uVar201;
          auVar142._6_2_ = 0;
          auVar142._8_2_ = (short)((ulong)uVar100 >> 0x20);
          auVar142._10_2_ = 0;
          auVar142._12_2_ = (short)((ulong)uVar100 >> 0x30);
          auVar142._14_2_ = 0;
          auVar145 = NEON_ucvtf(auVar146,4);
          auVar119._2_2_ = 0;
          auVar119._0_2_ = (ushort)uVar101;
          auVar119._4_2_ = auVar103._0_2_;
          auVar119._6_2_ = 0;
          auVar119._8_2_ = (short)((ulong)uVar176 >> 0x20);
          auVar119._10_2_ = 0;
          auVar119._12_2_ = (short)((ulong)uVar176 >> 0x30);
          auVar119._14_2_ = 0;
          auVar122._2_2_ = 0;
          auVar122._0_2_ = uVar88;
          auVar122._4_2_ = uVar90;
          auVar122._6_2_ = 0;
          auVar122._8_2_ = (short)((ulong)uVar161 >> 0x20);
          auVar122._10_2_ = 0;
          auVar122._12_2_ = (short)((ulong)uVar161 >> 0x30);
          auVar122._14_2_ = 0;
          auVar135._2_2_ = 0;
          auVar135._0_2_ = uVar87;
          auVar135._4_2_ = auVar103._2_2_;
          auVar135._6_2_ = 0;
          auVar135._8_2_ = (short)((ulong)uVar113 >> 0x20);
          auVar135._10_2_ = 0;
          auVar135._12_2_ = (short)((ulong)uVar113 >> 0x30);
          auVar135._14_2_ = 0;
          auVar147._2_2_ = 0;
          auVar147._0_2_ = (ushort)((ulong)uVar45 >> 0x20);
          auVar147._4_2_ = (short)((ulong)uVar201 >> 0x20);
          auVar147._6_2_ = 0;
          auVar147._8_2_ = (short)((ulong)uVar38 >> 0x20);
          auVar147._10_2_ = 0;
          auVar147._12_2_ = (short)((ulong)uVar39 >> 0x20);
          auVar147._14_2_ = 0;
          auVar154._2_2_ = 0;
          auVar154._0_2_ = (ushort)((ulong)uVar101 >> 0x20);
          auVar154._4_2_ = auVar103._4_2_;
          auVar154._6_2_ = 0;
          auVar154._8_2_ = auVar120._4_2_;
          auVar154._10_2_ = 0;
          auVar154._12_2_ = auVar155._4_2_;
          auVar154._14_2_ = 0;
          auVar103 = NEON_ucvtf(auVar142,4);
          auVar120 = NEON_ucvtf(auVar119,4);
          auVar123 = NEON_ucvtf(auVar122,4);
          auVar132 = NEON_ucvtf(auVar135,4);
          auVar111 = NEON_ucvtf(auVar147,4);
          auVar155 = NEON_ucvtf(auVar154,4);
          in_q31._0_4_ = fVar183 + auVar132._0_4_ * auVar138._0_4_;
          in_q31._4_4_ = fVar183 + auVar132._4_4_ * auVar138._0_4_;
          in_q31._8_4_ = fStack_68 + auVar132._8_4_ * auVar138._0_4_;
          in_q31._12_4_ = fStack_64 + auVar132._12_4_ * auVar138._0_4_;
          auVar132._0_4_ = fVar183 + auVar155._0_4_ * fVar112 + fVar183 + auVar145._0_4_ * fVar112;
          auVar132._4_4_ = fVar183 + auVar155._4_4_ * fVar112 + fVar183 + auVar145._4_4_ * fVar112;
          auVar132._8_4_ = fVar143 + auVar155._8_4_ * fVar112 + fVar143 + auVar145._8_4_ * fVar112;
          auVar132._12_4_ =
               fVar151 + auVar155._12_4_ * fVar112 + fVar151 + auVar145._12_4_ * fVar112;
          fVar188 = fVar188 + (fVar175 + auVar103._0_4_ * fVar115 +
                              fVar175 + auVar116._0_4_ * fVar115) * 0.5;
          fVar189 = fVar189 + (fVar175 + auVar103._4_4_ * fVar115 +
                              fVar175 + auVar116._4_4_ * fVar115) * 0.5;
          fVar190 = fVar190 + (fVar95 + auVar103._8_4_ * fVar110 + fVar95 + auVar116._8_4_ * fVar110
                              ) * 0.5;
          fVar191 = fVar191 + (fVar99 + auVar103._12_4_ * fVar131 +
                              fVar99 + auVar116._12_4_ * fVar131) * 0.5;
          fVar193 = fVar193 + (fVar175 + auVar120._0_4_ * fVar115 +
                              fVar175 + auVar102._0_4_ * fVar115) * 0.5;
          fVar195 = fVar195 + (fVar175 + auVar120._4_4_ * fVar115 +
                              fVar175 + auVar102._4_4_ * fVar115) * 0.5;
          fVar197 = fVar197 + (fVar95 + auVar120._8_4_ * fVar110 + fVar95 + auVar102._8_4_ * fVar110
                              ) * 0.5;
          fVar199 = fVar199 + (fVar99 + auVar120._12_4_ * fVar131 +
                              fVar99 + auVar102._12_4_ * fVar131) * 0.5;
          auVar171._0_4_ =
               auVar107._0_4_ +
               (fVar183 + auVar123._0_4_ * auVar138._0_4_ +
               fVar183 + auVar118._0_4_ * auVar138._0_4_) * 0.5;
          auVar171._4_4_ =
               auVar107._4_4_ +
               (fVar183 + auVar123._4_4_ * auVar138._0_4_ +
               fVar183 + auVar118._4_4_ * auVar138._0_4_) * 0.5;
          auVar171._8_4_ =
               auVar107._8_4_ +
               (fStack_68 + auVar123._8_4_ * auVar138._0_4_ +
               fStack_68 + auVar118._8_4_ * auVar138._0_4_) * 0.5;
          auVar171._12_4_ =
               auVar107._12_4_ +
               (fStack_64 + auVar123._12_4_ * auVar138._0_4_ +
               fStack_64 + auVar118._12_4_ * auVar138._0_4_) * 0.5;
          fVar179 = fVar179 + (in_q31._0_4_ + fVar183 + auVar153._0_4_ * auVar138._0_4_) * 0.5;
          fVar180 = fVar180 + (in_q31._4_4_ + fVar183 + auVar153._4_4_ * auVar138._0_4_) * 0.5;
          fVar181 = fVar181 + (in_q31._8_4_ + fStack_68 + auVar153._8_4_ * auVar138._0_4_) * 0.5;
          fVar182 = fVar182 + (in_q31._12_4_ + fStack_64 + auVar153._12_4_ * auVar138._0_4_) * 0.5;
          auVar155._0_4_ =
               auVar114._0_4_ +
               (fVar183 + auVar111._0_4_ * fVar112 + fVar183 + auVar134._0_4_ * fVar112) * 0.5;
          auVar155._4_4_ =
               auVar114._4_4_ +
               (fVar183 + auVar111._4_4_ * fVar112 + fVar183 + auVar134._4_4_ * fVar112) * 0.5;
          auVar155._8_4_ =
               auVar114._8_4_ +
               (fVar143 + auVar111._8_4_ * fVar112 + fVar143 + auVar134._8_4_ * fVar112) * 0.5;
          auVar155._12_4_ =
               auVar114._12_4_ +
               (fVar151 + auVar111._12_4_ * fVar112 + fVar151 + auVar134._12_4_ * fVar112) * 0.5;
          auVar164._0_4_ = auVar104._0_4_ + auVar132._0_4_ * 0.5;
          auVar164._4_4_ = auVar104._4_4_ + auVar132._4_4_ * 0.5;
          auVar164._8_4_ = auVar104._8_4_ + auVar132._8_4_ * 0.5;
          auVar164._12_4_ = auVar104._12_4_ + auVar132._12_4_ * 0.5;
          auVar114 = auVar155;
          auVar104 = auVar164;
          auVar107 = auVar171;
        } while (lVar77 != 0);
        lVar77 = (uVar65 - uVar68) + lVar59;
        uVar64 = (ulong)(uint)(fVar193 + fVar188 + fVar195 + fVar189 +
                              fVar197 + fVar190 + fVar199 + fVar191);
        auVar111 = ZEXT416((uint)(fVar179 + auVar171._0_4_ + fVar180 + auVar171._4_4_ +
                                 fVar181 + auVar171._8_4_ + fVar182 + auVar171._12_4_));
        uVar68 = (ulong)(uint)(auVar164._0_4_ + auVar155._0_4_ + auVar164._4_4_ + auVar155._4_4_ +
                              auVar164._8_4_ + auVar155._8_4_ + auVar164._12_4_ + auVar155._12_4_);
        uStack_a8 = SUB168(_DAT_004c4160,8);
      }
      auVar107._8_8_ = 0;
      auVar107._0_8_ = uVar64;
      auVar103._8_8_ = 0;
      auVar103._0_8_ = uVar68;
      lVar69 = lVar62 - lVar77;
      puVar60 = (ushort *)(lVar63 + lVar77 * 0x10 + 6);
      do {
        lVar69 = lVar69 + -1;
        uVar94 = NEON_ucvtf((uint)*puVar60);
        puVar2 = puVar60 + -2;
        uVar98 = NEON_ucvtf((uint)puVar60[1]);
        puVar3 = puVar60 + -1;
        uVar109 = NEON_ucvtf((uint)puVar60[2]);
        uVar160 = NEON_ucvtf((uint)puVar60[-3]);
        puVar60 = puVar60 + 8;
        uVar162 = NEON_ucvtf((uint)*puVar2);
        fVar112 = (float)NEON_fmadd(1.0 / fVar187,uVar94,fVar175);
        uVar94 = NEON_ucvtf((uint)*puVar3);
        fVar115 = (float)NEON_fmadd(1.0 / fVar192,uVar98,uVar178);
        fVar179 = (float)NEON_fmadd(1.0 / fVar177,uVar109,fVar183);
        fVar180 = (float)NEON_fmadd(1.0 / fVar187,uVar160,fVar175);
        fVar181 = (float)NEON_fmadd(1.0 / fVar192,uVar162,uVar178);
        fVar182 = (float)NEON_fmadd(1.0 / fVar177,uVar94,fVar183);
        auVar107._0_4_ = (float)NEON_fmadd(fVar180 + fVar112,0x3f000000,auVar107._0_4_);
        auVar111._0_4_ = (float)NEON_fmadd(fVar181 + fVar115,0x3f000000,auVar111._0_4_);
        auVar103._0_4_ = NEON_fmadd(fVar182 + fVar179,0x3f000000,auVar103._0_4_);
      } while (lVar69 != 0);
    }
    fVar112 = 0.0;
    auVar104 = ZEXT816(0);
    auVar114 = ZEXT816(0);
    fVar115 = 1.0 / (float)iVar30;
    fVar180 = auVar107._0_4_ * fVar115;
    fVar179 = auVar111._0_4_ * fVar115;
    fVar115 = auVar103._0_4_ * fVar115;
    if (this[0x40] == (btQuantizedBvh)0x0) {
      if (7 < uVar65) {
        uVar64 = uVar65 & 0xfffffffffffffff8;
        pfVar61 = (float *)(lVar66 + lVar59 * 0x40 + 0x100);
        fVar112 = 0.0;
        fVar177 = 0.0;
        fVar95 = 0.0;
        fVar99 = 0.0;
        uVar68 = uVar64;
        auVar114 = ZEXT816(0);
        auVar104 = ZEXT816(0);
        auVar107 = ZEXT816(0);
        auVar111 = ZEXT816(0);
        auVar103 = ZEXT816(0);
        do {
          pfVar8 = pfVar61 + -0x3c;
          pfVar32 = pfVar61 + -0x3b;
          pfVar71 = pfVar61 + -0x2c;
          pfVar11 = pfVar61 + 0x14;
          pfVar9 = pfVar61 + 4;
          pfVar33 = pfVar61 + 5;
          pfVar12 = pfVar61 + 0x15;
          pfVar82 = pfVar61 + -0x1c;
          pfVar72 = pfVar61 + -0x2b;
          pfVar5 = pfVar61 + -0x3a;
          uVar68 = uVar68 - 8;
          pfVar13 = pfVar61 + 0x24;
          pfVar73 = pfVar61 + -0x1b;
          pfVar14 = pfVar61 + 0x25;
          pfVar83 = pfVar61 + -0xc;
          pfVar15 = pfVar61 + 0x34;
          pfVar74 = pfVar61 + -0xb;
          pfVar55 = pfVar61 + -0x20;
          pfVar16 = pfVar61 + 0x16;
          pfVar17 = pfVar61 + 0x35;
          pfVar75 = pfVar61 + -0x2a;
          pfVar4 = pfVar61 + 6;
          fVar110 = *pfVar61;
          pfVar34 = pfVar61 + 1;
          pfVar18 = pfVar61 + 0x10;
          pfVar76 = pfVar61 + -0x30;
          pfVar10 = pfVar61 + -0x40;
          pfVar35 = pfVar61 + -0x3f;
          pfVar84 = pfVar61 + -0x1a;
          pfVar19 = pfVar61 + 0x20;
          pfVar6 = pfVar61 + -0x3e;
          pfVar20 = pfVar61 + 0x26;
          pfVar85 = pfVar61 + -10;
          pfVar21 = pfVar61 + 0x30;
          pfVar22 = pfVar61 + 0x36;
          pfVar56 = pfVar61 + -0x10;
          pfVar86 = pfVar61 + -0x2f;
          pfVar78 = pfVar61 + -0x2e;
          pfVar23 = pfVar61 + 0x11;
          pfVar24 = pfVar61 + 0x12;
          pfVar1 = pfVar61 + 2;
          pfVar25 = pfVar61 + 0x21;
          pfVar79 = pfVar61 + -0x1e;
          pfVar26 = pfVar61 + 0x22;
          pfVar57 = pfVar61 + -0x1f;
          pfVar27 = pfVar61 + 0x31;
          pfVar80 = pfVar61 + -0xe;
          pfVar58 = pfVar61 + -0xf;
          pfVar28 = pfVar61 + 0x32;
          pfVar61 = pfVar61 + 0x80;
          fVar175 = -fVar180 + (*pfVar10 + *pfVar8) * 0.5;
          fVar183 = -fVar180 + (*pfVar76 + *pfVar71) * 0.5;
          fVar187 = -fVar180 + (*pfVar55 + *pfVar82) * 0.5;
          fVar192 = -fVar180 + (*pfVar56 + *pfVar83) * 0.5;
          fVar181 = -fVar180 + (fVar110 + *pfVar9) * 0.5;
          fVar182 = -fVar180 + (*pfVar18 + *pfVar11) * 0.5;
          fVar188 = -fVar180 + (*pfVar19 + *pfVar13) * 0.5;
          fVar189 = -fVar180 + (*pfVar21 + *pfVar15) * 0.5;
          fVar110 = -fVar179 + (*pfVar35 + *pfVar32) * 0.5;
          fVar131 = -fVar179 + (*pfVar86 + *pfVar72) * 0.5;
          fVar143 = -fVar179 + (*pfVar57 + *pfVar73) * 0.5;
          fVar151 = -fVar179 + (*pfVar58 + *pfVar74) * 0.5;
          fVar190 = -fVar179 + (*pfVar34 + *pfVar33) * 0.5;
          fVar191 = -fVar179 + (*pfVar23 + *pfVar12) * 0.5;
          fVar193 = -fVar179 + (*pfVar25 + *pfVar14) * 0.5;
          fVar195 = -fVar179 + (*pfVar27 + *pfVar17) * 0.5;
          fVar197 = -fVar115 + (*pfVar6 + *pfVar5) * 0.5;
          fVar199 = -fVar115 + (*pfVar78 + *pfVar75) * 0.5;
          fVar184 = -fVar115 + (*pfVar79 + *pfVar84) * 0.5;
          fVar185 = -fVar115 + (*pfVar80 + *pfVar85) * 0.5;
          auVar174._0_4_ = auVar103._0_4_ + fVar175 * fVar175;
          auVar174._4_4_ = auVar103._4_4_ + fVar183 * fVar183;
          auVar174._8_4_ = auVar103._8_4_ + fVar187 * fVar187;
          auVar174._12_4_ = auVar103._12_4_ + fVar192 * fVar192;
          fVar175 = -fVar115 + (*pfVar1 + *pfVar4) * 0.5;
          fVar183 = -fVar115 + (*pfVar24 + *pfVar16) * 0.5;
          fVar187 = -fVar115 + (*pfVar26 + *pfVar20) * 0.5;
          fVar192 = -fVar115 + (*pfVar28 + *pfVar22) * 0.5;
          fVar112 = fVar112 + fVar181 * fVar181;
          fVar177 = fVar177 + fVar182 * fVar182;
          fVar95 = fVar95 + fVar188 * fVar188;
          fVar99 = fVar99 + fVar189 * fVar189;
          auVar125._0_4_ = auVar107._0_4_ + fVar110 * fVar110;
          auVar125._4_4_ = auVar107._4_4_ + fVar131 * fVar131;
          auVar125._8_4_ = auVar107._8_4_ + fVar143 * fVar143;
          auVar125._12_4_ = auVar107._12_4_ + fVar151 * fVar151;
          auVar166._0_4_ = auVar111._0_4_ + fVar190 * fVar190;
          auVar166._4_4_ = auVar111._4_4_ + fVar191 * fVar191;
          auVar166._8_4_ = auVar111._8_4_ + fVar193 * fVar193;
          auVar166._12_4_ = auVar111._12_4_ + fVar195 * fVar195;
          auVar97._0_4_ = auVar114._0_4_ + fVar197 * fVar197;
          auVar97._4_4_ = auVar114._4_4_ + fVar199 * fVar199;
          auVar97._8_4_ = auVar114._8_4_ + fVar184 * fVar184;
          auVar97._12_4_ = auVar114._12_4_ + fVar185 * fVar185;
          auVar108._0_4_ = auVar104._0_4_ + fVar175 * fVar175;
          auVar108._4_4_ = auVar104._4_4_ + fVar183 * fVar183;
          auVar108._8_4_ = auVar104._8_4_ + fVar187 * fVar187;
          auVar108._12_4_ = auVar104._12_4_ + fVar192 * fVar192;
          auVar114 = auVar97;
          auVar104 = auVar108;
          auVar107 = auVar125;
          auVar111 = auVar166;
          auVar103 = auVar174;
        } while (uVar68 != 0);
        auVar114 = ZEXT416((uint)(fVar112 + auVar174._0_4_ + fVar177 + auVar174._4_4_ +
                                 fVar95 + auVar174._8_4_ + fVar99 + auVar174._12_4_));
        auVar104 = ZEXT416((uint)(auVar166._0_4_ + auVar125._0_4_ + auVar166._4_4_ + auVar125._4_4_
                                 + auVar166._8_4_ + auVar125._8_4_ +
                                   auVar166._12_4_ + auVar125._12_4_));
        fVar112 = auVar108._0_4_ + auVar97._0_4_ + auVar108._4_4_ + auVar97._4_4_ +
                  auVar108._8_4_ + auVar97._8_4_ + auVar108._12_4_ + auVar97._12_4_;
        if (uVar65 == uVar64) goto LAB_00f5c07c;
        lVar59 = uVar64 + lVar59;
      }
      lVar62 = lVar62 - lVar59;
      pfVar61 = (float *)(lVar66 + lVar59 * 0x40 + 0x10);
      do {
        fVar177 = *pfVar61;
        pfVar6 = pfVar61 + 1;
        pfVar5 = pfVar61 + -4;
        pfVar8 = pfVar61 + -3;
        pfVar4 = pfVar61 + 2;
        lVar62 = lVar62 + -1;
        pfVar1 = pfVar61 + -2;
        pfVar61 = pfVar61 + 0x10;
        uVar178 = NEON_fnmsub(*pfVar5 + fVar177,0x3f000000,fVar180);
        uVar94 = NEON_fnmsub(*pfVar8 + *pfVar6,0x3f000000,fVar179);
        uVar98 = NEON_fnmsub(*pfVar1 + *pfVar4,0x3f000000,fVar115);
        auVar114._0_4_ = NEON_fmadd(uVar178,uVar178,auVar114._0_4_);
        auVar104._0_4_ = (float)NEON_fmadd(uVar94,uVar94,auVar104._0_4_);
        fVar112 = (float)NEON_fmadd(uVar98,uVar98,fVar112);
      } while (lVar62 != 0);
    }
    else {
      if (8 < uVar65) {
        auVar114 = NEON_fmov(0x3f800000,4);
        uVar68 = 8;
        if ((uVar65 & 7) != 0) {
          uVar68 = uVar65 & 7;
        }
        fVar181 = auVar114._0_4_ / fVar187;
        pVar67 = (unkbyte10 *)(lVar63 + lVar59 * 0x10 + 0x40);
        fVar191 = 0.0;
        fVar193 = 0.0;
        fVar195 = 0.0;
        fVar197 = 0.0;
        fVar199 = 0.0;
        fVar184 = 0.0;
        fVar185 = 0.0;
        fVar186 = 0.0;
        fVar203 = 0.0;
        fVar204 = 0.0;
        fVar205 = 0.0;
        fVar206 = 0.0;
        fVar194 = 0.0;
        fVar196 = 0.0;
        fVar198 = 0.0;
        fVar200 = 0.0;
        fVar182 = 0.0;
        fVar188 = 0.0;
        fVar189 = 0.0;
        fVar190 = 0.0;
        fVar112 = auVar114._0_4_ / fVar177;
        lVar66 = uVar65 - uVar68;
        auVar114 = ZEXT816(0);
        do {
          pauVar81 = (undefined (*) [12])(pVar67 + -4);
          puVar70 = (undefined8 *)((long)pVar67 + -0x38);
          uVar101 = *(undefined8 *)*pauVar81;
          pauVar7 = (undefined (*) [12])(pVar67 + -3);
          puVar37 = (undefined8 *)((long)pVar67 + -0x28);
          uVar38 = *(undefined8 *)*pauVar7;
          lVar66 = lVar66 + -8;
          uVar43 = *(undefined8 *)((long)pVar67 + 8);
          uVar39 = *(undefined8 *)pVar67;
          Var48 = *pVar67;
          auVar103 = *(undefined (*) [16])(pVar67 + 1);
          uVar87 = (ushort)((ulong)uVar101 >> 0x10);
          auVar136._6_10_ = auVar107._6_10_;
          auVar136._4_2_ = (short)((ulong)uVar101 >> 0x30);
          uVar92 = (undefined2)((ulong)uVar38 >> 0x10);
          auVar136._2_2_ = uVar92;
          auVar136._0_2_ = uVar87;
          uVar90 = (undefined2)*puVar37;
          uVar201 = NEON_ext(CONCAT26((short)((ulong)uVar38 >> 0x30),auVar136._0_6_),uVar101,4,1);
          auVar107 = *(undefined (*) [16])(pVar67 + -2);
          auVar132 = *(undefined (*) [16])(pVar67 + -1);
          uVar88 = (ushort)((ulong)uVar39 >> 0x10);
          auVar148._6_10_ = auVar111._6_10_;
          auVar148._4_2_ = (short)((ulong)uVar39 >> 0x30);
          auVar148._2_2_ = auVar103._2_2_;
          auVar148._0_2_ = uVar88;
          uVar45 = NEON_ext(CONCAT26(auVar103._6_2_,auVar148._0_6_),uVar39,4,1);
          auVar111 = *(undefined (*) [16])(pVar67 + 2);
          auVar120 = *(undefined (*) [16])(pVar67 + 3);
          uVar89 = auVar132._6_2_;
          pVar67 = pVar67 + 8;
          auVar172._6_10_ = auVar104._6_10_;
          auVar172._4_2_ = auVar111._6_2_;
          auVar172._2_2_ = auVar120._2_2_;
          auVar172._0_2_ = auVar111._2_2_;
          auVar104 = a64_TBL(ZEXT816(0),auVar107,auVar132,_DAT_004c42e0);
          auVar202._6_2_ = 0;
          auVar202._0_6_ = CONCAT24((short)((ulong)uVar201 >> 0x10),(int)uVar201) & 0xffff0000ffff;
          auVar202._8_2_ = auVar107._6_2_;
          auVar202._10_2_ = 0;
          auVar202._12_2_ = uVar89;
          auVar202._14_2_ = 0;
          auVar138 = a64_TBL(ZEXT816(0),auVar111,auVar120,_DAT_004c42e0);
          uVar201 = NEON_ext(auVar107._0_8_,
                             CONCAT26(auVar132._2_2_,
                                      (int6)CONCAT44(CONCAT22(uVar89,auVar107._2_2_),
                                                     CONCAT22(auVar132._0_2_,auVar107._0_2_))),4,1);
          uVar100 = NEON_ext(auVar107._0_8_,
                             CONCAT26(uVar89,CONCAT24(auVar107._6_2_,
                                                      CONCAT22(auVar132._2_2_,auVar107._2_2_))),4,1)
          ;
          uVar113 = NEON_ext(auVar111._0_8_,
                             CONCAT26(auVar120._2_2_,
                                      CONCAT24(auVar111._2_2_,
                                               CONCAT22(auVar120._0_2_,auVar111._0_2_))),4,1);
          auVar40._12_4_ = (int)((ulong)*puVar70 >> 0x20);
          auVar40._0_12_ = *pauVar81;
          auVar41._12_4_ = (int)((ulong)*puVar37 >> 0x20);
          auVar41._0_12_ = *pauVar7;
          auVar102 = a64_TBL(ZEXT816(0),auVar40,auVar41,_DAT_004c4160);
          uVar161 = NEON_ext(auVar111._0_8_,CONCAT26(auVar120._6_2_,auVar172._0_6_),4,1);
          auVar145 = NEON_ucvtf(auVar202,4);
          auVar44._6_2_ = 0;
          auVar44._0_6_ = CONCAT24((short)((ulong)uVar45 >> 0x10),(int)uVar45) & 0xffff0000ffff;
          auVar44._8_2_ = auVar111._6_2_;
          auVar44._10_2_ = 0;
          auVar44._12_2_ = auVar120._6_2_;
          auVar44._14_2_ = 0;
          auVar123 = NEON_ucvtf(auVar44,4);
          auVar42._10_2_ = (short)((ulong)uVar43 >> 0x10);
          auVar42._0_10_ = Var48;
          auVar42._12_2_ = (short)((ulong)uVar43 >> 0x20);
          auVar42._14_2_ = (short)((ulong)uVar43 >> 0x30);
          auVar116 = a64_TBL(ZEXT816(0),auVar42,auVar103,_DAT_004c4160);
          auVar96._6_2_ = 0;
          auVar96._0_6_ = CONCAT24(uVar90,CONCAT22(uVar90,(short)*puVar70)) & 0xffff0000ffff;
          auVar96._8_2_ = auVar104._4_2_;
          auVar96._10_2_ = 0;
          auVar96._12_2_ = auVar104._6_2_;
          auVar96._14_2_ = 0;
          auVar105._6_2_ = 0;
          auVar105._0_6_ =
               CONCAT24(auVar103._8_2_,CONCAT22(auVar103._8_2_,(short)uVar43)) & 0xffff0000ffff;
          auVar105._8_2_ = auVar138._4_2_;
          auVar105._10_2_ = 0;
          auVar105._12_2_ = auVar138._6_2_;
          auVar105._14_2_ = 0;
          fVar140 = (float)uStack_f8;
          fVar141 = (float)((ulong)uStack_f8 >> 0x20);
          fVar158 = (float)uStack_e8;
          fVar163 = (float)((ulong)uStack_e8 >> 0x20);
          auVar138 = NEON_ucvtf(auVar105,4);
          auVar165._6_2_ = 0;
          auVar165._0_6_ = CONCAT24(auVar102._2_2_,auVar102._0_4_) & 0xffff0000ffff;
          auVar165._8_2_ = auVar107._10_2_;
          auVar165._10_2_ = 0;
          auVar165._12_2_ = auVar132._10_2_;
          auVar165._14_2_ = 0;
          auVar104 = NEON_ucvtf(auVar96,4);
          auVar173._6_2_ = 0;
          auVar173._0_6_ = CONCAT24(auVar116._2_2_,auVar116._0_4_) & 0xffff0000ffff;
          auVar173._8_2_ = auVar111._10_2_;
          auVar173._10_2_ = 0;
          auVar173._12_2_ = auVar120._10_2_;
          auVar173._14_2_ = 0;
          auVar106._2_2_ = 0;
          auVar106._0_2_ = (ushort)uVar101;
          auVar106._4_2_ = (short)uVar38;
          auVar106._6_2_ = 0;
          auVar106._8_2_ = (short)((ulong)uVar201 >> 0x20);
          auVar106._10_2_ = 0;
          auVar106._12_2_ = (short)((ulong)uVar201 >> 0x30);
          auVar106._14_2_ = 0;
          auVar127._2_2_ = 0;
          auVar127._0_2_ = uVar87;
          auVar127._4_2_ = uVar92;
          auVar127._6_2_ = 0;
          auVar127._8_2_ = (short)((ulong)uVar100 >> 0x20);
          auVar127._10_2_ = 0;
          auVar127._12_2_ = (short)((ulong)uVar100 >> 0x30);
          auVar127._14_2_ = 0;
          auVar137._2_2_ = 0;
          auVar137._0_2_ = uVar88;
          auVar137._4_2_ = auVar103._2_2_;
          auVar137._6_2_ = 0;
          auVar137._8_2_ = (short)((ulong)uVar161 >> 0x20);
          auVar137._10_2_ = 0;
          auVar137._12_2_ = (short)((ulong)uVar161 >> 0x30);
          auVar137._14_2_ = 0;
          auVar156._2_2_ = 0;
          auVar156._0_2_ = (ushort)((ulong)uVar39 >> 0x20);
          auVar156._4_2_ = auVar103._4_2_;
          auVar156._6_2_ = 0;
          auVar156._8_2_ = auVar111._4_2_;
          auVar156._10_2_ = 0;
          auVar156._12_2_ = auVar120._4_2_;
          auVar156._14_2_ = 0;
          auVar118 = NEON_ucvtf(auVar165,4);
          auVar124._2_2_ = 0;
          auVar124._0_2_ = (ushort)uVar39;
          auVar124._4_2_ = auVar103._0_2_;
          auVar124._6_2_ = 0;
          auVar124._8_2_ = (short)((ulong)uVar113 >> 0x20);
          auVar124._10_2_ = 0;
          auVar124._12_2_ = (short)((ulong)uVar113 >> 0x30);
          auVar124._14_2_ = 0;
          auVar149._2_2_ = 0;
          auVar149._0_2_ = (ushort)((ulong)uVar101 >> 0x20);
          auVar149._4_2_ = (short)((ulong)uVar38 >> 0x20);
          auVar149._6_2_ = 0;
          auVar149._8_2_ = auVar107._4_2_;
          auVar149._10_2_ = 0;
          auVar149._12_2_ = auVar132._4_2_;
          auVar149._14_2_ = 0;
          auVar103 = NEON_ucvtf(auVar173,4);
          auVar107 = NEON_ucvtf(auVar106,4);
          auVar120 = NEON_ucvtf(auVar137,4);
          auVar116 = NEON_ucvtf(auVar156,4);
          auVar111 = NEON_ucvtf(auVar124,4);
          auVar132 = NEON_ucvtf(auVar127,4);
          auVar102 = NEON_ucvtf(auVar149,4);
          fVar126 = -fVar179 +
                    (fVar175 + auVar107._0_4_ * fVar181 + fVar175 + auVar145._0_4_ * fVar181) * 0.5;
          fVar128 = -fVar179 +
                    (fVar175 + auVar107._4_4_ * fVar181 + fVar175 + auVar145._4_4_ * fVar181) * 0.5;
          fVar159 = (float)((ulong)uStack_a8 >> 0x20);
          fVar129 = (float)uStack_a8 +
                    (fVar95 + auVar107._8_4_ * fVar110 + fVar95 + auVar145._8_4_ * fVar110) * 0.5;
          fVar130 = fVar159 + (fVar175 + auVar107._12_4_ * fVar131 +
                              fVar99 + auVar145._12_4_ * fVar131) * 0.5;
          auVar107._0_4_ =
               -fVar179 +
               (fVar175 + auVar111._0_4_ * fVar181 + fVar175 + auVar123._0_4_ * fVar181) * 0.5;
          auVar107._4_4_ =
               -fVar179 +
               (fVar175 + auVar111._4_4_ * fVar181 + fVar175 + auVar123._4_4_ * fVar181) * 0.5;
          auVar107._8_4_ =
               (float)uStack_a8 +
               (fVar95 + auVar111._8_4_ * fVar110 + fVar95 + auVar123._8_4_ * fVar110) * 0.5;
          auVar107._12_4_ =
               fVar159 + (fVar99 + auVar111._12_4_ * fVar131 + fVar99 + auVar123._12_4_ * fVar131) *
                         0.5;
          auVar111._0_4_ =
               -fVar179 +
               (fVar183 + auVar132._0_4_ * fVar112 + fVar183 + auVar104._0_4_ * fVar112) * 0.5;
          auVar111._4_4_ =
               -fVar179 +
               (fVar183 + auVar132._4_4_ * fVar112 + fVar183 + auVar104._4_4_ * fVar112) * 0.5;
          fVar159 = (float)((ulong)uStack_b8 >> 0x20);
          auVar111._8_4_ =
               (float)uStack_b8 +
               (fStack_68 + auVar132._8_4_ * fVar158 + fStack_68 + auVar104._8_4_ * fVar158) * 0.5;
          auVar111._12_4_ =
               fVar159 + (fStack_64 + auVar132._12_4_ * fVar163 +
                         fStack_64 + auVar104._12_4_ * fVar163) * 0.5;
          fVar150 = -fVar179 +
                    (fVar183 + auVar120._0_4_ * fVar112 + fVar183 + auVar138._0_4_ * fVar112) * 0.5;
          fVar157 = -fVar179 +
                    (fVar183 + auVar120._4_4_ * fVar112 + fVar183 + auVar138._4_4_ * fVar112) * 0.5;
          fVar158 = (float)uStack_b8 +
                    (fStack_68 + auVar120._8_4_ * fVar158 + fStack_68 + auVar138._8_4_ * fVar158) *
                    0.5;
          fVar159 = fVar159 + (fStack_64 + auVar120._12_4_ * fVar163 +
                              fStack_64 + auVar138._12_4_ * fVar163) * 0.5;
          fVar163 = -fVar115 +
                    (fVar183 + auVar102._0_4_ * fVar112 + fVar183 + auVar118._0_4_ * fVar112) * 0.5;
          fVar167 = -fVar115 +
                    (fVar183 + auVar102._4_4_ * fVar112 + fVar183 + auVar118._4_4_ * fVar112) * 0.5;
          fVar170 = (float)((ulong)uStack_c8 >> 0x20);
          fVar168 = (float)uStack_c8 +
                    (fVar143 + auVar102._8_4_ * fVar140 + fVar143 + auVar118._8_4_ * fVar140) * 0.5;
          fVar169 = fVar170 + (fVar151 + auVar102._12_4_ * fVar141 +
                              fVar151 + auVar118._12_4_ * fVar141) * 0.5;
          auVar104._0_4_ =
               -fVar115 +
               (fVar183 + auVar116._0_4_ * fVar112 + fVar183 + auVar103._0_4_ * fVar112) * 0.5;
          auVar104._4_4_ =
               -fVar115 +
               (fVar183 + auVar116._4_4_ * fVar112 + fVar183 + auVar103._4_4_ * fVar112) * 0.5;
          auVar104._8_4_ =
               (float)uStack_c8 +
               (fVar143 + auVar116._8_4_ * fVar140 + fVar143 + auVar103._8_4_ * fVar140) * 0.5;
          auVar104._12_4_ =
               fVar170 + (fVar151 + auVar116._12_4_ * fVar141 + fVar151 + auVar103._12_4_ * fVar141)
                         * 0.5;
          auVar208._0_4_ = auVar114._0_4_ + fVar126 * fVar126;
          auVar208._4_4_ = auVar114._4_4_ + fVar128 * fVar128;
          auVar208._8_4_ = auVar114._8_4_ + fVar129 * fVar129;
          auVar208._12_4_ = auVar114._12_4_ + fVar130 * fVar130;
          fVar182 = fVar182 + auVar107._0_4_ * auVar107._0_4_;
          fVar188 = fVar188 + auVar107._4_4_ * auVar107._4_4_;
          fVar189 = fVar189 + auVar107._8_4_ * auVar107._8_4_;
          fVar190 = fVar190 + auVar107._12_4_ * auVar107._12_4_;
          fVar194 = fVar194 + auVar111._0_4_ * auVar111._0_4_;
          fVar196 = fVar196 + auVar111._4_4_ * auVar111._4_4_;
          fVar198 = fVar198 + auVar111._8_4_ * auVar111._8_4_;
          fVar200 = fVar200 + auVar111._12_4_ * auVar111._12_4_;
          fVar203 = fVar203 + fVar150 * fVar150;
          fVar204 = fVar204 + fVar157 * fVar157;
          fVar205 = fVar205 + fVar158 * fVar158;
          fVar206 = fVar206 + fVar159 * fVar159;
          fVar191 = fVar191 + fVar163 * fVar163;
          fVar193 = fVar193 + fVar167 * fVar167;
          fVar195 = fVar195 + fVar168 * fVar168;
          fVar197 = fVar197 + fVar169 * fVar169;
          fVar199 = fVar199 + auVar104._0_4_ * auVar104._0_4_;
          fVar184 = fVar184 + auVar104._4_4_ * auVar104._4_4_;
          fVar185 = fVar185 + auVar104._8_4_ * auVar104._8_4_;
          fVar186 = fVar186 + auVar104._12_4_ * auVar104._12_4_;
          auVar114 = auVar208;
        } while (lVar66 != 0);
        lVar59 = (uVar65 - uVar68) + lVar59;
        auVar114 = ZEXT416((uint)(fVar182 + auVar208._0_4_ + fVar188 + auVar208._4_4_ +
                                 fVar189 + auVar208._8_4_ + fVar190 + auVar208._12_4_));
        auVar104 = ZEXT416((uint)(fVar203 + fVar194 + fVar204 + fVar196 +
                                 fVar205 + fVar198 + fVar206 + fVar200));
        fVar112 = fVar199 + fVar191 + fVar184 + fVar193 + fVar185 + fVar195 + fVar186 + fVar197;
      }
      lVar62 = lVar62 - lVar59;
      puVar60 = (ushort *)(lVar63 + lVar59 * 0x10 + 6);
      do {
        lVar62 = lVar62 + -1;
        uVar94 = NEON_ucvtf((uint)*puVar60);
        puVar2 = puVar60 + -2;
        uVar98 = NEON_ucvtf((uint)puVar60[1]);
        puVar3 = puVar60 + -1;
        uVar109 = NEON_ucvtf((uint)puVar60[2]);
        uVar160 = NEON_ucvtf((uint)puVar60[-3]);
        puVar60 = puVar60 + 8;
        uVar162 = NEON_ucvtf((uint)*puVar2);
        fVar95 = (float)NEON_fmadd(1.0 / fVar187,uVar94,fVar175);
        uVar94 = NEON_ucvtf((uint)*puVar3);
        fVar99 = (float)NEON_fmadd(1.0 / fVar192,uVar98,uVar178);
        fVar110 = (float)NEON_fmadd(1.0 / fVar177,uVar109,fVar183);
        fVar131 = (float)NEON_fmadd(1.0 / fVar187,uVar160,fVar175);
        fVar143 = (float)NEON_fmadd(1.0 / fVar192,uVar162,uVar178);
        fVar151 = (float)NEON_fmadd(1.0 / fVar177,uVar94,fVar183);
        uVar94 = NEON_fnmsub(fVar131 + fVar95,0x3f000000,fVar180);
        uVar98 = NEON_fnmsub(fVar143 + fVar99,0x3f000000,fVar179);
        uVar109 = NEON_fnmsub(fVar151 + fVar110,0x3f000000,fVar115);
        auVar114._0_4_ = NEON_fmadd(uVar94,uVar94,auVar114._0_4_);
        auVar104._0_4_ = (float)NEON_fmadd(uVar98,uVar98,auVar104._0_4_);
        fVar112 = (float)NEON_fmadd(uVar109,uVar109,fVar112);
      } while (lVar62 != 0);
    }
  }
LAB_00f5c07c:
  fVar95 = 1.0 / ((float)iVar30 + -1.0);
  fVar99 = auVar114._0_4_ * fVar95;
  fVar110 = auVar104._0_4_ * fVar95;
  fVar177 = fVar110;
  if (fVar99 >= fVar110) {
    fVar177 = fVar99;
  }
  uVar29 = 2;
  if (fVar112 * fVar95 <= fVar177) {
    uVar29 = fVar99 < fVar110;
  }
  return uVar29;
}


