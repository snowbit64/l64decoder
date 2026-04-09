// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<0,0,1>
// Entry Point: 00da3760
// Size: 2288 bytes
// Signature: int __thiscall RasterizeTriangle<0,0,1>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0, 0,
   1>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0,0,1>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined (*pauVar10) [12];
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined8 uVar23;
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
  long lVar45;
  long lVar46;
  long lVar47;
  byte bVar48;
  undefined auVar51 [16];
  int iVar49;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  byte bVar69;
  float fVar70;
  int iVar71;
  undefined auVar72 [12];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar74 [12];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [12];
  undefined auVar89 [12];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  float fVar106;
  undefined auVar107 [12];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  int iVar119;
  int iVar120;
  undefined auVar121 [12];
  undefined auVar122 [12];
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  undefined auVar128 [16];
  undefined auVar129 [16];
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  float fVar139;
  float fVar141;
  float fVar142;
  undefined auVar140 [16];
  float fVar143;
  undefined auVar144 [12];
  undefined auVar146 [16];
  undefined auVar147 [16];
  int iVar148;
  int iVar149;
  int iVar150;
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
  undefined uVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  int iVar177;
  int iVar178;
  int iVar179;
  int iVar180;
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar181 [12];
  undefined auVar182 [16];
  undefined auVar183 [16];
  undefined auVar184 [16];
  undefined uVar185;
  undefined uVar186;
  undefined uVar187;
  undefined uVar188;
  undefined uVar189;
  undefined uVar190;
  undefined uVar191;
  undefined uVar192;
  undefined uVar193;
  undefined uVar194;
  undefined uVar195;
  undefined uVar196;
  undefined uVar197;
  undefined uVar198;
  undefined uVar199;
  undefined uVar200;
  int iVar201;
  undefined auVar202 [12];
  undefined auVar205 [16];
  undefined auVar206 [16];
  undefined auVar207 [16];
  undefined auVar203 [12];
  undefined auVar210 [16];
  undefined auVar211 [16];
  undefined auVar212 [12];
  undefined auVar213 [12];
  undefined uVar216;
  undefined uVar217;
  undefined uVar218;
  undefined uVar219;
  undefined uVar220;
  undefined uVar221;
  undefined uVar222;
  undefined uVar223;
  undefined uVar224;
  undefined uVar225;
  undefined uVar226;
  undefined uVar227;
  undefined uVar228;
  undefined uVar229;
  undefined uVar230;
  undefined uVar231;
  byte bVar232;
  undefined auVar233 [12];
  byte bVar236;
  byte bVar237;
  undefined auVar234 [16];
  undefined auVar235 [16];
  byte bVar238;
  byte bVar239;
  byte bVar240;
  undefined auVar241 [16];
  int iVar242;
  undefined auVar243 [12];
  int iVar244;
  undefined auVar245 [16];
  undefined auVar246 [16];
  undefined auVar247 [16];
  undefined auVar248 [16];
  float fVar253;
  float fVar254;
  undefined auVar249 [16];
  undefined auVar250 [16];
  float fVar255;
  undefined auVar251 [16];
  undefined auVar252 [16];
  undefined8 uStack_98;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  int local_50;
  int iStack_4c;
  undefined auVar58 [16];
  undefined auVar50 [12];
  undefined auVar52 [16];
  undefined auVar78 [16];
  undefined auVar73 [12];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar95 [16];
  undefined auVar101 [16];
  undefined auVar118 [16];
  undefined auVar127 [16];
  undefined auVar130 [16];
  undefined auVar145 [16];
  undefined auVar204 [12];
  undefined auVar208 [16];
  undefined auVar209 [16];
  undefined auVar214 [16];
  undefined auVar215 [16];
  
  auVar74 = _DAT_004c5130;
  auVar75 = _DAT_004c4480;
  lVar46 = (ulong)param_1 * 4;
  pfVar1 = (float *)(param_7 + lVar46);
  piVar2 = (int *)(param_14 + lVar46);
  piVar3 = (int *)(param_15 + lVar46);
  fVar70 = pfVar1[4];
  puVar4 = (undefined4 *)(param_16 + lVar46);
  piVar5 = (int *)(param_17 + lVar46);
  fVar106 = pfVar1[8];
  fVar253 = SUB164(_DAT_004c3fa0,0);
  fVar254 = SUB164(_DAT_004c3fa0,4);
  fVar255 = SUB164(_DAT_004c3fa0,8);
  fVar139 = SUB164(_DAT_004c3fa0,0xc);
  iVar244 = piVar3[4];
  piVar6 = (int *)(param_18 + lVar46);
  iVar177 = piVar2[4];
  iVar120 = piVar5[4];
  iVar11 = piVar5[8];
  iVar242 = piVar3[8];
  iVar119 = MP_INT_ABS((int)(fVar253 * fVar70));
  iVar131 = MP_INT_ABS((int)(fVar254 * fVar70));
  iVar132 = MP_INT_ABS((int)(fVar255 * fVar70));
  iVar133 = MP_INT_ABS((int)(fVar139 * fVar70));
  uVar12 = puVar4[4];
  iVar13 = piVar2[8];
  piVar7 = (int *)(param_6 + lVar46);
  local_50 = iVar120 + iVar244 * -0x80 + iVar119 * iVar177;
  iStack_4c = iVar120 + iVar244 * -0x180 + iVar131 * iVar177;
  iVar132 = iVar120 + iVar244 * -0x280 + iVar132 * iVar177;
  iVar133 = iVar120 + iVar244 * -0x380 + iVar133 * iVar177;
  iVar120 = MP_INT_ABS((int)(fVar253 * fVar106));
  iVar119 = MP_INT_ABS((int)(fVar254 * fVar106));
  iVar131 = MP_INT_ABS((int)(fVar255 * fVar106));
  iVar134 = MP_INT_ABS((int)(fVar139 * fVar106));
  piVar8 = (int *)(param_8 + lVar46);
  auVar108._8_4_ = 0xffffffe1;
  auVar108._0_8_ = 0xffffffe1ffffffe1;
  auVar108._12_4_ = 0xffffffe1;
  iVar244 = piVar7[4];
  auVar90._0_4_ = iVar11 + iVar242 * -0x80 + iVar120 * iVar13;
  auVar90._4_4_ = iVar11 + iVar242 * -0x180 + iVar119 * iVar13;
  auVar90._8_4_ = iVar11 + iVar242 * -0x280 + iVar131 * iVar13;
  auVar90._12_4_ = iVar11 + iVar242 * -0x380 + iVar134 * iVar13;
  iVar120 = piVar6[4];
  auVar182._4_4_ = iStack_4c;
  auVar182._0_4_ = local_50;
  auVar182._8_4_ = iVar132;
  auVar182._12_4_ = iVar133;
  auVar182 = NEON_sshl(auVar182,auVar108,4);
  iVar11 = piVar8[4];
  uVar14 = puVar4[8];
  auVar234 = NEON_sshl(auVar90,auVar108,4);
  iVar242 = piVar7[8];
  bVar167 = (byte)iVar177;
  bVar168 = (byte)((uint)iVar177 >> 8);
  bVar169 = (byte)((uint)iVar177 >> 0x10);
  bVar170 = (byte)((uint)iVar177 >> 0x18);
  iVar119 = CONCAT13(auVar182[3] & bVar170,
                     CONCAT12(auVar182[2] & bVar169,
                              CONCAT11(auVar182[1] & bVar168,auVar182[0] & bVar167)));
  auVar202._0_8_ =
       CONCAT17(auVar182[7] & bVar170,
                CONCAT16(auVar182[6] & bVar169,
                         CONCAT15(auVar182[5] & bVar168,CONCAT14(auVar182[4] & bVar167,iVar119))));
  auVar202[8] = auVar182[8] & bVar167;
  auVar202[9] = auVar182[9] & bVar168;
  auVar202[10] = auVar182[10] & bVar169;
  auVar202[11] = auVar182[11] & bVar170;
  auVar91[12] = auVar182[12] & bVar167;
  auVar91._0_12_ = auVar202;
  auVar91[13] = auVar182[13] & bVar168;
  auVar91[14] = auVar182[14] & bVar169;
  auVar91[15] = auVar182[15] & bVar170;
  bVar171 = (byte)uVar12;
  bVar172 = (byte)((uint)uVar12 >> 8);
  bVar173 = (byte)((uint)uVar12 >> 0x10);
  bVar174 = (byte)((uint)uVar12 >> 0x18);
  iVar134 = CONCAT13(auVar182[3] & bVar174,
                     CONCAT12(auVar182[2] & bVar173,
                              CONCAT11(auVar182[1] & bVar172,auVar182[0] & bVar171)));
  auVar181._0_8_ =
       CONCAT17(auVar182[7] & bVar174,
                CONCAT16(auVar182[6] & bVar173,
                         CONCAT15(auVar182[5] & bVar172,CONCAT14(auVar182[4] & bVar171,iVar134))));
  auVar181[8] = auVar182[8] & bVar171;
  auVar181[9] = auVar182[9] & bVar172;
  auVar181[10] = auVar182[10] & bVar173;
  auVar181[11] = auVar182[11] & bVar174;
  auVar77[12] = auVar182[12] & bVar171;
  auVar77._0_12_ = auVar181;
  auVar77[13] = auVar182[13] & bVar172;
  auVar77[14] = auVar182[14] & bVar173;
  auVar77[15] = auVar182[15] & bVar174;
  bVar102 = (byte)iVar13;
  bVar103 = (byte)((uint)iVar13 >> 8);
  bVar104 = (byte)((uint)iVar13 >> 0x10);
  bVar105 = (byte)((uint)iVar13 >> 0x18);
  iVar131 = CONCAT13(auVar234[3] & bVar105,
                     CONCAT12(auVar234[2] & bVar104,
                              CONCAT11(auVar234[1] & bVar103,auVar234[0] & bVar102)));
  auVar243._0_8_ =
       CONCAT17(auVar234[7] & bVar105,
                CONCAT16(auVar234[6] & bVar104,
                         CONCAT15(auVar234[5] & bVar103,CONCAT14(auVar234[4] & bVar102,iVar131))));
  auVar243[8] = auVar234[8] & bVar102;
  auVar243[9] = auVar234[9] & bVar103;
  auVar243[10] = auVar234[10] & bVar104;
  auVar243[11] = auVar234[11] & bVar105;
  auVar205[12] = auVar234[12] & bVar102;
  auVar205._0_12_ = auVar243;
  auVar205[13] = auVar234[13] & bVar103;
  auVar205[14] = auVar234[14] & bVar104;
  auVar205[15] = auVar234[15] & bVar105;
  iVar13 = piVar6[8];
  bVar135 = (byte)uVar14;
  bVar136 = (byte)((uint)uVar14 >> 8);
  bVar137 = (byte)((uint)uVar14 >> 0x10);
  bVar138 = (byte)((uint)uVar14 >> 0x18);
  iVar148 = CONCAT13(auVar234[3] & bVar138,
                     CONCAT12(auVar234[2] & bVar137,
                              CONCAT11(auVar234[1] & bVar136,auVar234[0] & bVar135)));
  auVar233._0_8_ =
       CONCAT17(auVar234[7] & bVar138,
                CONCAT16(auVar234[6] & bVar137,
                         CONCAT15(auVar234[5] & bVar136,CONCAT14(auVar234[4] & bVar135,iVar148))));
  auVar233[8] = auVar234[8] & bVar135;
  auVar233[9] = auVar234[9] & bVar136;
  auVar233[10] = auVar234[10] & bVar137;
  auVar233[11] = auVar234[11] & bVar138;
  auVar92[12] = auVar234[12] & bVar135;
  auVar92._0_12_ = auVar233;
  auVar92[13] = auVar234[13] & bVar136;
  auVar92[14] = auVar234[14] & bVar137;
  auVar92[15] = auVar234[15] & bVar138;
  local_50 = local_50 + iVar119;
  iStack_4c = iStack_4c + (int)((ulong)auVar202._0_8_ >> 0x20);
  iVar132 = iVar132 + auVar202._8_4_;
  iVar133 = iVar133 + auVar91._12_4_;
  iVar119 = piVar8[8];
  auVar86._0_4_ = iVar244 + (int)(fVar253 * fVar70) + iVar134;
  auVar86._4_4_ = iVar244 + (int)(fVar254 * fVar70) + (int)((ulong)auVar181._0_8_ >> 0x20);
  auVar86._8_4_ = iVar244 + (int)(fVar255 * fVar70) + auVar181._8_4_;
  auVar86._12_4_ = iVar244 + (int)(fVar139 * fVar70) + auVar77._12_4_;
  iVar131 = auVar90._0_4_ + iVar131;
  uVar185 = (undefined)iVar131;
  uVar186 = (undefined)((uint)iVar131 >> 8);
  uVar187 = (undefined)((uint)iVar131 >> 0x10);
  uVar188 = (undefined)((uint)iVar131 >> 0x18);
  iVar244 = auVar90._4_4_ + (int)((ulong)auVar243._0_8_ >> 0x20);
  uVar189 = (undefined)iVar244;
  uVar190 = (undefined)((uint)iVar244 >> 8);
  uVar191 = (undefined)((uint)iVar244 >> 0x10);
  uVar192 = (undefined)((uint)iVar244 >> 0x18);
  iVar244 = auVar90._8_4_ + auVar243._8_4_;
  uVar193 = (undefined)iVar244;
  uVar194 = (undefined)((uint)iVar244 >> 8);
  uVar195 = (undefined)((uint)iVar244 >> 0x10);
  uVar196 = (undefined)((uint)iVar244 >> 0x18);
  iVar244 = auVar90._12_4_ + auVar205._12_4_;
  uVar197 = (undefined)iVar244;
  uVar198 = (undefined)((uint)iVar244 >> 8);
  uVar199 = (undefined)((uint)iVar244 >> 0x10);
  uVar200 = (undefined)((uint)iVar244 >> 0x18);
  auVar234._0_4_ = iVar242 + (int)(fVar253 * fVar106) + iVar148;
  auVar234._4_4_ = iVar242 + (int)(fVar254 * fVar106) + (int)((ulong)auVar233._0_8_ >> 0x20);
  auVar234._8_4_ = iVar242 + (int)(fVar255 * fVar106) + auVar233._8_4_;
  auVar234._12_4_ = iVar242 + (int)(fVar139 * fVar106) + auVar92._12_4_;
  if (param_4 < param_3) {
    if (param_3 < param_5) {
      fVar106 = *(float *)param_11;
      fVar253 = *(float *)(param_11 + 4);
      fVar254 = *(float *)(param_11 + 8);
      fVar255 = *(float *)(param_11 + 0xc);
      fVar70 = param_12 * 0.0;
      auVar182 = ZEXT816(0);
      auVar42._12_4_ = 0xf0b0703;
      auVar42._0_12_ = _DAT_004c5130;
      auVar241._8_4_ = 0x20;
      auVar241._0_8_ = 0x2000000020;
      auVar241._12_4_ = 0x20;
      auVar245._8_8_ = 0xffffffffffffffff;
      auVar245._0_8_ = 0xffffffffffffffff;
      auVar247._8_4_ = 0x7f7fffff;
      auVar247._0_8_ = 0x7f7fffff7f7fffff;
      auVar247._12_4_ = 0x7f7fffff;
      while( true ) {
        auVar27[8] = 0xf8;
        auVar27._0_8_ = 0xfffffff8fffffff8;
        auVar27[9] = 0xff;
        auVar27[10] = 0xff;
        auVar27[11] = 0xff;
        auVar27[12] = 0xf8;
        auVar27[13] = 0xff;
        auVar27[14] = 0xff;
        auVar27[15] = 0xff;
        auVar75 = NEON_sshl(auVar86,auVar27,4);
        lVar47 = (long)param_3;
        auVar28[8] = 0xf8;
        auVar28._0_8_ = 0xfffffff8fffffff8;
        auVar28[9] = 0xff;
        auVar28[10] = 0xff;
        auVar28[11] = 0xff;
        auVar28[12] = 0xf8;
        auVar28[13] = 0xff;
        auVar28[14] = 0xff;
        auVar28[15] = 0xff;
        auVar90 = NEON_sshl(auVar234,auVar28,4);
        auVar249._0_4_ = fVar70 + fVar106;
        auVar249._4_4_ = fVar70 + fVar253;
        auVar249._8_4_ = fVar70 + fVar254;
        auVar249._12_4_ = fVar70 + fVar255;
        auVar75 = NEON_smax(auVar75,auVar182,4);
        lVar46 = (lVar47 + (long)param_3 * 2) * 0x10;
        auVar90 = NEON_smax(auVar90,auVar182,4);
        while( true ) {
          lVar47 = lVar47 + 1;
          auVar77 = *(undefined (*) [16])param_10;
          pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar46);
          fVar254 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar255 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar106 = (float)*(undefined8 *)*pauVar10;
          fVar253 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          auVar76._0_4_ = auVar77._0_4_ - fVar106;
          auVar76._4_4_ = auVar77._4_4_ - fVar253;
          auVar76._8_4_ = auVar77._8_4_ - fVar254;
          auVar76._12_4_ = auVar77._12_4_ - fVar255;
          auVar77 = NEON_cmlt(auVar76,0,4);
          bVar69 = auVar77[0] & 1;
          auVar78._0_5_ = CONCAT14(auVar77[4],(uint)bVar69) & 0x2ffffffff;
          auVar78._5_3_ = 0;
          auVar78[8] = auVar77[8] & 4;
          auVar78._9_3_ = 0;
          auVar78[12] = auVar77[12] & 8;
          auVar78._13_3_ = 0;
          auVar91 = NEON_ext(auVar78,auVar78,8,1);
          if (CONCAT13(auVar91[3] | auVar91[7],
                       CONCAT12(auVar91[2] | auVar91[6],
                                CONCAT11(auVar91[1] | auVar91[5],
                                         auVar91[0] | bVar69 | auVar91[4] | auVar77[4] & 2))) != 0xf
             ) {
            auVar77 = NEON_smin(auVar90,auVar241,4);
            auVar92 = NEON_smin(auVar75,auVar241,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar46);
            auVar108 = NEON_fmax(auVar249,*(undefined (*) [16])param_9,4);
            auVar91 = NEON_smax(auVar77,auVar182,4);
            auVar77 = *(undefined (*) [16])(puVar9 + 2);
            auVar92 = NEON_smax(auVar92,auVar182,4);
            auVar91 = NEON_sshl(auVar245,auVar91,4);
            auVar92 = NEON_sshl(auVar245,auVar92,4);
            auVar79[0] = auVar91[0] & ~auVar92[0];
            auVar79[1] = auVar91[1] & ~auVar92[1];
            auVar79[2] = auVar91[2] & ~auVar92[2];
            auVar79[3] = auVar91[3] & ~auVar92[3];
            auVar79[4] = auVar91[4] & ~auVar92[4];
            auVar79[5] = auVar91[5] & ~auVar92[5];
            auVar79[6] = auVar91[6] & ~auVar92[6];
            auVar79[7] = auVar91[7] & ~auVar92[7];
            auVar79[8] = auVar91[8] & ~auVar92[8];
            auVar79[9] = auVar91[9] & ~auVar92[9];
            auVar79[10] = auVar91[10] & ~auVar92[10];
            auVar79[11] = auVar91[11] & ~auVar92[11];
            auVar79[12] = auVar91[12] & ~auVar92[12];
            auVar79[13] = auVar91[13] & ~auVar92[13];
            auVar79[14] = auVar91[14] & ~auVar92[14];
            auVar79[15] = auVar91[15] & ~auVar92[15];
            auVar93._0_4_ = auVar108._0_4_ - fVar106;
            auVar93._4_4_ = auVar108._4_4_ - fVar253;
            auVar93._8_4_ = auVar108._8_4_ - fVar254;
            auVar93._12_4_ = auVar108._12_4_ - fVar255;
            auVar91 = a64_TBL(ZEXT816(0),auVar79,auVar42);
            auVar15._8_4_ = 0xffffffe1;
            auVar15._0_8_ = 0xffffffe1ffffffe1;
            auVar15._12_4_ = 0xffffffe1;
            auVar92 = NEON_sshl(auVar93,auVar15,4);
            auVar205 = NEON_cmeq(auVar91,0,2);
            auVar94[0] = auVar92[0] | auVar205[0];
            auVar94[1] = auVar92[1] | auVar205[1];
            auVar94[2] = auVar92[2] | auVar205[2];
            auVar94[3] = auVar92[3] | auVar205[3];
            auVar94[4] = auVar92[4] | auVar205[4];
            auVar94[5] = auVar92[5] | auVar205[5];
            auVar94[6] = auVar92[6] | auVar205[6];
            auVar94[7] = auVar92[7] | auVar205[7];
            auVar94[8] = auVar92[8] | auVar205[8];
            auVar94[9] = auVar92[9] | auVar205[9];
            auVar94[10] = auVar92[10] | auVar205[10];
            auVar94[11] = auVar92[11] | auVar205[11];
            auVar94[12] = auVar92[12] | auVar205[12];
            auVar94[13] = auVar92[13] | auVar205[13];
            auVar94[14] = auVar92[14] | auVar205[14];
            auVar94[15] = auVar92[15] | auVar205[15];
            auVar206._0_4_ = (auVar77._0_4_ + auVar77._0_4_) - (fVar106 + auVar108._0_4_);
            auVar206._4_4_ = (auVar77._4_4_ + auVar77._4_4_) - (fVar253 + auVar108._4_4_);
            auVar206._8_4_ = (auVar77._8_4_ + auVar77._8_4_) - (fVar254 + auVar108._8_4_);
            auVar206._12_4_ = (auVar77._12_4_ + auVar77._12_4_) - (fVar255 + auVar108._12_4_);
            auVar80[0] = auVar91[0] & ~auVar94[0];
            auVar80[1] = auVar91[1] & ~auVar94[1];
            auVar80[2] = auVar91[2] & ~auVar94[2];
            auVar80[3] = auVar91[3] & ~auVar94[3];
            auVar80[4] = auVar91[4] & ~auVar94[4];
            auVar80[5] = auVar91[5] & ~auVar94[5];
            auVar80[6] = auVar91[6] & ~auVar94[6];
            auVar80[7] = auVar91[7] & ~auVar94[7];
            auVar80[8] = auVar91[8] & ~auVar94[8];
            auVar80[9] = auVar91[9] & ~auVar94[9];
            auVar80[10] = auVar91[10] & ~auVar94[10];
            auVar80[11] = auVar91[11] & ~auVar94[11];
            auVar80[12] = auVar91[12] & ~auVar94[12];
            auVar80[13] = auVar91[13] & ~auVar94[13];
            auVar80[14] = auVar91[14] & ~auVar94[14];
            auVar80[15] = auVar91[15] & ~auVar94[15];
            auVar16._8_4_ = 0xffffffe1;
            auVar16._0_8_ = 0xffffffe1ffffffe1;
            auVar16._12_4_ = 0xffffffe1;
            auVar205 = NEON_sshl(auVar206,auVar16,4);
            auVar92 = NEON_cmeq(auVar80,auVar245,4);
            auVar91 = *(undefined (*) [16])(puVar9 + 4);
            auVar207[0] = (auVar205[0] | auVar92[0]) & ~auVar94[0];
            auVar207[1] = (auVar205[1] | auVar92[1]) & ~auVar94[1];
            auVar207[2] = (auVar205[2] | auVar92[2]) & ~auVar94[2];
            auVar207[3] = (auVar205[3] | auVar92[3]) & ~auVar94[3];
            auVar207[4] = (auVar205[4] | auVar92[4]) & ~auVar94[4];
            auVar207[5] = (auVar205[5] | auVar92[5]) & ~auVar94[5];
            auVar207[6] = (auVar205[6] | auVar92[6]) & ~auVar94[6];
            auVar207[7] = (auVar205[7] | auVar92[7]) & ~auVar94[7];
            auVar207[8] = (auVar205[8] | auVar92[8]) & ~auVar94[8];
            auVar207[9] = (auVar205[9] | auVar92[9]) & ~auVar94[9];
            auVar207[10] = (auVar205[10] | auVar92[10]) & ~auVar94[10];
            auVar207[11] = (auVar205[11] | auVar92[11]) & ~auVar94[11];
            auVar207[12] = (auVar205[12] | auVar92[12]) & ~auVar94[12];
            auVar207[13] = (auVar205[13] | auVar92[13]) & ~auVar94[13];
            auVar207[14] = (auVar205[14] | auVar92[14]) & ~auVar94[14];
            auVar207[15] = (auVar205[15] | auVar92[15]) & ~auVar94[15];
            auVar92 = NEON_cmlt(auVar94,0,4);
            auVar205 = NEON_cmlt(auVar207,0,4);
            auVar92 = NEON_bsl(auVar92,auVar77,auVar108,1);
            auVar81[0] = auVar91[0] & ~auVar207[0] | auVar80[0];
            auVar81[1] = auVar91[1] & ~auVar207[1] | auVar80[1];
            auVar81[2] = auVar91[2] & ~auVar207[2] | auVar80[2];
            auVar81[3] = auVar91[3] & ~auVar207[3] | auVar80[3];
            auVar81[4] = auVar91[4] & ~auVar207[4] | auVar80[4];
            auVar81[5] = auVar91[5] & ~auVar207[5] | auVar80[5];
            auVar81[6] = auVar91[6] & ~auVar207[6] | auVar80[6];
            auVar81[7] = auVar91[7] & ~auVar207[7] | auVar80[7];
            auVar81[8] = auVar91[8] & ~auVar207[8] | auVar80[8];
            auVar81[9] = auVar91[9] & ~auVar207[9] | auVar80[9];
            auVar81[10] = auVar91[10] & ~auVar207[10] | auVar80[10];
            auVar81[11] = auVar91[11] & ~auVar207[11] | auVar80[11];
            auVar81[12] = auVar91[12] & ~auVar207[12] | auVar80[12];
            auVar81[13] = auVar91[13] & ~auVar207[13] | auVar80[13];
            auVar81[14] = auVar91[14] & ~auVar207[14] | auVar80[14];
            auVar81[15] = auVar91[15] & ~auVar207[15] | auVar80[15];
            auVar77 = NEON_bif(auVar108,auVar77,auVar205,1);
            auVar108 = NEON_cmeq(auVar81,auVar245,4);
            auVar77 = NEON_fmin(auVar92,auVar77,4);
            auVar91 = NEON_bsl(auVar108,auVar247,auVar77,1);
            auVar19._12_4_ = fVar255;
            auVar19._0_12_ = *pauVar10;
            auVar77 = NEON_bif(auVar77,auVar19,auVar108,1);
            puVar9[1] = auVar77._8_8_;
            *puVar9 = auVar77._0_8_;
            puVar9[3] = auVar91._8_8_;
            puVar9[2] = auVar91._0_8_;
            lVar45 = *(long *)(this + 0x138) + lVar46;
            *(byte *)(lVar45 + 0x30) = auVar81[8] & ~auVar108[8];
            *(byte *)(lVar45 + 0x31) = auVar81[9] & ~auVar108[9];
            *(byte *)(lVar45 + 0x32) = auVar81[10] & ~auVar108[10];
            *(byte *)(lVar45 + 0x33) = auVar81[11] & ~auVar108[11];
            *(byte *)(lVar45 + 0x34) = auVar81[12] & ~auVar108[12];
            *(byte *)(lVar45 + 0x35) = auVar81[13] & ~auVar108[13];
            *(byte *)(lVar45 + 0x36) = auVar81[14] & ~auVar108[14];
            *(byte *)(lVar45 + 0x37) = auVar81[15] & ~auVar108[15];
            *(byte *)(lVar45 + 0x20) = auVar81[0] & ~auVar108[0];
            *(byte *)(lVar45 + 0x21) = auVar81[1] & ~auVar108[1];
            *(byte *)(lVar45 + 0x22) = auVar81[2] & ~auVar108[2];
            *(byte *)(lVar45 + 0x23) = auVar81[3] & ~auVar108[3];
            *(byte *)(lVar45 + 0x24) = auVar81[4] & ~auVar108[4];
            *(byte *)(lVar45 + 0x25) = auVar81[5] & ~auVar108[5];
            *(byte *)(lVar45 + 0x26) = auVar81[6] & ~auVar108[6];
            *(byte *)(lVar45 + 0x27) = auVar81[7] & ~auVar108[7];
          }
          if (param_3 + param_2 <= lVar47) break;
          auVar250._0_4_ = param_12 + auVar249._0_4_;
          auVar250._4_4_ = param_12 + auVar249._4_4_;
          auVar250._8_4_ = param_12 + auVar249._8_4_;
          auVar250._12_4_ = param_12 + auVar249._12_4_;
          auVar75 = NEON_uqsub(auVar75,auVar241,2);
          lVar46 = lVar46 + 0x30;
          auVar90 = NEON_uqsub(auVar90,auVar241,2);
          auVar249 = auVar250;
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar109._0_4_ = CONCAT13(uVar188,CONCAT12(uVar187,CONCAT11(uVar186,uVar185))) - iVar13;
        auVar109._4_4_ = CONCAT13(uVar192,CONCAT12(uVar191,CONCAT11(uVar190,uVar189))) - iVar13;
        auVar109._8_4_ = CONCAT13(uVar196,CONCAT12(uVar195,CONCAT11(uVar194,uVar193))) - iVar13;
        auVar109._12_4_ = CONCAT13(uVar200,CONCAT12(uVar199,CONCAT11(uVar198,uVar197))) - iVar13;
        iVar134 = auVar86._4_4_;
        iVar148 = auVar86._8_4_;
        iVar149 = auVar86._12_4_;
        iVar177 = auVar234._4_4_;
        iVar242 = auVar234._8_4_;
        iVar131 = auVar234._12_4_;
        auVar17._8_4_ = 0xffffffe1;
        auVar17._0_8_ = 0xffffffe1ffffffe1;
        auVar17._12_4_ = 0xffffffe1;
        auVar90 = NEON_sshl(auVar109,auVar17,4);
        auVar82._0_4_ = local_50 - iVar120;
        auVar82._4_4_ = iStack_4c - iVar120;
        auVar82._8_4_ = iVar132 - iVar120;
        auVar82._12_4_ = iVar133 - iVar120;
        auVar75 = *(undefined (*) [16])param_11;
        fVar106 = param_13 + auVar75._0_4_;
        fVar253 = param_13 + auVar75._4_4_;
        fVar254 = param_13 + auVar75._8_4_;
        fVar255 = param_13 + auVar75._12_4_;
        auVar18._8_4_ = 0xffffffe1;
        auVar18._0_8_ = 0xffffffe1ffffffe1;
        auVar18._12_4_ = 0xffffffe1;
        auVar75 = NEON_sshl(auVar82,auVar18,4);
        *(float *)param_11 = fVar106;
        *(float *)(param_11 + 4) = fVar253;
        *(float *)(param_11 + 8) = fVar254;
        *(float *)(param_11 + 0xc) = fVar255;
        iVar244 = CONCAT13(bVar174 & auVar75[3],
                           CONCAT12(bVar173 & auVar75[2],
                                    CONCAT11(bVar172 & auVar75[1],bVar171 & auVar75[0])));
        auVar88._0_8_ =
             CONCAT17(bVar174 & auVar75[7],
                      CONCAT16(bVar173 & auVar75[6],
                               CONCAT15(bVar172 & auVar75[5],CONCAT14(bVar171 & auVar75[4],iVar244))
                              ));
        auVar88[8] = bVar171 & auVar75[8];
        auVar88[9] = bVar172 & auVar75[9];
        auVar88[10] = bVar173 & auVar75[10];
        auVar88[11] = bVar174 & auVar75[11];
        auVar95[12] = bVar171 & auVar75[12];
        auVar95._0_12_ = auVar88;
        auVar95[13] = bVar172 & auVar75[13];
        auVar95[14] = bVar173 & auVar75[14];
        auVar95[15] = bVar174 & auVar75[15];
        local_50 = CONCAT13(bVar170 & auVar75[3],
                            CONCAT12(bVar169 & auVar75[2],
                                     CONCAT11(bVar168 & auVar75[1],bVar167 & auVar75[0]))) +
                   auVar82._0_4_;
        iStack_4c = CONCAT13(bVar170 & auVar75[7],
                             CONCAT12(bVar169 & auVar75[6],
                                      CONCAT11(bVar168 & auVar75[5],bVar167 & auVar75[4]))) +
                    auVar82._4_4_;
        auVar86._0_4_ = iVar11 + auVar86._0_4_ + iVar244;
        auVar86._4_4_ = iVar11 + iVar134 + (int)((ulong)auVar88._0_8_ >> 0x20);
        auVar86._8_4_ = iVar11 + iVar148 + auVar88._8_4_;
        auVar86._12_4_ = iVar11 + iVar149 + auVar95._12_4_;
        iVar244 = CONCAT13(bVar105 & auVar90[3],
                           CONCAT12(bVar104 & auVar90[2],
                                    CONCAT11(bVar103 & auVar90[1],bVar102 & auVar90[0])));
        auVar72._0_8_ =
             CONCAT17(bVar105 & auVar90[7],
                      CONCAT16(bVar104 & auVar90[6],
                               CONCAT15(bVar103 & auVar90[5],CONCAT14(bVar102 & auVar90[4],iVar244))
                              ));
        auVar72[8] = bVar102 & auVar90[8];
        auVar72[9] = bVar103 & auVar90[9];
        auVar72[10] = bVar104 & auVar90[10];
        auVar72[11] = bVar105 & auVar90[11];
        auVar83[12] = bVar102 & auVar90[12];
        auVar83._0_12_ = auVar72;
        auVar83[13] = bVar103 & auVar90[13];
        auVar83[14] = bVar104 & auVar90[14];
        auVar83[15] = bVar105 & auVar90[15];
        iVar134 = CONCAT13(bVar138 & auVar90[3],
                           CONCAT12(bVar137 & auVar90[2],
                                    CONCAT11(bVar136 & auVar90[1],bVar135 & auVar90[0])));
        auVar203._0_8_ =
             CONCAT17(bVar138 & auVar90[7],
                      CONCAT16(bVar137 & auVar90[6],
                               CONCAT15(bVar136 & auVar90[5],CONCAT14(bVar135 & auVar90[4],iVar134))
                              ));
        auVar203[8] = bVar135 & auVar90[8];
        auVar203[9] = bVar136 & auVar90[9];
        auVar203[10] = bVar137 & auVar90[10];
        auVar203[11] = bVar138 & auVar90[11];
        auVar208[12] = bVar135 & auVar90[12];
        auVar208._0_12_ = auVar203;
        auVar208[13] = bVar136 & auVar90[13];
        auVar208[14] = bVar137 & auVar90[14];
        auVar208[15] = bVar138 & auVar90[15];
        iVar244 = iVar244 + auVar109._0_4_;
        uVar185 = (undefined)iVar244;
        uVar186 = (undefined)((uint)iVar244 >> 8);
        uVar187 = (undefined)((uint)iVar244 >> 0x10);
        uVar188 = (undefined)((uint)iVar244 >> 0x18);
        iVar244 = (int)((ulong)auVar72._0_8_ >> 0x20) + auVar109._4_4_;
        uVar189 = (undefined)iVar244;
        uVar190 = (undefined)((uint)iVar244 >> 8);
        uVar191 = (undefined)((uint)iVar244 >> 0x10);
        uVar192 = (undefined)((uint)iVar244 >> 0x18);
        iVar244 = auVar72._8_4_ + auVar109._8_4_;
        uVar193 = (undefined)iVar244;
        uVar194 = (undefined)((uint)iVar244 >> 8);
        uVar195 = (undefined)((uint)iVar244 >> 0x10);
        uVar196 = (undefined)((uint)iVar244 >> 0x18);
        iVar244 = auVar83._12_4_ + auVar109._12_4_;
        uVar197 = (undefined)iVar244;
        uVar198 = (undefined)((uint)iVar244 >> 8);
        uVar199 = (undefined)((uint)iVar244 >> 0x10);
        uVar200 = (undefined)((uint)iVar244 >> 0x18);
        auVar234._0_4_ = iVar119 + auVar234._0_4_ + iVar134;
        auVar234._4_4_ = iVar119 + iVar177 + (int)((ulong)auVar203._0_8_ >> 0x20);
        auVar234._8_4_ = iVar119 + iVar242 + auVar203._8_4_;
        auVar234._12_4_ = iVar119 + iVar131 + auVar208._12_4_;
      }
    }
  }
  else {
    fVar70 = *pfVar1;
    iVar242 = *piVar3;
    iVar131 = *piVar5;
    iVar134 = *piVar2;
    uVar12 = *puVar4;
    bVar69 = (byte)uVar12;
    bVar238 = (byte)((uint)uVar12 >> 8);
    bVar239 = (byte)((uint)uVar12 >> 0x10);
    bVar240 = (byte)((uint)uVar12 >> 0x18);
    iVar244 = param_5;
    if (param_4 <= param_5) {
      iVar244 = param_4;
    }
    iVar148 = MP_INT_ABS((int)(fVar253 * fVar70));
    iVar149 = MP_INT_ABS((int)(fVar254 * fVar70));
    iVar150 = MP_INT_ABS((int)(fVar255 * fVar70));
    iVar49 = MP_INT_ABS((int)(fVar139 * fVar70));
    auVar210._0_4_ = iVar131 + iVar242 * -0x80 + iVar148 * iVar134;
    auVar210._4_4_ = iVar131 + iVar242 * -0x180 + iVar149 * iVar134;
    auVar210._8_4_ = iVar131 + iVar242 * -0x280 + iVar150 * iVar134;
    auVar210._12_4_ = iVar131 + iVar242 * -0x380 + iVar49 * iVar134;
    iVar242 = *piVar7;
    auVar182 = NEON_sshl(auVar210,auVar108,4);
    fVar106 = param_12 * 0.0;
    iVar131 = iVar242 + (int)(fVar253 * fVar70) +
              CONCAT13(auVar182[3] & bVar240,
                       CONCAT12(auVar182[2] & bVar239,
                                CONCAT11(auVar182[1] & bVar238,auVar182[0] & bVar69)));
    uVar216 = (undefined)iVar131;
    uVar217 = (undefined)((uint)iVar131 >> 8);
    uVar218 = (undefined)((uint)iVar131 >> 0x10);
    uVar219 = (undefined)((uint)iVar131 >> 0x18);
    iVar131 = iVar242 + (int)(fVar254 * fVar70) +
              CONCAT13(auVar182[7] & bVar240,
                       CONCAT12(auVar182[6] & bVar239,
                                CONCAT11(auVar182[5] & bVar238,auVar182[4] & bVar69)));
    uVar220 = (undefined)iVar131;
    uVar221 = (undefined)((uint)iVar131 >> 8);
    uVar222 = (undefined)((uint)iVar131 >> 0x10);
    uVar223 = (undefined)((uint)iVar131 >> 0x18);
    iVar131 = iVar242 + (int)(fVar255 * fVar70) +
              CONCAT13(auVar182[11] & bVar240,
                       CONCAT12(auVar182[10] & bVar239,
                                CONCAT11(auVar182[9] & bVar238,auVar182[8] & bVar69)));
    uVar224 = (undefined)iVar131;
    uVar225 = (undefined)((uint)iVar131 >> 8);
    uVar226 = (undefined)((uint)iVar131 >> 0x10);
    uVar227 = (undefined)((uint)iVar131 >> 0x18);
    iVar242 = iVar242 + (int)(fVar139 * fVar70) +
              CONCAT13(auVar182[15] & bVar240,
                       CONCAT12(auVar182[14] & bVar239,
                                CONCAT11(auVar182[13] & bVar238,auVar182[12] & bVar69)));
    uVar228 = (undefined)iVar242;
    uVar229 = (undefined)((uint)iVar242 >> 8);
    uVar230 = (undefined)((uint)iVar242 >> 0x10);
    uVar231 = (undefined)((uint)iVar242 >> 0x18);
    if (param_3 < iVar244) {
      bVar232 = (byte)iVar134;
      bVar236 = (byte)((uint)iVar134 >> 8);
      bVar237 = (byte)((uint)iVar134 >> 0x10);
      bVar48 = (byte)((uint)iVar134 >> 0x18);
      iVar134 = CONCAT13(auVar182[3] & bVar48,
                         CONCAT12(auVar182[2] & bVar237,
                                  CONCAT11(auVar182[1] & bVar236,auVar182[0] & bVar232)));
      auVar144._0_8_ =
           CONCAT17(auVar182[7] & bVar48,
                    CONCAT16(auVar182[6] & bVar237,
                             CONCAT15(auVar182[5] & bVar236,CONCAT14(auVar182[4] & bVar232,iVar134))
                            ));
      auVar144[8] = auVar182[8] & bVar232;
      auVar144[9] = auVar182[9] & bVar236;
      auVar144[10] = auVar182[10] & bVar237;
      auVar144[11] = auVar182[11] & bVar48;
      auVar145[12] = auVar182[12] & bVar232;
      auVar145._0_12_ = auVar144;
      auVar145[13] = auVar182[13] & bVar236;
      auVar145[14] = auVar182[14] & bVar237;
      auVar145[15] = auVar182[15] & bVar48;
      iVar242 = *piVar8;
      iVar131 = *piVar6;
      auVar246._8_4_ = 0xfffffff8;
      auVar246._0_8_ = 0xfffffff8fffffff8;
      auVar246._12_4_ = 0xfffffff8;
      uVar23 = *(undefined8 *)(param_11 + 8);
      uVar159 = (undefined)uVar23;
      uVar160 = (undefined)((ulong)uVar23 >> 8);
      uVar161 = (undefined)((ulong)uVar23 >> 0x10);
      uVar162 = (undefined)((ulong)uVar23 >> 0x18);
      uVar163 = (undefined)((ulong)uVar23 >> 0x20);
      uVar164 = (undefined)((ulong)uVar23 >> 0x28);
      uVar165 = (undefined)((ulong)uVar23 >> 0x30);
      uVar166 = (undefined)((ulong)uVar23 >> 0x38);
      uVar23 = *(undefined8 *)param_11;
      uVar151 = (undefined)uVar23;
      uVar152 = (undefined)((ulong)uVar23 >> 8);
      uVar153 = (undefined)((ulong)uVar23 >> 0x10);
      uVar154 = (undefined)((ulong)uVar23 >> 0x18);
      uVar155 = (undefined)((ulong)uVar23 >> 0x20);
      uVar156 = (undefined)((ulong)uVar23 >> 0x28);
      uVar157 = (undefined)((ulong)uVar23 >> 0x30);
      uVar158 = (undefined)((ulong)uVar23 >> 0x38);
      auVar251._8_4_ = 0x20;
      auVar251._0_8_ = 0x2000000020;
      auVar251._12_4_ = 0x20;
      iVar134 = auVar210._0_4_ + iVar134;
      iVar148 = auVar210._4_4_ + (int)((ulong)auVar144._0_8_ >> 0x20);
      iVar149 = auVar210._8_4_ + auVar144._8_4_;
      iVar150 = auVar210._12_4_ + auVar145._12_4_;
      auVar140._8_4_ = 0xffffffe1;
      auVar140._0_8_ = 0xffffffe1ffffffe1;
      auVar140._12_4_ = 0xffffffe1;
      auVar146._8_8_ = 0xffffffffffffffff;
      auVar146._0_8_ = 0xffffffffffffffff;
      do {
        lVar47 = (long)param_3;
        auVar29[1] = uVar217;
        auVar29[0] = uVar216;
        auVar29[2] = uVar218;
        auVar29[3] = uVar219;
        auVar29[4] = uVar220;
        auVar29[5] = uVar221;
        auVar29[6] = uVar222;
        auVar29[7] = uVar223;
        auVar29[8] = uVar224;
        auVar29[9] = uVar225;
        auVar29[10] = uVar226;
        auVar29[11] = uVar227;
        auVar29[12] = uVar228;
        auVar29[13] = uVar229;
        auVar29[14] = uVar230;
        auVar29[15] = uVar231;
        auVar182 = NEON_sshl(auVar29,auVar246,4);
        auVar90 = NEON_sshl(auVar234,auVar246,4);
        fVar70 = fVar106 + (float)CONCAT13(uVar154,CONCAT12(uVar153,CONCAT11(uVar152,uVar151)));
        uVar151 = SUB41(fVar70,0);
        uVar152 = (undefined)((uint)fVar70 >> 8);
        uVar153 = (undefined)((uint)fVar70 >> 0x10);
        uVar154 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = fVar106 + (float)CONCAT13(uVar158,CONCAT12(uVar157,CONCAT11(uVar156,uVar155)));
        uVar155 = SUB41(fVar70,0);
        uVar156 = (undefined)((uint)fVar70 >> 8);
        uVar157 = (undefined)((uint)fVar70 >> 0x10);
        uVar158 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = fVar106 + (float)CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159)));
        uVar159 = SUB41(fVar70,0);
        uVar160 = (undefined)((uint)fVar70 >> 8);
        uVar161 = (undefined)((uint)fVar70 >> 0x10);
        uVar162 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = fVar106 + (float)CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163)));
        uVar163 = SUB41(fVar70,0);
        uVar164 = (undefined)((uint)fVar70 >> 8);
        uVar165 = (undefined)((uint)fVar70 >> 0x10);
        uVar166 = (undefined)((uint)fVar70 >> 0x18);
        auVar182 = NEON_smax(auVar182,ZEXT816(0),4);
        lVar46 = (lVar47 + (long)param_3 * 2) * 0x10;
        auVar90 = NEON_smax(auVar90,ZEXT816(0),4);
        while( true ) {
          lVar47 = lVar47 + 1;
          auVar77 = *(undefined (*) [16])param_10;
          pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar46);
          fVar254 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar255 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar70 = (float)*(undefined8 *)*pauVar10;
          fVar253 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          auVar110._0_4_ = auVar77._0_4_ - fVar70;
          auVar110._4_4_ = auVar77._4_4_ - fVar253;
          auVar110._8_4_ = auVar77._8_4_ - fVar254;
          auVar110._12_4_ = auVar77._12_4_ - fVar255;
          auVar77 = NEON_cmlt(auVar110,0,4);
          auVar111[0] = auVar77[0] & auVar75[0];
          auVar111[1] = auVar77[1] & auVar75[1];
          auVar111[2] = auVar77[2] & auVar75[2];
          auVar111[3] = auVar77[3] & auVar75[3];
          auVar111[4] = auVar77[4] & auVar75[4];
          auVar111[5] = auVar77[5] & auVar75[5];
          auVar111[6] = auVar77[6] & auVar75[6];
          auVar111[7] = auVar77[7] & auVar75[7];
          auVar111[8] = auVar77[8] & auVar75[8];
          auVar111[9] = auVar77[9] & auVar75[9];
          auVar111[10] = auVar77[10] & auVar75[10];
          auVar111[11] = auVar77[11] & auVar75[11];
          auVar111[12] = auVar77[12] & auVar75[12];
          auVar111[13] = auVar77[13] & auVar75[13];
          auVar111[14] = auVar77[14] & auVar75[14];
          auVar111[15] = auVar77[15] & auVar75[15];
          auVar77 = NEON_ext(auVar111,auVar111,8,1);
          if (CONCAT13(auVar77[3] | auVar111[3] | auVar77[7] | auVar111[7],
                       CONCAT12(auVar77[2] | auVar111[2] | auVar77[6] | auVar111[6],
                                CONCAT11(auVar77[1] | auVar111[1] | auVar77[5] | auVar111[5],
                                         auVar77[0] | auVar111[0] | auVar77[4] | auVar111[4]))) !=
              0xf) {
            auVar77 = NEON_smin(auVar90,auVar251,4);
            auVar92 = NEON_smin(auVar182,auVar251,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar46);
            auVar22[1] = uVar152;
            auVar22[0] = uVar151;
            auVar22[2] = uVar153;
            auVar22[3] = uVar154;
            auVar22[4] = uVar155;
            auVar22[5] = uVar156;
            auVar22[6] = uVar157;
            auVar22[7] = uVar158;
            auVar22[8] = uVar159;
            auVar22[9] = uVar160;
            auVar22[10] = uVar161;
            auVar22[11] = uVar162;
            auVar22[12] = uVar163;
            auVar22[13] = uVar164;
            auVar22[14] = uVar165;
            auVar22[15] = uVar166;
            auVar108 = NEON_fmax(auVar22,*(undefined (*) [16])param_9,4);
            auVar91 = NEON_smax(auVar77,ZEXT816(0),4);
            auVar77 = *(undefined (*) [16])(puVar9 + 2);
            auVar92 = NEON_smax(auVar92,ZEXT816(0),4);
            auVar91 = NEON_sshl(auVar146,auVar91,4);
            auVar92 = NEON_sshl(auVar146,auVar92,4);
            auVar112[0] = auVar91[0] & ~auVar92[0];
            auVar112[1] = auVar91[1] & ~auVar92[1];
            auVar112[2] = auVar91[2] & ~auVar92[2];
            auVar112[3] = auVar91[3] & ~auVar92[3];
            auVar112[4] = auVar91[4] & ~auVar92[4];
            auVar112[5] = auVar91[5] & ~auVar92[5];
            auVar112[6] = auVar91[6] & ~auVar92[6];
            auVar112[7] = auVar91[7] & ~auVar92[7];
            auVar112[8] = auVar91[8] & ~auVar92[8];
            auVar112[9] = auVar91[9] & ~auVar92[9];
            auVar112[10] = auVar91[10] & ~auVar92[10];
            auVar112[11] = auVar91[11] & ~auVar92[11];
            auVar112[12] = auVar91[12] & ~auVar92[12];
            auVar112[13] = auVar91[13] & ~auVar92[13];
            auVar112[14] = auVar91[14] & ~auVar92[14];
            auVar112[15] = auVar91[15] & ~auVar92[15];
            auVar123._0_4_ = auVar108._0_4_ - fVar70;
            auVar123._4_4_ = auVar108._4_4_ - fVar253;
            auVar123._8_4_ = auVar108._8_4_ - fVar254;
            auVar123._12_4_ = auVar108._12_4_ - fVar255;
            auVar53._0_4_ = (auVar77._0_4_ + auVar77._0_4_) - (fVar70 + auVar108._0_4_);
            auVar53._4_4_ = (auVar77._4_4_ + auVar77._4_4_) - (fVar253 + auVar108._4_4_);
            auVar53._8_4_ = (auVar77._8_4_ + auVar77._8_4_) - (fVar254 + auVar108._8_4_);
            auVar53._12_4_ = (auVar77._12_4_ + auVar77._12_4_) - (fVar255 + auVar108._12_4_);
            auVar20._12_4_ = 0xf0b0703;
            auVar20._0_12_ = auVar74;
            auVar91 = a64_TBL(ZEXT816(0),auVar112,auVar20);
            auVar205 = NEON_sshl(auVar123,auVar140,4);
            auVar92 = NEON_sshl(auVar53,auVar140,4);
            auVar210 = NEON_cmeq(auVar91,0,2);
            auVar124[0] = auVar205[0] | auVar210[0];
            auVar124[1] = auVar205[1] | auVar210[1];
            auVar124[2] = auVar205[2] | auVar210[2];
            auVar124[3] = auVar205[3] | auVar210[3];
            auVar124[4] = auVar205[4] | auVar210[4];
            auVar124[5] = auVar205[5] | auVar210[5];
            auVar124[6] = auVar205[6] | auVar210[6];
            auVar124[7] = auVar205[7] | auVar210[7];
            auVar124[8] = auVar205[8] | auVar210[8];
            auVar124[9] = auVar205[9] | auVar210[9];
            auVar124[10] = auVar205[10] | auVar210[10];
            auVar124[11] = auVar205[11] | auVar210[11];
            auVar124[12] = auVar205[12] | auVar210[12];
            auVar124[13] = auVar205[13] | auVar210[13];
            auVar124[14] = auVar205[14] | auVar210[14];
            auVar124[15] = auVar205[15] | auVar210[15];
            auVar113[0] = auVar91[0] & ~auVar124[0];
            auVar113[1] = auVar91[1] & ~auVar124[1];
            auVar113[2] = auVar91[2] & ~auVar124[2];
            auVar113[3] = auVar91[3] & ~auVar124[3];
            auVar113[4] = auVar91[4] & ~auVar124[4];
            auVar113[5] = auVar91[5] & ~auVar124[5];
            auVar113[6] = auVar91[6] & ~auVar124[6];
            auVar113[7] = auVar91[7] & ~auVar124[7];
            auVar113[8] = auVar91[8] & ~auVar124[8];
            auVar113[9] = auVar91[9] & ~auVar124[9];
            auVar113[10] = auVar91[10] & ~auVar124[10];
            auVar113[11] = auVar91[11] & ~auVar124[11];
            auVar113[12] = auVar91[12] & ~auVar124[12];
            auVar113[13] = auVar91[13] & ~auVar124[13];
            auVar113[14] = auVar91[14] & ~auVar124[14];
            auVar113[15] = auVar91[15] & ~auVar124[15];
            auVar205 = NEON_cmeq(auVar113,auVar146,4);
            auVar91 = *(undefined (*) [16])(puVar9 + 4);
            auVar54[0] = (auVar92[0] | auVar205[0]) & ~auVar124[0];
            auVar54[1] = (auVar92[1] | auVar205[1]) & ~auVar124[1];
            auVar54[2] = (auVar92[2] | auVar205[2]) & ~auVar124[2];
            auVar54[3] = (auVar92[3] | auVar205[3]) & ~auVar124[3];
            auVar54[4] = (auVar92[4] | auVar205[4]) & ~auVar124[4];
            auVar54[5] = (auVar92[5] | auVar205[5]) & ~auVar124[5];
            auVar54[6] = (auVar92[6] | auVar205[6]) & ~auVar124[6];
            auVar54[7] = (auVar92[7] | auVar205[7]) & ~auVar124[7];
            auVar54[8] = (auVar92[8] | auVar205[8]) & ~auVar124[8];
            auVar54[9] = (auVar92[9] | auVar205[9]) & ~auVar124[9];
            auVar54[10] = (auVar92[10] | auVar205[10]) & ~auVar124[10];
            auVar54[11] = (auVar92[11] | auVar205[11]) & ~auVar124[11];
            auVar54[12] = (auVar92[12] | auVar205[12]) & ~auVar124[12];
            auVar54[13] = (auVar92[13] | auVar205[13]) & ~auVar124[13];
            auVar54[14] = (auVar92[14] | auVar205[14]) & ~auVar124[14];
            auVar54[15] = (auVar92[15] | auVar205[15]) & ~auVar124[15];
            auVar205 = NEON_cmlt(auVar124,0,4);
            auVar92 = NEON_cmlt(auVar54,0,4);
            auVar205 = NEON_bsl(auVar205,auVar77,auVar108,1);
            auVar114[0] = auVar91[0] & ~auVar54[0] | auVar113[0];
            auVar114[1] = auVar91[1] & ~auVar54[1] | auVar113[1];
            auVar114[2] = auVar91[2] & ~auVar54[2] | auVar113[2];
            auVar114[3] = auVar91[3] & ~auVar54[3] | auVar113[3];
            auVar114[4] = auVar91[4] & ~auVar54[4] | auVar113[4];
            auVar114[5] = auVar91[5] & ~auVar54[5] | auVar113[5];
            auVar114[6] = auVar91[6] & ~auVar54[6] | auVar113[6];
            auVar114[7] = auVar91[7] & ~auVar54[7] | auVar113[7];
            auVar114[8] = auVar91[8] & ~auVar54[8] | auVar113[8];
            auVar114[9] = auVar91[9] & ~auVar54[9] | auVar113[9];
            auVar114[10] = auVar91[10] & ~auVar54[10] | auVar113[10];
            auVar114[11] = auVar91[11] & ~auVar54[11] | auVar113[11];
            auVar114[12] = auVar91[12] & ~auVar54[12] | auVar113[12];
            auVar114[13] = auVar91[13] & ~auVar54[13] | auVar113[13];
            auVar114[14] = auVar91[14] & ~auVar54[14] | auVar113[14];
            auVar114[15] = auVar91[15] & ~auVar54[15] | auVar113[15];
            auVar77 = NEON_bsl(auVar92,auVar108,auVar77,1);
            auVar97._8_4_ = 0x7f7fffff;
            auVar97._0_8_ = 0x7f7fffff7f7fffff;
            auVar97._12_4_ = 0x7f7fffff;
            auVar91 = NEON_cmeq(auVar114,auVar146,4);
            auVar77 = NEON_fmin(auVar205,auVar77,4);
            auVar92 = NEON_bif(auVar97,auVar77,auVar91,1);
            auVar24._12_4_ = fVar255;
            auVar24._0_12_ = *pauVar10;
            auVar77 = NEON_bif(auVar77,auVar24,auVar91,1);
            puVar9[1] = auVar77._8_8_;
            *puVar9 = auVar77._0_8_;
            puVar9[3] = auVar92._8_8_;
            puVar9[2] = auVar92._0_8_;
            lVar45 = *(long *)(this + 0x138);
            auVar55._0_8_ =
                 CONCAT17(auVar114[7] & ~auVar91[7],
                          CONCAT16(auVar114[6] & ~auVar91[6],
                                   CONCAT15(auVar114[5] & ~auVar91[5],
                                            CONCAT14(auVar114[4] & ~auVar91[4],
                                                     CONCAT13(auVar114[3] & ~auVar91[3],
                                                              CONCAT12(auVar114[2] & ~auVar91[2],
                                                                       CONCAT11(auVar114[1] &
                                                                                ~auVar91[1],
                                                                                auVar114[0] &
                                                                                ~auVar91[0])))))));
            auVar55[8] = auVar114[8] & ~auVar91[8];
            auVar55[9] = auVar114[9] & ~auVar91[9];
            auVar55[10] = auVar114[10] & ~auVar91[10];
            auVar55[11] = auVar114[11] & ~auVar91[11];
            auVar55[12] = auVar114[12] & ~auVar91[12];
            auVar55[13] = auVar114[13] & ~auVar91[13];
            auVar55[14] = auVar114[14] & ~auVar91[14];
            auVar55[15] = auVar114[15] & ~auVar91[15];
            *(long *)(lVar45 + lVar46 + 0x28) = auVar55._8_8_;
            *(undefined8 *)(lVar45 + lVar46 + 0x20) = auVar55._0_8_;
          }
          if (param_3 + param_2 <= lVar47) break;
          fVar70 = param_12 + (float)CONCAT13(uVar154,CONCAT12(uVar153,CONCAT11(uVar152,uVar151)));
          uVar151 = SUB41(fVar70,0);
          uVar152 = (undefined)((uint)fVar70 >> 8);
          uVar153 = (undefined)((uint)fVar70 >> 0x10);
          uVar154 = (undefined)((uint)fVar70 >> 0x18);
          fVar70 = param_12 + (float)CONCAT13(uVar158,CONCAT12(uVar157,CONCAT11(uVar156,uVar155)));
          uVar155 = SUB41(fVar70,0);
          uVar156 = (undefined)((uint)fVar70 >> 8);
          uVar157 = (undefined)((uint)fVar70 >> 0x10);
          uVar158 = (undefined)((uint)fVar70 >> 0x18);
          fVar70 = param_12 + (float)CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159)));
          uVar159 = SUB41(fVar70,0);
          uVar160 = (undefined)((uint)fVar70 >> 8);
          uVar161 = (undefined)((uint)fVar70 >> 0x10);
          uVar162 = (undefined)((uint)fVar70 >> 0x18);
          fVar70 = param_12 + (float)CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163)));
          uVar163 = SUB41(fVar70,0);
          uVar164 = (undefined)((uint)fVar70 >> 8);
          uVar165 = (undefined)((uint)fVar70 >> 0x10);
          uVar166 = (undefined)((uint)fVar70 >> 0x18);
          auVar182 = NEON_uqsub(auVar182,auVar251,2);
          lVar46 = lVar46 + 0x30;
          auVar90 = NEON_uqsub(auVar90,auVar251,2);
        }
        auVar51._0_4_ = iVar134 - iVar131;
        auVar51._4_4_ = iVar148 - iVar131;
        auVar51._8_4_ = iVar149 - iVar131;
        auVar51._12_4_ = iVar150 - iVar131;
        auVar182 = *(undefined (*) [16])param_11;
        auVar90 = NEON_sshl(auVar51,auVar140,4);
        auVar96._0_4_ = CONCAT13(uVar188,CONCAT12(uVar187,CONCAT11(uVar186,uVar185))) - iVar177;
        auVar96._4_4_ = CONCAT13(uVar192,CONCAT12(uVar191,CONCAT11(uVar190,uVar189))) - iVar177;
        auVar96._8_4_ = CONCAT13(uVar196,CONCAT12(uVar195,CONCAT11(uVar194,uVar193))) - iVar13;
        auVar96._12_4_ = CONCAT13(uVar200,CONCAT12(uVar199,CONCAT11(uVar198,uVar197))) - iVar13;
        fVar70 = param_13 + auVar182._0_4_;
        uVar151 = SUB41(fVar70,0);
        uVar152 = (undefined)((uint)fVar70 >> 8);
        uVar153 = (undefined)((uint)fVar70 >> 0x10);
        uVar154 = (undefined)((uint)fVar70 >> 0x18);
        fVar253 = param_13 + auVar182._4_4_;
        uVar155 = SUB41(fVar253,0);
        uVar156 = (undefined)((uint)fVar253 >> 8);
        uVar157 = (undefined)((uint)fVar253 >> 0x10);
        uVar158 = (undefined)((uint)fVar253 >> 0x18);
        fVar253 = param_13 + auVar182._8_4_;
        uVar159 = SUB41(fVar253,0);
        uVar160 = (undefined)((uint)fVar253 >> 8);
        uVar161 = (undefined)((uint)fVar253 >> 0x10);
        uVar162 = (undefined)((uint)fVar253 >> 0x18);
        fVar254 = param_13 + auVar182._12_4_;
        uVar163 = SUB41(fVar254,0);
        uVar164 = (undefined)((uint)fVar254 >> 8);
        uVar165 = (undefined)((uint)fVar254 >> 0x10);
        uVar166 = (undefined)((uint)fVar254 >> 0x18);
        iVar178 = auVar234._4_4_;
        iVar179 = auVar234._8_4_;
        iVar180 = auVar234._12_4_;
        auVar182 = NEON_sshl(auVar96,auVar140,4);
        iVar71 = CONCAT13(bVar240 & auVar90[3],
                          CONCAT12(bVar239 & auVar90[2],
                                   CONCAT11(bVar238 & auVar90[1],bVar69 & auVar90[0])));
        auVar73._0_8_ =
             CONCAT17(bVar240 & auVar90[7],
                      CONCAT16(bVar239 & auVar90[6],
                               CONCAT15(bVar238 & auVar90[5],CONCAT14(bVar69 & auVar90[4],iVar71))))
        ;
        auVar73[8] = bVar69 & auVar90[8];
        auVar73[9] = bVar238 & auVar90[9];
        auVar73[10] = bVar239 & auVar90[10];
        auVar73[11] = bVar240 & auVar90[11];
        auVar84[12] = bVar69 & auVar90[12];
        auVar84._0_12_ = auVar73;
        auVar84[13] = bVar238 & auVar90[13];
        auVar84[14] = bVar239 & auVar90[14];
        auVar84[15] = bVar240 & auVar90[15];
        param_3 = *(int *)(this + 300) + param_3;
        iVar134 = CONCAT13(bVar48 & auVar90[3],
                           CONCAT12(bVar237 & auVar90[2],
                                    CONCAT11(bVar236 & auVar90[1],bVar232 & auVar90[0]))) +
                  auVar51._0_4_;
        iVar148 = CONCAT13(bVar48 & auVar90[7],
                           CONCAT12(bVar237 & auVar90[6],
                                    CONCAT11(bVar236 & auVar90[5],bVar232 & auVar90[4]))) +
                  auVar51._4_4_;
        iVar149 = CONCAT13(bVar48 & auVar90[11],
                           CONCAT12(bVar237 & auVar90[10],
                                    CONCAT11(bVar236 & auVar90[9],bVar232 & auVar90[8]))) +
                  auVar51._8_4_;
        iVar150 = CONCAT13(bVar48 & auVar90[15],
                           CONCAT12(bVar237 & auVar90[14],
                                    CONCAT11(bVar236 & auVar90[13],bVar232 & auVar90[12]))) +
                  auVar51._12_4_;
        *(ulong *)(param_11 + 8) =
             CONCAT17(uVar166,CONCAT16(uVar165,CONCAT15(uVar164,CONCAT14(uVar163,fVar253))));
        *(ulong *)param_11 =
             CONCAT17(uVar158,CONCAT16(uVar157,CONCAT15(uVar156,CONCAT14(uVar155,fVar70))));
        iVar49 = CONCAT13(bVar105 & auVar182[3],
                          CONCAT12(bVar104 & auVar182[2],
                                   CONCAT11(bVar103 & auVar182[1],bVar102 & auVar182[0])));
        auVar50._0_8_ =
             CONCAT17(bVar105 & auVar182[7],
                      CONCAT16(bVar104 & auVar182[6],
                               CONCAT15(bVar103 & auVar182[5],CONCAT14(bVar102 & auVar182[4],iVar49)
                                       )));
        auVar50[8] = bVar102 & auVar182[8];
        auVar50[9] = bVar103 & auVar182[9];
        auVar50[10] = bVar104 & auVar182[10];
        auVar50[11] = bVar105 & auVar182[11];
        auVar52[12] = bVar102 & auVar182[12];
        auVar52._0_12_ = auVar50;
        auVar52[13] = bVar103 & auVar182[13];
        auVar52[14] = bVar104 & auVar182[14];
        auVar52[15] = bVar105 & auVar182[15];
        iVar201 = CONCAT13(bVar138 & auVar182[3],
                           CONCAT12(bVar137 & auVar182[2],
                                    CONCAT11(bVar136 & auVar182[1],bVar135 & auVar182[0])));
        auVar204._0_8_ =
             CONCAT17(bVar138 & auVar182[7],
                      CONCAT16(bVar137 & auVar182[6],
                               CONCAT15(bVar136 & auVar182[5],
                                        CONCAT14(bVar135 & auVar182[4],iVar201))));
        auVar204[8] = bVar135 & auVar182[8];
        auVar204[9] = bVar136 & auVar182[9];
        auVar204[10] = bVar137 & auVar182[10];
        auVar204[11] = bVar138 & auVar182[11];
        auVar209[12] = bVar135 & auVar182[12];
        auVar209._0_12_ = auVar204;
        auVar209[13] = bVar136 & auVar182[13];
        auVar209[14] = bVar137 & auVar182[14];
        auVar209[15] = bVar138 & auVar182[15];
        iVar71 = iVar242 + CONCAT13(uVar219,CONCAT12(uVar218,CONCAT11(uVar217,uVar216))) + iVar71;
        uVar216 = (undefined)iVar71;
        uVar217 = (undefined)((uint)iVar71 >> 8);
        uVar218 = (undefined)((uint)iVar71 >> 0x10);
        uVar219 = (undefined)((uint)iVar71 >> 0x18);
        iVar71 = iVar242 + CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220))) +
                 (int)((ulong)auVar73._0_8_ >> 0x20);
        uVar220 = (undefined)iVar71;
        uVar221 = (undefined)((uint)iVar71 >> 8);
        uVar222 = (undefined)((uint)iVar71 >> 0x10);
        uVar223 = (undefined)((uint)iVar71 >> 0x18);
        iVar71 = iVar242 + CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224))) +
                 auVar73._8_4_;
        uVar224 = (undefined)iVar71;
        uVar225 = (undefined)((uint)iVar71 >> 8);
        uVar226 = (undefined)((uint)iVar71 >> 0x10);
        uVar227 = (undefined)((uint)iVar71 >> 0x18);
        iVar71 = iVar242 + CONCAT13(uVar231,CONCAT12(uVar230,CONCAT11(uVar229,uVar228))) +
                 auVar84._12_4_;
        uVar228 = (undefined)iVar71;
        uVar229 = (undefined)((uint)iVar71 >> 8);
        uVar230 = (undefined)((uint)iVar71 >> 0x10);
        uVar231 = (undefined)((uint)iVar71 >> 0x18);
        iVar49 = iVar49 + auVar96._0_4_;
        uVar185 = (undefined)iVar49;
        uVar186 = (undefined)((uint)iVar49 >> 8);
        uVar187 = (undefined)((uint)iVar49 >> 0x10);
        uVar188 = (undefined)((uint)iVar49 >> 0x18);
        iVar49 = (int)((ulong)auVar50._0_8_ >> 0x20) + auVar96._4_4_;
        uVar189 = (undefined)iVar49;
        uVar190 = (undefined)((uint)iVar49 >> 8);
        uVar191 = (undefined)((uint)iVar49 >> 0x10);
        uVar192 = (undefined)((uint)iVar49 >> 0x18);
        iVar49 = auVar50._8_4_ + auVar96._8_4_;
        uVar193 = (undefined)iVar49;
        uVar194 = (undefined)((uint)iVar49 >> 8);
        uVar195 = (undefined)((uint)iVar49 >> 0x10);
        uVar196 = (undefined)((uint)iVar49 >> 0x18);
        iVar49 = auVar52._12_4_ + auVar96._12_4_;
        uVar197 = (undefined)iVar49;
        uVar198 = (undefined)((uint)iVar49 >> 8);
        uVar199 = (undefined)((uint)iVar49 >> 0x10);
        uVar200 = (undefined)((uint)iVar49 >> 0x18);
        auVar234._0_4_ = iVar119 + auVar234._0_4_ + iVar201;
        auVar234._4_4_ = iVar119 + iVar178 + (int)((ulong)auVar204._0_8_ >> 0x20);
        auVar234._8_4_ = iVar119 + iVar179 + auVar204._8_4_;
        auVar234._12_4_ = iVar119 + iVar180 + auVar209._12_4_;
      } while (param_3 < iVar244);
    }
    bVar69 = (byte)((ulong)uStack_98 >> 8);
    bVar238 = (byte)((ulong)uStack_98 >> 0x10);
    bVar239 = (byte)((ulong)uStack_98 >> 0x18);
    bVar240 = (byte)((ulong)uStack_98 >> 0x20);
    bVar232 = (byte)((ulong)uStack_98 >> 0x28);
    bVar236 = (byte)((ulong)uStack_98 >> 0x30);
    bVar237 = (byte)((ulong)uStack_98 >> 0x38);
    auVar182 = _DAT_004c4480;
    if (param_3 < param_5) {
      auVar56._8_4_ = 0xfffffff8;
      auVar56._0_8_ = 0xfffffff8fffffff8;
      auVar56._12_4_ = 0xfffffff8;
      auVar182 = *(undefined (*) [16])param_11;
      auVar91 = ZEXT816(0);
      lVar47 = (long)param_3;
      auVar75[1] = uVar217;
      auVar75[0] = uVar216;
      auVar75[2] = uVar218;
      auVar75[3] = uVar219;
      auVar75[4] = uVar220;
      auVar75[5] = uVar221;
      auVar75[6] = uVar222;
      auVar75[7] = uVar223;
      auVar75[8] = uVar224;
      auVar75[9] = uVar225;
      auVar75[10] = uVar226;
      auVar75[11] = uVar227;
      auVar75[12] = uVar228;
      auVar75[13] = uVar229;
      auVar75[14] = uVar230;
      auVar75[15] = uVar231;
      auVar90 = NEON_sshl(auVar75,auVar56,4);
      auVar77 = NEON_sshl(auVar86,auVar56,4);
      auVar75 = NEON_sshl(auVar234,auVar56,4);
      fVar70 = fVar106 + auVar182._0_4_;
      uVar216 = SUB41(fVar70,0);
      uVar217 = (undefined)((uint)fVar70 >> 8);
      uVar218 = (undefined)((uint)fVar70 >> 0x10);
      uVar219 = (undefined)((uint)fVar70 >> 0x18);
      fVar70 = fVar106 + auVar182._4_4_;
      uVar220 = SUB41(fVar70,0);
      uVar221 = (undefined)((uint)fVar70 >> 8);
      uVar222 = (undefined)((uint)fVar70 >> 0x10);
      uVar223 = (undefined)((uint)fVar70 >> 0x18);
      fVar70 = fVar106 + auVar182._8_4_;
      uVar224 = SUB41(fVar70,0);
      uVar225 = (undefined)((uint)fVar70 >> 8);
      uVar226 = (undefined)((uint)fVar70 >> 0x10);
      uVar227 = (undefined)((uint)fVar70 >> 0x18);
      fVar70 = fVar106 + auVar182._12_4_;
      uVar228 = SUB41(fVar70,0);
      uVar229 = (undefined)((uint)fVar70 >> 8);
      uVar230 = (undefined)((uint)fVar70 >> 0x10);
      uVar231 = (undefined)((uint)fVar70 >> 0x18);
      auVar182 = NEON_smax(auVar90,auVar91,4);
      lVar46 = (lVar47 + (long)param_3 * 2) * 0x10;
      auVar90 = NEON_smax(auVar77,auVar91,4);
      auVar75 = NEON_smax(auVar75,auVar91,4);
      auVar248._8_8_ = 0xffffffffffffffff;
      auVar248._0_8_ = 0xffffffffffffffff;
      auVar252._8_4_ = 0xffffffe1;
      auVar252._0_8_ = 0xffffffe1ffffffe1;
      auVar252._12_4_ = 0xffffffe1;
      auVar43._12_4_ = _UNK_004c513c;
      auVar43._0_12_ = _DAT_004c5130;
      auVar147._8_4_ = 0x7f7fffff;
      auVar147._0_8_ = 0x7f7fffff7f7fffff;
      auVar147._12_4_ = 0x7f7fffff;
      while( true ) {
        lVar47 = lVar47 + 1;
        auVar77 = *(undefined (*) [16])param_10;
        pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar46);
        fVar254 = (float)*(undefined8 *)(*pauVar10 + 8);
        fVar255 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
        fVar70 = (float)*(undefined8 *)*pauVar10;
        fVar253 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
        auVar57._0_4_ = auVar77._0_4_ - fVar70;
        auVar57._4_4_ = auVar77._4_4_ - fVar253;
        auVar57._8_4_ = auVar77._8_4_ - fVar254;
        auVar57._12_4_ = auVar77._12_4_ - fVar255;
        auVar77 = NEON_cmlt(auVar57,0,4);
        bVar48 = auVar77[0] & 1;
        auVar58._0_5_ = CONCAT14(auVar77[4],(uint)bVar48) & 0x2ffffffff;
        auVar58._5_3_ = 0;
        auVar58[8] = auVar77[8] & 4;
        auVar58._9_3_ = 0;
        auVar58[12] = auVar77[12] & 8;
        auVar58._13_3_ = 0;
        auVar92 = NEON_ext(auVar58,auVar58,8,1);
        if (CONCAT13(auVar92[3] | auVar92[7],
                     CONCAT12(auVar92[2] | auVar92[6],
                              CONCAT11(auVar92[1] | auVar92[5],
                                       auVar92[0] | bVar48 | auVar92[4] | auVar77[4] & 2))) != 0xf)
        {
          auVar35._8_4_ = 0x20;
          auVar35._0_8_ = 0x2000000020;
          auVar35._12_4_ = 0x20;
          auVar77 = NEON_smin(auVar182,auVar35,4);
          auVar36._8_4_ = 0x20;
          auVar36._0_8_ = 0x2000000020;
          auVar36._12_4_ = 0x20;
          auVar92 = NEON_smin(auVar90,auVar36,4);
          puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar46);
          auVar37._8_4_ = 0x20;
          auVar37._0_8_ = 0x2000000020;
          auVar37._12_4_ = 0x20;
          auVar205 = NEON_smin(auVar75,auVar37,4);
          auVar77 = NEON_smax(auVar77,auVar91,4);
          auVar108 = NEON_smax(auVar92,auVar91,4);
          auVar205 = NEON_smax(auVar205,auVar91,4);
          auVar92 = NEON_sshl(auVar248,auVar77,4);
          auVar108 = NEON_sshl(auVar248,auVar108,4);
          auVar210 = NEON_sshl(auVar248,auVar205,4);
          auVar30[1] = uVar217;
          auVar30[0] = uVar216;
          auVar30[2] = uVar218;
          auVar30[3] = uVar219;
          auVar30[4] = uVar220;
          auVar30[5] = uVar221;
          auVar30[6] = uVar222;
          auVar30[7] = uVar223;
          auVar30[8] = uVar224;
          auVar30[9] = uVar225;
          auVar30[10] = uVar226;
          auVar30[11] = uVar227;
          auVar30[12] = uVar228;
          auVar30[13] = uVar229;
          auVar30[14] = uVar230;
          auVar30[15] = uVar231;
          auVar205 = NEON_fmax(auVar30,*(undefined (*) [16])param_9,4);
          auVar77 = *(undefined (*) [16])(puVar9 + 2);
          auVar59[0] = auVar210[0] & ~(auVar108[0] | auVar92[0]);
          auVar59[1] = auVar210[1] & ~(auVar108[1] | auVar92[1]);
          auVar59[2] = auVar210[2] & ~(auVar108[2] | auVar92[2]);
          auVar59[3] = auVar210[3] & ~(auVar108[3] | auVar92[3]);
          auVar59[4] = auVar210[4] & ~(auVar108[4] | auVar92[4]);
          auVar59[5] = auVar210[5] & ~(auVar108[5] | auVar92[5]);
          auVar59[6] = auVar210[6] & ~(auVar108[6] | auVar92[6]);
          auVar59[7] = auVar210[7] & ~(auVar108[7] | auVar92[7]);
          auVar59[8] = auVar210[8] & ~(auVar108[8] | auVar92[8]);
          auVar59[9] = auVar210[9] & ~(auVar108[9] | auVar92[9]);
          auVar59[10] = auVar210[10] & ~(auVar108[10] | auVar92[10]);
          auVar59[11] = auVar210[11] & ~(auVar108[11] | auVar92[11]);
          auVar59[12] = auVar210[12] & ~(auVar108[12] | auVar92[12]);
          auVar59[13] = auVar210[13] & ~(auVar108[13] | auVar92[13]);
          auVar59[14] = auVar210[14] & ~(auVar108[14] | auVar92[14]);
          auVar59[15] = auVar210[15] & ~(auVar108[15] | auVar92[15]);
          auVar98._0_4_ = auVar205._0_4_ - fVar70;
          auVar98._4_4_ = auVar205._4_4_ - fVar253;
          auVar98._8_4_ = auVar205._8_4_ - fVar254;
          auVar98._12_4_ = auVar205._12_4_ - fVar255;
          auVar92 = a64_TBL(ZEXT816(0),auVar59,auVar43);
          auVar108 = NEON_sshl(auVar98,auVar252,4);
          auVar210 = NEON_cmeq(auVar92,0,2);
          auVar99[0] = auVar108[0] | auVar210[0];
          auVar99[1] = auVar108[1] | auVar210[1];
          auVar99[2] = auVar108[2] | auVar210[2];
          auVar99[3] = auVar108[3] | auVar210[3];
          auVar99[4] = auVar108[4] | auVar210[4];
          auVar99[5] = auVar108[5] | auVar210[5];
          auVar99[6] = auVar108[6] | auVar210[6];
          auVar99[7] = auVar108[7] | auVar210[7];
          auVar99[8] = auVar108[8] | auVar210[8];
          auVar99[9] = auVar108[9] | auVar210[9];
          auVar99[10] = auVar108[10] | auVar210[10];
          auVar99[11] = auVar108[11] | auVar210[11];
          auVar99[12] = auVar108[12] | auVar210[12];
          auVar99[13] = auVar108[13] | auVar210[13];
          auVar99[14] = auVar108[14] | auVar210[14];
          auVar99[15] = auVar108[15] | auVar210[15];
          auVar125._0_4_ = (auVar77._0_4_ + auVar77._0_4_) - (fVar70 + auVar205._0_4_);
          auVar125._4_4_ = (auVar77._4_4_ + auVar77._4_4_) - (fVar253 + auVar205._4_4_);
          auVar125._8_4_ = (auVar77._8_4_ + auVar77._8_4_) - (fVar254 + auVar205._8_4_);
          auVar125._12_4_ = (auVar77._12_4_ + auVar77._12_4_) - (fVar255 + auVar205._12_4_);
          auVar60[0] = auVar92[0] & ~auVar99[0];
          auVar60[1] = auVar92[1] & ~auVar99[1];
          auVar60[2] = auVar92[2] & ~auVar99[2];
          auVar60[3] = auVar92[3] & ~auVar99[3];
          auVar60[4] = auVar92[4] & ~auVar99[4];
          auVar60[5] = auVar92[5] & ~auVar99[5];
          auVar60[6] = auVar92[6] & ~auVar99[6];
          auVar60[7] = auVar92[7] & ~auVar99[7];
          auVar60[8] = auVar92[8] & ~auVar99[8];
          auVar60[9] = auVar92[9] & ~auVar99[9];
          auVar60[10] = auVar92[10] & ~auVar99[10];
          auVar60[11] = auVar92[11] & ~auVar99[11];
          auVar60[12] = auVar92[12] & ~auVar99[12];
          auVar60[13] = auVar92[13] & ~auVar99[13];
          auVar60[14] = auVar92[14] & ~auVar99[14];
          auVar60[15] = auVar92[15] & ~auVar99[15];
          auVar108 = NEON_sshl(auVar125,auVar252,4);
          auVar210 = NEON_cmeq(auVar60,auVar248,4);
          auVar92 = *(undefined (*) [16])(puVar9 + 4);
          auVar126[0] = (auVar108[0] | auVar210[0]) & ~auVar99[0];
          auVar126[1] = (auVar108[1] | auVar210[1]) & ~auVar99[1];
          auVar126[2] = (auVar108[2] | auVar210[2]) & ~auVar99[2];
          auVar126[3] = (auVar108[3] | auVar210[3]) & ~auVar99[3];
          auVar126[4] = (auVar108[4] | auVar210[4]) & ~auVar99[4];
          auVar126[5] = (auVar108[5] | auVar210[5]) & ~auVar99[5];
          auVar126[6] = (auVar108[6] | auVar210[6]) & ~auVar99[6];
          auVar126[7] = (auVar108[7] | auVar210[7]) & ~auVar99[7];
          auVar126[8] = (auVar108[8] | auVar210[8]) & ~auVar99[8];
          auVar126[9] = (auVar108[9] | auVar210[9]) & ~auVar99[9];
          auVar126[10] = (auVar108[10] | auVar210[10]) & ~auVar99[10];
          auVar126[11] = (auVar108[11] | auVar210[11]) & ~auVar99[11];
          auVar126[12] = (auVar108[12] | auVar210[12]) & ~auVar99[12];
          auVar126[13] = (auVar108[13] | auVar210[13]) & ~auVar99[13];
          auVar126[14] = (auVar108[14] | auVar210[14]) & ~auVar99[14];
          auVar126[15] = (auVar108[15] | auVar210[15]) & ~auVar99[15];
          auVar108 = NEON_cmlt(auVar99,0,4);
          auVar210 = NEON_cmlt(auVar126,0,4);
          auVar108 = NEON_bsl(auVar108,auVar77,auVar205,1);
          auVar61[0] = auVar92[0] & ~auVar126[0] | auVar60[0];
          auVar61[1] = auVar92[1] & ~auVar126[1] | auVar60[1];
          auVar61[2] = auVar92[2] & ~auVar126[2] | auVar60[2];
          auVar61[3] = auVar92[3] & ~auVar126[3] | auVar60[3];
          auVar61[4] = auVar92[4] & ~auVar126[4] | auVar60[4];
          auVar61[5] = auVar92[5] & ~auVar126[5] | auVar60[5];
          auVar61[6] = auVar92[6] & ~auVar126[6] | auVar60[6];
          auVar61[7] = auVar92[7] & ~auVar126[7] | auVar60[7];
          auVar61[8] = auVar92[8] & ~auVar126[8] | auVar60[8];
          auVar61[9] = auVar92[9] & ~auVar126[9] | auVar60[9];
          auVar61[10] = auVar92[10] & ~auVar126[10] | auVar60[10];
          auVar61[11] = auVar92[11] & ~auVar126[11] | auVar60[11];
          auVar61[12] = auVar92[12] & ~auVar126[12] | auVar60[12];
          auVar61[13] = auVar92[13] & ~auVar126[13] | auVar60[13];
          auVar61[14] = auVar92[14] & ~auVar126[14] | auVar60[14];
          auVar61[15] = auVar92[15] & ~auVar126[15] | auVar60[15];
          auVar77 = NEON_bif(auVar205,auVar77,auVar210,1);
          auVar205 = NEON_cmeq(auVar61,auVar248,4);
          auVar77 = NEON_fmin(auVar108,auVar77,4);
          auVar92 = NEON_bsl(auVar205,auVar147,auVar77,1);
          auVar21._12_4_ = fVar255;
          auVar21._0_12_ = *pauVar10;
          auVar77 = NEON_bif(auVar77,auVar21,auVar205,1);
          puVar9[1] = auVar77._8_8_;
          *puVar9 = auVar77._0_8_;
          puVar9[3] = auVar92._8_8_;
          puVar9[2] = auVar92._0_8_;
          lVar45 = *(long *)(this + 0x138) + lVar46;
          *(byte *)(lVar45 + 0x30) = auVar61[8] & ~auVar205[8];
          *(byte *)(lVar45 + 0x31) = auVar61[9] & ~auVar205[9];
          *(byte *)(lVar45 + 0x32) = auVar61[10] & ~auVar205[10];
          *(byte *)(lVar45 + 0x33) = auVar61[11] & ~auVar205[11];
          *(byte *)(lVar45 + 0x34) = auVar61[12] & ~auVar205[12];
          *(byte *)(lVar45 + 0x35) = auVar61[13] & ~auVar205[13];
          *(byte *)(lVar45 + 0x36) = auVar61[14] & ~auVar205[14];
          *(byte *)(lVar45 + 0x37) = auVar61[15] & ~auVar205[15];
          *(byte *)(lVar45 + 0x20) = auVar61[0] & ~auVar205[0];
          *(byte *)(lVar45 + 0x21) = auVar61[1] & ~auVar205[1];
          *(byte *)(lVar45 + 0x22) = auVar61[2] & ~auVar205[2];
          *(byte *)(lVar45 + 0x23) = auVar61[3] & ~auVar205[3];
          *(byte *)(lVar45 + 0x24) = auVar61[4] & ~auVar205[4];
          *(byte *)(lVar45 + 0x25) = auVar61[5] & ~auVar205[5];
          *(byte *)(lVar45 + 0x26) = auVar61[6] & ~auVar205[6];
          *(byte *)(lVar45 + 0x27) = auVar61[7] & ~auVar205[7];
        }
        if (param_3 + param_2 <= lVar47) break;
        auVar38._8_4_ = 0x20;
        auVar38._0_8_ = 0x2000000020;
        auVar38._12_4_ = 0x20;
        auVar182 = NEON_uqsub(auVar182,auVar38,2);
        auVar39._8_4_ = 0x20;
        auVar39._0_8_ = 0x2000000020;
        auVar39._12_4_ = 0x20;
        auVar90 = NEON_uqsub(auVar90,auVar39,2);
        lVar46 = lVar46 + 0x30;
        fVar70 = param_12 + (float)CONCAT13(uVar219,CONCAT12(uVar218,CONCAT11(uVar217,uVar216)));
        uVar216 = SUB41(fVar70,0);
        uVar217 = (undefined)((uint)fVar70 >> 8);
        uVar218 = (undefined)((uint)fVar70 >> 0x10);
        uVar219 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = param_12 + (float)CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220)));
        uVar220 = SUB41(fVar70,0);
        uVar221 = (undefined)((uint)fVar70 >> 8);
        uVar222 = (undefined)((uint)fVar70 >> 0x10);
        uVar223 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = param_12 + (float)CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224)));
        uVar224 = SUB41(fVar70,0);
        uVar225 = (undefined)((uint)fVar70 >> 8);
        uVar226 = (undefined)((uint)fVar70 >> 0x10);
        uVar227 = (undefined)((uint)fVar70 >> 0x18);
        fVar70 = param_12 + (float)CONCAT13(uVar231,CONCAT12(uVar230,CONCAT11(uVar229,uVar228)));
        uVar228 = SUB41(fVar70,0);
        uVar229 = (undefined)((uint)fVar70 >> 8);
        uVar230 = (undefined)((uint)fVar70 >> 0x10);
        uVar231 = (undefined)((uint)fVar70 >> 0x18);
        auVar40._8_4_ = 0x20;
        auVar40._0_8_ = 0x2000000020;
        auVar40._12_4_ = 0x20;
        auVar75 = NEON_uqsub(auVar75,auVar40,2);
      }
      param_3 = *(int *)(this + 300) + param_3;
      auVar182 = _DAT_004c4480;
    }
    _DAT_004c4480 = auVar182;
    if (param_3 < param_5) {
      auVar211._8_4_ = 0xffffffe1;
      auVar211._0_8_ = 0xffffffe1ffffffe1;
      auVar211._12_4_ = 0xffffffe1;
      auVar100._0_4_ = CONCAT13(uVar188,CONCAT12(uVar187,CONCAT11(uVar186,uVar185))) - iVar177;
      auVar100._4_4_ = CONCAT13(uVar192,CONCAT12(uVar191,CONCAT11(uVar190,uVar189))) - iVar177;
      auVar100._8_4_ = CONCAT13(uVar196,CONCAT12(uVar195,CONCAT11(uVar194,uVar193))) - iVar13;
      auVar100._12_4_ = CONCAT13(uVar200,CONCAT12(uVar199,CONCAT11(uVar198,uVar197))) - iVar13;
      auVar62._0_4_ = local_50 - iVar120;
      auVar62._4_4_ = iStack_4c - iVar120;
      auVar62._8_4_ = iVar132 - iVar120;
      auVar62._12_4_ = iVar133 - iVar120;
      auVar75 = *(undefined (*) [16])param_11;
      auVar90 = NEON_sshl(auVar100,auVar211,4);
      auVar235._8_4_ = 0x20;
      auVar235._0_8_ = 0x2000000020;
      auVar235._12_4_ = 0x20;
      fVar70 = auVar75._0_4_;
      fVar253 = auVar75._4_4_;
      fVar254 = auVar75._8_4_;
      fVar255 = auVar75._12_4_;
      auVar75 = NEON_sshl(auVar62,auVar211,4);
      iVar132 = CONCAT13(bVar138 & auVar90[3],
                         CONCAT12(bVar137 & auVar90[2],
                                  CONCAT11(bVar136 & auVar90[1],bVar135 & auVar90[0])));
      auVar212._0_8_ =
           CONCAT17(bVar138 & auVar90[7],
                    CONCAT16(bVar137 & auVar90[6],
                             CONCAT15(bVar136 & auVar90[5],CONCAT14(bVar135 & auVar90[4],iVar132))))
      ;
      auVar212[8] = bVar135 & auVar90[8];
      auVar212[9] = bVar136 & auVar90[9];
      auVar212[10] = bVar137 & auVar90[10];
      auVar212[11] = bVar138 & auVar90[11];
      auVar214[12] = bVar135 & auVar90[12];
      auVar214._0_12_ = auVar212;
      auVar214[13] = bVar136 & auVar90[13];
      auVar214[14] = bVar137 & auVar90[14];
      auVar214[15] = bVar138 & auVar90[15];
      iVar244 = CONCAT13(bVar170 & auVar75[3],
                         CONCAT12(bVar169 & auVar75[2],
                                  CONCAT11(bVar168 & auVar75[1],bVar167 & auVar75[0])));
      auVar74._0_8_ =
           CONCAT17(bVar170 & auVar75[7],
                    CONCAT16(bVar169 & auVar75[6],
                             CONCAT15(bVar168 & auVar75[5],CONCAT14(bVar167 & auVar75[4],iVar244))))
      ;
      auVar74[8] = bStack_88 & auVar75[8];
      auVar74[9] = bStack_87 & auVar75[9];
      auVar74[10] = bStack_86 & auVar75[10];
      auVar74[11] = bStack_85 & auVar75[11];
      auVar85[12] = bStack_84 & auVar75[12];
      auVar85._0_12_ = auVar74;
      auVar85[13] = bStack_83 & auVar75[13];
      auVar85[14] = bStack_82 & auVar75[14];
      auVar85[15] = bStack_81 & auVar75[15];
      iVar131 = CONCAT13(bVar174 & auVar75[3],
                         CONCAT12(bVar173 & auVar75[2],
                                  CONCAT11(bVar172 & auVar75[1],bVar171 & auVar75[0])));
      auVar121._0_8_ =
           CONCAT17(bVar174 & auVar75[7],
                    CONCAT16(bVar173 & auVar75[6],
                             CONCAT15(bVar172 & auVar75[5],CONCAT14(bVar171 & auVar75[4],iVar131))))
      ;
      auVar121[8] = (byte)uStack_98 & auVar75[8];
      auVar121[9] = bVar69 & auVar75[9];
      auVar121[10] = bVar238 & auVar75[10];
      auVar121[11] = bVar239 & auVar75[11];
      auVar127[12] = bVar240 & auVar75[12];
      auVar127._0_12_ = auVar121;
      auVar127[13] = bVar232 & auVar75[13];
      auVar127[14] = bVar236 & auVar75[14];
      auVar127[15] = bVar237 & auVar75[15];
      iVar242 = CONCAT13(bVar105 & auVar90[3],
                         CONCAT12(bVar104 & auVar90[2],
                                  CONCAT11(bVar103 & auVar90[1],bVar102 & auVar90[0]))) +
                auVar100._0_4_;
      iVar133 = CONCAT13(bVar105 & auVar90[7],
                         CONCAT12(bVar104 & auVar90[6],
                                  CONCAT11(bVar103 & auVar90[5],bVar102 & auVar90[4]))) +
                auVar100._4_4_;
      iVar134 = CONCAT13(bVar105 & auVar90[11],
                         CONCAT12(bVar104 & auVar90[10],
                                  CONCAT11(bVar103 & auVar90[9],bVar102 & auVar90[8]))) +
                auVar100._8_4_;
      iVar148 = CONCAT13(bVar105 & auVar90[15],
                         CONCAT12(bVar104 & auVar90[14],
                                  CONCAT11(bVar103 & auVar90[13],bVar102 & auVar90[12]))) +
                auVar100._12_4_;
      auVar183._0_4_ = iVar119 + auVar234._0_4_ + iVar132;
      auVar183._4_4_ = iVar119 + auVar234._4_4_ + (int)((ulong)auVar212._0_8_ >> 0x20);
      auVar183._8_4_ = iVar119 + auVar234._8_4_ + auVar212._8_4_;
      auVar183._12_4_ = iVar119 + auVar234._12_4_ + auVar214._12_4_;
      iVar244 = iVar244 + auVar62._0_4_;
      iVar132 = (int)((ulong)auVar74._0_8_ >> 0x20) + auVar62._4_4_;
      iVar149 = auVar74._8_4_ + auVar62._8_4_;
      iVar150 = auVar85._12_4_ + auVar62._12_4_;
      auVar175._0_4_ = iVar11 + auVar86._0_4_ + iVar131;
      auVar175._4_4_ = iVar11 + auVar86._4_4_ + (int)((ulong)auVar121._0_8_ >> 0x20);
      auVar175._8_4_ = iVar11 + auVar86._8_4_ + auVar121._8_4_;
      auVar175._12_4_ = iVar11 + auVar86._12_4_ + auVar127._12_4_;
      while( true ) {
        auVar25[8] = 0xf8;
        auVar25._0_8_ = 0xfffffff8fffffff8;
        auVar25[9] = 0xff;
        auVar25[10] = 0xff;
        auVar25[11] = 0xff;
        auVar25[12] = 0xf8;
        auVar25[13] = 0xff;
        auVar25[14] = 0xff;
        auVar25[15] = 0xff;
        auVar75 = NEON_sshl(auVar175,auVar25,4);
        lVar47 = (long)param_3;
        auVar26[8] = 0xf8;
        auVar26._0_8_ = 0xfffffff8fffffff8;
        auVar26[9] = 0xff;
        auVar26[10] = 0xff;
        auVar26[11] = 0xff;
        auVar26[12] = 0xf8;
        auVar26[13] = 0xff;
        auVar26[14] = 0xff;
        auVar26[15] = 0xff;
        auVar90 = NEON_sshl(auVar183,auVar26,4);
        *(ulong *)(param_11 + 8) = CONCAT44(param_13 + fVar255,param_13 + fVar254);
        *(ulong *)param_11 = CONCAT44(param_13 + fVar253,param_13 + fVar70);
        fVar70 = fVar106 + param_13 + fVar70;
        fVar253 = fVar106 + param_13 + fVar253;
        fVar254 = fVar106 + param_13 + fVar254;
        fVar255 = fVar106 + param_13 + fVar255;
        auVar75 = NEON_smax(auVar75,ZEXT216(0),4);
        auVar90 = NEON_smax(auVar90,ZEXT216(0),4);
        lVar46 = (lVar47 + (long)param_3 * 2) * 0x10;
        while( true ) {
          lVar47 = lVar47 + 1;
          auVar234 = *(undefined (*) [16])param_10;
          auVar77 = *(undefined (*) [16])(*(long *)(this + 0x138) + lVar46);
          fVar139 = auVar77._0_4_;
          auVar63._0_4_ = auVar234._0_4_ - fVar139;
          fVar141 = auVar77._4_4_;
          auVar63._4_4_ = auVar234._4_4_ - fVar141;
          fVar142 = auVar77._8_4_;
          auVar63._8_4_ = auVar234._8_4_ - fVar142;
          fVar143 = auVar77._12_4_;
          auVar63._12_4_ = auVar234._12_4_ - fVar143;
          auVar234 = NEON_cmlt(auVar63,0,4);
          auVar64[0] = auVar234[0] & auVar182[0];
          auVar64[1] = auVar234[1] & auVar182[1];
          auVar64[2] = auVar234[2] & auVar182[2];
          auVar64[3] = auVar234[3] & auVar182[3];
          auVar64[4] = auVar234[4] & auVar182[4];
          auVar64[5] = auVar234[5] & auVar182[5];
          auVar64[6] = auVar234[6] & auVar182[6];
          auVar64[7] = auVar234[7] & auVar182[7];
          auVar64[8] = auVar234[8] & auVar182[8];
          auVar64[9] = auVar234[9] & auVar182[9];
          auVar64[10] = auVar234[10] & auVar182[10];
          auVar64[11] = auVar234[11] & auVar182[11];
          auVar64[12] = auVar234[12] & auVar182[12];
          auVar64[13] = auVar234[13] & auVar182[13];
          auVar64[14] = auVar234[14] & auVar182[14];
          auVar64[15] = auVar234[15] & auVar182[15];
          auVar234 = NEON_ext(auVar64,auVar64,8,1);
          if (CONCAT13(auVar234[3] | auVar64[3] | auVar234[7] | auVar64[7],
                       CONCAT12(auVar234[2] | auVar64[2] | auVar234[6] | auVar64[6],
                                CONCAT11(auVar234[1] | auVar64[1] | auVar234[5] | auVar64[5],
                                         auVar234[0] | auVar64[0] | auVar234[4] | auVar64[4]))) !=
              0xf) {
            auVar234 = NEON_smin(auVar90,auVar235,4);
            auVar86 = NEON_smin(auVar75,auVar235,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar46);
            auVar41._4_4_ = fVar253;
            auVar41._0_4_ = fVar70;
            auVar41._8_4_ = fVar254;
            auVar41._12_4_ = fVar255;
            auVar91 = NEON_fmax(auVar41,*(undefined (*) [16])param_9,4);
            auVar234 = NEON_smax(auVar234,ZEXT216(0),4);
            auVar86 = NEON_smax(auVar86,ZEXT216(0),4);
            auVar115._0_4_ = auVar91._0_4_ - fVar139;
            auVar115._4_4_ = auVar91._4_4_ - fVar141;
            auVar115._8_4_ = auVar91._8_4_ - fVar142;
            auVar115._12_4_ = auVar91._12_4_ - fVar143;
            auVar31[8] = 0xff;
            auVar31._0_8_ = 0xffffffffffffffff;
            auVar31[9] = 0xff;
            auVar31[10] = 0xff;
            auVar31[11] = 0xff;
            auVar31[12] = 0xff;
            auVar31[13] = 0xff;
            auVar31[14] = 0xff;
            auVar31[15] = 0xff;
            auVar234 = NEON_sshl(auVar31,auVar234,4);
            auVar32[8] = 0xff;
            auVar32._0_8_ = 0xffffffffffffffff;
            auVar32[9] = 0xff;
            auVar32[10] = 0xff;
            auVar32[11] = 0xff;
            auVar32[12] = 0xff;
            auVar32[13] = 0xff;
            auVar32[14] = 0xff;
            auVar32[15] = 0xff;
            auVar86 = NEON_sshl(auVar32,auVar86,4);
            auVar92 = NEON_sshl(auVar115,auVar211,4);
            auVar65[0] = auVar234[0] & ~auVar86[0];
            auVar65[1] = auVar234[1] & ~auVar86[1];
            auVar65[2] = auVar234[2] & ~auVar86[2];
            auVar65[3] = auVar234[3] & ~auVar86[3];
            auVar65[4] = auVar234[4] & ~auVar86[4];
            auVar65[5] = auVar234[5] & ~auVar86[5];
            auVar65[6] = auVar234[6] & ~auVar86[6];
            auVar65[7] = auVar234[7] & ~auVar86[7];
            auVar65[8] = auVar234[8] & ~auVar86[8];
            auVar65[9] = auVar234[9] & ~auVar86[9];
            auVar65[10] = auVar234[10] & ~auVar86[10];
            auVar65[11] = auVar234[11] & ~auVar86[11];
            auVar65[12] = auVar234[12] & ~auVar86[12];
            auVar65[13] = auVar234[13] & ~auVar86[13];
            auVar65[14] = auVar234[14] & ~auVar86[14];
            auVar65[15] = auVar234[15] & ~auVar86[15];
            auVar44._12_4_ = _UNK_004c513c;
            auVar44._0_12_ = _DAT_004c5130;
            auVar86 = a64_TBL(ZEXT816(0),auVar65,auVar44);
            auVar234 = *(undefined (*) [16])(puVar9 + 2);
            auVar108 = NEON_cmeq(auVar86,0,2);
            auVar116[0] = auVar92[0] | auVar108[0];
            auVar116[1] = auVar92[1] | auVar108[1];
            auVar116[2] = auVar92[2] | auVar108[2];
            auVar116[3] = auVar92[3] | auVar108[3];
            auVar116[4] = auVar92[4] | auVar108[4];
            auVar116[5] = auVar92[5] | auVar108[5];
            auVar116[6] = auVar92[6] | auVar108[6];
            auVar116[7] = auVar92[7] | auVar108[7];
            auVar116[8] = auVar92[8] | auVar108[8];
            auVar116[9] = auVar92[9] | auVar108[9];
            auVar116[10] = auVar92[10] | auVar108[10];
            auVar116[11] = auVar92[11] | auVar108[11];
            auVar116[12] = auVar92[12] | auVar108[12];
            auVar116[13] = auVar92[13] | auVar108[13];
            auVar116[14] = auVar92[14] | auVar108[14];
            auVar116[15] = auVar92[15] | auVar108[15];
            auVar128._0_4_ = (auVar234._0_4_ + auVar234._0_4_) - (fVar139 + auVar91._0_4_);
            auVar128._4_4_ = (auVar234._4_4_ + auVar234._4_4_) - (fVar141 + auVar91._4_4_);
            auVar128._8_4_ = (auVar234._8_4_ + auVar234._8_4_) - (fVar142 + auVar91._8_4_);
            auVar128._12_4_ = (auVar234._12_4_ + auVar234._12_4_) - (fVar143 + auVar91._12_4_);
            auVar66[0] = auVar86[0] & ~auVar116[0];
            auVar66[1] = auVar86[1] & ~auVar116[1];
            auVar66[2] = auVar86[2] & ~auVar116[2];
            auVar66[3] = auVar86[3] & ~auVar116[3];
            auVar66[4] = auVar86[4] & ~auVar116[4];
            auVar66[5] = auVar86[5] & ~auVar116[5];
            auVar66[6] = auVar86[6] & ~auVar116[6];
            auVar66[7] = auVar86[7] & ~auVar116[7];
            auVar66[8] = auVar86[8] & ~auVar116[8];
            auVar66[9] = auVar86[9] & ~auVar116[9];
            auVar66[10] = auVar86[10] & ~auVar116[10];
            auVar66[11] = auVar86[11] & ~auVar116[11];
            auVar66[12] = auVar86[12] & ~auVar116[12];
            auVar66[13] = auVar86[13] & ~auVar116[13];
            auVar66[14] = auVar86[14] & ~auVar116[14];
            auVar66[15] = auVar86[15] & ~auVar116[15];
            auVar92 = NEON_sshl(auVar128,auVar211,4);
            auVar33[8] = 0xff;
            auVar33._0_8_ = 0xffffffffffffffff;
            auVar33[9] = 0xff;
            auVar33[10] = 0xff;
            auVar33[11] = 0xff;
            auVar33[12] = 0xff;
            auVar33[13] = 0xff;
            auVar33[14] = 0xff;
            auVar33[15] = 0xff;
            auVar108 = NEON_cmeq(auVar66,auVar33,4);
            auVar86 = *(undefined (*) [16])(puVar9 + 4);
            auVar129[0] = (auVar92[0] | auVar108[0]) & ~auVar116[0];
            auVar129[1] = (auVar92[1] | auVar108[1]) & ~auVar116[1];
            auVar129[2] = (auVar92[2] | auVar108[2]) & ~auVar116[2];
            auVar129[3] = (auVar92[3] | auVar108[3]) & ~auVar116[3];
            auVar129[4] = (auVar92[4] | auVar108[4]) & ~auVar116[4];
            auVar129[5] = (auVar92[5] | auVar108[5]) & ~auVar116[5];
            auVar129[6] = (auVar92[6] | auVar108[6]) & ~auVar116[6];
            auVar129[7] = (auVar92[7] | auVar108[7]) & ~auVar116[7];
            auVar129[8] = (auVar92[8] | auVar108[8]) & ~auVar116[8];
            auVar129[9] = (auVar92[9] | auVar108[9]) & ~auVar116[9];
            auVar129[10] = (auVar92[10] | auVar108[10]) & ~auVar116[10];
            auVar129[11] = (auVar92[11] | auVar108[11]) & ~auVar116[11];
            auVar129[12] = (auVar92[12] | auVar108[12]) & ~auVar116[12];
            auVar129[13] = (auVar92[13] | auVar108[13]) & ~auVar116[13];
            auVar129[14] = (auVar92[14] | auVar108[14]) & ~auVar116[14];
            auVar129[15] = (auVar92[15] | auVar108[15]) & ~auVar116[15];
            auVar92 = NEON_cmlt(auVar116,0,4);
            auVar108 = NEON_cmlt(auVar129,0,4);
            auVar92 = NEON_bsl(auVar92,auVar234,auVar91,1);
            auVar67[0] = auVar86[0] & ~auVar129[0] | auVar66[0];
            auVar67[1] = auVar86[1] & ~auVar129[1] | auVar66[1];
            auVar67[2] = auVar86[2] & ~auVar129[2] | auVar66[2];
            auVar67[3] = auVar86[3] & ~auVar129[3] | auVar66[3];
            auVar67[4] = auVar86[4] & ~auVar129[4] | auVar66[4];
            auVar67[5] = auVar86[5] & ~auVar129[5] | auVar66[5];
            auVar67[6] = auVar86[6] & ~auVar129[6] | auVar66[6];
            auVar67[7] = auVar86[7] & ~auVar129[7] | auVar66[7];
            auVar67[8] = auVar86[8] & ~auVar129[8] | auVar66[8];
            auVar67[9] = auVar86[9] & ~auVar129[9] | auVar66[9];
            auVar67[10] = auVar86[10] & ~auVar129[10] | auVar66[10];
            auVar67[11] = auVar86[11] & ~auVar129[11] | auVar66[11];
            auVar67[12] = auVar86[12] & ~auVar129[12] | auVar66[12];
            auVar67[13] = auVar86[13] & ~auVar129[13] | auVar66[13];
            auVar67[14] = auVar86[14] & ~auVar129[14] | auVar66[14];
            auVar67[15] = auVar86[15] & ~auVar129[15] | auVar66[15];
            auVar234 = NEON_bit(auVar234,auVar91,auVar108,1);
            auVar34[8] = 0xff;
            auVar34._0_8_ = 0xffffffffffffffff;
            auVar34[9] = 0xff;
            auVar34[10] = 0xff;
            auVar34[11] = 0xff;
            auVar34[12] = 0xff;
            auVar34[13] = 0xff;
            auVar34[14] = 0xff;
            auVar34[15] = 0xff;
            auVar86 = NEON_cmeq(auVar67,auVar34,4);
            auVar234 = NEON_fmin(auVar92,auVar234,4);
            auVar117._8_4_ = 0x7f7fffff;
            auVar117._0_8_ = 0x7f7fffff7f7fffff;
            auVar117._12_4_ = 0x7f7fffff;
            auVar91 = NEON_bif(auVar117,auVar234,auVar86,1);
            auVar234 = NEON_bif(auVar234,auVar77,auVar86,1);
            puVar9[1] = auVar234._8_8_;
            *puVar9 = auVar234._0_8_;
            puVar9[3] = auVar91._8_8_;
            puVar9[2] = auVar91._0_8_;
            lVar45 = *(long *)(this + 0x138) + lVar46;
            *(byte *)(lVar45 + 0x30) = auVar67[8] & ~auVar86[8];
            *(byte *)(lVar45 + 0x31) = auVar67[9] & ~auVar86[9];
            *(byte *)(lVar45 + 0x32) = auVar67[10] & ~auVar86[10];
            *(byte *)(lVar45 + 0x33) = auVar67[11] & ~auVar86[11];
            *(byte *)(lVar45 + 0x34) = auVar67[12] & ~auVar86[12];
            *(byte *)(lVar45 + 0x35) = auVar67[13] & ~auVar86[13];
            *(byte *)(lVar45 + 0x36) = auVar67[14] & ~auVar86[14];
            *(byte *)(lVar45 + 0x37) = auVar67[15] & ~auVar86[15];
            *(byte *)(lVar45 + 0x20) = auVar67[0] & ~auVar86[0];
            *(byte *)(lVar45 + 0x21) = auVar67[1] & ~auVar86[1];
            *(byte *)(lVar45 + 0x22) = auVar67[2] & ~auVar86[2];
            *(byte *)(lVar45 + 0x23) = auVar67[3] & ~auVar86[3];
            *(byte *)(lVar45 + 0x24) = auVar67[4] & ~auVar86[4];
            *(byte *)(lVar45 + 0x25) = auVar67[5] & ~auVar86[5];
            *(byte *)(lVar45 + 0x26) = auVar67[6] & ~auVar86[6];
            *(byte *)(lVar45 + 0x27) = auVar67[7] & ~auVar86[7];
          }
          if (param_3 + param_2 <= lVar47) break;
          fVar70 = param_12 + fVar70;
          fVar253 = param_12 + fVar253;
          fVar254 = param_12 + fVar254;
          fVar255 = param_12 + fVar255;
          auVar75 = NEON_uqsub(auVar75,auVar235,2);
          lVar46 = lVar46 + 0x30;
          auVar90 = NEON_uqsub(auVar90,auVar235,2);
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar87._0_4_ = iVar242 - iVar177;
        auVar87._4_4_ = iVar133 - iVar177;
        auVar87._8_4_ = iVar134 - iVar13;
        auVar87._12_4_ = iVar148 - iVar13;
        auVar68._0_4_ = iVar244 - iVar120;
        auVar68._4_4_ = iVar132 - iVar120;
        auVar68._8_4_ = iVar149 - iVar120;
        auVar68._12_4_ = iVar150 - iVar120;
        auVar90 = NEON_sshl(auVar87,auVar211,4);
        auVar75 = NEON_sshl(auVar68,auVar211,4);
        iVar49 = CONCAT13(auVar90[3] & bVar138,
                          CONCAT12(auVar90[2] & bVar137,
                                   CONCAT11(auVar90[1] & bVar136,auVar90[0] & bVar135)));
        auVar213._0_8_ =
             CONCAT17(auVar90[7] & bVar138,
                      CONCAT16(auVar90[6] & bVar137,
                               CONCAT15(auVar90[5] & bVar136,CONCAT14(auVar90[4] & bVar135,iVar49)))
                     );
        auVar213[8] = auVar90[8] & bVar135;
        auVar213[9] = auVar90[9] & bVar136;
        auVar213[10] = auVar90[10] & bVar137;
        auVar213[11] = auVar90[11] & bVar138;
        auVar215[12] = auVar90[12] & bVar135;
        auVar215._0_12_ = auVar213;
        auVar215[13] = auVar90[13] & bVar136;
        auVar215[14] = auVar90[14] & bVar137;
        auVar215[15] = auVar90[15] & bVar138;
        iVar242 = CONCAT13(auVar90[3] & bVar105,
                           CONCAT12(auVar90[2] & bVar104,
                                    CONCAT11(auVar90[1] & bVar103,auVar90[0] & bVar102)));
        auVar107._0_8_ =
             CONCAT17(auVar90[7] & bVar105,
                      CONCAT16(auVar90[6] & bVar104,
                               CONCAT15(auVar90[5] & bVar103,CONCAT14(auVar90[4] & bVar102,iVar242))
                              ));
        auVar107[8] = auVar90[8] & bVar102;
        auVar107[9] = auVar90[9] & bVar103;
        auVar107[10] = auVar90[10] & bVar104;
        auVar107[11] = auVar90[11] & bVar105;
        auVar118[12] = auVar90[12] & bVar102;
        auVar118._0_12_ = auVar107;
        auVar118[13] = auVar90[13] & bVar103;
        auVar118[14] = auVar90[14] & bVar104;
        auVar118[15] = auVar90[15] & bVar105;
        iVar244 = CONCAT13(auVar75[3] & bVar170,
                           CONCAT12(auVar75[2] & bVar169,
                                    CONCAT11(auVar75[1] & bVar168,auVar75[0] & bVar167)));
        auVar122._0_8_ =
             CONCAT17(auVar75[7] & bVar170,
                      CONCAT16(auVar75[6] & bVar169,
                               CONCAT15(auVar75[5] & bVar168,CONCAT14(auVar75[4] & bVar167,iVar244))
                              ));
        auVar122[8] = auVar75[8] & bStack_88;
        auVar122[9] = auVar75[9] & bStack_87;
        auVar122[10] = auVar75[10] & bStack_86;
        auVar122[11] = auVar75[11] & bStack_85;
        auVar130[12] = auVar75[12] & bStack_84;
        auVar130._0_12_ = auVar122;
        auVar130[13] = auVar75[13] & bStack_83;
        auVar130[14] = auVar75[14] & bStack_82;
        auVar130[15] = auVar75[15] & bStack_81;
        iVar131 = CONCAT13(auVar75[3] & bVar174,
                           CONCAT12(auVar75[2] & bVar173,
                                    CONCAT11(auVar75[1] & bVar172,auVar75[0] & bVar171)));
        auVar89._0_8_ =
             CONCAT17(auVar75[7] & bVar174,
                      CONCAT16(auVar75[6] & bVar173,
                               CONCAT15(auVar75[5] & bVar172,CONCAT14(auVar75[4] & bVar171,iVar131))
                              ));
        auVar89[8] = auVar75[8] & (byte)uStack_98;
        auVar89[9] = auVar75[9] & bVar69;
        auVar89[10] = auVar75[10] & bVar238;
        auVar89[11] = auVar75[11] & bVar239;
        auVar101[12] = auVar75[12] & bVar240;
        auVar101._0_12_ = auVar89;
        auVar101[13] = auVar75[13] & bVar232;
        auVar101[14] = auVar75[14] & bVar236;
        auVar101[15] = auVar75[15] & bVar237;
        iVar242 = iVar242 + auVar87._0_4_;
        iVar133 = (int)((ulong)auVar107._0_8_ >> 0x20) + auVar87._4_4_;
        iVar134 = auVar107._8_4_ + auVar87._8_4_;
        iVar148 = auVar118._12_4_ + auVar87._12_4_;
        iVar244 = iVar244 + auVar68._0_4_;
        iVar132 = (int)((ulong)auVar122._0_8_ >> 0x20) + auVar68._4_4_;
        iVar149 = auVar122._8_4_ + auVar68._8_4_;
        iVar150 = auVar130._12_4_ + auVar68._12_4_;
        auVar75 = *(undefined (*) [16])param_11;
        fVar70 = auVar75._0_4_;
        fVar253 = auVar75._4_4_;
        fVar254 = auVar75._8_4_;
        fVar255 = auVar75._12_4_;
        auVar176._0_4_ = iVar131 + iVar11 + auVar175._0_4_;
        auVar176._4_4_ = (int)((ulong)auVar89._0_8_ >> 0x20) + iVar11 + auVar175._4_4_;
        auVar176._8_4_ = auVar89._8_4_ + iVar11 + auVar175._8_4_;
        auVar176._12_4_ = auVar101._12_4_ + iVar11 + auVar175._12_4_;
        auVar184._0_4_ = iVar49 + iVar119 + auVar183._0_4_;
        auVar184._4_4_ = (int)((ulong)auVar213._0_8_ >> 0x20) + iVar119 + auVar183._4_4_;
        auVar184._8_4_ = auVar213._8_4_ + iVar119 + auVar183._8_4_;
        auVar184._12_4_ = auVar215._12_4_ + iVar119 + auVar183._12_4_;
        auVar175 = auVar176;
        auVar183 = auVar184;
      }
    }
  }
  return 0;
}


