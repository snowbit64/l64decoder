// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndCalcSplittingIndex
// Entry Point: 00f5c0cc
// Size: 1540 bytes
// Signature: undefined __thiscall sortAndCalcSplittingIndex(btQuantizedBvh * this, int param_1, int param_2, int param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* btQuantizedBvh::sortAndCalcSplittingIndex(int, int, int) */

void __thiscall
btQuantizedBvh::sortAndCalcSplittingIndex(btQuantizedBvh *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined (*pauVar7) [12];
  int iVar8;
  undefined (*pauVar9) [16];
  int iVar10;
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [12];
  long lVar13;
  undefined (*pauVar14) [12];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined auVar18 [12];
  undefined auVar19 [12];
  undefined (*pauVar20) [12];
  undefined *puVar21;
  undefined (*pauVar22) [12];
  undefined (*pauVar23) [12];
  undefined (*pauVar24) [12];
  undefined (*pauVar25) [12];
  undefined (*pauVar26) [12];
  undefined (*pauVar27) [12];
  undefined (*pauVar28) [12];
  bool bVar29;
  int iVar30;
  long lVar31;
  undefined8 *puVar32;
  ushort *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined (*pauVar39) [12];
  ulong uVar40;
  ushort uVar41;
  ushort uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  undefined8 uVar53;
  undefined auVar54 [16];
  undefined4 uVar55;
  float fVar56;
  undefined auVar57 [16];
  float fVar58;
  undefined auVar59 [16];
  float fVar60;
  undefined auVar61 [16];
  undefined auVar62 [16];
  float fVar63;
  undefined8 uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  float fVar69;
  undefined8 uVar70;
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined8 uVar76;
  undefined auVar77 [16];
  undefined2 uVar78;
  float fVar79;
  undefined8 uVar80;
  undefined2 uVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined4 uVar88;
  float fVar89;
  undefined4 uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  undefined auVar113 [16];
  undefined auVar114 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  undefined in_q31 [16];
  undefined auVar118 [16];
  undefined8 uStack_118;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  float local_c0 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  uVar34 = (ulong)(uint)param_1;
  lVar13 = tpidr_el0;
  fVar69 = 0.0;
  auVar57 = ZEXT816(0);
  auVar59 = ZEXT816(0);
  local_68 = *(long *)(lVar13 + 0x28);
  iVar10 = param_2 - param_1;
  local_c0[3] = 0.0;
  if (iVar10 != 0 && param_1 <= param_2) {
    lVar31 = (long)param_1;
    lVar35 = (long)param_2;
    if (this[0x40] == (btQuantizedBvh)0x0) {
      lVar35 = lVar35 - lVar31;
      fVar69 = 0.0;
      puVar32 = (undefined8 *)(*(long *)(this + 0x58) + lVar31 * 0x40 + 0x10);
      auVar57 = ZEXT816(0);
      do {
        uVar64 = *puVar32;
        lVar35 = lVar35 + -1;
        puVar2 = puVar32 + 1;
        puVar3 = puVar32 + -2;
        puVar4 = puVar32 + -1;
        puVar32 = puVar32 + 8;
        auVar59._0_4_ =
             auVar57._0_4_ +
             SUB164(ZEXT816(0x3f0000003f000000),0) * ((float)*puVar3 + (float)uVar64);
        auVar59._4_4_ =
             auVar57._4_4_ +
             SUB164(ZEXT816(0x3f0000003f000000),4) *
             ((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar64 >> 0x20));
        auVar59._8_8_ = 0;
        fVar69 = (float)NEON_fmadd(*(float *)puVar4 + *(float *)puVar2,0x3f000000,fVar69);
        auVar57 = auVar59;
      } while (lVar35 != 0);
      auVar57 = ZEXT416((uint)auVar59._4_4_);
    }
    else {
      fVar97 = *(float *)(this + 8);
      uVar36 = lVar35 - lVar31;
      fVar103 = *(float *)(this + 0x10);
      if (uVar36 < 9) {
        uVar36 = 0;
        auVar57 = ZEXT816(0);
        fVar69 = 0.0;
      }
      else {
        auVar59 = NEON_fmov(0x3f800000,4);
        uVar38 = 8;
        if ((uVar36 & 7) != 0) {
          uVar38 = uVar36 & 7;
        }
        fVar69 = auVar59._0_4_;
        fVar58 = fVar69 / *(float *)(this + 0x28);
        lVar37 = (uVar38 + lVar31) - lVar35;
        fVar56 = 0.0;
        fVar89 = 0.0;
        fVar91 = 0.0;
        fVar93 = 0.0;
        fVar92 = 0.0;
        fVar94 = 0.0;
        fVar95 = 0.0;
        fVar96 = 0.0;
        fVar99 = 0.0;
        fVar100 = 0.0;
        fVar101 = 0.0;
        fVar102 = 0.0;
        fVar104 = 0.0;
        fVar105 = 0.0;
        fVar106 = 0.0;
        fVar107 = 0.0;
        fVar108 = 0.0;
        fVar109 = 0.0;
        fVar110 = 0.0;
        fVar111 = 0.0;
        fVar115 = fVar69 / *(float *)(this + 0x2c);
        fVar60 = 0.0;
        fVar63 = 0.0;
        fVar50 = 0.0;
        fVar52 = 0.0;
        pauVar39 = (undefined (*) [12])(*(long *)(this + 0x98) + lVar31 * 0x10 + 0x40);
        fVar69 = fVar69 / *(float *)(this + 0x30);
        do {
          puVar21 = *pauVar39;
          uVar64 = *(undefined8 *)*pauVar39;
          auVar19 = *pauVar39;
          auVar18 = *pauVar39;
          pauVar20 = pauVar39 + 1;
          pauVar14 = pauVar39 + 2;
          uVar76 = *(undefined8 *)*(undefined (*) [16])(*pauVar20 + 4);
          lVar37 = lVar37 + 8;
          pauVar7 = (undefined (*) [12])(pauVar39[-6] + 8);
          pauVar22 = pauVar39 + -5;
          uVar16 = *(undefined8 *)*pauVar7;
          pauVar11 = pauVar39 + -4;
          pauVar23 = pauVar39 + -4;
          uVar17 = *(undefined8 *)*pauVar11;
          uVar41 = (ushort)((ulong)uVar64 >> 0x10);
          uVar45 = (undefined2)((ulong)uVar76 >> 0x10);
          uVar53 = NEON_ext(CONCAT26((short)((ulong)uVar76 >> 0x30),
                                     CONCAT24((short)((ulong)uVar64 >> 0x30),CONCAT22(uVar45,uVar41)
                                             )),uVar64,4,1);
          pauVar24 = pauVar39 + 2;
          pauVar25 = pauVar39 + 3;
          uVar80 = *(undefined8 *)*(undefined (*) [16])(*pauVar24 + 8);
          pauVar12 = pauVar39 + 4;
          pauVar26 = pauVar39 + 4;
          uVar15 = *(undefined8 *)*pauVar12;
          uVar81 = (undefined2)((ulong)uVar15 >> 0x30);
          uVar42 = (ushort)((ulong)uVar16 >> 0x10);
          auVar118._6_10_ = in_q31._6_10_;
          auVar118._4_2_ = (short)((ulong)uVar16 >> 0x30);
          uVar46 = (undefined2)((ulong)uVar17 >> 0x10);
          auVar118._2_2_ = uVar46;
          auVar118._0_2_ = uVar42;
          uVar112 = NEON_ext(CONCAT26((short)((ulong)uVar17 >> 0x30),auVar118._0_6_),uVar16,4,1);
          auVar59 = *(undefined (*) [16])(pauVar39[-3] + 4);
          pauVar27 = pauVar39 + -2;
          pauVar28 = pauVar39 + -1;
          uVar70 = *(undefined8 *)*(undefined (*) [12])(*pauVar27 + 8);
          uVar78 = (undefined2)((ulong)uVar70 >> 0x30);
          uVar44 = (undefined2)((ulong)uVar80 >> 0x30);
          uVar43 = (undefined2)((ulong)uVar80 >> 0x10);
          auVar114._6_10_ = auVar57._6_10_;
          auVar114._4_2_ = uVar44;
          uVar47 = (undefined2)((ulong)uVar15 >> 0x10);
          auVar114._2_2_ = uVar47;
          auVar114._0_2_ = uVar43;
          pauVar39 = (undefined (*) [12])(pauVar39[10] + 8);
          uVar84 = NEON_ext(uVar80,CONCAT26(uVar81,auVar114._0_6_),4,1);
          uVar48 = (undefined2)((ulong)uVar70 >> 0x10);
          auVar73._6_2_ = 0;
          auVar73._0_6_ = CONCAT24((short)((ulong)uVar53 >> 0x10),(int)uVar53) & 0xffff0000ffff;
          auVar73._8_2_ = uVar44;
          auVar73._10_2_ = 0;
          auVar73._12_2_ = uVar81;
          auVar73._14_2_ = 0;
          auVar54._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar28 + 4) >> 0x20);
          auVar54._0_12_ = *(undefined (*) [12])(*pauVar27 + 8);
          auVar65 = a64_TBL(ZEXT816(0),auVar59,auVar54,_DAT_004c42e0);
          auVar71._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
          auVar71._0_12_ = *pauVar12;
          auVar57 = a64_TBL(ZEXT816(0),*(undefined (*) [16])(*pauVar24 + 8),auVar71,_DAT_004c42e0);
          auVar54 = NEON_ucvtf(auVar73,4);
          auVar113._6_2_ = 0;
          auVar113._0_6_ = CONCAT24((short)((ulong)uVar112 >> 0x10),(int)uVar112) & 0xffff0000ffff;
          auVar113._8_2_ = auVar59._6_2_;
          auVar113._10_2_ = 0;
          auVar113._12_2_ = uVar78;
          auVar113._14_2_ = 0;
          fVar82 = (float)uStack_118;
          fVar83 = (float)((ulong)uStack_118 >> 0x20);
          uVar53 = NEON_ext(auVar59._0_8_,
                            CONCAT26(uVar48,(int6)CONCAT44(CONCAT22(uVar81,auVar59._2_2_),
                                                           CONCAT22((short)uVar70,auVar59._0_2_))),4
                            ,1);
          uVar44 = (undefined2)*(undefined8 *)*pauVar14;
          uVar98 = NEON_ext(uVar80,CONCAT26(uVar47,CONCAT24(uVar43,CONCAT22((short)uVar15,
                                                                            (short)uVar80))),4,1);
          auVar62._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar22 + 4) >> 0x20);
          auVar62._0_12_ = *pauVar7;
          auVar67._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
          auVar67._0_12_ = *pauVar11;
          auVar71 = a64_TBL(ZEXT816(0),auVar62,auVar67,_DAT_004c4160);
          uVar112 = NEON_ext(auVar59._0_8_,
                             CONCAT26(uVar78,CONCAT24(auVar59._6_2_,CONCAT22(uVar48,auVar59._2_2_)))
                             ,4,1);
          auVar114 = NEON_ucvtf(auVar113,4);
          auVar77._12_4_ = (int)((ulong)*(undefined8 *)(puVar21 + 8) >> 0x20);
          auVar77._0_12_ = auVar19;
          auVar77 = a64_TBL(ZEXT816(0),auVar77,*(undefined (*) [16])(*pauVar20 + 4),_DAT_004c4160);
          auVar87._6_2_ = 0;
          auVar87._0_6_ =
               CONCAT24(SUB122(*pauVar11,8),CONCAT22(SUB122(*pauVar11,8),SUB122(*pauVar7,8))) &
               0xffff0000ffff;
          auVar87._8_2_ = auVar65._4_2_;
          auVar87._10_2_ = 0;
          auVar87._12_2_ = auVar65._6_2_;
          auVar87._14_2_ = 0;
          fVar79 = (float)uStack_e8;
          auVar66._6_2_ = 0;
          auVar66._0_6_ = CONCAT24(uVar44,CONCAT22(uVar44,auVar18._8_2_)) & 0xffff0000ffff;
          auVar66._8_2_ = auVar57._4_2_;
          auVar66._10_2_ = 0;
          auVar66._12_2_ = auVar57._6_2_;
          auVar66._14_2_ = 0;
          fVar116 = (float)uStack_f8;
          fVar117 = (float)((ulong)uStack_f8 >> 0x20);
          auVar72._6_2_ = 0;
          auVar72._0_6_ = CONCAT24(auVar71._2_2_,auVar71._0_4_) & 0xffff0000ffff;
          auVar72._8_2_ = auVar59._10_2_;
          auVar72._10_2_ = 0;
          auVar72._12_2_ = (short)((ulong)*(undefined8 *)(*pauVar28 + 4) >> 0x10);
          auVar72._14_2_ = 0;
          auVar71 = NEON_ucvtf(auVar87,4);
          auVar67 = NEON_ucvtf(auVar66,4);
          auVar73 = NEON_ucvtf(auVar72,4);
          auVar75._2_2_ = 0;
          auVar75._0_2_ = (ushort)uVar16;
          auVar75._4_2_ = (short)uVar17;
          auVar75._6_2_ = 0;
          auVar75._8_2_ = (short)((ulong)uVar53 >> 0x20);
          auVar75._10_2_ = 0;
          auVar75._12_2_ = (short)((ulong)uVar53 >> 0x30);
          auVar75._14_2_ = 0;
          auVar61._2_2_ = 0;
          auVar61._0_2_ = (ushort)uVar64;
          auVar61._4_2_ = (short)uVar76;
          auVar61._6_2_ = 0;
          auVar61._8_2_ = (short)((ulong)uVar98 >> 0x20);
          auVar61._10_2_ = 0;
          auVar61._12_2_ = (short)((ulong)uVar98 >> 0x30);
          auVar61._14_2_ = 0;
          auVar68._2_2_ = 0;
          auVar68._0_2_ = uVar42;
          auVar68._4_2_ = uVar46;
          auVar68._6_2_ = 0;
          auVar68._8_2_ = (short)((ulong)uVar112 >> 0x20);
          auVar68._10_2_ = 0;
          auVar68._12_2_ = (short)((ulong)uVar112 >> 0x30);
          auVar68._14_2_ = 0;
          auVar74._2_2_ = 0;
          auVar74._0_2_ = uVar41;
          auVar74._4_2_ = uVar45;
          auVar74._6_2_ = 0;
          auVar74._8_2_ = (short)((ulong)uVar84 >> 0x20);
          auVar74._10_2_ = 0;
          auVar74._12_2_ = (short)((ulong)uVar84 >> 0x30);
          auVar74._14_2_ = 0;
          auVar85._2_2_ = 0;
          auVar85._0_2_ = (ushort)((ulong)uVar16 >> 0x20);
          auVar85._4_2_ = (short)((ulong)uVar17 >> 0x20);
          auVar85._6_2_ = 0;
          auVar85._8_2_ = auVar59._4_2_;
          auVar85._10_2_ = 0;
          auVar85._12_2_ = (short)((ulong)uVar70 >> 0x20);
          auVar85._14_2_ = 0;
          auVar59 = NEON_ucvtf(auVar75,4);
          auVar86._2_2_ = 0;
          auVar86._0_2_ = (ushort)((ulong)uVar64 >> 0x20);
          auVar86._4_2_ = (short)((ulong)uVar76 >> 0x20);
          auVar86._6_2_ = 0;
          auVar86._8_2_ = (short)((ulong)uVar80 >> 0x20);
          auVar86._10_2_ = 0;
          auVar86._12_2_ = (short)((ulong)uVar15 >> 0x20);
          auVar86._14_2_ = 0;
          auVar65._6_2_ = 0;
          auVar65._0_6_ = CONCAT24(auVar77._2_2_,auVar77._0_4_) & 0xffff0000ffff;
          auVar65._8_2_ = (short)((ulong)*(undefined8 *)(*pauVar25 + 4) >> 0x10);
          auVar65._10_2_ = 0;
          auVar65._12_2_ = (short)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x10);
          auVar65._14_2_ = 0;
          auVar77 = NEON_ucvtf(auVar65,4);
          auVar62 = NEON_ucvtf(auVar61,4);
          auVar65 = NEON_ucvtf(auVar68,4);
          auVar75 = NEON_ucvtf(auVar74,4);
          auVar57 = NEON_ucvtf(auVar85,4);
          auVar87 = NEON_ucvtf(auVar86,4);
          in_q31._0_4_ = fVar103 + auVar57._0_4_ * fVar69;
          in_q31._4_4_ = fVar103 + auVar57._4_4_ * fVar69;
          in_q31._8_4_ = fStack_108 + auVar57._8_4_ * fVar69;
          in_q31._12_4_ = fStack_104 + auVar57._12_4_ * fVar69;
          fVar60 = fVar60 + (fVar97 + auVar59._0_4_ * fVar58 + fVar97 + auVar114._0_4_ * fVar58) *
                            0.5;
          fVar63 = fVar63 + (fVar97 + auVar59._4_4_ * fVar58 + fVar97 + auVar114._4_4_ * fVar58) *
                            0.5;
          fVar50 = fVar50 + (fVar79 + auVar59._8_4_ * fVar82 + fVar79 + auVar114._8_4_ * fVar82) *
                            0.5;
          fVar52 = fVar52 + (fVar97 + auVar59._12_4_ * fVar83 +
                            (float)((ulong)uStack_e8 >> 0x20) + auVar114._12_4_ * fVar83) * 0.5;
          fVar56 = fVar56 + (fVar97 + auVar62._0_4_ * fVar58 + fVar97 + auVar54._0_4_ * fVar58) *
                            0.5;
          fVar89 = fVar89 + (fVar97 + auVar62._4_4_ * fVar58 + fVar97 + auVar54._4_4_ * fVar58) *
                            0.5;
          fVar91 = fVar91 + (fVar79 + auVar62._8_4_ * fVar82 + fVar79 + auVar54._8_4_ * fVar82) *
                            0.5;
          fVar93 = fVar93 + (fVar97 + auVar62._12_4_ * fVar83 + fVar97 + auVar54._12_4_ * fVar83) *
                            0.5;
          fVar92 = fVar92 + (fVar103 + auVar65._0_4_ * fVar115 + fVar103 + auVar71._0_4_ * fVar115)
                            * 0.5;
          fVar94 = fVar94 + (fVar103 + auVar65._4_4_ * fVar115 + fVar103 + auVar71._4_4_ * fVar115)
                            * 0.5;
          fVar95 = fVar95 + (fVar116 + auVar65._8_4_ * fVar115 + fVar116 + auVar71._8_4_ * fVar115)
                            * 0.5;
          fVar96 = fVar96 + (fVar117 + auVar65._12_4_ * fVar115 + fVar117 + auVar71._12_4_ * fVar115
                            ) * 0.5;
          fVar99 = fVar99 + (fVar103 + auVar75._0_4_ * fVar115 + fVar103 + auVar67._0_4_ * fVar115)
                            * 0.5;
          fVar100 = fVar100 + (fVar103 + auVar75._4_4_ * fVar115 + fVar103 + auVar67._4_4_ * fVar115
                              ) * 0.5;
          fVar101 = fVar101 + (fVar116 + auVar75._8_4_ * fVar115 + fVar116 + auVar67._8_4_ * fVar115
                              ) * 0.5;
          fVar102 = fVar102 + (fVar117 + auVar75._12_4_ * fVar115 +
                              fVar117 + auVar67._12_4_ * fVar115) * 0.5;
          fVar104 = fVar104 + (in_q31._0_4_ + fVar103 + auVar73._0_4_ * fVar69) * 0.5;
          fVar105 = fVar105 + (in_q31._4_4_ + fVar103 + auVar73._4_4_ * fVar69) * 0.5;
          fVar106 = fVar106 + (in_q31._8_4_ + fStack_108 + auVar73._8_4_ * fVar69) * 0.5;
          fVar107 = fVar107 + (in_q31._12_4_ + fStack_104 + auVar73._12_4_ * fVar69) * 0.5;
          fVar108 = fVar108 + (fVar103 + auVar87._0_4_ * fVar69 + fVar103 + auVar77._0_4_ * fVar69)
                              * 0.5;
          fVar109 = fVar109 + (fVar103 + auVar87._4_4_ * fVar69 + fVar103 + auVar77._4_4_ * fVar69)
                              * 0.5;
          fVar110 = fVar110 + (fStack_108 + auVar87._8_4_ * fVar69 +
                              fStack_108 + auVar77._8_4_ * fVar69) * 0.5;
          fVar111 = fVar111 + (fStack_104 + auVar87._12_4_ * fVar69 +
                              fStack_104 + auVar77._12_4_ * fVar69) * 0.5;
        } while (lVar37 != 0);
        lVar31 = (uVar36 - uVar38) + lVar31;
        fVar69 = fVar108 + fVar104 + fVar109 + fVar105 + fVar110 + fVar106 + fVar111 + fVar107;
        auVar57 = ZEXT416((uint)(fVar99 + fVar92 + fVar100 + fVar94 +
                                fVar101 + fVar95 + fVar102 + fVar96));
        uVar36 = (ulong)(uint)(fVar56 + fVar60 + fVar89 + fVar63 + fVar91 + fVar50 + fVar93 + fVar52
                              );
      }
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar36;
      lVar35 = lVar35 - lVar31;
      puVar33 = (ushort *)(*(long *)(this + 0x98) + lVar31 * 0x10 + 6);
      fVar58 = 1.0 / *(float *)(this + 0x28);
      fVar60 = 1.0 / *(float *)(this + 0x2c);
      fVar63 = 1.0 / *(float *)(this + 0x30);
      do {
        lVar35 = lVar35 + -1;
        uVar49 = NEON_ucvtf((uint)*puVar33);
        puVar5 = puVar33 + -2;
        uVar51 = NEON_ucvtf((uint)puVar33[1]);
        puVar6 = puVar33 + -1;
        uVar55 = NEON_ucvtf((uint)puVar33[2]);
        uVar88 = NEON_ucvtf((uint)puVar33[-3]);
        puVar33 = puVar33 + 8;
        uVar90 = NEON_ucvtf((uint)*puVar5);
        fVar50 = (float)NEON_fmadd(fVar58,uVar49,fVar97);
        uVar49 = NEON_ucvtf((uint)*puVar6);
        fVar52 = (float)NEON_fmadd(fVar60,uVar51,*(undefined4 *)(this + 0xc));
        fVar56 = (float)NEON_fmadd(fVar63,uVar55,fVar103);
        fVar89 = (float)NEON_fmadd(fVar58,uVar88,fVar97);
        fVar91 = (float)NEON_fmadd(fVar60,uVar90,*(undefined4 *)(this + 0xc));
        fVar93 = (float)NEON_fmadd(fVar63,uVar49,fVar103);
        auVar59._0_4_ = (float)NEON_fmadd(fVar89 + fVar50,0x3f000000,auVar59._0_4_);
        auVar57._0_4_ = NEON_fmadd(fVar91 + fVar52,0x3f000000,auVar57._0_4_);
        fVar69 = (float)NEON_fmadd(fVar93 + fVar56,0x3f000000,fVar69);
      } while (lVar35 != 0);
    }
  }
  fVar97 = 1.0 / (float)iVar10;
  local_c0[0] = auVar59._0_4_ * fVar97;
  local_c0[1] = auVar57._0_4_ * fVar97;
  local_c0[2] = fVar69 * fVar97;
  if (param_1 < param_2) {
    fVar69 = local_c0[param_3];
    lVar31 = (long)param_2 - (long)param_1;
    uVar36 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_1 << 6;
    uVar38 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
    uVar34 = (ulong)(uint)param_1;
    do {
      if (this[0x40] == (btQuantizedBvh)0x0) {
        puVar32 = (undefined8 *)(*(long *)(this + 0x58) + uVar36);
        lVar35 = *(long *)(this + 0x58) + uVar38 * 4;
        uVar64 = puVar32[2];
        fVar97 = *(float *)(lVar35 + 0x18);
        uVar70 = *puVar32;
        fVar103 = *(float *)(lVar35 + 8);
      }
      else {
        puVar33 = (ushort *)(*(long *)(this + 0x98) + uVar38);
        fVar97 = (float)NEON_ucvtf((uint)puVar33[5]);
        uVar64 = NEON_ucvtf((ulong)CONCAT24(puVar33[4],(uint)puVar33[3]),4);
        uVar70 = NEON_ucvtf((ulong)CONCAT24(puVar33[1],(uint)*puVar33),4);
        fVar103 = (float)*(undefined8 *)(this + 0x28);
        fVar58 = (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
        fVar97 = *(float *)(this + 0x10) + fVar97 / *(float *)(this + 0x30);
        fVar60 = (float)NEON_ucvtf((uint)puVar33[2]);
        fVar63 = (float)*(undefined8 *)(this + 8);
        fVar50 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
        uVar64 = CONCAT44(fVar50 + (float)((ulong)uVar64 >> 0x20) / fVar58,
                          fVar63 + (float)uVar64 / fVar103);
        uVar70 = CONCAT44(fVar50 + (float)((ulong)uVar70 >> 0x20) / fVar58,
                          fVar63 + (float)uVar70 / fVar103);
        fVar103 = *(float *)(this + 0x10) + fVar60 / *(float *)(this + 0x30);
      }
      local_c4 = 0;
      local_d0 = CONCAT44(((float)((ulong)uVar70 >> 0x20) + (float)((ulong)uVar64 >> 0x20)) *
                          SUB164(ZEXT816(0x3f0000003f000000),4),
                          ((float)uVar70 + (float)uVar64) * SUB164(ZEXT816(0x3f0000003f000000),0));
      local_c8 = (fVar103 + fVar97) * 0.5;
      if (fVar69 < *(float *)((long)&local_d0 + (long)param_3 * 4)) {
        if (this[0x40] == (btQuantizedBvh)0x0) {
          uVar40 = -(uVar34 >> 0x1f) & 0xffffffc000000000 | uVar34 << 6;
          puVar32 = (undefined8 *)(*(long *)(this + 0x58) + uVar40);
          pauVar9 = (undefined (*) [16])(*(long *)(this + 0x58) + uVar36);
          auVar59 = *(undefined (*) [16])(puVar32 + 4);
          auVar57 = *(undefined (*) [16])(puVar32 + 6);
          uVar70 = puVar32[1];
          uVar64 = *puVar32;
          auVar77 = *(undefined (*) [16])(puVar32 + 2);
          auVar54 = pauVar9[2];
          auVar71 = pauVar9[3];
          *(long *)(pauVar9[2] + 8) = auVar59._8_8_;
          *(long *)pauVar9[2] = auVar59._0_8_;
          *(long *)(pauVar9[3] + 8) = auVar57._8_8_;
          *(long *)pauVar9[3] = auVar57._0_8_;
          auVar59 = *pauVar9;
          auVar57 = pauVar9[1];
          *(undefined8 *)(*pauVar9 + 8) = uVar70;
          *(undefined8 *)*pauVar9 = uVar64;
          *(long *)(pauVar9[1] + 8) = auVar77._8_8_;
          *(long *)pauVar9[1] = auVar77._0_8_;
          uStack_88 = auVar54._8_8_;
          local_90 = auVar54._0_8_;
          uStack_78 = auVar71._8_8_;
          uStack_80 = auVar71._0_8_;
          uStack_a8 = auVar59._8_8_;
          local_b0 = auVar59._0_8_;
          uStack_98 = auVar57._8_8_;
          uStack_a0 = auVar57._0_8_;
          puVar32 = (undefined8 *)(*(long *)(this + 0x58) + uVar40);
          puVar32[1] = uStack_a8;
          *puVar32 = local_b0;
          puVar32[3] = uStack_98;
          puVar32[2] = uStack_a0;
          puVar32[5] = uStack_88;
          puVar32[4] = local_90;
          puVar32[7] = uStack_78;
          puVar32[6] = uStack_80;
        }
        else {
          uVar40 = -(uVar34 >> 0x1f) & 0xfffffff000000000 | uVar34 << 4;
          lVar35 = *(long *)(this + 0x98);
          auVar59 = *(undefined (*) [16])(lVar35 + uVar38);
          auVar57 = *(undefined (*) [16])(lVar35 + uVar40);
          ((undefined8 *)(lVar35 + uVar38))[1] = auVar57._8_8_;
          *(undefined8 *)(lVar35 + uVar38) = auVar57._0_8_;
          puVar32 = (undefined8 *)(*(long *)(this + 0x98) + uVar40);
          puVar32[1] = auVar59._8_8_;
          *puVar32 = auVar59._0_8_;
        }
        uVar34 = (ulong)((int)uVar34 + 1);
      }
      lVar31 = lVar31 + -1;
      uVar36 = uVar36 + 0x40;
      uVar38 = uVar38 + 0x10;
    } while (lVar31 != 0);
  }
  iVar8 = iVar10 / 3 + param_1;
  iVar30 = (int)uVar34;
  bVar1 = iVar30 < ~(iVar10 / 3) + param_2;
  bVar29 = false;
  if (bVar1) {
    bVar29 = iVar30 - iVar8 < 0;
  }
  iVar10 = param_1 + (iVar10 >> 1);
  if ((bVar1 && iVar30 != iVar8) && bVar29 == (bVar1 && SBORROW4(iVar30,iVar8))) {
    iVar10 = iVar30;
  }
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}


