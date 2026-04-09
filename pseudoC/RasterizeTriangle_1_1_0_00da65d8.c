// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<1,1,0>
// Entry Point: 00da65d8
// Size: 2156 bytes
// Signature: int __thiscall RasterizeTriangle<1,1,0>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1, 1,
   0>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1,1,0>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  unkbyte9 Var49;
  long lVar50;
  int iVar51;
  undefined (*pauVar52) [16];
  byte bVar53;
  int iVar54;
  undefined auVar55 [12];
  undefined auVar57 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  byte bVar75;
  byte bVar77;
  byte bVar78;
  float fVar76;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  float fVar88;
  undefined auVar89 [12];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar90 [12];
  undefined auVar101 [16];
  undefined auVar91 [12];
  undefined auVar103 [16];
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  float fVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  undefined auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar142;
  int iVar143;
  undefined auVar132 [12];
  int iVar144;
  undefined auVar136 [16];
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar140 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined uVar150;
  undefined uVar151;
  undefined uVar152;
  undefined uVar153;
  undefined uVar154;
  undefined uVar155;
  undefined uVar156;
  undefined uVar157;
  undefined uVar158;
  undefined uVar159;
  undefined uVar160;
  undefined uVar161;
  undefined uVar162;
  undefined uVar163;
  undefined uVar164;
  undefined uVar165;
  undefined auVar166 [12];
  int iVar170;
  undefined auVar168 [16];
  undefined auVar169 [16];
  undefined auVar171 [12];
  int iVar179;
  undefined auVar172 [12];
  undefined auVar173 [12];
  int iVar178;
  undefined auVar174 [16];
  int iVar180;
  undefined auVar177 [16];
  int iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  undefined8 uVar185;
  undefined8 uVar186;
  int iVar187;
  int iVar193;
  undefined auVar188 [12];
  int iVar194;
  undefined auVar189 [12];
  undefined auVar191 [16];
  byte bVar195;
  undefined uVar196;
  byte bVar197;
  undefined uVar198;
  byte bVar199;
  undefined uVar200;
  byte bVar201;
  undefined uVar202;
  undefined uVar203;
  undefined uVar204;
  undefined uVar205;
  undefined uVar206;
  undefined uVar207;
  undefined uVar208;
  undefined uVar209;
  undefined uVar210;
  undefined uVar211;
  undefined uVar212;
  undefined uVar213;
  undefined uVar214;
  byte bVar215;
  undefined auVar216 [12];
  byte bVar220;
  byte bVar221;
  byte bVar222;
  undefined auVar217 [16];
  undefined auVar219 [16];
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  undefined auVar223 [16];
  undefined auVar239 [16];
  undefined uVar240;
  undefined uVar241;
  undefined uVar242;
  undefined uVar243;
  undefined uVar244;
  undefined uVar245;
  undefined uVar246;
  undefined uVar247;
  undefined uVar248;
  undefined uVar249;
  undefined uVar250;
  undefined uVar251;
  undefined uVar252;
  undefined uVar253;
  undefined uVar254;
  undefined uVar255;
  undefined uVar256;
  undefined uVar257;
  undefined uVar258;
  undefined uVar259;
  undefined uVar260;
  undefined uVar261;
  undefined uVar262;
  undefined uVar263;
  undefined uVar264;
  undefined uVar265;
  undefined uVar266;
  undefined uVar267;
  undefined uVar268;
  undefined uVar269;
  undefined uVar270;
  undefined uVar271;
  undefined auVar272 [12];
  undefined auVar273 [16];
  undefined auVar275 [16];
  undefined auVar276 [16];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined auVar66 [16];
  undefined auVar56 [12];
  undefined auVar58 [16];
  undefined auVar74 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar102 [16];
  undefined auVar131 [12];
  undefined auVar133 [12];
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar141 [16];
  undefined auVar167 [16];
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar190 [16];
  undefined auVar192 [16];
  undefined auVar218 [16];
  undefined auVar274 [16];
  
  Var49 = _DAT_004c5130;
  lVar50 = (ulong)param_1 * 4;
  pfVar2 = (float *)(param_7 + lVar50);
  piVar3 = (int *)(param_6 + lVar50);
  piVar4 = (int *)(param_14 + lVar50);
  fVar76 = *pfVar2;
  piVar5 = (int *)(param_17 + lVar50);
  piVar6 = (int *)(param_18 + lVar50);
  fVar88 = pfVar2[4];
  piVar7 = (int *)(param_15 + lVar50);
  iVar105 = *piVar5;
  iVar130 = *piVar4;
  iVar15 = *piVar7;
  puVar8 = (undefined4 *)(param_16 + lVar50);
  iVar16 = piVar5[4];
  iVar104 = MP_INT_ABS((int)(fVar76 * 128.0));
  iVar106 = MP_INT_ABS((int)(fVar76 * 384.0));
  iVar107 = MP_INT_ABS((int)(fVar76 * 640.0));
  iVar108 = MP_INT_ABS((int)(fVar76 * 896.0));
  iVar187 = SUB164(_DAT_004c4990,0);
  iVar118 = SUB164(_DAT_004c4990,4);
  iVar119 = SUB164(_DAT_004c4990,8);
  iVar120 = SUB164(_DAT_004c4990,0xc);
  iVar178 = piVar7[4];
  auVar97._8_4_ = 0xffffffe1;
  auVar97._0_8_ = 0xffffffe1ffffffe1;
  auVar97._12_4_ = 0xffffffe1;
  iVar179 = piVar4[4];
  piVar9 = (int *)(param_8 + lVar50);
  iVar54 = *piVar3;
  iVar128 = piVar3[4];
  auVar92._0_4_ = iVar105 + iVar15 * iVar187 + iVar104 * iVar130;
  auVar92._4_4_ = iVar105 + iVar15 * iVar118 + iVar106 * iVar130;
  auVar92._8_4_ = iVar105 + iVar15 * iVar119 + iVar107 * iVar130;
  auVar92._12_4_ = iVar105 + iVar15 * iVar120 + iVar108 * iVar130;
  uVar17 = *puVar8;
  iVar105 = MP_INT_ABS((int)(fVar88 * 128.0));
  iVar107 = MP_INT_ABS((int)(fVar88 * 384.0));
  iVar108 = MP_INT_ABS((int)(fVar88 * 640.0));
  iVar109 = MP_INT_ABS((int)(fVar88 * 896.0));
  iVar15 = *piVar9;
  uVar18 = puVar8[4];
  auVar174 = NEON_sshl(auVar92,auVar97,4);
  iVar104 = piVar9[4];
  iVar106 = *piVar6;
  auVar145._0_4_ = iVar16 + iVar178 * iVar187 + iVar105 * iVar179;
  auVar145._4_4_ = iVar16 + iVar178 * iVar118 + iVar107 * iVar179;
  auVar145._8_4_ = iVar16 + iVar178 * iVar119 + iVar108 * iVar179;
  auVar145._12_4_ = iVar16 + iVar178 * iVar120 + iVar109 * iVar179;
  iVar16 = piVar6[4];
  uVar1 = iVar15 + 1;
  uVar14 = iVar104 - 1;
  bVar80 = (byte)iVar130;
  bVar81 = (byte)((uint)iVar130 >> 8);
  bVar82 = (byte)((uint)iVar130 >> 0x10);
  bVar83 = (byte)((uint)iVar130 >> 0x18);
  bVar75 = (byte)uVar17;
  bVar77 = (byte)((uint)uVar17 >> 8);
  bVar78 = (byte)((uint)uVar17 >> 0x10);
  bVar79 = (byte)((uint)uVar17 >> 0x18);
  iVar178 = CONCAT13(auVar174[3] & bVar79,
                     CONCAT12(auVar174[2] & bVar78,
                              CONCAT11(auVar174[1] & bVar77,auVar174[0] & bVar75)));
  auVar171._0_8_ =
       CONCAT17(auVar174[7] & bVar79,
                CONCAT16(auVar174[6] & bVar78,
                         CONCAT15(auVar174[5] & bVar77,CONCAT14(auVar174[4] & bVar75,iVar178))));
  auVar171[8] = auVar174[8] & bVar75;
  auVar171[9] = auVar174[9] & bVar77;
  auVar171[10] = auVar174[10] & bVar78;
  auVar171[11] = auVar174[11] & bVar79;
  auVar273[12] = auVar174[12] & bVar75;
  auVar273._0_12_ = auVar171;
  auVar273[13] = auVar174[13] & bVar77;
  auVar273[14] = auVar174[14] & bVar78;
  auVar273[15] = auVar174[15] & bVar79;
  auVar217 = NEON_sshl(auVar145,auVar97,4);
  iVar105 = iVar54 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 0x2000;
  iVar181 = auVar92._0_4_ +
            CONCAT13(auVar174[3] & bVar83,
                     CONCAT12(auVar174[2] & bVar82,
                              CONCAT11(auVar174[1] & bVar81,auVar174[0] & bVar80)));
  iVar182 = auVar92._4_4_ +
            CONCAT13(auVar174[7] & bVar83,
                     CONCAT12(auVar174[6] & bVar82,
                              CONCAT11(auVar174[5] & bVar81,auVar174[4] & bVar80)));
  iVar183 = auVar92._8_4_ +
            CONCAT13(auVar174[11] & bVar83,
                     CONCAT12(auVar174[10] & bVar82,
                              CONCAT11(auVar174[9] & bVar81,auVar174[8] & bVar80)));
  iVar184 = auVar92._12_4_ +
            CONCAT13(auVar174[15] & bVar83,
                     CONCAT12(auVar174[14] & bVar82,
                              CONCAT11(auVar174[13] & bVar81,auVar174[12] & bVar80)));
  iVar130 = (uVar14 & (int)uVar14 >> 0x1f) + iVar128;
  bVar84 = (byte)iVar179;
  bVar85 = (byte)((uint)iVar179 >> 8);
  bVar86 = (byte)((uint)iVar179 >> 0x10);
  bVar87 = (byte)((uint)iVar179 >> 0x18);
  bVar110 = (byte)uVar18;
  bVar111 = (byte)((uint)uVar18 >> 8);
  bVar112 = (byte)((uint)uVar18 >> 0x10);
  bVar113 = (byte)((uint)uVar18 >> 0x18);
  auVar174._0_4_ = iVar54 + (int)(fVar76 * 128.0) + iVar178;
  auVar174._4_4_ = iVar54 + (int)(fVar76 * 384.0) + (int)((ulong)auVar171._0_8_ >> 0x20);
  auVar174._8_4_ = iVar54 + (int)(fVar76 * 640.0) + auVar171._8_4_;
  auVar174._12_4_ = iVar54 + (int)(fVar76 * 896.0) + auVar273._12_4_;
  iVar107 = auVar145._0_4_ +
            CONCAT13(auVar217[3] & bVar87,
                     CONCAT12(auVar217[2] & bVar86,
                              CONCAT11(auVar217[1] & bVar85,auVar217[0] & bVar84)));
  iVar108 = auVar145._4_4_ +
            CONCAT13(auVar217[7] & bVar87,
                     CONCAT12(auVar217[6] & bVar86,
                              CONCAT11(auVar217[5] & bVar85,auVar217[4] & bVar84)));
  iVar109 = auVar145._8_4_ +
            CONCAT13(auVar217[11] & bVar87,
                     CONCAT12(auVar217[10] & bVar86,
                              CONCAT11(auVar217[9] & bVar85,auVar217[8] & bVar84)));
  iVar170 = auVar145._12_4_ +
            CONCAT13(auVar217[15] & bVar87,
                     CONCAT12(auVar217[14] & bVar86,
                              CONCAT11(auVar217[13] & bVar85,auVar217[12] & bVar84)));
  iVar54 = iVar128 + (int)(fVar88 * 128.0) +
           CONCAT13(auVar217[3] & bVar113,
                    CONCAT12(auVar217[2] & bVar112,
                             CONCAT11(auVar217[1] & bVar111,auVar217[0] & bVar110)));
  uVar150 = (undefined)iVar54;
  uVar151 = (undefined)((uint)iVar54 >> 8);
  uVar152 = (undefined)((uint)iVar54 >> 0x10);
  uVar153 = (undefined)((uint)iVar54 >> 0x18);
  iVar178 = iVar128 + (int)(fVar88 * 384.0) +
            CONCAT13(auVar217[7] & bVar113,
                     CONCAT12(auVar217[6] & bVar112,
                              CONCAT11(auVar217[5] & bVar111,auVar217[4] & bVar110)));
  uVar154 = (undefined)iVar178;
  uVar155 = (undefined)((uint)iVar178 >> 8);
  uVar156 = (undefined)((uint)iVar178 >> 0x10);
  uVar157 = (undefined)((uint)iVar178 >> 0x18);
  iVar179 = iVar128 + (int)(fVar88 * 640.0) +
            CONCAT13(auVar217[11] & bVar113,
                     CONCAT12(auVar217[10] & bVar112,
                              CONCAT11(auVar217[9] & bVar111,auVar217[8] & bVar110)));
  uVar158 = (undefined)iVar179;
  uVar159 = (undefined)((uint)iVar179 >> 8);
  uVar160 = (undefined)((uint)iVar179 >> 0x10);
  uVar161 = (undefined)((uint)iVar179 >> 0x18);
  iVar128 = iVar128 + (int)(fVar88 * 896.0) +
            CONCAT13(auVar217[15] & bVar113,
                     CONCAT12(auVar217[14] & bVar112,
                              CONCAT11(auVar217[13] & bVar111,auVar217[12] & bVar110)));
  uVar162 = (undefined)iVar128;
  uVar163 = (undefined)((uint)iVar128 >> 8);
  uVar164 = (undefined)((uint)iVar128 >> 0x10);
  uVar165 = (undefined)((uint)iVar128 >> 0x18);
  bVar53 = SUB161(_DAT_004c4480,0);
  bVar224 = SUB161(_DAT_004c4480,1);
  bVar225 = SUB161(_DAT_004c4480,2);
  bVar226 = SUB161(_DAT_004c4480,3);
  bVar227 = SUB161(_DAT_004c4480,4);
  bVar228 = SUB161(_DAT_004c4480,5);
  bVar229 = SUB161(_DAT_004c4480,6);
  bVar230 = SUB161(_DAT_004c4480,7);
  bVar231 = SUB161(_DAT_004c4480,8);
  bVar232 = SUB161(_DAT_004c4480,9);
  bVar233 = SUB161(_DAT_004c4480,10);
  bVar234 = SUB161(_DAT_004c4480,0xb);
  bVar235 = SUB161(_DAT_004c4480,0xc);
  bVar236 = SUB161(_DAT_004c4480,0xd);
  bVar237 = SUB161(_DAT_004c4480,0xe);
  bVar238 = SUB161(_DAT_004c4480,0xf);
  if (param_4 < param_3) {
    if (param_5 <= param_3) {
      _UNK_004c5139 = 0xf0b07030e0a06;
      return 1;
    }
    auVar217._8_4_ = 0xfffffff8;
    auVar217._0_8_ = 0xfffffff8fffffff8;
    auVar217._12_4_ = 0xfffffff8;
    uVar186 = *(undefined8 *)(param_11 + 8);
    uVar185 = *(undefined8 *)param_11;
    auVar149._8_4_ = 0x20;
    auVar149._0_8_ = 0x2000000020;
    auVar149._12_4_ = 0x20;
    auVar65._8_4_ = 0xffffffe1;
    auVar65._0_8_ = 0xffffffe1ffffffe1;
    auVar65._12_4_ = 0xffffffe1;
    while( true ) {
      uVar10 = iVar130 >> 0xd;
      iVar130 = iVar130 + uVar14;
      uVar12 = param_2 - 1U;
      if ((int)uVar10 <= (int)(param_2 - 1U)) {
        uVar12 = uVar10;
      }
      auVar92 = NEON_sshl(auVar174,auVar217,4);
      iVar54 = param_2;
      if (iVar105 >> 0xd <= param_2) {
        iVar54 = iVar105 >> 0xd;
      }
      uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
      iVar105 = iVar105 + uVar1;
      auVar94[1] = uVar151;
      auVar94[0] = uVar150;
      auVar94[2] = uVar152;
      auVar94[3] = uVar153;
      auVar94[4] = uVar154;
      auVar94[5] = uVar155;
      auVar94[6] = uVar156;
      auVar94[7] = uVar157;
      auVar94[8] = uVar158;
      auVar94[9] = uVar159;
      auVar94[10] = uVar160;
      auVar94[11] = uVar161;
      auVar94[12] = uVar162;
      auVar94[13] = uVar163;
      auVar94[14] = uVar164;
      auVar94[15] = uVar165;
      auVar145 = NEON_sshl(auVar94,auVar217,4);
      lVar50 = (long)(int)(uVar12 + param_3);
      auVar147._0_4_ = auVar92._0_4_ + uVar12 * -0x20;
      auVar147._4_4_ = auVar92._4_4_ + uVar12 * -0x20;
      auVar147._8_4_ = auVar92._8_4_ + uVar12 * -0x20;
      auVar147._12_4_ = auVar92._12_4_ + uVar12 * -0x20;
      fVar127 = (float)uVar12 * param_12;
      pauVar52 = (undefined (*) [16])
                 (*(long *)(this + 0x138) + (long)(int)(uVar12 + param_3) * 0x30);
      auVar146._0_4_ = auVar145._0_4_ + uVar12 * -0x20;
      auVar146._4_4_ = auVar145._4_4_ + uVar12 * -0x20;
      auVar146._8_4_ = auVar145._8_4_ + uVar12 * -0x20;
      auVar146._12_4_ = auVar145._12_4_ + uVar12 * -0x20;
      auVar273 = *(undefined (*) [16])param_10;
      auVar92 = NEON_smax(auVar147,ZEXT216(0),4);
      auVar145 = NEON_smax(auVar146,ZEXT216(0),4);
      fVar76 = (float)uVar185 + fVar127;
      fVar123 = (float)((ulong)uVar185 >> 0x20);
      fVar88 = fVar123 + fVar127;
      fVar117 = (float)uVar186 + fVar127;
      fVar124 = (float)((ulong)uVar186 >> 0x20);
      fVar127 = fVar124 + fVar127;
      while( true ) {
        lVar50 = lVar50 + 1;
        auVar97 = *pauVar52;
        auVar93._0_4_ = auVar273._0_4_ - auVar97._0_4_;
        auVar93._4_4_ = auVar273._4_4_ - auVar97._4_4_;
        auVar93._8_4_ = auVar273._8_4_ - auVar97._8_4_;
        auVar93._12_4_ = auVar273._12_4_ - auVar97._12_4_;
        auVar94 = NEON_cmlt(auVar93,0,4);
        auVar95[0] = auVar94[0] & bVar53;
        auVar95[1] = auVar94[1] & bVar224;
        auVar95[2] = auVar94[2] & bVar225;
        auVar95[3] = auVar94[3] & bVar226;
        auVar95[4] = auVar94[4] & bVar227;
        auVar95[5] = auVar94[5] & bVar228;
        auVar95[6] = auVar94[6] & bVar229;
        auVar95[7] = auVar94[7] & bVar230;
        auVar95[8] = auVar94[8] & bVar231;
        auVar95[9] = auVar94[9] & bVar232;
        auVar95[10] = auVar94[10] & bVar233;
        auVar95[11] = auVar94[11] & bVar234;
        auVar95[12] = auVar94[12] & bVar235;
        auVar95[13] = auVar94[13] & bVar236;
        auVar95[14] = auVar94[14] & bVar237;
        auVar95[15] = auVar94[15] & bVar238;
        auVar94 = NEON_ext(auVar95,auVar95,8,1);
        if (CONCAT13(auVar94[3] | auVar95[3] | auVar94[7] | auVar95[7],
                     CONCAT12(auVar94[2] | auVar95[2] | auVar94[6] | auVar95[6],
                              CONCAT11(auVar94[1] | auVar95[1] | auVar94[5] | auVar95[5],
                                       auVar94[0] | auVar95[0] | auVar94[4] | auVar95[4]))) != 0xf)
        {
          auVar94 = NEON_smin(auVar145,auVar149,4);
          auVar147 = NEON_smin(auVar92,auVar149,4);
          auVar94 = NEON_smax(auVar94,ZEXT216(0),4);
          auVar147 = NEON_smax(auVar147,ZEXT216(0),4);
          auVar31[8] = 0xff;
          auVar31._0_8_ = 0xffffffffffffffff;
          auVar31[9] = 0xff;
          auVar31[10] = 0xff;
          auVar31[11] = 0xff;
          auVar31[12] = 0xff;
          auVar31[13] = 0xff;
          auVar31[14] = 0xff;
          auVar31[15] = 0xff;
          auVar94 = NEON_sshl(auVar31,auVar94,4);
          auVar32[8] = 0xff;
          auVar32._0_8_ = 0xffffffffffffffff;
          auVar32[9] = 0xff;
          auVar32[10] = 0xff;
          auVar32[11] = 0xff;
          auVar32[12] = 0xff;
          auVar32[13] = 0xff;
          auVar32[14] = 0xff;
          auVar32[15] = 0xff;
          auVar147 = NEON_sshl(auVar32,auVar147,4);
          auVar96[0] = auVar94[0] & ~auVar147[0];
          auVar96[1] = auVar94[1] & ~auVar147[1];
          auVar96[2] = auVar94[2] & ~auVar147[2];
          auVar96[3] = auVar94[3] & ~auVar147[3];
          auVar96[4] = auVar94[4] & ~auVar147[4];
          auVar96[5] = auVar94[5] & ~auVar147[5];
          auVar96[6] = auVar94[6] & ~auVar147[6];
          auVar96[7] = auVar94[7] & ~auVar147[7];
          auVar96[8] = auVar94[8] & ~auVar147[8];
          auVar96[9] = auVar94[9] & ~auVar147[9];
          auVar96[10] = auVar94[10] & ~auVar147[10];
          auVar96[11] = auVar94[11] & ~auVar147[11];
          auVar96[12] = auVar94[12] & ~auVar147[12];
          auVar96[13] = auVar94[13] & ~auVar147[13];
          auVar96[14] = auVar94[14] & ~auVar147[14];
          auVar96[15] = auVar94[15] & ~auVar147[15];
          auVar19._4_4_ = fVar88;
          auVar19._0_4_ = fVar76;
          auVar19._8_4_ = fVar117;
          auVar19._12_4_ = fVar127;
          auVar147 = NEON_fmin(auVar19,auVar273,4);
          auVar34[9] = 6;
          auVar34._0_9_ = Var49;
          auVar34[10] = 10;
          auVar34[11] = 0xe;
          auVar34[12] = 3;
          auVar34[13] = 7;
          auVar34[14] = 0xb;
          auVar34[15] = 0xf;
          auVar94 = a64_TBL(ZEXT816(0),auVar96,auVar34);
          auVar147 = NEON_fcmge(auVar147,auVar97,4);
          auVar97 = NEON_cmeq(auVar94,0,2);
          if (CONCAT17(auVar147[15] & ~auVar97[15] | auVar147[7] & ~auVar97[7],
                       CONCAT16(auVar147[14] & ~auVar97[14] | auVar147[6] & ~auVar97[6],
                                CONCAT15(auVar147[13] & ~auVar97[13] | auVar147[5] & ~auVar97[5],
                                         CONCAT14(auVar147[12] & ~auVar97[12] |
                                                  auVar147[4] & ~auVar97[4],
                                                  CONCAT13(auVar147[11] & ~auVar97[11] |
                                                           auVar147[3] & ~auVar97[3],
                                                           CONCAT12(auVar147[10] & ~auVar97[10] |
                                                                    auVar147[2] & ~auVar97[2],
                                                                    CONCAT11(auVar147[9] &
                                                                             ~auVar97[9] |
                                                                             auVar147[1] &
                                                                             ~auVar97[1],
                                                                             auVar147[8] &
                                                                             ~auVar97[8] |
                                                                             auVar147[0] &
                                                                             ~auVar97[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (iVar54 + param_3 <= lVar50) break;
        fVar76 = param_12 + fVar76;
        fVar88 = param_12 + fVar88;
        fVar117 = param_12 + fVar117;
        fVar127 = param_12 + fVar127;
        auVar92 = NEON_uqsub(auVar92,auVar149,2);
        pauVar52 = pauVar52 + 3;
        auVar145 = NEON_uqsub(auVar145,auVar149,2);
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar98._0_4_ = iVar181 - iVar106;
      auVar98._4_4_ = iVar182 - iVar106;
      auVar98._8_4_ = iVar183 - iVar106;
      auVar98._12_4_ = iVar184 - iVar106;
      auVar148._0_4_ = iVar107 - iVar16;
      auVar148._4_4_ = iVar108 - iVar16;
      auVar148._8_4_ = iVar109 - iVar16;
      auVar148._12_4_ = iVar170 - iVar16;
      iVar178 = auVar174._4_4_;
      iVar179 = auVar174._8_4_;
      iVar108 = auVar174._12_4_;
      auVar92 = NEON_sshl(auVar98,auVar65,4);
      auVar145 = NEON_sshl(auVar148,auVar65,4);
      uVar185 = CONCAT44(param_13 + fVar123,param_13 + (float)uVar185);
      uVar186 = CONCAT44(param_13 + fVar124,param_13 + (float)uVar186);
      iVar181 = CONCAT13(bVar83 & auVar92[3],
                         CONCAT12(bVar82 & auVar92[2],
                                  CONCAT11(bVar81 & auVar92[1],bVar80 & auVar92[0])));
      auVar172._0_8_ =
           CONCAT17(bVar83 & auVar92[7],
                    CONCAT16(bVar82 & auVar92[6],
                             CONCAT15(bVar81 & auVar92[5],CONCAT14(bVar80 & auVar92[4],iVar181))));
      auVar172[8] = bVar80 & auVar92[8];
      auVar172[9] = bVar81 & auVar92[9];
      auVar172[10] = bVar82 & auVar92[10];
      auVar172[11] = bVar83 & auVar92[11];
      auVar175[12] = bVar80 & auVar92[12];
      auVar175._0_12_ = auVar172;
      auVar175[13] = bVar81 & auVar92[13];
      auVar175[14] = bVar82 & auVar92[14];
      auVar175[15] = bVar83 & auVar92[15];
      iVar128 = CONCAT13(bVar79 & auVar92[3],
                         CONCAT12(bVar78 & auVar92[2],
                                  CONCAT11(bVar77 & auVar92[1],bVar75 & auVar92[0])));
      auVar131._0_8_ =
           CONCAT17(bVar79 & auVar92[7],
                    CONCAT16(bVar78 & auVar92[6],
                             CONCAT15(bVar77 & auVar92[5],CONCAT14(bVar75 & auVar92[4],iVar128))));
      auVar131[8] = bVar75 & auVar92[8];
      auVar131[9] = bVar77 & auVar92[9];
      auVar131[10] = bVar78 & auVar92[10];
      auVar131[11] = bVar79 & auVar92[11];
      auVar134[12] = bVar75 & auVar92[12];
      auVar134._0_12_ = auVar131;
      auVar134[13] = bVar77 & auVar92[13];
      auVar134[14] = bVar78 & auVar92[14];
      auVar134[15] = bVar79 & auVar92[15];
      *(undefined8 *)(param_11 + 8) = uVar186;
      *(undefined8 *)param_11 = uVar185;
      iVar181 = iVar181 + auVar98._0_4_;
      iVar182 = (int)((ulong)auVar172._0_8_ >> 0x20) + auVar98._4_4_;
      iVar183 = auVar172._8_4_ + auVar98._8_4_;
      iVar184 = auVar175._12_4_ + auVar98._12_4_;
      iVar107 = CONCAT13(bVar87 & auVar145[3],
                         CONCAT12(bVar86 & auVar145[2],
                                  CONCAT11(bVar85 & auVar145[1],bVar84 & auVar145[0])));
      auVar89._0_8_ =
           CONCAT17(bVar87 & auVar145[7],
                    CONCAT16(bVar86 & auVar145[6],
                             CONCAT15(bVar85 & auVar145[5],CONCAT14(bVar84 & auVar145[4],iVar107))))
      ;
      auVar89[8] = bVar84 & auVar145[8];
      auVar89[9] = bVar85 & auVar145[9];
      auVar89[10] = bVar86 & auVar145[10];
      auVar89[11] = bVar87 & auVar145[11];
      auVar99[12] = bVar84 & auVar145[12];
      auVar99._0_12_ = auVar89;
      auVar99[13] = bVar85 & auVar145[13];
      auVar99[14] = bVar86 & auVar145[14];
      auVar99[15] = bVar87 & auVar145[15];
      iVar54 = CONCAT13(bVar113 & auVar145[3],
                        CONCAT12(bVar112 & auVar145[2],
                                 CONCAT11(bVar111 & auVar145[1],bVar110 & auVar145[0])));
      auVar272._0_8_ =
           CONCAT17(bVar113 & auVar145[7],
                    CONCAT16(bVar112 & auVar145[6],
                             CONCAT15(bVar111 & auVar145[5],CONCAT14(bVar110 & auVar145[4],iVar54)))
                   );
      auVar272[8] = bVar110 & auVar145[8];
      auVar272[9] = bVar111 & auVar145[9];
      auVar272[10] = bVar112 & auVar145[10];
      auVar272[11] = bVar113 & auVar145[11];
      auVar274[12] = bVar110 & auVar145[12];
      auVar274._0_12_ = auVar272;
      auVar274[13] = bVar111 & auVar145[13];
      auVar274[14] = bVar112 & auVar145[14];
      auVar274[15] = bVar113 & auVar145[15];
      auVar174._0_4_ = iVar15 + auVar174._0_4_ + iVar128;
      auVar174._4_4_ = iVar15 + iVar178 + (int)((ulong)auVar131._0_8_ >> 0x20);
      auVar174._8_4_ = iVar15 + iVar179 + auVar131._8_4_;
      auVar174._12_4_ = iVar15 + iVar108 + auVar134._12_4_;
      iVar107 = iVar107 + auVar148._0_4_;
      iVar108 = (int)((ulong)auVar89._0_8_ >> 0x20) + auVar148._4_4_;
      iVar109 = auVar89._8_4_ + auVar148._8_4_;
      iVar170 = auVar99._12_4_ + auVar148._12_4_;
      iVar54 = iVar104 + CONCAT13(uVar153,CONCAT12(uVar152,CONCAT11(uVar151,uVar150))) + iVar54;
      uVar150 = (undefined)iVar54;
      uVar151 = (undefined)((uint)iVar54 >> 8);
      uVar152 = (undefined)((uint)iVar54 >> 0x10);
      uVar153 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = iVar104 + CONCAT13(uVar157,CONCAT12(uVar156,CONCAT11(uVar155,uVar154))) +
               (int)((ulong)auVar272._0_8_ >> 0x20);
      uVar154 = (undefined)iVar54;
      uVar155 = (undefined)((uint)iVar54 >> 8);
      uVar156 = (undefined)((uint)iVar54 >> 0x10);
      uVar157 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = iVar104 + CONCAT13(uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158))) +
               auVar272._8_4_;
      uVar158 = (undefined)iVar54;
      uVar159 = (undefined)((uint)iVar54 >> 8);
      uVar160 = (undefined)((uint)iVar54 >> 0x10);
      uVar161 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = iVar104 + CONCAT13(uVar165,CONCAT12(uVar164,CONCAT11(uVar163,uVar162))) +
               auVar274._12_4_;
      uVar162 = (undefined)iVar54;
      uVar163 = (undefined)((uint)iVar54 >> 8);
      uVar164 = (undefined)((uint)iVar54 >> 0x10);
      uVar165 = (undefined)((uint)iVar54 >> 0x18);
    }
    return 1;
  }
  fVar76 = pfVar2[8];
  iVar170 = piVar9[8];
  iVar121 = piVar7[8];
  iVar180 = piVar5[8];
  uVar10 = iVar170 - 1;
  iVar109 = param_5;
  if (param_4 <= param_5) {
    iVar109 = param_4;
  }
  iVar194 = piVar4[8];
  bVar195 = (byte)iVar194;
  bVar197 = (byte)((uint)iVar194 >> 8);
  bVar199 = (byte)((uint)iVar194 >> 0x10);
  bVar201 = (byte)((uint)iVar194 >> 0x18);
  iVar193 = piVar3[8];
  iVar129 = MP_INT_ABS((int)(fVar76 * 128.0));
  iVar142 = MP_INT_ABS((int)(fVar76 * 384.0));
  iVar143 = MP_INT_ABS((int)(fVar76 * 640.0));
  iVar144 = MP_INT_ABS((int)(fVar76 * 896.0));
  uVar17 = puVar8[8];
  iVar51 = iVar193 + (uVar10 & (int)uVar10 >> 0x1f);
  uVar12 = param_2 - 1;
  auVar275._0_4_ = iVar180 + iVar121 * iVar187 + iVar129 * iVar194;
  auVar275._4_4_ = iVar180 + iVar121 * iVar118 + iVar142 * iVar194;
  auVar275._8_4_ = iVar180 + iVar121 * iVar119 + iVar143 * iVar194;
  auVar275._12_4_ = iVar180 + iVar121 * iVar120 + iVar144 * iVar194;
  auVar92 = NEON_sshl(auVar275,auVar97,4);
  bVar215 = (byte)uVar17;
  bVar220 = (byte)((uint)uVar17 >> 8);
  bVar221 = (byte)((uint)uVar17 >> 0x10);
  bVar222 = (byte)((uint)uVar17 >> 0x18);
  iVar187 = CONCAT13(auVar92[3] & bVar222,
                     CONCAT12(auVar92[2] & bVar221,
                              CONCAT11(auVar92[1] & bVar220,auVar92[0] & bVar215)));
  auVar188._0_8_ =
       CONCAT17(auVar92[7] & bVar222,
                CONCAT16(auVar92[6] & bVar221,
                         CONCAT15(auVar92[5] & bVar220,CONCAT14(auVar92[4] & bVar215,iVar187))));
  auVar188[8] = auVar92[8] & bVar215;
  auVar188[9] = auVar92[9] & bVar220;
  auVar188[10] = auVar92[10] & bVar221;
  auVar188[11] = auVar92[11] & bVar222;
  auVar190[12] = auVar92[12] & bVar215;
  auVar190._0_12_ = auVar188;
  auVar190[13] = auVar92[13] & bVar220;
  auVar190[14] = auVar92[14] & bVar221;
  auVar190[15] = auVar92[15] & bVar222;
  auVar191._0_4_ = iVar193 + (int)(fVar76 * 128.0) + iVar187;
  auVar191._4_4_ = iVar193 + (int)(fVar76 * 384.0) + (int)((ulong)auVar188._0_8_ >> 0x20);
  auVar191._8_4_ = iVar193 + (int)(fVar76 * 640.0) + auVar188._8_4_;
  auVar191._12_4_ = iVar193 + (int)(fVar76 * 896.0) + auVar190._12_4_;
  if (param_3 < iVar109) {
    iVar118 = CONCAT13(auVar92[3] & bVar201,
                       CONCAT12(auVar92[2] & bVar199,
                                CONCAT11(auVar92[1] & bVar197,auVar92[0] & bVar195)));
    auVar132._0_8_ =
         CONCAT17(auVar92[7] & bVar201,
                  CONCAT16(auVar92[6] & bVar199,
                           CONCAT15(auVar92[5] & bVar197,CONCAT14(auVar92[4] & bVar195,iVar118))));
    auVar132[8] = auVar92[8] & bVar195;
    auVar132[9] = auVar92[9] & bVar197;
    auVar132[10] = auVar92[10] & bVar199;
    auVar132[11] = auVar92[11] & bVar201;
    auVar135[12] = auVar92[12] & bVar195;
    auVar135._0_12_ = auVar132;
    auVar135[13] = auVar92[13] & bVar197;
    auVar135[14] = auVar92[14] & bVar199;
    auVar135[15] = auVar92[15] & bVar201;
    fVar76 = *(float *)param_11;
    fVar88 = *(float *)(param_11 + 4);
    fVar117 = *(float *)(param_11 + 8);
    fVar127 = *(float *)(param_11 + 0xc);
    auVar239._8_4_ = 0xfffffff8;
    auVar239._0_8_ = 0xfffffff8fffffff8;
    auVar239._12_4_ = 0xfffffff8;
    iVar187 = piVar6[8];
    iVar118 = auVar275._0_4_ + iVar118;
    iVar119 = auVar275._4_4_ + (int)((ulong)auVar132._0_8_ >> 0x20);
    iVar120 = auVar275._8_4_ + auVar132._8_4_;
    iVar121 = auVar275._12_4_ + auVar135._12_4_;
    auVar114._8_8_ = 0xffffffffffffffff;
    auVar114._0_8_ = 0xffffffffffffffff;
    do {
      uVar11 = iVar51 >> 0xd;
      iVar51 = iVar51 + uVar10;
      uVar13 = uVar12;
      if ((int)uVar11 <= (int)uVar12) {
        uVar13 = uVar11;
      }
      auVar92 = NEON_sshl(auVar174,auVar239,4);
      iVar180 = param_2;
      if (iVar105 >> 0xd <= param_2) {
        iVar180 = iVar105 >> 0xd;
      }
      uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
      iVar105 = iVar105 + uVar1;
      auVar145 = NEON_sshl(auVar191,auVar239,4);
      lVar50 = (long)(int)(uVar13 + param_3);
      auVar137._0_4_ = auVar92._0_4_ + uVar13 * -0x20;
      auVar137._4_4_ = auVar92._4_4_ + uVar13 * -0x20;
      auVar137._8_4_ = auVar92._8_4_ + uVar13 * -0x20;
      auVar137._12_4_ = auVar92._12_4_ + uVar13 * -0x20;
      fVar123 = (float)uVar13 * param_12;
      pauVar52 = (undefined (*) [16])
                 (*(long *)(this + 0x138) + (long)(int)(uVar13 + param_3) * 0x30);
      uVar185 = *(undefined8 *)(param_10 + 8);
      auVar122._0_4_ = auVar145._0_4_ + uVar13 * -0x20;
      auVar122._4_4_ = auVar145._4_4_ + uVar13 * -0x20;
      auVar122._8_4_ = auVar145._8_4_ + uVar13 * -0x20;
      auVar122._12_4_ = auVar145._12_4_ + uVar13 * -0x20;
      auVar92 = NEON_smax(auVar137,ZEXT216(0),4);
      auVar145 = NEON_smax(auVar122,ZEXT216(0),4);
      fVar124 = fVar123 + fVar76;
      fVar125 = fVar123 + fVar88;
      fVar126 = fVar123 + fVar117;
      fVar123 = fVar123 + fVar127;
      while( true ) {
        lVar50 = lVar50 + 1;
        auVar273 = *pauVar52;
        auVar59._0_4_ = (float)*(undefined8 *)param_10 - auVar273._0_4_;
        auVar59._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar273._4_4_;
        auVar59._8_4_ = (float)uVar185 - auVar273._8_4_;
        auVar59._12_4_ = (float)((ulong)uVar185 >> 0x20) - auVar273._12_4_;
        auVar217 = NEON_cmlt(auVar59,0,4);
        auVar60[0] = auVar217[0] & bVar53;
        auVar60[1] = auVar217[1] & bVar224;
        auVar60[2] = auVar217[2] & bVar225;
        auVar60[3] = auVar217[3] & bVar226;
        auVar60[4] = auVar217[4] & bVar227;
        auVar60[5] = auVar217[5] & bVar228;
        auVar60[6] = auVar217[6] & bVar229;
        auVar60[7] = auVar217[7] & bVar230;
        auVar60[8] = auVar217[8] & bVar231;
        auVar60[9] = auVar217[9] & bVar232;
        auVar60[10] = auVar217[10] & bVar233;
        auVar60[11] = auVar217[11] & bVar234;
        auVar60[12] = auVar217[12] & bVar235;
        auVar60[13] = auVar217[13] & bVar236;
        auVar60[14] = auVar217[14] & bVar237;
        auVar60[15] = auVar217[15] & bVar238;
        auVar217 = NEON_ext(auVar60,auVar60,8,1);
        if (CONCAT13(auVar217[3] | auVar60[3] | auVar217[7] | auVar60[7],
                     CONCAT12(auVar217[2] | auVar60[2] | auVar217[6] | auVar60[6],
                              CONCAT11(auVar217[1] | auVar60[1] | auVar217[5] | auVar60[5],
                                       auVar217[0] | auVar60[0] | auVar217[4] | auVar60[4]))) != 0xf
           ) {
          auVar35[8] = 0x20;
          auVar35._0_8_ = 0x2000000020;
          auVar35._9_3_ = 0;
          auVar35[12] = 0x20;
          auVar35._13_3_ = 0;
          auVar217 = NEON_smin(auVar145,auVar35,4);
          auVar36[8] = 0x20;
          auVar36._0_8_ = 0x2000000020;
          auVar36._9_3_ = 0;
          auVar36[12] = 0x20;
          auVar36._13_3_ = 0;
          auVar149 = NEON_smin(auVar92,auVar36,4);
          auVar20[9] = (char)((ulong)uVar185 >> 8);
          auVar20._0_9_ = *(unkbyte9 *)param_10;
          auVar20[10] = (char)((ulong)uVar185 >> 0x10);
          auVar20[11] = (char)((ulong)uVar185 >> 0x18);
          auVar20[12] = (char)((ulong)uVar185 >> 0x20);
          auVar20[13] = (char)((ulong)uVar185 >> 0x28);
          auVar20[14] = (char)((ulong)uVar185 >> 0x30);
          auVar20[15] = (char)((ulong)uVar185 >> 0x38);
          auVar21._4_4_ = fVar125;
          auVar21._0_4_ = fVar124;
          auVar21._8_4_ = fVar126;
          auVar21._12_4_ = fVar123;
          auVar97 = NEON_fmin(auVar21,auVar20,4);
          auVar217 = NEON_smax(auVar217,ZEXT216(0),4);
          auVar149 = NEON_smax(auVar149,ZEXT216(0),4);
          auVar97 = NEON_fcmge(auVar97,auVar273,4);
          auVar273 = NEON_sshl(auVar114,auVar217,4);
          auVar217 = NEON_sshl(auVar114,auVar149,4);
          auVar61[0] = auVar273[0] & ~auVar217[0];
          auVar61[1] = auVar273[1] & ~auVar217[1];
          auVar61[2] = auVar273[2] & ~auVar217[2];
          auVar61[3] = auVar273[3] & ~auVar217[3];
          auVar61[4] = auVar273[4] & ~auVar217[4];
          auVar61[5] = auVar273[5] & ~auVar217[5];
          auVar61[6] = auVar273[6] & ~auVar217[6];
          auVar61[7] = auVar273[7] & ~auVar217[7];
          auVar61[8] = auVar273[8] & ~auVar217[8];
          auVar61[9] = auVar273[9] & ~auVar217[9];
          auVar61[10] = auVar273[10] & ~auVar217[10];
          auVar61[11] = auVar273[11] & ~auVar217[11];
          auVar61[12] = auVar273[12] & ~auVar217[12];
          auVar61[13] = auVar273[13] & ~auVar217[13];
          auVar61[14] = auVar273[14] & ~auVar217[14];
          auVar61[15] = auVar273[15] & ~auVar217[15];
          auVar46._9_7_ = _UNK_004c5139;
          auVar46._0_9_ = _DAT_004c5130;
          auVar273 = a64_TBL(ZEXT816(0),auVar61,auVar46);
          auVar273 = NEON_cmeq(auVar273,0,2);
          if (CONCAT17(auVar97[15] & ~auVar273[15] | auVar97[7] & ~auVar273[7],
                       CONCAT16(auVar97[14] & ~auVar273[14] | auVar97[6] & ~auVar273[6],
                                CONCAT15(auVar97[13] & ~auVar273[13] | auVar97[5] & ~auVar273[5],
                                         CONCAT14(auVar97[12] & ~auVar273[12] |
                                                  auVar97[4] & ~auVar273[4],
                                                  CONCAT13(auVar97[11] & ~auVar273[11] |
                                                           auVar97[3] & ~auVar273[3],
                                                           CONCAT12(auVar97[10] & ~auVar273[10] |
                                                                    auVar97[2] & ~auVar273[2],
                                                                    CONCAT11(auVar97[9] &
                                                                             ~auVar273[9] |
                                                                             auVar97[1] &
                                                                             ~auVar273[1],
                                                                             auVar97[8] &
                                                                             ~auVar273[8] |
                                                                             auVar97[0] &
                                                                             ~auVar273[0]))))))) !=
              0) {
            return 0;
          }
        }
        if (iVar180 + param_3 <= lVar50) break;
        fVar124 = param_12 + fVar124;
        fVar125 = param_12 + fVar125;
        fVar126 = param_12 + fVar126;
        fVar123 = param_12 + fVar123;
        auVar37[8] = 0x20;
        auVar37._0_8_ = 0x2000000020;
        auVar37._9_3_ = 0;
        auVar37[12] = 0x20;
        auVar37._13_3_ = 0;
        auVar92 = NEON_uqsub(auVar92,auVar37,2);
        pauVar52 = pauVar52 + 3;
        auVar38[8] = 0x20;
        auVar38._0_8_ = 0x2000000020;
        auVar38._9_3_ = 0;
        auVar38[12] = 0x20;
        auVar38._13_3_ = 0;
        auVar145 = NEON_uqsub(auVar145,auVar38,2);
      }
      auVar57._0_4_ = iVar181 - iVar106;
      auVar57._4_4_ = iVar182 - iVar106;
      auVar57._8_4_ = iVar183 - iVar106;
      auVar57._12_4_ = iVar184 - iVar106;
      auVar136._0_4_ = iVar118 - iVar187;
      auVar136._4_4_ = iVar119 - iVar187;
      auVar136._8_4_ = iVar120 - iVar187;
      auVar136._12_4_ = iVar121 - iVar187;
      iVar120 = auVar174._4_4_;
      iVar121 = auVar174._8_4_;
      iVar180 = auVar174._12_4_;
      param_3 = *(int *)(this + 300) + param_3;
      iVar193 = auVar191._4_4_;
      iVar194 = auVar191._8_4_;
      iVar129 = auVar191._12_4_;
      auVar23._8_4_ = 0xffffffe1;
      auVar23._0_8_ = 0xffffffe1ffffffe1;
      auVar23._12_4_ = 0xffffffe1;
      auVar92 = NEON_sshl(auVar57,auVar23,4);
      auVar24._8_4_ = 0xffffffe1;
      auVar24._0_8_ = 0xffffffe1ffffffe1;
      auVar24._12_4_ = 0xffffffe1;
      auVar145 = NEON_sshl(auVar136,auVar24,4);
      iVar181 = CONCAT13(bVar83 & auVar92[3],
                         CONCAT12(bVar82 & auVar92[2],
                                  CONCAT11(bVar81 & auVar92[1],bVar80 & auVar92[0])));
      auVar173._0_8_ =
           CONCAT17(bVar83 & auVar92[7],
                    CONCAT16(bVar82 & auVar92[6],
                             CONCAT15(bVar81 & auVar92[5],CONCAT14(bVar80 & auVar92[4],iVar181))));
      auVar173[8] = bVar80 & auVar92[8];
      auVar173[9] = bVar81 & auVar92[9];
      auVar173[10] = bVar82 & auVar92[10];
      auVar173[11] = bVar83 & auVar92[11];
      auVar176[12] = bVar80 & auVar92[12];
      auVar176._0_12_ = auVar173;
      auVar176[13] = bVar81 & auVar92[13];
      auVar176[14] = bVar82 & auVar92[14];
      auVar176[15] = bVar83 & auVar92[15];
      iVar119 = CONCAT13(bVar79 & auVar92[3],
                         CONCAT12(bVar78 & auVar92[2],
                                  CONCAT11(bVar77 & auVar92[1],bVar75 & auVar92[0])));
      auVar90._0_8_ =
           CONCAT17(bVar79 & auVar92[7],
                    CONCAT16(bVar78 & auVar92[6],
                             CONCAT15(bVar77 & auVar92[5],CONCAT14(bVar75 & auVar92[4],iVar119))));
      auVar90[8] = bVar75 & auVar92[8];
      auVar90[9] = bVar77 & auVar92[9];
      auVar90[10] = bVar78 & auVar92[10];
      auVar90[11] = bVar79 & auVar92[11];
      auVar100[12] = bVar75 & auVar92[12];
      auVar100._0_12_ = auVar90;
      auVar100[13] = bVar77 & auVar92[13];
      auVar100[14] = bVar78 & auVar92[14];
      auVar100[15] = bVar79 & auVar92[15];
      iVar181 = iVar181 + auVar57._0_4_;
      iVar182 = (int)((ulong)auVar173._0_8_ >> 0x20) + auVar57._4_4_;
      iVar183 = auVar173._8_4_ + auVar57._8_4_;
      iVar184 = auVar176._12_4_ + auVar57._12_4_;
      iVar118 = CONCAT13(bVar201 & auVar145[3],
                         CONCAT12(bVar199 & auVar145[2],
                                  CONCAT11(bVar197 & auVar145[1],bVar195 & auVar145[0])));
      auVar55._0_8_ =
           CONCAT17(bVar201 & auVar145[7],
                    CONCAT16(bVar199 & auVar145[6],
                             CONCAT15(bVar197 & auVar145[5],CONCAT14(bVar195 & auVar145[4],iVar118))
                            ));
      auVar55[8] = bVar195 & auVar145[8];
      auVar55[9] = bVar197 & auVar145[9];
      auVar55[10] = bVar199 & auVar145[10];
      auVar55[11] = bVar201 & auVar145[11];
      auVar58[12] = bVar195 & auVar145[12];
      auVar58._0_12_ = auVar55;
      auVar58[13] = bVar197 & auVar145[13];
      auVar58[14] = bVar199 & auVar145[14];
      auVar58[15] = bVar201 & auVar145[15];
      auVar174._0_4_ = iVar15 + auVar174._0_4_ + iVar119;
      auVar174._4_4_ = iVar15 + iVar120 + (int)((ulong)auVar90._0_8_ >> 0x20);
      auVar174._8_4_ = iVar15 + iVar121 + auVar90._8_4_;
      auVar174._12_4_ = iVar15 + iVar180 + auVar100._12_4_;
      fVar76 = param_13 + fVar76;
      fVar88 = param_13 + fVar88;
      fVar117 = param_13 + fVar117;
      fVar127 = param_13 + fVar127;
      auVar191._0_4_ =
           iVar170 + auVar191._0_4_ +
           CONCAT13(bVar222 & auVar145[3],
                    CONCAT12(bVar221 & auVar145[2],
                             CONCAT11(bVar220 & auVar145[1],bVar215 & auVar145[0])));
      auVar191._4_4_ =
           iVar170 + iVar193 +
           CONCAT13(bVar222 & auVar145[7],
                    CONCAT12(bVar221 & auVar145[6],
                             CONCAT11(bVar220 & auVar145[5],bVar215 & auVar145[4])));
      auVar191._8_4_ =
           iVar170 + iVar194 +
           CONCAT13(bVar222 & auVar145[11],
                    CONCAT12(bVar221 & auVar145[10],
                             CONCAT11(bVar220 & auVar145[9],bVar215 & auVar145[8])));
      auVar191._12_4_ =
           iVar170 + iVar129 +
           CONCAT13(bVar222 & auVar145[15],
                    CONCAT12(bVar221 & auVar145[14],
                             CONCAT11(bVar220 & auVar145[13],bVar215 & auVar145[12])));
      iVar118 = iVar118 + auVar136._0_4_;
      iVar119 = (int)((ulong)auVar55._0_8_ >> 0x20) + auVar136._4_4_;
      iVar120 = auVar55._8_4_ + auVar136._8_4_;
      iVar121 = auVar58._12_4_ + auVar136._12_4_;
      *(float *)(param_11 + 0x10) = fVar117;
      *(float *)(param_11 + 0x14) = fVar127;
      *(float *)param_11 = fVar76;
      *(float *)(param_11 + 4) = fVar88;
    } while (param_3 < iVar109);
  }
  auVar92 = _DAT_004c4480;
  iVar109 = (int)((ulong)uStack_68 >> 0x20);
  if (param_3 < param_5) {
    uVar10 = uVar12;
    if (iVar51 >> 0xd <= (int)uVar12) {
      uVar10 = iVar51 >> 0xd;
    }
    iVar51 = iVar130 + uVar14;
    auVar62._8_4_ = 0xfffffff8;
    auVar62._0_8_ = 0xfffffff8fffffff8;
    auVar62._12_4_ = 0xfffffff8;
    auVar145 = *(undefined (*) [16])param_11;
    uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    iVar130 = param_2;
    if (iVar105 >> 0xd <= param_2) {
      iVar130 = iVar105 >> 0xd;
    }
    auVar217 = NEON_sshl(auVar174,auVar62,4);
    auVar97 = NEON_sshl(auVar191,auVar62,4);
    auVar22[4] = uVar154;
    auVar22._0_4_ = iVar54;
    auVar22[5] = uVar155;
    auVar22[6] = uVar156;
    auVar22[7] = uVar157;
    auVar22[8] = uVar158;
    auVar22[9] = uVar159;
    auVar22[10] = uVar160;
    auVar22[11] = uVar161;
    auVar22[12] = uVar162;
    auVar22[13] = uVar163;
    auVar22[14] = uVar164;
    auVar22[15] = uVar165;
    auVar273 = NEON_sshl(auVar22,auVar62,4);
    lVar50 = (long)(int)(uVar10 + param_3);
    auVar149 = ZEXT816(0);
    fVar88 = (float)uVar10 * param_12;
    iVar105 = iVar105 + uVar1;
    auVar63._0_4_ = auVar273._0_4_ + uVar10 * -0x20;
    auVar63._4_4_ = auVar273._4_4_ + uVar10 * -0x20;
    auVar63._8_4_ = auVar273._8_4_ + uVar10 * -0x20;
    auVar63._12_4_ = auVar273._12_4_ + uVar10 * -0x20;
    uVar185 = *(undefined8 *)(param_10 + 8);
    auVar138._0_4_ = auVar97._0_4_ + uVar10 * -0x20;
    auVar138._4_4_ = auVar97._4_4_ + uVar10 * -0x20;
    auVar138._8_4_ = auVar97._8_4_ + uVar10 * -0x20;
    auVar138._12_4_ = auVar97._12_4_ + uVar10 * -0x20;
    auVar101._0_4_ = auVar217._0_4_ + uVar10 * -0x20;
    auVar101._4_4_ = auVar217._4_4_ + uVar10 * -0x20;
    auVar101._8_4_ = auVar217._8_4_ + uVar10 * -0x20;
    auVar101._12_4_ = auVar217._12_4_ + uVar10 * -0x20;
    pauVar52 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)(int)(uVar10 + param_3) * 0x30);
    auVar217 = NEON_smax(auVar63,auVar149,4);
    auVar273 = NEON_smax(auVar138,auVar149,4);
    auVar97 = NEON_smax(auVar101,auVar149,4);
    fVar76 = fVar88 + auVar145._0_4_;
    uVar150 = SUB41(fVar76,0);
    uVar151 = (undefined)((uint)fVar76 >> 8);
    uVar152 = (undefined)((uint)fVar76 >> 0x10);
    uVar153 = (undefined)((uint)fVar76 >> 0x18);
    fVar76 = fVar88 + auVar145._4_4_;
    uVar154 = SUB41(fVar76,0);
    uVar155 = (undefined)((uint)fVar76 >> 8);
    uVar156 = (undefined)((uint)fVar76 >> 0x10);
    uVar157 = (undefined)((uint)fVar76 >> 0x18);
    fVar76 = fVar88 + auVar145._8_4_;
    uVar158 = SUB41(fVar76,0);
    uVar159 = (undefined)((uint)fVar76 >> 8);
    uVar160 = (undefined)((uint)fVar76 >> 0x10);
    uVar161 = (undefined)((uint)fVar76 >> 0x18);
    fVar88 = fVar88 + auVar145._12_4_;
    uVar162 = SUB41(fVar88,0);
    uVar163 = (undefined)((uint)fVar88 >> 8);
    uVar164 = (undefined)((uint)fVar88 >> 0x10);
    uVar165 = (undefined)((uint)fVar88 >> 0x18);
    auVar47._9_7_ = _UNK_004c5139;
    auVar47._0_9_ = _DAT_004c5130;
    auVar276._8_8_ = 0xffffffffffffffff;
    auVar276._0_8_ = 0xffffffffffffffff;
    while( true ) {
      lVar50 = lVar50 + 1;
      auVar145 = *pauVar52;
      auVar64._0_4_ = (float)*(undefined8 *)param_10 - auVar145._0_4_;
      auVar64._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar145._4_4_;
      auVar64._8_4_ = (float)uVar185 - auVar145._8_4_;
      auVar64._12_4_ = (float)((ulong)uVar185 >> 0x20) - auVar145._12_4_;
      auVar65 = NEON_cmlt(auVar64,0,4);
      bVar53 = auVar65[0] & 1;
      auVar66._0_5_ = CONCAT14(auVar65[4],(uint)bVar53) & 0x2ffffffff;
      auVar66._5_3_ = 0;
      auVar66[8] = auVar65[8] & 4;
      auVar66._9_3_ = 0;
      auVar66[12] = auVar65[12] & 8;
      auVar66._13_3_ = 0;
      auVar94 = NEON_ext(auVar66,auVar66,8,1);
      if (CONCAT13(auVar94[3] | auVar94[7],
                   CONCAT12(auVar94[2] | auVar94[6],
                            CONCAT11(auVar94[1] | auVar94[5],
                                     auVar94[0] | bVar53 | auVar94[4] | auVar65[4] & 2))) != 0xf) {
        auVar39[8] = 0x20;
        auVar39._0_8_ = 0x2000000020;
        auVar39._9_3_ = 0;
        auVar39[12] = 0x20;
        auVar39._13_3_ = 0;
        auVar65 = NEON_smin(auVar273,auVar39,4);
        auVar40[8] = 0x20;
        auVar40._0_8_ = 0x2000000020;
        auVar40._9_3_ = 0;
        auVar40[12] = 0x20;
        auVar40._13_3_ = 0;
        auVar94 = NEON_smin(auVar217,auVar40,4);
        auVar41[8] = 0x20;
        auVar41._0_8_ = 0x2000000020;
        auVar41._9_3_ = 0;
        auVar41[12] = 0x20;
        auVar41._13_3_ = 0;
        auVar147 = NEON_smin(auVar97,auVar41,4);
        auVar65 = NEON_smax(auVar65,auVar149,4);
        auVar94 = NEON_smax(auVar94,auVar149,4);
        auVar147 = NEON_smax(auVar147,auVar149,4);
        auVar65 = NEON_sshl(auVar276,auVar65,4);
        auVar94 = NEON_sshl(auVar276,auVar94,4);
        auVar147 = NEON_sshl(auVar276,auVar147,4);
        auVar67[0] = auVar94[0] & auVar65[0] & ~auVar147[0];
        auVar67[1] = auVar94[1] & auVar65[1] & ~auVar147[1];
        auVar67[2] = auVar94[2] & auVar65[2] & ~auVar147[2];
        auVar67[3] = auVar94[3] & auVar65[3] & ~auVar147[3];
        auVar67[4] = auVar94[4] & auVar65[4] & ~auVar147[4];
        auVar67[5] = auVar94[5] & auVar65[5] & ~auVar147[5];
        auVar67[6] = auVar94[6] & auVar65[6] & ~auVar147[6];
        auVar67[7] = auVar94[7] & auVar65[7] & ~auVar147[7];
        auVar67[8] = auVar94[8] & auVar65[8] & ~auVar147[8];
        auVar67[9] = auVar94[9] & auVar65[9] & ~auVar147[9];
        auVar67[10] = auVar94[10] & auVar65[10] & ~auVar147[10];
        auVar67[11] = auVar94[11] & auVar65[11] & ~auVar147[11];
        auVar67[12] = auVar94[12] & auVar65[12] & ~auVar147[12];
        auVar67[13] = auVar94[13] & auVar65[13] & ~auVar147[13];
        auVar67[14] = auVar94[14] & auVar65[14] & ~auVar147[14];
        auVar67[15] = auVar94[15] & auVar65[15] & ~auVar147[15];
        auVar29[9] = (char)((ulong)uVar185 >> 8);
        auVar29._0_9_ = *(unkbyte9 *)param_10;
        auVar29[10] = (char)((ulong)uVar185 >> 0x10);
        auVar29[11] = (char)((ulong)uVar185 >> 0x18);
        auVar29[12] = (char)((ulong)uVar185 >> 0x20);
        auVar29[13] = (char)((ulong)uVar185 >> 0x28);
        auVar29[14] = (char)((ulong)uVar185 >> 0x30);
        auVar29[15] = (char)((ulong)uVar185 >> 0x38);
        auVar33[1] = uVar151;
        auVar33[0] = uVar150;
        auVar33[2] = uVar152;
        auVar33[3] = uVar153;
        auVar33[4] = uVar154;
        auVar33[5] = uVar155;
        auVar33[6] = uVar156;
        auVar33[7] = uVar157;
        auVar33[8] = uVar158;
        auVar33[9] = uVar159;
        auVar33[10] = uVar160;
        auVar33[11] = uVar161;
        auVar33[12] = uVar162;
        auVar33[13] = uVar163;
        auVar33[14] = uVar164;
        auVar33[15] = uVar165;
        auVar94 = NEON_fmin(auVar33,auVar29,4);
        auVar65 = a64_TBL(ZEXT816(0),auVar67,auVar47);
        auVar94 = NEON_fcmge(auVar94,auVar145,4);
        auVar145 = NEON_cmeq(auVar65,0,2);
        if (CONCAT17(auVar94[15] & ~auVar145[15] | auVar94[7] & ~auVar145[7],
                     CONCAT16(auVar94[14] & ~auVar145[14] | auVar94[6] & ~auVar145[6],
                              CONCAT15(auVar94[13] & ~auVar145[13] | auVar94[5] & ~auVar145[5],
                                       CONCAT14(auVar94[12] & ~auVar145[12] |
                                                auVar94[4] & ~auVar145[4],
                                                CONCAT13(auVar94[11] & ~auVar145[11] |
                                                         auVar94[3] & ~auVar145[3],
                                                         CONCAT12(auVar94[10] & ~auVar145[10] |
                                                                  auVar94[2] & ~auVar145[2],
                                                                  CONCAT11(auVar94[9] & ~auVar145[9]
                                                                           | auVar94[1] &
                                                                             ~auVar145[1],
                                                                           auVar94[8] & ~auVar145[8]
                                                                           | auVar94[0] &
                                                                             ~auVar145[0]))))))) !=
            0) {
          return 0;
        }
      }
      if (iVar130 + param_3 <= lVar50) break;
      auVar42[8] = 0x20;
      auVar42._0_8_ = 0x2000000020;
      auVar42._9_3_ = 0;
      auVar42[12] = 0x20;
      auVar42._13_3_ = 0;
      auVar97 = NEON_uqsub(auVar97,auVar42,2);
      auVar43[8] = 0x20;
      auVar43._0_8_ = 0x2000000020;
      auVar43._9_3_ = 0;
      auVar43[12] = 0x20;
      auVar43._13_3_ = 0;
      auVar273 = NEON_uqsub(auVar273,auVar43,2);
      pauVar52 = pauVar52 + 3;
      auVar44[8] = 0x20;
      auVar44._0_8_ = 0x2000000020;
      auVar44._9_3_ = 0;
      auVar44[12] = 0x20;
      auVar44._13_3_ = 0;
      auVar217 = NEON_uqsub(auVar217,auVar44,2);
      fVar76 = param_12 + (float)CONCAT13(uVar153,CONCAT12(uVar152,CONCAT11(uVar151,uVar150)));
      uVar150 = SUB41(fVar76,0);
      uVar151 = (undefined)((uint)fVar76 >> 8);
      uVar152 = (undefined)((uint)fVar76 >> 0x10);
      uVar153 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_12 + (float)CONCAT13(uVar157,CONCAT12(uVar156,CONCAT11(uVar155,uVar154)));
      uVar154 = SUB41(fVar76,0);
      uVar155 = (undefined)((uint)fVar76 >> 8);
      uVar156 = (undefined)((uint)fVar76 >> 0x10);
      uVar157 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_12 + (float)CONCAT13(uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)));
      uVar158 = SUB41(fVar76,0);
      uVar159 = (undefined)((uint)fVar76 >> 8);
      uVar160 = (undefined)((uint)fVar76 >> 0x10);
      uVar161 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_12 + (float)CONCAT13(uVar165,CONCAT12(uVar164,CONCAT11(uVar163,uVar162)));
      uVar162 = SUB41(fVar76,0);
      uVar163 = (undefined)((uint)fVar76 >> 8);
      uVar164 = (undefined)((uint)fVar76 >> 0x10);
      uVar165 = (undefined)((uint)fVar76 >> 0x18);
    }
    param_3 = *(int *)(this + 300) + param_3;
    uVar10 = uVar14;
  }
  if (param_3 < param_5) {
    auVar68._0_4_ = iVar181 - iVar106;
    auVar68._4_4_ = iVar182 - iVar106;
    auVar68._8_4_ = iVar183 - iVar106;
    auVar68._12_4_ = iVar184 - iVar106;
    auVar145 = *(undefined (*) [16])param_11;
    auVar139._0_4_ = iVar107 - iVar16;
    auVar139._4_4_ = iVar108 - iVar16;
    auVar139._8_4_ = (int)uStack_78 - iVar16;
    auVar139._12_4_ = (int)((ulong)uStack_78 >> 0x20) - iVar16;
    auVar25._8_4_ = 0xffffffe1;
    auVar25._0_8_ = 0xffffffe1ffffffe1;
    auVar25._12_4_ = 0xffffffe1;
    auVar273 = NEON_sshl(auVar68,auVar25,4);
    auVar26._8_4_ = 0xffffffe1;
    auVar26._0_8_ = 0xffffffe1ffffffe1;
    auVar26._12_4_ = 0xffffffe1;
    auVar217 = NEON_sshl(auVar139,auVar26,4);
    fVar76 = param_13 + auVar145._0_4_;
    uVar150 = SUB41(fVar76,0);
    uVar151 = (undefined)((uint)fVar76 >> 8);
    uVar152 = (undefined)((uint)fVar76 >> 0x10);
    uVar153 = (undefined)((uint)fVar76 >> 0x18);
    fVar76 = param_13 + auVar145._4_4_;
    uVar154 = SUB41(fVar76,0);
    uVar155 = (undefined)((uint)fVar76 >> 8);
    uVar156 = (undefined)((uint)fVar76 >> 0x10);
    uVar157 = (undefined)((uint)fVar76 >> 0x18);
    fVar76 = param_13 + auVar145._8_4_;
    uVar158 = SUB41(fVar76,0);
    uVar159 = (undefined)((uint)fVar76 >> 8);
    uVar160 = (undefined)((uint)fVar76 >> 0x10);
    uVar161 = (undefined)((uint)fVar76 >> 0x18);
    fVar76 = param_13 + auVar145._12_4_;
    uVar162 = SUB41(fVar76,0);
    uVar163 = (undefined)((uint)fVar76 >> 8);
    uVar164 = (undefined)((uint)fVar76 >> 0x10);
    uVar165 = (undefined)((uint)fVar76 >> 0x18);
    auVar223._8_8_ = 0xffffffffffffffff;
    auVar223._0_8_ = 0xffffffffffffffff;
    iVar108 = CONCAT13(bVar83 & auVar273[3],
                       CONCAT12(bVar82 & auVar273[2],
                                CONCAT11(bVar81 & auVar273[1],bVar80 & auVar273[0])));
    auVar91._0_8_ =
         CONCAT17(bVar83 & auVar273[7],
                  CONCAT16(bVar82 & auVar273[6],
                           CONCAT15(bVar81 & auVar273[5],CONCAT14(bVar80 & auVar273[4],iVar108))));
    auVar91[8] = bVar80 & auVar273[8];
    auVar91[9] = bVar81 & auVar273[9];
    auVar91[10] = bVar82 & auVar273[10];
    auVar91[11] = bVar83 & auVar273[11];
    auVar102[12] = bVar80 & auVar273[12];
    auVar102._0_12_ = auVar91;
    auVar102[13] = bVar81 & auVar273[13];
    auVar102[14] = bVar82 & auVar273[14];
    auVar102[15] = bVar83 & auVar273[15];
    iVar130 = CONCAT13(bVar79 & auVar273[3],
                       CONCAT12(bVar78 & auVar273[2],
                                CONCAT11(bVar77 & auVar273[1],bVar75 & auVar273[0])));
    auVar166._0_8_ =
         CONCAT17(bVar79 & auVar273[7],
                  CONCAT16(bVar78 & auVar273[6],
                           CONCAT15(bVar77 & auVar273[5],CONCAT14(bVar75 & auVar273[4],iVar130))));
    auVar166[8] = bVar75 & auVar273[8];
    auVar166[9] = bVar77 & auVar273[9];
    auVar166[10] = bVar78 & auVar273[10];
    auVar166[11] = bVar79 & auVar273[11];
    auVar167[12] = bVar75 & auVar273[12];
    auVar167._0_12_ = auVar166;
    auVar167[13] = bVar77 & auVar273[13];
    auVar167[14] = bVar78 & auVar273[14];
    auVar167[15] = bVar79 & auVar273[15];
    iVar107 = CONCAT13(bVar87 & auVar217[3],
                       CONCAT12(bVar86 & auVar217[2],
                                CONCAT11(bVar85 & auVar217[1],bVar84 & auVar217[0])));
    auVar216._0_8_ =
         CONCAT17(bVar87 & auVar217[7],
                  CONCAT16(bVar86 & auVar217[6],
                           CONCAT15(bVar85 & auVar217[5],CONCAT14(bVar84 & auVar217[4],iVar107))));
    auVar216[8] = bVar84 & auVar217[8];
    auVar216[9] = bVar85 & auVar217[9];
    auVar216[10] = bVar86 & auVar217[10];
    auVar216[11] = bVar87 & auVar217[11];
    auVar218[12] = bVar84 & auVar217[12];
    auVar218._0_12_ = auVar216;
    auVar218[13] = bVar85 & auVar217[13];
    auVar218[14] = bVar86 & auVar217[14];
    auVar218[15] = bVar87 & auVar217[15];
    iVar170 = CONCAT13(bVar113 & auVar217[3],
                       CONCAT12(bVar112 & auVar217[2],
                                CONCAT11(bVar111 & auVar217[1],bVar110 & auVar217[0])));
    auVar189._0_8_ =
         CONCAT17(bVar113 & auVar217[7],
                  CONCAT16(bVar112 & auVar217[6],
                           CONCAT15(bVar111 & auVar217[5],CONCAT14(bVar110 & auVar217[4],iVar170))))
    ;
    auVar189[8] = bVar110 & auVar217[8];
    auVar189[9] = bVar111 & auVar217[9];
    auVar189[10] = bVar112 & auVar217[10];
    auVar189[11] = bVar113 & auVar217[11];
    auVar192[12] = bVar110 & auVar217[12];
    auVar192._0_12_ = auVar189;
    auVar192[13] = bVar111 & auVar217[13];
    auVar192[14] = bVar112 & auVar217[14];
    auVar192[15] = bVar113 & auVar217[15];
    iVar108 = iVar108 + auVar68._0_4_;
    uVar256 = (undefined)iVar108;
    uVar257 = (undefined)((uint)iVar108 >> 8);
    uVar258 = (undefined)((uint)iVar108 >> 0x10);
    uVar259 = (undefined)((uint)iVar108 >> 0x18);
    iVar108 = (int)((ulong)auVar91._0_8_ >> 0x20) + auVar68._4_4_;
    uVar260 = (undefined)iVar108;
    uVar261 = (undefined)((uint)iVar108 >> 8);
    uVar262 = (undefined)((uint)iVar108 >> 0x10);
    uVar263 = (undefined)((uint)iVar108 >> 0x18);
    iVar108 = auVar91._8_4_ + auVar68._8_4_;
    uVar264 = (undefined)iVar108;
    uVar265 = (undefined)((uint)iVar108 >> 8);
    uVar266 = (undefined)((uint)iVar108 >> 0x10);
    uVar267 = (undefined)((uint)iVar108 >> 0x18);
    iVar108 = auVar102._12_4_ + auVar68._12_4_;
    uVar268 = (undefined)iVar108;
    uVar269 = (undefined)((uint)iVar108 >> 8);
    uVar270 = (undefined)((uint)iVar108 >> 0x10);
    uVar271 = (undefined)((uint)iVar108 >> 0x18);
    iVar130 = iVar15 + auVar174._0_4_ + iVar130;
    uVar196 = (undefined)iVar130;
    uVar198 = (undefined)((uint)iVar130 >> 8);
    uVar200 = (undefined)((uint)iVar130 >> 0x10);
    uVar202 = (undefined)((uint)iVar130 >> 0x18);
    iVar130 = iVar15 + auVar174._4_4_ + (int)((ulong)auVar166._0_8_ >> 0x20);
    uVar203 = (undefined)iVar130;
    uVar204 = (undefined)((uint)iVar130 >> 8);
    uVar205 = (undefined)((uint)iVar130 >> 0x10);
    uVar206 = (undefined)((uint)iVar130 >> 0x18);
    iVar130 = iVar15 + auVar174._8_4_ + auVar166._8_4_;
    uVar207 = (undefined)iVar130;
    uVar208 = (undefined)((uint)iVar130 >> 8);
    uVar209 = (undefined)((uint)iVar130 >> 0x10);
    uVar210 = (undefined)((uint)iVar130 >> 0x18);
    iVar130 = iVar15 + auVar174._12_4_ + auVar167._12_4_;
    uVar211 = (undefined)iVar130;
    uVar212 = (undefined)((uint)iVar130 >> 8);
    uVar213 = (undefined)((uint)iVar130 >> 0x10);
    uVar214 = (undefined)((uint)iVar130 >> 0x18);
    iVar107 = iVar107 + auVar139._0_4_;
    uVar240 = (undefined)iVar107;
    uVar241 = (undefined)((uint)iVar107 >> 8);
    uVar242 = (undefined)((uint)iVar107 >> 0x10);
    uVar243 = (undefined)((uint)iVar107 >> 0x18);
    iVar130 = (int)((ulong)auVar216._0_8_ >> 0x20) + auVar139._4_4_;
    uVar244 = (undefined)iVar130;
    uVar245 = (undefined)((uint)iVar130 >> 8);
    uVar246 = (undefined)((uint)iVar130 >> 0x10);
    uVar247 = (undefined)((uint)iVar130 >> 0x18);
    iVar130 = auVar216._8_4_ + auVar139._8_4_;
    uVar248 = (undefined)iVar130;
    uVar249 = (undefined)((uint)iVar130 >> 8);
    uVar250 = (undefined)((uint)iVar130 >> 0x10);
    uVar251 = (undefined)((uint)iVar130 >> 0x18);
    iVar130 = auVar218._12_4_ + auVar139._12_4_;
    uVar252 = (undefined)iVar130;
    uVar253 = (undefined)((uint)iVar130 >> 8);
    uVar254 = (undefined)((uint)iVar130 >> 0x10);
    uVar255 = (undefined)((uint)iVar130 >> 0x18);
    auVar168._0_4_ = iVar104 + iVar54 + iVar170;
    auVar168._4_4_ = iVar104 + iVar178 + (int)((ulong)auVar189._0_8_ >> 0x20);
    auVar168._8_4_ = (int)uStack_68 + iVar179 + auVar189._8_4_;
    auVar168._12_4_ = iVar109 + iVar128 + auVar192._12_4_;
    auVar177._8_4_ = 0xfffffff8;
    auVar177._0_8_ = 0xfffffff8fffffff8;
    auVar177._12_4_ = 0xfffffff8;
    auVar145 = ZEXT816(0);
    auVar219._8_4_ = 0x20;
    auVar219._0_8_ = 0x2000000020;
    auVar219._12_4_ = 0x20;
    while( true ) {
      *(ulong *)(param_11 + 8) =
           CONCAT17(uVar165,CONCAT16(uVar164,CONCAT15(uVar163,CONCAT14(uVar162,CONCAT13(uVar161,
                                                  CONCAT12(uVar160,CONCAT11(uVar159,uVar158)))))));
      *(ulong *)param_11 =
           CONCAT17(uVar157,CONCAT16(uVar156,CONCAT15(uVar155,CONCAT14(uVar154,CONCAT13(uVar153,
                                                  CONCAT12(uVar152,CONCAT11(uVar151,uVar150)))))));
      uVar14 = uVar12;
      if (iVar51 >> 0xd <= (int)uVar12) {
        uVar14 = iVar51 >> 0xd;
      }
      auVar30[1] = uVar198;
      auVar30[0] = uVar196;
      auVar30[2] = uVar200;
      auVar30[3] = uVar202;
      auVar30[4] = uVar203;
      auVar30[5] = uVar204;
      auVar30[6] = uVar205;
      auVar30[7] = uVar206;
      auVar30[8] = uVar207;
      auVar30[9] = uVar208;
      auVar30[10] = uVar209;
      auVar30[11] = uVar210;
      auVar30[12] = uVar211;
      auVar30[13] = uVar212;
      auVar30[14] = uVar213;
      auVar30[15] = uVar214;
      auVar174 = NEON_sshl(auVar30,auVar177,4);
      iVar130 = param_2;
      if (iVar105 >> 0xd <= param_2) {
        iVar130 = iVar105 >> 0xd;
      }
      uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      iVar51 = iVar51 + uVar10;
      auVar273 = NEON_sshl(auVar168,auVar177,4);
      iVar105 = iVar105 + uVar1;
      lVar50 = (long)(int)(uVar14 + param_3);
      uVar185 = *(undefined8 *)(param_10 + 8);
      auVar69._0_4_ = auVar174._0_4_ + uVar14 * -0x20;
      auVar69._4_4_ = auVar174._4_4_ + uVar14 * -0x20;
      auVar69._8_4_ = auVar174._8_4_ + uVar14 * -0x20;
      auVar69._12_4_ = auVar174._12_4_ + uVar14 * -0x20;
      fVar76 = (float)uVar14 * param_12;
      pauVar52 = (undefined (*) [16])
                 (*(long *)(this + 0x138) + (long)(int)(uVar14 + param_3) * 0x30);
      auVar140._0_4_ = auVar273._0_4_ + uVar14 * -0x20;
      auVar140._4_4_ = auVar273._4_4_ + uVar14 * -0x20;
      auVar140._8_4_ = auVar273._8_4_ + uVar14 * -0x20;
      auVar140._12_4_ = auVar273._12_4_ + uVar14 * -0x20;
      auVar273 = NEON_smax(auVar69,auVar145,4);
      auVar174 = NEON_smax(auVar140,auVar145,4);
      auVar115._0_4_ = fVar76 + (float)CONCAT13(uVar153,CONCAT12(uVar152,CONCAT11(uVar151,uVar150)))
      ;
      auVar115._4_4_ = fVar76 + (float)CONCAT13(uVar157,CONCAT12(uVar156,CONCAT11(uVar155,uVar154)))
      ;
      auVar115._8_4_ = fVar76 + (float)CONCAT13(uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)))
      ;
      auVar115._12_4_ =
           fVar76 + (float)CONCAT13(uVar165,CONCAT12(uVar164,CONCAT11(uVar163,uVar162)));
      while( true ) {
        lVar50 = lVar50 + 1;
        auVar217 = *pauVar52;
        auVar70._0_4_ = (float)*(undefined8 *)param_10 - auVar217._0_4_;
        auVar70._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar217._4_4_;
        auVar70._8_4_ = (float)uVar185 - auVar217._8_4_;
        auVar70._12_4_ = (float)((ulong)uVar185 >> 0x20) - auVar217._12_4_;
        auVar97 = NEON_cmlt(auVar70,0,4);
        auVar71[0] = auVar97[0] & auVar92[0];
        auVar71[1] = auVar97[1] & auVar92[1];
        auVar71[2] = auVar97[2] & auVar92[2];
        auVar71[3] = auVar97[3] & auVar92[3];
        auVar71[4] = auVar97[4] & auVar92[4];
        auVar71[5] = auVar97[5] & auVar92[5];
        auVar71[6] = auVar97[6] & auVar92[6];
        auVar71[7] = auVar97[7] & auVar92[7];
        auVar71[8] = auVar97[8] & auVar92[8];
        auVar71[9] = auVar97[9] & auVar92[9];
        auVar71[10] = auVar97[10] & auVar92[10];
        auVar71[11] = auVar97[11] & auVar92[11];
        auVar71[12] = auVar97[12] & auVar92[12];
        auVar71[13] = auVar97[13] & auVar92[13];
        auVar71[14] = auVar97[14] & auVar92[14];
        auVar71[15] = auVar97[15] & auVar92[15];
        auVar97 = NEON_ext(auVar71,auVar71,8,1);
        if (CONCAT13(auVar97[3] | auVar71[3] | auVar97[7] | auVar71[7],
                     CONCAT12(auVar97[2] | auVar71[2] | auVar97[6] | auVar71[6],
                              CONCAT11(auVar97[1] | auVar71[1] | auVar97[5] | auVar71[5],
                                       auVar97[0] | auVar71[0] | auVar97[4] | auVar71[4]))) != 0xf)
        {
          auVar97 = NEON_smin(auVar174,auVar219,4);
          auVar149 = NEON_smin(auVar273,auVar219,4);
          auVar45[9] = (char)((ulong)uVar185 >> 8);
          auVar45._0_9_ = *(unkbyte9 *)param_10;
          auVar45[10] = (char)((ulong)uVar185 >> 0x10);
          auVar45[11] = (char)((ulong)uVar185 >> 0x18);
          auVar45[12] = (char)((ulong)uVar185 >> 0x20);
          auVar45[13] = (char)((ulong)uVar185 >> 0x28);
          auVar45[14] = (char)((ulong)uVar185 >> 0x30);
          auVar45[15] = (char)((ulong)uVar185 >> 0x38);
          auVar65 = NEON_fmin(auVar115,auVar45,4);
          auVar97 = NEON_smax(auVar97,auVar145,4);
          auVar149 = NEON_smax(auVar149,auVar145,4);
          auVar97 = NEON_sshl(auVar223,auVar97,4);
          auVar149 = NEON_sshl(auVar223,auVar149,4);
          auVar72[0] = auVar97[0] & ~auVar149[0];
          auVar72[1] = auVar97[1] & ~auVar149[1];
          auVar72[2] = auVar97[2] & ~auVar149[2];
          auVar72[3] = auVar97[3] & ~auVar149[3];
          auVar72[4] = auVar97[4] & ~auVar149[4];
          auVar72[5] = auVar97[5] & ~auVar149[5];
          auVar72[6] = auVar97[6] & ~auVar149[6];
          auVar72[7] = auVar97[7] & ~auVar149[7];
          auVar72[8] = auVar97[8] & ~auVar149[8];
          auVar72[9] = auVar97[9] & ~auVar149[9];
          auVar72[10] = auVar97[10] & ~auVar149[10];
          auVar72[11] = auVar97[11] & ~auVar149[11];
          auVar72[12] = auVar97[12] & ~auVar149[12];
          auVar72[13] = auVar97[13] & ~auVar149[13];
          auVar72[14] = auVar97[14] & ~auVar149[14];
          auVar72[15] = auVar97[15] & ~auVar149[15];
          auVar48._9_7_ = _UNK_004c5139;
          auVar48._0_9_ = _DAT_004c5130;
          auVar97 = a64_TBL(ZEXT816(0),auVar72,auVar48);
          auVar149 = NEON_fcmge(auVar65,auVar217,4);
          auVar217 = NEON_cmeq(auVar97,0,2);
          if (CONCAT17(auVar149[15] & ~auVar217[15] | auVar149[7] & ~auVar217[7],
                       CONCAT16(auVar149[14] & ~auVar217[14] | auVar149[6] & ~auVar217[6],
                                CONCAT15(auVar149[13] & ~auVar217[13] | auVar149[5] & ~auVar217[5],
                                         CONCAT14(auVar149[12] & ~auVar217[12] |
                                                  auVar149[4] & ~auVar217[4],
                                                  CONCAT13(auVar149[11] & ~auVar217[11] |
                                                           auVar149[3] & ~auVar217[3],
                                                           CONCAT12(auVar149[10] & ~auVar217[10] |
                                                                    auVar149[2] & ~auVar217[2],
                                                                    CONCAT11(auVar149[9] &
                                                                             ~auVar217[9] |
                                                                             auVar149[1] &
                                                                             ~auVar217[1],
                                                                             auVar149[8] &
                                                                             ~auVar217[8] |
                                                                             auVar149[0] &
                                                                             ~auVar217[0]))))))) !=
              0) {
            return 0;
          }
        }
        if (iVar130 + param_3 <= lVar50) break;
        auVar116._0_4_ = param_12 + auVar115._0_4_;
        auVar116._4_4_ = param_12 + auVar115._4_4_;
        auVar116._8_4_ = param_12 + auVar115._8_4_;
        auVar116._12_4_ = param_12 + auVar115._12_4_;
        auVar273 = NEON_uqsub(auVar273,auVar219,2);
        pauVar52 = pauVar52 + 3;
        auVar174 = NEON_uqsub(auVar174,auVar219,2);
        auVar115 = auVar116;
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar73._0_4_ = CONCAT13(uVar259,CONCAT12(uVar258,CONCAT11(uVar257,uVar256))) - iVar106;
      auVar73._4_4_ = CONCAT13(uVar263,CONCAT12(uVar262,CONCAT11(uVar261,uVar260))) - iVar106;
      auVar73._8_4_ = CONCAT13(uVar267,CONCAT12(uVar266,CONCAT11(uVar265,uVar264))) - iVar106;
      auVar73._12_4_ = CONCAT13(uVar271,CONCAT12(uVar270,CONCAT11(uVar269,uVar268))) - iVar106;
      auVar103._0_4_ = CONCAT13(uVar243,CONCAT12(uVar242,CONCAT11(uVar241,uVar240))) - iVar16;
      auVar103._4_4_ = CONCAT13(uVar247,CONCAT12(uVar246,CONCAT11(uVar245,uVar244))) - iVar16;
      auVar103._8_4_ = CONCAT13(uVar251,CONCAT12(uVar250,CONCAT11(uVar249,uVar248))) - iVar16;
      auVar103._12_4_ = CONCAT13(uVar255,CONCAT12(uVar254,CONCAT11(uVar253,uVar252))) - iVar16;
      fVar76 = param_13 + (float)CONCAT13(uVar153,CONCAT12(uVar152,CONCAT11(uVar151,uVar150)));
      uVar150 = SUB41(fVar76,0);
      uVar151 = (undefined)((uint)fVar76 >> 8);
      uVar152 = (undefined)((uint)fVar76 >> 0x10);
      uVar153 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_13 + (float)CONCAT13(uVar157,CONCAT12(uVar156,CONCAT11(uVar155,uVar154)));
      uVar154 = SUB41(fVar76,0);
      uVar155 = (undefined)((uint)fVar76 >> 8);
      uVar156 = (undefined)((uint)fVar76 >> 0x10);
      uVar157 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_13 + (float)CONCAT13(uVar161,CONCAT12(uVar160,CONCAT11(uVar159,uVar158)));
      uVar158 = SUB41(fVar76,0);
      uVar159 = (undefined)((uint)fVar76 >> 8);
      uVar160 = (undefined)((uint)fVar76 >> 0x10);
      uVar161 = (undefined)((uint)fVar76 >> 0x18);
      fVar76 = param_13 + (float)CONCAT13(uVar165,CONCAT12(uVar164,CONCAT11(uVar163,uVar162)));
      uVar162 = SUB41(fVar76,0);
      uVar163 = (undefined)((uint)fVar76 >> 8);
      uVar164 = (undefined)((uint)fVar76 >> 0x10);
      uVar165 = (undefined)((uint)fVar76 >> 0x18);
      auVar27._8_4_ = 0xffffffe1;
      auVar27._0_8_ = 0xffffffe1ffffffe1;
      auVar27._12_4_ = 0xffffffe1;
      auVar174 = NEON_sshl(auVar73,auVar27,4);
      auVar28._8_4_ = 0xffffffe1;
      auVar28._0_8_ = 0xffffffe1ffffffe1;
      auVar28._12_4_ = 0xffffffe1;
      auVar273 = NEON_sshl(auVar103,auVar28,4);
      iVar130 = CONCAT13(auVar174[3] & bVar79,
                         CONCAT12(auVar174[2] & bVar78,
                                  CONCAT11(auVar174[1] & bVar77,auVar174[0] & bVar75)));
      auVar133._0_8_ =
           CONCAT17(auVar174[7] & bVar79,
                    CONCAT16(auVar174[6] & bVar78,
                             CONCAT15(auVar174[5] & bVar77,CONCAT14(auVar174[4] & bVar75,iVar130))))
      ;
      auVar133[8] = auVar174[8] & bVar75;
      auVar133[9] = auVar174[9] & bVar77;
      auVar133[10] = auVar174[10] & bVar78;
      auVar133[11] = auVar174[11] & bVar79;
      auVar141[12] = auVar174[12] & bVar75;
      auVar141._0_12_ = auVar133;
      auVar141[13] = auVar174[13] & bVar77;
      auVar141[14] = auVar174[14] & bVar78;
      auVar141[15] = auVar174[15] & bVar79;
      iVar54 = CONCAT13(auVar174[3] & bVar83,
                        CONCAT12(auVar174[2] & bVar82,
                                 CONCAT11(auVar174[1] & bVar81,auVar174[0] & bVar80))) +
               auVar73._0_4_;
      uVar256 = (undefined)iVar54;
      uVar257 = (undefined)((uint)iVar54 >> 8);
      uVar258 = (undefined)((uint)iVar54 >> 0x10);
      uVar259 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = CONCAT13(auVar174[7] & bVar83,
                        CONCAT12(auVar174[6] & bVar82,
                                 CONCAT11(auVar174[5] & bVar81,auVar174[4] & bVar80))) +
               auVar73._4_4_;
      uVar260 = (undefined)iVar54;
      uVar261 = (undefined)((uint)iVar54 >> 8);
      uVar262 = (undefined)((uint)iVar54 >> 0x10);
      uVar263 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = CONCAT13(auVar174[11] & bVar83,
                        CONCAT12(auVar174[10] & bVar82,
                                 CONCAT11(auVar174[9] & bVar81,auVar174[8] & bVar80))) +
               auVar73._8_4_;
      uVar264 = (undefined)iVar54;
      uVar265 = (undefined)((uint)iVar54 >> 8);
      uVar266 = (undefined)((uint)iVar54 >> 0x10);
      uVar267 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = CONCAT13(auVar174[15] & bVar83,
                        CONCAT12(auVar174[14] & bVar82,
                                 CONCAT11(auVar174[13] & bVar81,auVar174[12] & bVar80))) +
               auVar73._12_4_;
      uVar268 = (undefined)iVar54;
      uVar269 = (undefined)((uint)iVar54 >> 8);
      uVar270 = (undefined)((uint)iVar54 >> 0x10);
      uVar271 = (undefined)((uint)iVar54 >> 0x18);
      iVar54 = CONCAT13(auVar273[3] & bVar87,
                        CONCAT12(auVar273[2] & bVar86,
                                 CONCAT11(auVar273[1] & bVar85,auVar273[0] & bVar84)));
      auVar56._0_8_ =
           CONCAT17(auVar273[7] & bVar87,
                    CONCAT16(auVar273[6] & bVar86,
                             CONCAT15(auVar273[5] & bVar85,CONCAT14(auVar273[4] & bVar84,iVar54))));
      auVar56[8] = auVar273[8] & bVar84;
      auVar56[9] = auVar273[9] & bVar85;
      auVar56[10] = auVar273[10] & bVar86;
      auVar56[11] = auVar273[11] & bVar87;
      auVar74[12] = auVar273[12] & bVar84;
      auVar74._0_12_ = auVar56;
      auVar74[13] = auVar273[13] & bVar85;
      auVar74[14] = auVar273[14] & bVar86;
      auVar74[15] = auVar273[15] & bVar87;
      iVar130 = CONCAT13(uVar202,CONCAT12(uVar200,CONCAT11(uVar198,uVar196))) + iVar15 + iVar130;
      uVar196 = (undefined)iVar130;
      uVar198 = (undefined)((uint)iVar130 >> 8);
      uVar200 = (undefined)((uint)iVar130 >> 0x10);
      uVar202 = (undefined)((uint)iVar130 >> 0x18);
      iVar130 = CONCAT13(uVar206,CONCAT12(uVar205,CONCAT11(uVar204,uVar203))) + iVar15 +
                (int)((ulong)auVar133._0_8_ >> 0x20);
      uVar203 = (undefined)iVar130;
      uVar204 = (undefined)((uint)iVar130 >> 8);
      uVar205 = (undefined)((uint)iVar130 >> 0x10);
      uVar206 = (undefined)((uint)iVar130 >> 0x18);
      iVar130 = CONCAT13(uVar210,CONCAT12(uVar209,CONCAT11(uVar208,uVar207))) + iVar15 +
                auVar133._8_4_;
      uVar207 = (undefined)iVar130;
      uVar208 = (undefined)((uint)iVar130 >> 8);
      uVar209 = (undefined)((uint)iVar130 >> 0x10);
      uVar210 = (undefined)((uint)iVar130 >> 0x18);
      iVar130 = CONCAT13(uVar214,CONCAT12(uVar213,CONCAT11(uVar212,uVar211))) + iVar15 +
                auVar141._12_4_;
      uVar211 = (undefined)iVar130;
      uVar212 = (undefined)((uint)iVar130 >> 8);
      uVar213 = (undefined)((uint)iVar130 >> 0x10);
      uVar214 = (undefined)((uint)iVar130 >> 0x18);
      iVar54 = iVar54 + auVar103._0_4_;
      uVar240 = (undefined)iVar54;
      uVar241 = (undefined)((uint)iVar54 >> 8);
      uVar242 = (undefined)((uint)iVar54 >> 0x10);
      uVar243 = (undefined)((uint)iVar54 >> 0x18);
      iVar130 = (int)((ulong)auVar56._0_8_ >> 0x20) + auVar103._4_4_;
      uVar244 = (undefined)iVar130;
      uVar245 = (undefined)((uint)iVar130 >> 8);
      uVar246 = (undefined)((uint)iVar130 >> 0x10);
      uVar247 = (undefined)((uint)iVar130 >> 0x18);
      iVar130 = auVar56._8_4_ + auVar103._8_4_;
      uVar248 = (undefined)iVar130;
      uVar249 = (undefined)((uint)iVar130 >> 8);
      uVar250 = (undefined)((uint)iVar130 >> 0x10);
      uVar251 = (undefined)((uint)iVar130 >> 0x18);
      iVar130 = auVar74._12_4_ + auVar103._12_4_;
      uVar252 = (undefined)iVar130;
      uVar253 = (undefined)((uint)iVar130 >> 8);
      uVar254 = (undefined)((uint)iVar130 >> 0x10);
      uVar255 = (undefined)((uint)iVar130 >> 0x18);
      auVar169._0_4_ =
           CONCAT13(auVar273[3] & bVar113,
                    CONCAT12(auVar273[2] & bVar112,
                             CONCAT11(auVar273[1] & bVar111,auVar273[0] & bVar110))) + iVar104 +
           auVar168._0_4_;
      auVar169._4_4_ =
           CONCAT13(auVar273[7] & bVar113,
                    CONCAT12(auVar273[6] & bVar112,
                             CONCAT11(auVar273[5] & bVar111,auVar273[4] & bVar110))) + iVar104 +
           auVar168._4_4_;
      auVar169._8_4_ =
           CONCAT13(auVar273[11] & bVar113,
                    CONCAT12(auVar273[10] & bVar112,
                             CONCAT11(auVar273[9] & bVar111,auVar273[8] & bVar110))) +
           (int)uStack_68 + auVar168._8_4_;
      auVar169._12_4_ =
           CONCAT13(auVar273[15] & bVar113,
                    CONCAT12(auVar273[14] & bVar112,
                             CONCAT11(auVar273[13] & bVar111,auVar273[12] & bVar110))) + iVar109 +
           auVar168._12_4_;
      auVar168 = auVar169;
    }
  }
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
  return 1;
}


