// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<0,0,0>
// Entry Point: 00da4050
// Size: 2288 bytes
// Signature: int __thiscall RasterizeTriangle<0,0,0>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0, 0,
   0>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0,0,0>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined (*pauVar10) [12];
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined8 uVar24;
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
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  long lVar53;
  long lVar54;
  long lVar55;
  byte bVar56;
  undefined auVar57 [12];
  undefined auVar58 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  byte bVar76;
  byte bVar78;
  byte bVar79;
  float fVar77;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  float fVar86;
  int iVar87;
  undefined auVar88 [12];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar89 [12];
  undefined auVar100 [16];
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  undefined auVar105 [12];
  undefined auVar106 [12];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  float fVar119;
  float fVar124;
  undefined auVar120 [12];
  undefined auVar121 [12];
  float fVar125;
  undefined auVar123 [16];
  float fVar126;
  undefined auVar127 [16];
  undefined auVar128 [16];
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  undefined uVar133;
  undefined uVar134;
  undefined uVar135;
  undefined uVar136;
  undefined uVar137;
  undefined uVar138;
  undefined uVar139;
  undefined uVar140;
  undefined uVar141;
  undefined uVar142;
  undefined uVar143;
  undefined uVar144;
  undefined uVar145;
  undefined uVar146;
  undefined uVar147;
  undefined uVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  undefined auVar157 [12];
  undefined auVar158 [16];
  undefined auVar159 [16];
  undefined auVar160 [16];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  undefined auVar165 [16];
  undefined auVar166 [16];
  undefined auVar167 [16];
  undefined auVar169 [12];
  undefined auVar170 [12];
  undefined auVar171 [16];
  undefined auVar172 [16];
  undefined auVar173 [16];
  undefined auVar174 [16];
  undefined auVar176 [16];
  undefined auVar177 [16];
  int iVar179;
  int iVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  undefined auVar184 [12];
  undefined auVar187 [12];
  undefined auVar188 [16];
  undefined auVar189 [16];
  undefined auVar190 [16];
  undefined auVar191 [16];
  undefined auVar185 [12];
  undefined auVar194 [16];
  undefined auVar196 [16];
  undefined auVar197 [12];
  undefined auVar198 [12];
  int iVar201;
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
  undefined uVar215;
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
  undefined uVar232;
  undefined uVar233;
  byte bVar234;
  undefined auVar235 [12];
  byte bVar238;
  byte bVar239;
  undefined auVar236 [16];
  undefined auVar237 [16];
  byte bVar240;
  byte bVar241;
  byte bVar242;
  int iVar247;
  undefined auVar243 [12];
  undefined auVar244 [16];
  undefined auVar245 [16];
  int iVar248;
  int iVar251;
  undefined auVar249 [12];
  int iVar252;
  undefined auVar250 [16];
  undefined auVar253 [16];
  undefined auVar254 [16];
  undefined auVar255 [16];
  float fVar260;
  float fVar261;
  undefined auVar256 [16];
  undefined auVar257 [16];
  float fVar262;
  undefined auVar258 [16];
  undefined auVar259 [16];
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
  undefined auVar65 [16];
  undefined auVar59 [16];
  undefined auVar93 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar112 [16];
  undefined auVar118 [16];
  undefined auVar122 [16];
  undefined auVar168 [16];
  undefined auVar175 [16];
  undefined auVar178 [16];
  undefined auVar186 [12];
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar195 [16];
  undefined auVar199 [16];
  undefined auVar200 [16];
  undefined auVar246 [16];
  
  auVar89 = _DAT_004c5130;
  auVar90 = _DAT_004c4480;
  lVar54 = (ulong)param_1 * 4;
  pfVar1 = (float *)(param_7 + lVar54);
  auVar109._8_4_ = 0xffffffe1;
  auVar109._0_8_ = 0xffffffe1ffffffe1;
  auVar109._12_4_ = 0xffffffe1;
  fVar77 = *pfVar1;
  puVar2 = (undefined4 *)(param_16 + lVar54);
  piVar3 = (int *)(param_15 + lVar54);
  piVar4 = (int *)(param_14 + lVar54);
  fVar260 = SUB164(_DAT_004c3fa0,0);
  fVar261 = SUB164(_DAT_004c3fa0,4);
  fVar262 = SUB164(_DAT_004c3fa0,8);
  fVar119 = SUB164(_DAT_004c3fa0,0xc);
  uVar11 = *puVar2;
  piVar5 = (int *)(param_17 + lVar54);
  iVar87 = *piVar3;
  iVar12 = *piVar4;
  fVar86 = pfVar1[4];
  iVar182 = *piVar5;
  iVar13 = piVar5[4];
  piVar6 = (int *)(param_6 + lVar54);
  iVar101 = MP_INT_ABS((int)(fVar260 * fVar77));
  iVar102 = MP_INT_ABS((int)(fVar261 * fVar77));
  iVar103 = MP_INT_ABS((int)(fVar262 * fVar77));
  iVar104 = MP_INT_ABS((int)(fVar119 * fVar77));
  iVar14 = piVar3[4];
  iVar180 = *piVar6;
  auVar107._0_4_ = iVar182 + iVar87 * -0x80 + iVar101 * iVar12;
  auVar107._4_4_ = iVar182 + iVar87 * -0x180 + iVar102 * iVar12;
  auVar107._8_4_ = iVar182 + iVar87 * -0x280 + iVar103 * iVar12;
  auVar107._12_4_ = iVar182 + iVar87 * -0x380 + iVar104 * iVar12;
  iVar87 = piVar4[4];
  piVar7 = (int *)(param_18 + lVar54);
  iVar101 = MP_INT_ABS((int)(fVar260 * fVar86));
  iVar102 = MP_INT_ABS((int)(fVar261 * fVar86));
  iVar103 = MP_INT_ABS((int)(fVar262 * fVar86));
  iVar104 = MP_INT_ABS((int)(fVar119 * fVar86));
  piVar8 = (int *)(param_8 + lVar54);
  auVar188 = NEON_sshl(auVar107,auVar109,4);
  iVar182 = piVar6[4];
  local_50 = iVar13 + iVar14 * -0x80 + iVar101 * iVar87;
  iStack_4c = iVar13 + iVar14 * -0x180 + iVar102 * iVar87;
  iVar103 = iVar13 + iVar14 * -0x280 + iVar103 * iVar87;
  iVar104 = iVar13 + iVar14 * -0x380 + iVar104 * iVar87;
  uVar15 = puVar2[4];
  iVar13 = *piVar8;
  bVar81 = (byte)iVar12;
  bVar82 = (byte)((uint)iVar12 >> 8);
  bVar83 = (byte)((uint)iVar12 >> 0x10);
  bVar84 = (byte)((uint)iVar12 >> 0x18);
  iVar12 = piVar8[4];
  bVar76 = (byte)uVar11;
  bVar78 = (byte)((uint)uVar11 >> 8);
  bVar79 = (byte)((uint)uVar11 >> 0x10);
  bVar80 = (byte)((uint)uVar11 >> 0x18);
  iVar181 = CONCAT13(auVar188[3] & bVar80,
                     CONCAT12(auVar188[2] & bVar79,
                              CONCAT11(auVar188[1] & bVar78,auVar188[0] & bVar76)));
  auVar184._0_8_ =
       CONCAT17(auVar188[7] & bVar80,
                CONCAT16(auVar188[6] & bVar79,
                         CONCAT15(auVar188[5] & bVar78,CONCAT14(auVar188[4] & bVar76,iVar181))));
  auVar184[8] = auVar188[8] & bVar76;
  auVar184[9] = auVar188[9] & bVar78;
  auVar184[10] = auVar188[10] & bVar79;
  auVar184[11] = auVar188[11] & bVar80;
  auVar92[12] = auVar188[12] & bVar76;
  auVar92._0_12_ = auVar184;
  auVar92[13] = auVar188[13] & bVar78;
  auVar92[14] = auVar188[14] & bVar79;
  auVar92[15] = auVar188[15] & bVar80;
  iVar14 = *piVar7;
  auVar236._4_4_ = iStack_4c;
  auVar236._0_4_ = local_50;
  auVar236._8_4_ = iVar103;
  auVar236._12_4_ = iVar104;
  auVar236 = NEON_sshl(auVar236,auVar109,4);
  iVar101 = piVar7[4];
  iVar102 = auVar107._0_4_ +
            CONCAT13(auVar188[3] & bVar84,
                     CONCAT12(auVar188[2] & bVar83,
                              CONCAT11(auVar188[1] & bVar82,auVar188[0] & bVar81)));
  uVar202 = (undefined)iVar102;
  uVar203 = (undefined)((uint)iVar102 >> 8);
  uVar204 = (undefined)((uint)iVar102 >> 0x10);
  uVar205 = (undefined)((uint)iVar102 >> 0x18);
  iVar102 = auVar107._4_4_ +
            CONCAT13(auVar188[7] & bVar84,
                     CONCAT12(auVar188[6] & bVar83,
                              CONCAT11(auVar188[5] & bVar82,auVar188[4] & bVar81)));
  uVar206 = (undefined)iVar102;
  uVar207 = (undefined)((uint)iVar102 >> 8);
  uVar208 = (undefined)((uint)iVar102 >> 0x10);
  uVar209 = (undefined)((uint)iVar102 >> 0x18);
  iVar102 = auVar107._8_4_ +
            CONCAT13(auVar188[11] & bVar84,
                     CONCAT12(auVar188[10] & bVar83,
                              CONCAT11(auVar188[9] & bVar82,auVar188[8] & bVar81)));
  uVar210 = (undefined)iVar102;
  uVar211 = (undefined)((uint)iVar102 >> 8);
  uVar212 = (undefined)((uint)iVar102 >> 0x10);
  uVar213 = (undefined)((uint)iVar102 >> 0x18);
  iVar102 = auVar107._12_4_ +
            CONCAT13(auVar188[15] & bVar84,
                     CONCAT12(auVar188[14] & bVar83,
                              CONCAT11(auVar188[13] & bVar82,auVar188[12] & bVar81)));
  uVar214 = (undefined)iVar102;
  uVar215 = (undefined)((uint)iVar102 >> 8);
  uVar216 = (undefined)((uint)iVar102 >> 0x10);
  uVar217 = (undefined)((uint)iVar102 >> 0x18);
  bVar149 = (byte)iVar87;
  bVar150 = (byte)((uint)iVar87 >> 8);
  bVar151 = (byte)((uint)iVar87 >> 0x10);
  bVar152 = (byte)((uint)iVar87 >> 0x18);
  iVar251 = CONCAT13(auVar236[3] & bVar152,
                     CONCAT12(auVar236[2] & bVar151,
                              CONCAT11(auVar236[1] & bVar150,auVar236[0] & bVar149)));
  auVar249._0_8_ =
       CONCAT17(auVar236[7] & bVar152,
                CONCAT16(auVar236[6] & bVar151,
                         CONCAT15(auVar236[5] & bVar150,CONCAT14(auVar236[4] & bVar149,iVar251))));
  auVar249[8] = auVar236[8] & bVar149;
  auVar249[9] = auVar236[9] & bVar150;
  auVar249[10] = auVar236[10] & bVar151;
  auVar249[11] = auVar236[11] & bVar152;
  auVar158[12] = auVar236[12] & bVar149;
  auVar158._0_12_ = auVar249;
  auVar158[13] = auVar236[13] & bVar150;
  auVar158[14] = auVar236[14] & bVar151;
  auVar158[15] = auVar236[15] & bVar152;
  bVar153 = (byte)uVar15;
  bVar154 = (byte)((uint)uVar15 >> 8);
  bVar155 = (byte)((uint)uVar15 >> 0x10);
  bVar156 = (byte)((uint)uVar15 >> 0x18);
  iVar102 = CONCAT13(auVar236[3] & bVar156,
                     CONCAT12(auVar236[2] & bVar155,
                              CONCAT11(auVar236[1] & bVar154,auVar236[0] & bVar153)));
  auVar235._0_8_ =
       CONCAT17(auVar236[7] & bVar156,
                CONCAT16(auVar236[6] & bVar155,
                         CONCAT15(auVar236[5] & bVar154,CONCAT14(auVar236[4] & bVar153,iVar102))));
  auVar235[8] = auVar236[8] & bVar153;
  auVar235[9] = auVar236[9] & bVar154;
  auVar235[10] = auVar236[10] & bVar155;
  auVar235[11] = auVar236[11] & bVar156;
  auVar108[12] = auVar236[12] & bVar153;
  auVar108._0_12_ = auVar235;
  auVar108[13] = auVar236[13] & bVar154;
  auVar108[14] = auVar236[14] & bVar155;
  auVar108[15] = auVar236[15] & bVar156;
  auVar188._0_4_ = iVar180 + (int)(fVar260 * fVar77) + iVar181;
  auVar188._4_4_ = iVar180 + (int)(fVar261 * fVar77) + (int)((ulong)auVar184._0_8_ >> 0x20);
  auVar188._8_4_ = iVar180 + (int)(fVar262 * fVar77) + auVar184._8_4_;
  auVar188._12_4_ = iVar180 + (int)(fVar119 * fVar77) + auVar92._12_4_;
  local_50 = local_50 + iVar251;
  iStack_4c = iStack_4c + (int)((ulong)auVar249._0_8_ >> 0x20);
  iVar103 = iVar103 + auVar249._8_4_;
  iVar104 = iVar104 + auVar158._12_4_;
  iVar102 = iVar182 + (int)(fVar260 * fVar86) + iVar102;
  iVar180 = iVar182 + (int)(fVar261 * fVar86) + (int)((ulong)auVar235._0_8_ >> 0x20);
  iVar181 = iVar182 + (int)(fVar262 * fVar86) + auVar235._8_4_;
  iVar182 = iVar182 + (int)(fVar119 * fVar86) + auVar108._12_4_;
  if (param_4 < param_3) {
    if (param_3 < param_5) {
      fVar86 = *(float *)param_11;
      fVar260 = *(float *)(param_11 + 4);
      fVar261 = *(float *)(param_11 + 8);
      fVar262 = *(float *)(param_11 + 0xc);
      fVar77 = param_12 * 0.0;
      auVar236 = ZEXT816(0);
      auVar50._12_4_ = 0xf0b0703;
      auVar50._0_12_ = _DAT_004c5130;
      auVar244._8_4_ = 0x20;
      auVar244._0_8_ = 0x2000000020;
      auVar244._12_4_ = 0x20;
      auVar253._8_8_ = 0xffffffffffffffff;
      auVar253._0_8_ = 0xffffffffffffffff;
      auVar254._8_4_ = 0x7f7fffff;
      auVar254._0_8_ = 0x7f7fffff7f7fffff;
      auVar254._12_4_ = 0x7f7fffff;
      while( true ) {
        auVar34[8] = 0xf8;
        auVar34._0_8_ = 0xfffffff8fffffff8;
        auVar34[9] = 0xff;
        auVar34[10] = 0xff;
        auVar34[11] = 0xff;
        auVar34[12] = 0xf8;
        auVar34[13] = 0xff;
        auVar34[14] = 0xff;
        auVar34[15] = 0xff;
        auVar90 = NEON_sshl(auVar188,auVar34,4);
        lVar55 = (long)param_3;
        auVar26._4_4_ = iVar180;
        auVar26._0_4_ = iVar102;
        auVar26._8_4_ = iVar181;
        auVar26._12_4_ = iVar182;
        auVar35[8] = 0xf8;
        auVar35._0_8_ = 0xfffffff8fffffff8;
        auVar35[9] = 0xff;
        auVar35[10] = 0xff;
        auVar35[11] = 0xff;
        auVar35[12] = 0xf8;
        auVar35[13] = 0xff;
        auVar35[14] = 0xff;
        auVar35[15] = 0xff;
        auVar107 = NEON_sshl(auVar26,auVar35,4);
        auVar256._0_4_ = fVar77 + fVar86;
        auVar256._4_4_ = fVar77 + fVar260;
        auVar256._8_4_ = fVar77 + fVar261;
        auVar256._12_4_ = fVar77 + fVar262;
        auVar90 = NEON_smax(auVar90,auVar236,4);
        lVar54 = (lVar55 + (long)param_3 * 2) * 0x10;
        auVar107 = NEON_smax(auVar107,auVar236,4);
        while( true ) {
          lVar55 = lVar55 + 1;
          auVar92 = *(undefined (*) [16])param_10;
          pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar54);
          fVar261 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar262 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar86 = (float)*(undefined8 *)*pauVar10;
          fVar260 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          auVar91._0_4_ = auVar92._0_4_ - fVar86;
          auVar91._4_4_ = auVar92._4_4_ - fVar260;
          auVar91._8_4_ = auVar92._8_4_ - fVar261;
          auVar91._12_4_ = auVar92._12_4_ - fVar262;
          auVar92 = NEON_cmlt(auVar91,0,4);
          bVar85 = auVar92[0] & 1;
          auVar93._0_5_ = CONCAT14(auVar92[4],(uint)bVar85) & 0x2ffffffff;
          auVar93._5_3_ = 0;
          auVar93[8] = auVar92[8] & 4;
          auVar93._9_3_ = 0;
          auVar93[12] = auVar92[12] & 8;
          auVar93._13_3_ = 0;
          auVar108 = NEON_ext(auVar93,auVar93,8,1);
          if (CONCAT13(auVar108[3] | auVar108[7],
                       CONCAT12(auVar108[2] | auVar108[6],
                                CONCAT11(auVar108[1] | auVar108[5],
                                         auVar108[0] | bVar85 | auVar108[4] | auVar92[4] & 2))) !=
              0xf) {
            auVar92 = NEON_smin(auVar107,auVar244,4);
            auVar109 = NEON_smin(auVar90,auVar244,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar54);
            auVar158 = NEON_fmax(auVar256,*(undefined (*) [16])param_9,4);
            auVar108 = NEON_smax(auVar92,auVar236,4);
            auVar92 = *(undefined (*) [16])(puVar9 + 2);
            auVar109 = NEON_smax(auVar109,auVar236,4);
            auVar108 = NEON_sshl(auVar253,auVar108,4);
            auVar109 = NEON_sshl(auVar253,auVar109,4);
            auVar94[0] = auVar108[0] & ~auVar109[0];
            auVar94[1] = auVar108[1] & ~auVar109[1];
            auVar94[2] = auVar108[2] & ~auVar109[2];
            auVar94[3] = auVar108[3] & ~auVar109[3];
            auVar94[4] = auVar108[4] & ~auVar109[4];
            auVar94[5] = auVar108[5] & ~auVar109[5];
            auVar94[6] = auVar108[6] & ~auVar109[6];
            auVar94[7] = auVar108[7] & ~auVar109[7];
            auVar94[8] = auVar108[8] & ~auVar109[8];
            auVar94[9] = auVar108[9] & ~auVar109[9];
            auVar94[10] = auVar108[10] & ~auVar109[10];
            auVar94[11] = auVar108[11] & ~auVar109[11];
            auVar94[12] = auVar108[12] & ~auVar109[12];
            auVar94[13] = auVar108[13] & ~auVar109[13];
            auVar94[14] = auVar108[14] & ~auVar109[14];
            auVar94[15] = auVar108[15] & ~auVar109[15];
            auVar110._0_4_ = auVar158._0_4_ - fVar86;
            auVar110._4_4_ = auVar158._4_4_ - fVar260;
            auVar110._8_4_ = auVar158._8_4_ - fVar261;
            auVar110._12_4_ = auVar158._12_4_ - fVar262;
            auVar108 = a64_TBL(ZEXT816(0),auVar94,auVar50);
            auVar16._8_4_ = 0xffffffe1;
            auVar16._0_8_ = 0xffffffe1ffffffe1;
            auVar16._12_4_ = 0xffffffe1;
            auVar109 = NEON_sshl(auVar110,auVar16,4);
            auVar189 = NEON_cmeq(auVar108,0,2);
            auVar111[0] = auVar109[0] | auVar189[0];
            auVar111[1] = auVar109[1] | auVar189[1];
            auVar111[2] = auVar109[2] | auVar189[2];
            auVar111[3] = auVar109[3] | auVar189[3];
            auVar111[4] = auVar109[4] | auVar189[4];
            auVar111[5] = auVar109[5] | auVar189[5];
            auVar111[6] = auVar109[6] | auVar189[6];
            auVar111[7] = auVar109[7] | auVar189[7];
            auVar111[8] = auVar109[8] | auVar189[8];
            auVar111[9] = auVar109[9] | auVar189[9];
            auVar111[10] = auVar109[10] | auVar189[10];
            auVar111[11] = auVar109[11] | auVar189[11];
            auVar111[12] = auVar109[12] | auVar189[12];
            auVar111[13] = auVar109[13] | auVar189[13];
            auVar111[14] = auVar109[14] | auVar189[14];
            auVar111[15] = auVar109[15] | auVar189[15];
            auVar190._0_4_ = (auVar92._0_4_ + auVar92._0_4_) - (fVar86 + auVar158._0_4_);
            auVar190._4_4_ = (auVar92._4_4_ + auVar92._4_4_) - (fVar260 + auVar158._4_4_);
            auVar190._8_4_ = (auVar92._8_4_ + auVar92._8_4_) - (fVar261 + auVar158._8_4_);
            auVar190._12_4_ = (auVar92._12_4_ + auVar92._12_4_) - (fVar262 + auVar158._12_4_);
            auVar95[0] = auVar108[0] & ~auVar111[0];
            auVar95[1] = auVar108[1] & ~auVar111[1];
            auVar95[2] = auVar108[2] & ~auVar111[2];
            auVar95[3] = auVar108[3] & ~auVar111[3];
            auVar95[4] = auVar108[4] & ~auVar111[4];
            auVar95[5] = auVar108[5] & ~auVar111[5];
            auVar95[6] = auVar108[6] & ~auVar111[6];
            auVar95[7] = auVar108[7] & ~auVar111[7];
            auVar95[8] = auVar108[8] & ~auVar111[8];
            auVar95[9] = auVar108[9] & ~auVar111[9];
            auVar95[10] = auVar108[10] & ~auVar111[10];
            auVar95[11] = auVar108[11] & ~auVar111[11];
            auVar95[12] = auVar108[12] & ~auVar111[12];
            auVar95[13] = auVar108[13] & ~auVar111[13];
            auVar95[14] = auVar108[14] & ~auVar111[14];
            auVar95[15] = auVar108[15] & ~auVar111[15];
            auVar17._8_4_ = 0xffffffe1;
            auVar17._0_8_ = 0xffffffe1ffffffe1;
            auVar17._12_4_ = 0xffffffe1;
            auVar189 = NEON_sshl(auVar190,auVar17,4);
            auVar109 = NEON_cmeq(auVar95,auVar253,4);
            auVar108 = *(undefined (*) [16])(puVar9 + 4);
            auVar191[0] = (auVar189[0] | auVar109[0]) & ~auVar111[0];
            auVar191[1] = (auVar189[1] | auVar109[1]) & ~auVar111[1];
            auVar191[2] = (auVar189[2] | auVar109[2]) & ~auVar111[2];
            auVar191[3] = (auVar189[3] | auVar109[3]) & ~auVar111[3];
            auVar191[4] = (auVar189[4] | auVar109[4]) & ~auVar111[4];
            auVar191[5] = (auVar189[5] | auVar109[5]) & ~auVar111[5];
            auVar191[6] = (auVar189[6] | auVar109[6]) & ~auVar111[6];
            auVar191[7] = (auVar189[7] | auVar109[7]) & ~auVar111[7];
            auVar191[8] = (auVar189[8] | auVar109[8]) & ~auVar111[8];
            auVar191[9] = (auVar189[9] | auVar109[9]) & ~auVar111[9];
            auVar191[10] = (auVar189[10] | auVar109[10]) & ~auVar111[10];
            auVar191[11] = (auVar189[11] | auVar109[11]) & ~auVar111[11];
            auVar191[12] = (auVar189[12] | auVar109[12]) & ~auVar111[12];
            auVar191[13] = (auVar189[13] | auVar109[13]) & ~auVar111[13];
            auVar191[14] = (auVar189[14] | auVar109[14]) & ~auVar111[14];
            auVar191[15] = (auVar189[15] | auVar109[15]) & ~auVar111[15];
            auVar109 = NEON_cmlt(auVar111,0,4);
            auVar189 = NEON_cmlt(auVar191,0,4);
            auVar109 = NEON_bsl(auVar109,auVar92,auVar158,1);
            auVar96[0] = auVar108[0] & ~auVar191[0] | auVar95[0];
            auVar96[1] = auVar108[1] & ~auVar191[1] | auVar95[1];
            auVar96[2] = auVar108[2] & ~auVar191[2] | auVar95[2];
            auVar96[3] = auVar108[3] & ~auVar191[3] | auVar95[3];
            auVar96[4] = auVar108[4] & ~auVar191[4] | auVar95[4];
            auVar96[5] = auVar108[5] & ~auVar191[5] | auVar95[5];
            auVar96[6] = auVar108[6] & ~auVar191[6] | auVar95[6];
            auVar96[7] = auVar108[7] & ~auVar191[7] | auVar95[7];
            auVar96[8] = auVar108[8] & ~auVar191[8] | auVar95[8];
            auVar96[9] = auVar108[9] & ~auVar191[9] | auVar95[9];
            auVar96[10] = auVar108[10] & ~auVar191[10] | auVar95[10];
            auVar96[11] = auVar108[11] & ~auVar191[11] | auVar95[11];
            auVar96[12] = auVar108[12] & ~auVar191[12] | auVar95[12];
            auVar96[13] = auVar108[13] & ~auVar191[13] | auVar95[13];
            auVar96[14] = auVar108[14] & ~auVar191[14] | auVar95[14];
            auVar96[15] = auVar108[15] & ~auVar191[15] | auVar95[15];
            auVar92 = NEON_bif(auVar158,auVar92,auVar189,1);
            auVar158 = NEON_cmeq(auVar96,auVar253,4);
            auVar92 = NEON_fmin(auVar109,auVar92,4);
            auVar108 = NEON_bsl(auVar158,auVar254,auVar92,1);
            auVar20._12_4_ = fVar262;
            auVar20._0_12_ = *pauVar10;
            auVar92 = NEON_bif(auVar92,auVar20,auVar158,1);
            puVar9[1] = auVar92._8_8_;
            *puVar9 = auVar92._0_8_;
            puVar9[3] = auVar108._8_8_;
            puVar9[2] = auVar108._0_8_;
            lVar53 = *(long *)(this + 0x138) + lVar54;
            *(byte *)(lVar53 + 0x30) = auVar96[8] & ~auVar158[8];
            *(byte *)(lVar53 + 0x31) = auVar96[9] & ~auVar158[9];
            *(byte *)(lVar53 + 0x32) = auVar96[10] & ~auVar158[10];
            *(byte *)(lVar53 + 0x33) = auVar96[11] & ~auVar158[11];
            *(byte *)(lVar53 + 0x34) = auVar96[12] & ~auVar158[12];
            *(byte *)(lVar53 + 0x35) = auVar96[13] & ~auVar158[13];
            *(byte *)(lVar53 + 0x36) = auVar96[14] & ~auVar158[14];
            *(byte *)(lVar53 + 0x37) = auVar96[15] & ~auVar158[15];
            *(byte *)(lVar53 + 0x20) = auVar96[0] & ~auVar158[0];
            *(byte *)(lVar53 + 0x21) = auVar96[1] & ~auVar158[1];
            *(byte *)(lVar53 + 0x22) = auVar96[2] & ~auVar158[2];
            *(byte *)(lVar53 + 0x23) = auVar96[3] & ~auVar158[3];
            *(byte *)(lVar53 + 0x24) = auVar96[4] & ~auVar158[4];
            *(byte *)(lVar53 + 0x25) = auVar96[5] & ~auVar158[5];
            *(byte *)(lVar53 + 0x26) = auVar96[6] & ~auVar158[6];
            *(byte *)(lVar53 + 0x27) = auVar96[7] & ~auVar158[7];
          }
          if (param_3 + param_2 <= lVar55) break;
          auVar257._0_4_ = param_12 + auVar256._0_4_;
          auVar257._4_4_ = param_12 + auVar256._4_4_;
          auVar257._8_4_ = param_12 + auVar256._8_4_;
          auVar257._12_4_ = param_12 + auVar256._12_4_;
          auVar90 = NEON_uqsub(auVar90,auVar244,2);
          lVar54 = lVar54 + 0x30;
          auVar107 = NEON_uqsub(auVar107,auVar244,2);
          auVar256 = auVar257;
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar97._0_4_ = CONCAT13(uVar205,CONCAT12(uVar204,CONCAT11(uVar203,uVar202))) - iVar14;
        auVar97._4_4_ = CONCAT13(uVar209,CONCAT12(uVar208,CONCAT11(uVar207,uVar206))) - iVar14;
        auVar97._8_4_ = CONCAT13(uVar213,CONCAT12(uVar212,CONCAT11(uVar211,uVar210))) - iVar14;
        auVar97._12_4_ = CONCAT13(uVar217,CONCAT12(uVar216,CONCAT11(uVar215,uVar214))) - iVar14;
        iVar252 = auVar188._4_4_;
        iVar129 = auVar188._8_4_;
        iVar130 = auVar188._12_4_;
        auVar18._8_4_ = 0xffffffe1;
        auVar18._0_8_ = 0xffffffe1ffffffe1;
        auVar18._12_4_ = 0xffffffe1;
        auVar107 = NEON_sshl(auVar97,auVar18,4);
        auVar159._0_4_ = local_50 - iVar101;
        auVar159._4_4_ = iStack_4c - iVar101;
        auVar159._8_4_ = iVar103 - iVar101;
        auVar159._12_4_ = iVar104 - iVar101;
        auVar90 = *(undefined (*) [16])param_11;
        iVar87 = CONCAT13(bVar84 & auVar107[3],
                          CONCAT12(bVar83 & auVar107[2],
                                   CONCAT11(bVar82 & auVar107[1],bVar81 & auVar107[0])));
        auVar197._0_8_ =
             CONCAT17(bVar84 & auVar107[7],
                      CONCAT16(bVar83 & auVar107[6],
                               CONCAT15(bVar82 & auVar107[5],CONCAT14(bVar81 & auVar107[4],iVar87)))
                     );
        auVar197[8] = bVar81 & auVar107[8];
        auVar197[9] = bVar82 & auVar107[9];
        auVar197[10] = bVar83 & auVar107[10];
        auVar197[11] = bVar84 & auVar107[11];
        auVar199[12] = bVar81 & auVar107[12];
        auVar199._0_12_ = auVar197;
        auVar199[13] = bVar82 & auVar107[13];
        auVar199[14] = bVar83 & auVar107[14];
        auVar199[15] = bVar84 & auVar107[15];
        auVar19._8_4_ = 0xffffffe1;
        auVar19._0_8_ = 0xffffffe1ffffffe1;
        auVar19._12_4_ = 0xffffffe1;
        auVar92 = NEON_sshl(auVar159,auVar19,4);
        iVar251 = CONCAT13(bVar80 & auVar107[3],
                           CONCAT12(bVar79 & auVar107[2],
                                    CONCAT11(bVar78 & auVar107[1],bVar76 & auVar107[0])));
        auVar105._0_8_ =
             CONCAT17(bVar80 & auVar107[7],
                      CONCAT16(bVar79 & auVar107[6],
                               CONCAT15(bVar78 & auVar107[5],CONCAT14(bVar76 & auVar107[4],iVar251))
                              ));
        auVar105[8] = bVar76 & auVar107[8];
        auVar105[9] = bVar78 & auVar107[9];
        auVar105[10] = bVar79 & auVar107[10];
        auVar105[11] = bVar80 & auVar107[11];
        auVar112[12] = bVar76 & auVar107[12];
        auVar112._0_12_ = auVar105;
        auVar112[13] = bVar78 & auVar107[13];
        auVar112[14] = bVar79 & auVar107[14];
        auVar112[15] = bVar80 & auVar107[15];
        iVar87 = iVar87 + auVar97._0_4_;
        uVar202 = (undefined)iVar87;
        uVar203 = (undefined)((uint)iVar87 >> 8);
        uVar204 = (undefined)((uint)iVar87 >> 0x10);
        uVar205 = (undefined)((uint)iVar87 >> 0x18);
        iVar87 = (int)((ulong)auVar197._0_8_ >> 0x20) + auVar97._4_4_;
        uVar206 = (undefined)iVar87;
        uVar207 = (undefined)((uint)iVar87 >> 8);
        uVar208 = (undefined)((uint)iVar87 >> 0x10);
        uVar209 = (undefined)((uint)iVar87 >> 0x18);
        iVar87 = auVar197._8_4_ + auVar97._8_4_;
        uVar210 = (undefined)iVar87;
        uVar211 = (undefined)((uint)iVar87 >> 8);
        uVar212 = (undefined)((uint)iVar87 >> 0x10);
        uVar213 = (undefined)((uint)iVar87 >> 0x18);
        iVar87 = auVar199._12_4_ + auVar97._12_4_;
        uVar214 = (undefined)iVar87;
        uVar215 = (undefined)((uint)iVar87 >> 8);
        uVar216 = (undefined)((uint)iVar87 >> 0x10);
        uVar217 = (undefined)((uint)iVar87 >> 0x18);
        iVar87 = CONCAT13(bVar152 & auVar92[3],
                          CONCAT12(bVar151 & auVar92[2],
                                   CONCAT11(bVar150 & auVar92[1],bVar149 & auVar92[0])));
        iVar179 = CONCAT13(bVar156 & auVar92[3],
                           CONCAT12(bVar155 & auVar92[2],
                                    CONCAT11(bVar154 & auVar92[1],bVar153 & auVar92[0])));
        auVar120._0_8_ =
             CONCAT17(bVar156 & auVar92[7],
                      CONCAT16(bVar155 & auVar92[6],
                               CONCAT15(bVar154 & auVar92[5],CONCAT14(bVar153 & auVar92[4],iVar179))
                              ));
        auVar120[8] = bVar153 & auVar92[8];
        auVar120[9] = bVar154 & auVar92[9];
        auVar120[10] = bVar155 & auVar92[10];
        auVar120[11] = bVar156 & auVar92[11];
        auVar122[12] = bVar153 & auVar92[12];
        auVar122._0_12_ = auVar120;
        auVar122[13] = bVar154 & auVar92[13];
        auVar122[14] = bVar155 & auVar92[14];
        auVar122[15] = bVar156 & auVar92[15];
        fVar86 = param_13 + auVar90._0_4_;
        fVar260 = param_13 + auVar90._4_4_;
        fVar261 = param_13 + auVar90._8_4_;
        fVar262 = param_13 + auVar90._12_4_;
        auVar188._0_4_ = iVar13 + auVar188._0_4_ + iVar251;
        auVar188._4_4_ = iVar13 + iVar252 + (int)((ulong)auVar105._0_8_ >> 0x20);
        auVar188._8_4_ = iVar13 + iVar129 + auVar105._8_4_;
        auVar188._12_4_ = iVar13 + iVar130 + auVar112._12_4_;
        local_50 = iVar87 + auVar159._0_4_;
        iStack_4c = (int)(CONCAT17(bVar152 & auVar92[7],
                                   CONCAT16(bVar151 & auVar92[6],
                                            CONCAT15(bVar150 & auVar92[5],
                                                     CONCAT14(bVar149 & auVar92[4],iVar87)))) >>
                         0x20) + auVar159._4_4_;
        iVar102 = iVar12 + iVar102 + iVar179;
        iVar180 = iVar12 + iVar180 + (int)((ulong)auVar120._0_8_ >> 0x20);
        iVar181 = iVar12 + iVar181 + auVar120._8_4_;
        iVar182 = iVar12 + iVar182 + auVar122._12_4_;
        *(float *)param_11 = fVar86;
        *(float *)(param_11 + 4) = fVar260;
        *(float *)(param_11 + 8) = fVar261;
        *(float *)(param_11 + 0xc) = fVar262;
      }
    }
  }
  else {
    fVar77 = pfVar1[8];
    iVar179 = piVar3[8];
    iVar252 = piVar5[8];
    fVar86 = param_12 * 0.0;
    iVar251 = param_5;
    if (param_4 <= param_5) {
      iVar251 = param_4;
    }
    iVar129 = piVar4[8];
    iVar130 = MP_INT_ABS((int)(fVar260 * fVar77));
    iVar131 = MP_INT_ABS((int)(fVar261 * fVar77));
    iVar132 = MP_INT_ABS((int)(fVar262 * fVar77));
    iVar183 = MP_INT_ABS((int)(fVar119 * fVar77));
    uVar11 = puVar2[8];
    bVar85 = (byte)uVar11;
    bVar240 = (byte)((uint)uVar11 >> 8);
    bVar241 = (byte)((uint)uVar11 >> 0x10);
    bVar242 = (byte)((uint)uVar11 >> 0x18);
    auVar189._0_4_ = iVar252 + iVar179 * -0x80 + iVar130 * iVar129;
    auVar189._4_4_ = iVar252 + iVar179 * -0x180 + iVar131 * iVar129;
    auVar189._8_4_ = iVar252 + iVar179 * -0x280 + iVar132 * iVar129;
    auVar189._12_4_ = iVar252 + iVar179 * -0x380 + iVar183 * iVar129;
    iVar179 = piVar6[8];
    auVar236 = NEON_sshl(auVar189,auVar109,4);
    iVar252 = iVar179 + (int)(fVar260 * fVar77) +
              CONCAT13(auVar236[3] & bVar242,
                       CONCAT12(auVar236[2] & bVar241,
                                CONCAT11(auVar236[1] & bVar240,auVar236[0] & bVar85)));
    uVar218 = (undefined)iVar252;
    uVar219 = (undefined)((uint)iVar252 >> 8);
    uVar220 = (undefined)((uint)iVar252 >> 0x10);
    uVar221 = (undefined)((uint)iVar252 >> 0x18);
    iVar252 = iVar179 + (int)(fVar261 * fVar77) +
              CONCAT13(auVar236[7] & bVar242,
                       CONCAT12(auVar236[6] & bVar241,
                                CONCAT11(auVar236[5] & bVar240,auVar236[4] & bVar85)));
    uVar222 = (undefined)iVar252;
    uVar223 = (undefined)((uint)iVar252 >> 8);
    uVar224 = (undefined)((uint)iVar252 >> 0x10);
    uVar225 = (undefined)((uint)iVar252 >> 0x18);
    iVar252 = iVar179 + (int)(fVar262 * fVar77) +
              CONCAT13(auVar236[11] & bVar242,
                       CONCAT12(auVar236[10] & bVar241,
                                CONCAT11(auVar236[9] & bVar240,auVar236[8] & bVar85)));
    uVar226 = (undefined)iVar252;
    uVar227 = (undefined)((uint)iVar252 >> 8);
    uVar228 = (undefined)((uint)iVar252 >> 0x10);
    uVar229 = (undefined)((uint)iVar252 >> 0x18);
    iVar179 = iVar179 + (int)(fVar119 * fVar77) +
              CONCAT13(auVar236[15] & bVar242,
                       CONCAT12(auVar236[14] & bVar241,
                                CONCAT11(auVar236[13] & bVar240,auVar236[12] & bVar85)));
    uVar230 = (undefined)iVar179;
    uVar231 = (undefined)((uint)iVar179 >> 8);
    uVar232 = (undefined)((uint)iVar179 >> 0x10);
    uVar233 = (undefined)((uint)iVar179 >> 0x18);
    if (param_3 < iVar251) {
      bVar234 = (byte)iVar129;
      bVar238 = (byte)((uint)iVar129 >> 8);
      bVar239 = (byte)((uint)iVar129 >> 0x10);
      bVar56 = (byte)((uint)iVar129 >> 0x18);
      iVar129 = CONCAT13(auVar236[3] & bVar56,
                         CONCAT12(auVar236[2] & bVar239,
                                  CONCAT11(auVar236[1] & bVar238,auVar236[0] & bVar234)));
      auVar121._0_8_ =
           CONCAT17(auVar236[7] & bVar56,
                    CONCAT16(auVar236[6] & bVar239,
                             CONCAT15(auVar236[5] & bVar238,CONCAT14(auVar236[4] & bVar234,iVar129))
                            ));
      auVar121[8] = auVar236[8] & bVar234;
      auVar121[9] = auVar236[9] & bVar238;
      auVar121[10] = auVar236[10] & bVar239;
      auVar121[11] = auVar236[11] & bVar56;
      auVar194[12] = auVar236[12] & bVar234;
      auVar194._0_12_ = auVar121;
      auVar194[13] = auVar236[13] & bVar238;
      auVar194[14] = auVar236[14] & bVar239;
      auVar194[15] = auVar236[15] & bVar56;
      uVar24 = *(undefined8 *)(param_11 + 8);
      uVar141 = (undefined)uVar24;
      uVar142 = (undefined)((ulong)uVar24 >> 8);
      uVar143 = (undefined)((ulong)uVar24 >> 0x10);
      uVar144 = (undefined)((ulong)uVar24 >> 0x18);
      uVar145 = (undefined)((ulong)uVar24 >> 0x20);
      uVar146 = (undefined)((ulong)uVar24 >> 0x28);
      uVar147 = (undefined)((ulong)uVar24 >> 0x30);
      uVar148 = (undefined)((ulong)uVar24 >> 0x38);
      uVar24 = *(undefined8 *)param_11;
      uVar133 = (undefined)uVar24;
      uVar134 = (undefined)((ulong)uVar24 >> 8);
      uVar135 = (undefined)((ulong)uVar24 >> 0x10);
      uVar136 = (undefined)((ulong)uVar24 >> 0x18);
      uVar137 = (undefined)((ulong)uVar24 >> 0x20);
      uVar138 = (undefined)((ulong)uVar24 >> 0x28);
      uVar139 = (undefined)((ulong)uVar24 >> 0x30);
      uVar140 = (undefined)((ulong)uVar24 >> 0x38);
      auVar250._8_4_ = 0xfffffff8;
      auVar250._0_8_ = 0xfffffff8fffffff8;
      auVar250._12_4_ = 0xfffffff8;
      iVar179 = piVar8[8];
      iVar252 = piVar7[8];
      iVar129 = auVar189._0_4_ + iVar129;
      iVar130 = auVar189._4_4_ + (int)((ulong)auVar121._0_8_ >> 0x20);
      iVar131 = auVar189._8_4_ + auVar121._8_4_;
      iVar132 = auVar189._12_4_ + auVar194._12_4_;
      auVar258._8_4_ = 0x20;
      auVar258._0_8_ = 0x2000000020;
      auVar258._12_4_ = 0x20;
      auVar123._8_4_ = 0xffffffe1;
      auVar123._0_8_ = 0xffffffe1ffffffe1;
      auVar123._12_4_ = 0xffffffe1;
      auVar127._8_8_ = 0xffffffffffffffff;
      auVar127._0_8_ = 0xffffffffffffffff;
      do {
        lVar55 = (long)param_3;
        auVar236 = NEON_sshl(auVar188,auVar250,4);
        auVar36[1] = uVar219;
        auVar36[0] = uVar218;
        auVar36[2] = uVar220;
        auVar36[3] = uVar221;
        auVar36[4] = uVar222;
        auVar36[5] = uVar223;
        auVar36[6] = uVar224;
        auVar36[7] = uVar225;
        auVar36[8] = uVar226;
        auVar36[9] = uVar227;
        auVar36[10] = uVar228;
        auVar36[11] = uVar229;
        auVar36[12] = uVar230;
        auVar36[13] = uVar231;
        auVar36[14] = uVar232;
        auVar36[15] = uVar233;
        auVar107 = NEON_sshl(auVar36,auVar250,4);
        fVar77 = fVar86 + (float)CONCAT13(uVar136,CONCAT12(uVar135,CONCAT11(uVar134,uVar133)));
        uVar133 = SUB41(fVar77,0);
        uVar134 = (undefined)((uint)fVar77 >> 8);
        uVar135 = (undefined)((uint)fVar77 >> 0x10);
        uVar136 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = fVar86 + (float)CONCAT13(uVar140,CONCAT12(uVar139,CONCAT11(uVar138,uVar137)));
        uVar137 = SUB41(fVar77,0);
        uVar138 = (undefined)((uint)fVar77 >> 8);
        uVar139 = (undefined)((uint)fVar77 >> 0x10);
        uVar140 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = fVar86 + (float)CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)));
        uVar141 = SUB41(fVar77,0);
        uVar142 = (undefined)((uint)fVar77 >> 8);
        uVar143 = (undefined)((uint)fVar77 >> 0x10);
        uVar144 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = fVar86 + (float)CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)));
        uVar145 = SUB41(fVar77,0);
        uVar146 = (undefined)((uint)fVar77 >> 8);
        uVar147 = (undefined)((uint)fVar77 >> 0x10);
        uVar148 = (undefined)((uint)fVar77 >> 0x18);
        auVar236 = NEON_smax(auVar236,ZEXT816(0),4);
        lVar54 = (lVar55 + (long)param_3 * 2) * 0x10;
        auVar107 = NEON_smax(auVar107,ZEXT816(0),4);
        while( true ) {
          lVar55 = lVar55 + 1;
          auVar92 = *(undefined (*) [16])param_10;
          pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar54);
          fVar261 = (float)*(undefined8 *)(*pauVar10 + 8);
          fVar262 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          fVar77 = (float)*(undefined8 *)*pauVar10;
          fVar260 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          auVar160._0_4_ = auVar92._0_4_ - fVar77;
          auVar160._4_4_ = auVar92._4_4_ - fVar260;
          auVar160._8_4_ = auVar92._8_4_ - fVar261;
          auVar160._12_4_ = auVar92._12_4_ - fVar262;
          auVar92 = NEON_cmlt(auVar160,0,4);
          auVar161[0] = auVar92[0] & auVar90[0];
          auVar161[1] = auVar92[1] & auVar90[1];
          auVar161[2] = auVar92[2] & auVar90[2];
          auVar161[3] = auVar92[3] & auVar90[3];
          auVar161[4] = auVar92[4] & auVar90[4];
          auVar161[5] = auVar92[5] & auVar90[5];
          auVar161[6] = auVar92[6] & auVar90[6];
          auVar161[7] = auVar92[7] & auVar90[7];
          auVar161[8] = auVar92[8] & auVar90[8];
          auVar161[9] = auVar92[9] & auVar90[9];
          auVar161[10] = auVar92[10] & auVar90[10];
          auVar161[11] = auVar92[11] & auVar90[11];
          auVar161[12] = auVar92[12] & auVar90[12];
          auVar161[13] = auVar92[13] & auVar90[13];
          auVar161[14] = auVar92[14] & auVar90[14];
          auVar161[15] = auVar92[15] & auVar90[15];
          auVar92 = NEON_ext(auVar161,auVar161,8,1);
          if (CONCAT13(auVar92[3] | auVar161[3] | auVar92[7] | auVar161[7],
                       CONCAT12(auVar92[2] | auVar161[2] | auVar92[6] | auVar161[6],
                                CONCAT11(auVar92[1] | auVar161[1] | auVar92[5] | auVar161[5],
                                         auVar92[0] | auVar161[0] | auVar92[4] | auVar161[4]))) !=
              0xf) {
            auVar92 = NEON_smin(auVar107,auVar258,4);
            auVar109 = NEON_smin(auVar236,auVar258,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar54);
            auVar23[1] = uVar134;
            auVar23[0] = uVar133;
            auVar23[2] = uVar135;
            auVar23[3] = uVar136;
            auVar23[4] = uVar137;
            auVar23[5] = uVar138;
            auVar23[6] = uVar139;
            auVar23[7] = uVar140;
            auVar23[8] = uVar141;
            auVar23[9] = uVar142;
            auVar23[10] = uVar143;
            auVar23[11] = uVar144;
            auVar23[12] = uVar145;
            auVar23[13] = uVar146;
            auVar23[14] = uVar147;
            auVar23[15] = uVar148;
            auVar158 = NEON_fmax(auVar23,*(undefined (*) [16])param_9,4);
            auVar108 = NEON_smax(auVar92,ZEXT816(0),4);
            auVar92 = *(undefined (*) [16])(puVar9 + 2);
            auVar109 = NEON_smax(auVar109,ZEXT816(0),4);
            auVar108 = NEON_sshl(auVar127,auVar108,4);
            auVar109 = NEON_sshl(auVar127,auVar109,4);
            auVar162[0] = auVar108[0] & ~auVar109[0];
            auVar162[1] = auVar108[1] & ~auVar109[1];
            auVar162[2] = auVar108[2] & ~auVar109[2];
            auVar162[3] = auVar108[3] & ~auVar109[3];
            auVar162[4] = auVar108[4] & ~auVar109[4];
            auVar162[5] = auVar108[5] & ~auVar109[5];
            auVar162[6] = auVar108[6] & ~auVar109[6];
            auVar162[7] = auVar108[7] & ~auVar109[7];
            auVar162[8] = auVar108[8] & ~auVar109[8];
            auVar162[9] = auVar108[9] & ~auVar109[9];
            auVar162[10] = auVar108[10] & ~auVar109[10];
            auVar162[11] = auVar108[11] & ~auVar109[11];
            auVar162[12] = auVar108[12] & ~auVar109[12];
            auVar162[13] = auVar108[13] & ~auVar109[13];
            auVar162[14] = auVar108[14] & ~auVar109[14];
            auVar162[15] = auVar108[15] & ~auVar109[15];
            auVar171._0_4_ = auVar158._0_4_ - fVar77;
            auVar171._4_4_ = auVar158._4_4_ - fVar260;
            auVar171._8_4_ = auVar158._8_4_ - fVar261;
            auVar171._12_4_ = auVar158._12_4_ - fVar262;
            auVar60._0_4_ = (auVar92._0_4_ + auVar92._0_4_) - (fVar77 + auVar158._0_4_);
            auVar60._4_4_ = (auVar92._4_4_ + auVar92._4_4_) - (fVar260 + auVar158._4_4_);
            auVar60._8_4_ = (auVar92._8_4_ + auVar92._8_4_) - (fVar261 + auVar158._8_4_);
            auVar60._12_4_ = (auVar92._12_4_ + auVar92._12_4_) - (fVar262 + auVar158._12_4_);
            auVar21._12_4_ = 0xf0b0703;
            auVar21._0_12_ = auVar89;
            auVar108 = a64_TBL(ZEXT816(0),auVar162,auVar21);
            auVar189 = NEON_sshl(auVar171,auVar123,4);
            auVar109 = NEON_sshl(auVar60,auVar123,4);
            auVar194 = NEON_cmeq(auVar108,0,2);
            auVar172[0] = auVar189[0] | auVar194[0];
            auVar172[1] = auVar189[1] | auVar194[1];
            auVar172[2] = auVar189[2] | auVar194[2];
            auVar172[3] = auVar189[3] | auVar194[3];
            auVar172[4] = auVar189[4] | auVar194[4];
            auVar172[5] = auVar189[5] | auVar194[5];
            auVar172[6] = auVar189[6] | auVar194[6];
            auVar172[7] = auVar189[7] | auVar194[7];
            auVar172[8] = auVar189[8] | auVar194[8];
            auVar172[9] = auVar189[9] | auVar194[9];
            auVar172[10] = auVar189[10] | auVar194[10];
            auVar172[11] = auVar189[11] | auVar194[11];
            auVar172[12] = auVar189[12] | auVar194[12];
            auVar172[13] = auVar189[13] | auVar194[13];
            auVar172[14] = auVar189[14] | auVar194[14];
            auVar172[15] = auVar189[15] | auVar194[15];
            auVar163[0] = auVar108[0] & ~auVar172[0];
            auVar163[1] = auVar108[1] & ~auVar172[1];
            auVar163[2] = auVar108[2] & ~auVar172[2];
            auVar163[3] = auVar108[3] & ~auVar172[3];
            auVar163[4] = auVar108[4] & ~auVar172[4];
            auVar163[5] = auVar108[5] & ~auVar172[5];
            auVar163[6] = auVar108[6] & ~auVar172[6];
            auVar163[7] = auVar108[7] & ~auVar172[7];
            auVar163[8] = auVar108[8] & ~auVar172[8];
            auVar163[9] = auVar108[9] & ~auVar172[9];
            auVar163[10] = auVar108[10] & ~auVar172[10];
            auVar163[11] = auVar108[11] & ~auVar172[11];
            auVar163[12] = auVar108[12] & ~auVar172[12];
            auVar163[13] = auVar108[13] & ~auVar172[13];
            auVar163[14] = auVar108[14] & ~auVar172[14];
            auVar163[15] = auVar108[15] & ~auVar172[15];
            auVar189 = NEON_cmeq(auVar163,auVar127,4);
            auVar108 = *(undefined (*) [16])(puVar9 + 4);
            auVar61[0] = (auVar109[0] | auVar189[0]) & ~auVar172[0];
            auVar61[1] = (auVar109[1] | auVar189[1]) & ~auVar172[1];
            auVar61[2] = (auVar109[2] | auVar189[2]) & ~auVar172[2];
            auVar61[3] = (auVar109[3] | auVar189[3]) & ~auVar172[3];
            auVar61[4] = (auVar109[4] | auVar189[4]) & ~auVar172[4];
            auVar61[5] = (auVar109[5] | auVar189[5]) & ~auVar172[5];
            auVar61[6] = (auVar109[6] | auVar189[6]) & ~auVar172[6];
            auVar61[7] = (auVar109[7] | auVar189[7]) & ~auVar172[7];
            auVar61[8] = (auVar109[8] | auVar189[8]) & ~auVar172[8];
            auVar61[9] = (auVar109[9] | auVar189[9]) & ~auVar172[9];
            auVar61[10] = (auVar109[10] | auVar189[10]) & ~auVar172[10];
            auVar61[11] = (auVar109[11] | auVar189[11]) & ~auVar172[11];
            auVar61[12] = (auVar109[12] | auVar189[12]) & ~auVar172[12];
            auVar61[13] = (auVar109[13] | auVar189[13]) & ~auVar172[13];
            auVar61[14] = (auVar109[14] | auVar189[14]) & ~auVar172[14];
            auVar61[15] = (auVar109[15] | auVar189[15]) & ~auVar172[15];
            auVar189 = NEON_cmlt(auVar172,0,4);
            auVar109 = NEON_cmlt(auVar61,0,4);
            auVar189 = NEON_bsl(auVar189,auVar92,auVar158,1);
            auVar164[0] = auVar108[0] & ~auVar61[0] | auVar163[0];
            auVar164[1] = auVar108[1] & ~auVar61[1] | auVar163[1];
            auVar164[2] = auVar108[2] & ~auVar61[2] | auVar163[2];
            auVar164[3] = auVar108[3] & ~auVar61[3] | auVar163[3];
            auVar164[4] = auVar108[4] & ~auVar61[4] | auVar163[4];
            auVar164[5] = auVar108[5] & ~auVar61[5] | auVar163[5];
            auVar164[6] = auVar108[6] & ~auVar61[6] | auVar163[6];
            auVar164[7] = auVar108[7] & ~auVar61[7] | auVar163[7];
            auVar164[8] = auVar108[8] & ~auVar61[8] | auVar163[8];
            auVar164[9] = auVar108[9] & ~auVar61[9] | auVar163[9];
            auVar164[10] = auVar108[10] & ~auVar61[10] | auVar163[10];
            auVar164[11] = auVar108[11] & ~auVar61[11] | auVar163[11];
            auVar164[12] = auVar108[12] & ~auVar61[12] | auVar163[12];
            auVar164[13] = auVar108[13] & ~auVar61[13] | auVar163[13];
            auVar164[14] = auVar108[14] & ~auVar61[14] | auVar163[14];
            auVar164[15] = auVar108[15] & ~auVar61[15] | auVar163[15];
            auVar92 = NEON_bsl(auVar109,auVar158,auVar92,1);
            auVar114._8_4_ = 0x7f7fffff;
            auVar114._0_8_ = 0x7f7fffff7f7fffff;
            auVar114._12_4_ = 0x7f7fffff;
            auVar108 = NEON_cmeq(auVar164,auVar127,4);
            auVar92 = NEON_fmin(auVar189,auVar92,4);
            auVar109 = NEON_bif(auVar114,auVar92,auVar108,1);
            auVar25._12_4_ = fVar262;
            auVar25._0_12_ = *pauVar10;
            auVar92 = NEON_bif(auVar92,auVar25,auVar108,1);
            puVar9[1] = auVar92._8_8_;
            *puVar9 = auVar92._0_8_;
            puVar9[3] = auVar109._8_8_;
            puVar9[2] = auVar109._0_8_;
            lVar53 = *(long *)(this + 0x138);
            auVar62._0_8_ =
                 CONCAT17(auVar164[7] & ~auVar108[7],
                          CONCAT16(auVar164[6] & ~auVar108[6],
                                   CONCAT15(auVar164[5] & ~auVar108[5],
                                            CONCAT14(auVar164[4] & ~auVar108[4],
                                                     CONCAT13(auVar164[3] & ~auVar108[3],
                                                              CONCAT12(auVar164[2] & ~auVar108[2],
                                                                       CONCAT11(auVar164[1] &
                                                                                ~auVar108[1],
                                                                                auVar164[0] &
                                                                                ~auVar108[0])))))));
            auVar62[8] = auVar164[8] & ~auVar108[8];
            auVar62[9] = auVar164[9] & ~auVar108[9];
            auVar62[10] = auVar164[10] & ~auVar108[10];
            auVar62[11] = auVar164[11] & ~auVar108[11];
            auVar62[12] = auVar164[12] & ~auVar108[12];
            auVar62[13] = auVar164[13] & ~auVar108[13];
            auVar62[14] = auVar164[14] & ~auVar108[14];
            auVar62[15] = auVar164[15] & ~auVar108[15];
            *(long *)(lVar53 + lVar54 + 0x28) = auVar62._8_8_;
            *(undefined8 *)(lVar53 + lVar54 + 0x20) = auVar62._0_8_;
          }
          if (param_3 + param_2 <= lVar55) break;
          fVar77 = param_12 + (float)CONCAT13(uVar136,CONCAT12(uVar135,CONCAT11(uVar134,uVar133)));
          uVar133 = SUB41(fVar77,0);
          uVar134 = (undefined)((uint)fVar77 >> 8);
          uVar135 = (undefined)((uint)fVar77 >> 0x10);
          uVar136 = (undefined)((uint)fVar77 >> 0x18);
          fVar77 = param_12 + (float)CONCAT13(uVar140,CONCAT12(uVar139,CONCAT11(uVar138,uVar137)));
          uVar137 = SUB41(fVar77,0);
          uVar138 = (undefined)((uint)fVar77 >> 8);
          uVar139 = (undefined)((uint)fVar77 >> 0x10);
          uVar140 = (undefined)((uint)fVar77 >> 0x18);
          fVar77 = param_12 + (float)CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)));
          uVar141 = SUB41(fVar77,0);
          uVar142 = (undefined)((uint)fVar77 >> 8);
          uVar143 = (undefined)((uint)fVar77 >> 0x10);
          uVar144 = (undefined)((uint)fVar77 >> 0x18);
          fVar77 = param_12 + (float)CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)));
          uVar145 = SUB41(fVar77,0);
          uVar146 = (undefined)((uint)fVar77 >> 8);
          uVar147 = (undefined)((uint)fVar77 >> 0x10);
          uVar148 = (undefined)((uint)fVar77 >> 0x18);
          auVar236 = NEON_uqsub(auVar236,auVar258,2);
          lVar54 = lVar54 + 0x30;
          auVar107 = NEON_uqsub(auVar107,auVar258,2);
        }
        auVar58._0_4_ = CONCAT13(uVar205,CONCAT12(uVar204,CONCAT11(uVar203,uVar202))) - iVar14;
        auVar58._4_4_ = CONCAT13(uVar209,CONCAT12(uVar208,CONCAT11(uVar207,uVar206))) - iVar14;
        auVar58._8_4_ = CONCAT13(uVar213,CONCAT12(uVar212,CONCAT11(uVar211,uVar210))) - iVar14;
        auVar58._12_4_ = CONCAT13(uVar217,CONCAT12(uVar216,CONCAT11(uVar215,uVar214))) - iVar14;
        auVar236 = *(undefined (*) [16])param_11;
        auVar113._0_4_ = iVar129 - iVar252;
        auVar113._4_4_ = iVar130 - iVar252;
        auVar113._8_4_ = iVar131 - iVar252;
        auVar113._12_4_ = iVar132 - iVar252;
        auVar107 = NEON_sshl(auVar58,auVar123,4);
        param_3 = *(int *)(this + 300) + param_3;
        iVar131 = auVar188._4_4_;
        iVar132 = auVar188._8_4_;
        iVar201 = auVar188._12_4_;
        auVar92 = NEON_sshl(auVar113,auVar123,4);
        iVar129 = CONCAT13(bVar84 & auVar107[3],
                           CONCAT12(bVar83 & auVar107[2],
                                    CONCAT11(bVar82 & auVar107[1],bVar81 & auVar107[0])));
        auVar185._0_8_ =
             CONCAT17(bVar84 & auVar107[7],
                      CONCAT16(bVar83 & auVar107[6],
                               CONCAT15(bVar82 & auVar107[5],CONCAT14(bVar81 & auVar107[4],iVar129))
                              ));
        auVar185[8] = bVar81 & auVar107[8];
        auVar185[9] = bVar82 & auVar107[9];
        auVar185[10] = bVar83 & auVar107[10];
        auVar185[11] = bVar84 & auVar107[11];
        auVar192[12] = bVar81 & auVar107[12];
        auVar192._0_12_ = auVar185;
        auVar192[13] = bVar82 & auVar107[13];
        auVar192[14] = bVar83 & auVar107[14];
        auVar192[15] = bVar84 & auVar107[15];
        iVar130 = CONCAT13(bVar80 & auVar107[3],
                           CONCAT12(bVar79 & auVar107[2],
                                    CONCAT11(bVar78 & auVar107[1],bVar76 & auVar107[0])));
        auVar88._0_8_ =
             CONCAT17(bVar80 & auVar107[7],
                      CONCAT16(bVar79 & auVar107[6],
                               CONCAT15(bVar78 & auVar107[5],CONCAT14(bVar76 & auVar107[4],iVar130))
                              ));
        auVar88[8] = bVar76 & auVar107[8];
        auVar88[9] = bVar78 & auVar107[9];
        auVar88[10] = bVar79 & auVar107[10];
        auVar88[11] = bVar80 & auVar107[11];
        auVar98[12] = bVar76 & auVar107[12];
        auVar98._0_12_ = auVar88;
        auVar98[13] = bVar78 & auVar107[13];
        auVar98[14] = bVar79 & auVar107[14];
        auVar98[15] = bVar80 & auVar107[15];
        fVar77 = param_13 + auVar236._0_4_;
        uVar133 = SUB41(fVar77,0);
        uVar134 = (undefined)((uint)fVar77 >> 8);
        uVar135 = (undefined)((uint)fVar77 >> 0x10);
        uVar136 = (undefined)((uint)fVar77 >> 0x18);
        fVar260 = param_13 + auVar236._4_4_;
        uVar137 = SUB41(fVar260,0);
        uVar138 = (undefined)((uint)fVar260 >> 8);
        uVar139 = (undefined)((uint)fVar260 >> 0x10);
        uVar140 = (undefined)((uint)fVar260 >> 0x18);
        fVar260 = param_13 + auVar236._8_4_;
        uVar141 = SUB41(fVar260,0);
        uVar142 = (undefined)((uint)fVar260 >> 8);
        uVar143 = (undefined)((uint)fVar260 >> 0x10);
        uVar144 = (undefined)((uint)fVar260 >> 0x18);
        fVar261 = param_13 + auVar236._12_4_;
        uVar145 = SUB41(fVar261,0);
        uVar146 = (undefined)((uint)fVar261 >> 8);
        uVar147 = (undefined)((uint)fVar261 >> 0x10);
        uVar148 = (undefined)((uint)fVar261 >> 0x18);
        iVar129 = iVar129 + auVar58._0_4_;
        uVar202 = (undefined)iVar129;
        uVar203 = (undefined)((uint)iVar129 >> 8);
        uVar204 = (undefined)((uint)iVar129 >> 0x10);
        uVar205 = (undefined)((uint)iVar129 >> 0x18);
        iVar129 = (int)((ulong)auVar185._0_8_ >> 0x20) + auVar58._4_4_;
        uVar206 = (undefined)iVar129;
        uVar207 = (undefined)((uint)iVar129 >> 8);
        uVar208 = (undefined)((uint)iVar129 >> 0x10);
        uVar209 = (undefined)((uint)iVar129 >> 0x18);
        iVar129 = auVar185._8_4_ + auVar58._8_4_;
        uVar210 = (undefined)iVar129;
        uVar211 = (undefined)((uint)iVar129 >> 8);
        uVar212 = (undefined)((uint)iVar129 >> 0x10);
        uVar213 = (undefined)((uint)iVar129 >> 0x18);
        iVar129 = auVar192._12_4_ + auVar58._12_4_;
        uVar214 = (undefined)iVar129;
        uVar215 = (undefined)((uint)iVar129 >> 8);
        uVar216 = (undefined)((uint)iVar129 >> 0x10);
        uVar217 = (undefined)((uint)iVar129 >> 0x18);
        iVar129 = CONCAT13(bVar56 & auVar92[3],
                           CONCAT12(bVar239 & auVar92[2],
                                    CONCAT11(bVar238 & auVar92[1],bVar234 & auVar92[0])));
        auVar57._0_8_ =
             CONCAT17(bVar56 & auVar92[7],
                      CONCAT16(bVar239 & auVar92[6],
                               CONCAT15(bVar238 & auVar92[5],CONCAT14(bVar234 & auVar92[4],iVar129))
                              ));
        auVar57[8] = bVar234 & auVar92[8];
        auVar57[9] = bVar238 & auVar92[9];
        auVar57[10] = bVar239 & auVar92[10];
        auVar57[11] = bVar56 & auVar92[11];
        auVar59[12] = bVar234 & auVar92[12];
        auVar59._0_12_ = auVar57;
        auVar59[13] = bVar238 & auVar92[13];
        auVar59[14] = bVar239 & auVar92[14];
        auVar59[15] = bVar56 & auVar92[15];
        iVar183 = CONCAT13(bVar242 & auVar92[3],
                           CONCAT12(bVar241 & auVar92[2],
                                    CONCAT11(bVar240 & auVar92[1],bVar85 & auVar92[0])));
        auVar186._0_8_ =
             CONCAT17(bVar242 & auVar92[7],
                      CONCAT16(bVar241 & auVar92[6],
                               CONCAT15(bVar240 & auVar92[5],CONCAT14(bVar85 & auVar92[4],iVar183)))
                     );
        auVar186[8] = bVar85 & auVar92[8];
        auVar186[9] = bVar240 & auVar92[9];
        auVar186[10] = bVar241 & auVar92[10];
        auVar186[11] = bVar242 & auVar92[11];
        auVar193[12] = bVar85 & auVar92[12];
        auVar193._0_12_ = auVar186;
        auVar193[13] = bVar240 & auVar92[13];
        auVar193[14] = bVar241 & auVar92[14];
        auVar193[15] = bVar242 & auVar92[15];
        *(ulong *)(param_11 + 8) =
             CONCAT17(uVar148,CONCAT16(uVar147,CONCAT15(uVar146,CONCAT14(uVar145,fVar260))));
        *(ulong *)param_11 =
             CONCAT17(uVar140,CONCAT16(uVar139,CONCAT15(uVar138,CONCAT14(uVar137,fVar77))));
        auVar188._0_4_ = iVar87 + auVar188._0_4_ + iVar130;
        auVar188._4_4_ = iVar87 + iVar131 + (int)((ulong)auVar88._0_8_ >> 0x20);
        auVar188._8_4_ = iVar13 + iVar132 + auVar88._8_4_;
        auVar188._12_4_ = iVar13 + iVar201 + auVar98._12_4_;
        iVar129 = iVar129 + auVar113._0_4_;
        iVar130 = (int)((ulong)auVar57._0_8_ >> 0x20) + auVar113._4_4_;
        iVar131 = auVar57._8_4_ + auVar113._8_4_;
        iVar132 = auVar59._12_4_ + auVar113._12_4_;
        iVar183 = iVar179 + CONCAT13(uVar221,CONCAT12(uVar220,CONCAT11(uVar219,uVar218))) + iVar183;
        uVar218 = (undefined)iVar183;
        uVar219 = (undefined)((uint)iVar183 >> 8);
        uVar220 = (undefined)((uint)iVar183 >> 0x10);
        uVar221 = (undefined)((uint)iVar183 >> 0x18);
        iVar183 = iVar179 + CONCAT13(uVar225,CONCAT12(uVar224,CONCAT11(uVar223,uVar222))) +
                  (int)((ulong)auVar186._0_8_ >> 0x20);
        uVar222 = (undefined)iVar183;
        uVar223 = (undefined)((uint)iVar183 >> 8);
        uVar224 = (undefined)((uint)iVar183 >> 0x10);
        uVar225 = (undefined)((uint)iVar183 >> 0x18);
        iVar183 = iVar179 + CONCAT13(uVar229,CONCAT12(uVar228,CONCAT11(uVar227,uVar226))) +
                  auVar186._8_4_;
        uVar226 = (undefined)iVar183;
        uVar227 = (undefined)((uint)iVar183 >> 8);
        uVar228 = (undefined)((uint)iVar183 >> 0x10);
        uVar229 = (undefined)((uint)iVar183 >> 0x18);
        iVar183 = iVar179 + CONCAT13(uVar233,CONCAT12(uVar232,CONCAT11(uVar231,uVar230))) +
                  auVar193._12_4_;
        uVar230 = (undefined)iVar183;
        uVar231 = (undefined)((uint)iVar183 >> 8);
        uVar232 = (undefined)((uint)iVar183 >> 0x10);
        uVar233 = (undefined)((uint)iVar183 >> 0x18);
      } while (param_3 < iVar251);
    }
    bVar85 = (byte)((ulong)uStack_98 >> 8);
    bVar240 = (byte)((ulong)uStack_98 >> 0x10);
    bVar241 = (byte)((ulong)uStack_98 >> 0x18);
    bVar242 = (byte)((ulong)uStack_98 >> 0x20);
    bVar234 = (byte)((ulong)uStack_98 >> 0x28);
    bVar238 = (byte)((ulong)uStack_98 >> 0x30);
    bVar239 = (byte)((ulong)uStack_98 >> 0x38);
    if (param_3 < param_5) {
      auVar63._8_4_ = 0xfffffff8;
      auVar63._0_8_ = 0xfffffff8fffffff8;
      auVar63._12_4_ = 0xfffffff8;
      auVar236 = *(undefined (*) [16])param_11;
      auVar108 = ZEXT816(0);
      lVar55 = (long)param_3;
      auVar37[1] = uVar219;
      auVar37[0] = uVar218;
      auVar37[2] = uVar220;
      auVar37[3] = uVar221;
      auVar37[4] = uVar222;
      auVar37[5] = uVar223;
      auVar37[6] = uVar224;
      auVar37[7] = uVar225;
      auVar37[8] = uVar226;
      auVar37[9] = uVar227;
      auVar37[10] = uVar228;
      auVar37[11] = uVar229;
      auVar37[12] = uVar230;
      auVar37[13] = uVar231;
      auVar37[14] = uVar232;
      auVar37[15] = uVar233;
      auVar107 = NEON_sshl(auVar37,auVar63,4);
      auVar90._4_4_ = iVar180;
      auVar90._0_4_ = iVar102;
      auVar90._8_4_ = iVar181;
      auVar90._12_4_ = iVar182;
      auVar92 = NEON_sshl(auVar90,auVar63,4);
      auVar90 = NEON_sshl(auVar188,auVar63,4);
      fVar77 = fVar86 + auVar236._0_4_;
      uVar218 = SUB41(fVar77,0);
      uVar219 = (undefined)((uint)fVar77 >> 8);
      uVar220 = (undefined)((uint)fVar77 >> 0x10);
      uVar221 = (undefined)((uint)fVar77 >> 0x18);
      fVar77 = fVar86 + auVar236._4_4_;
      uVar222 = SUB41(fVar77,0);
      uVar223 = (undefined)((uint)fVar77 >> 8);
      uVar224 = (undefined)((uint)fVar77 >> 0x10);
      uVar225 = (undefined)((uint)fVar77 >> 0x18);
      fVar77 = fVar86 + auVar236._8_4_;
      uVar226 = SUB41(fVar77,0);
      uVar227 = (undefined)((uint)fVar77 >> 8);
      uVar228 = (undefined)((uint)fVar77 >> 0x10);
      uVar229 = (undefined)((uint)fVar77 >> 0x18);
      fVar77 = fVar86 + auVar236._12_4_;
      uVar230 = SUB41(fVar77,0);
      uVar231 = (undefined)((uint)fVar77 >> 8);
      uVar232 = (undefined)((uint)fVar77 >> 0x10);
      uVar233 = (undefined)((uint)fVar77 >> 0x18);
      auVar236 = NEON_smax(auVar107,auVar108,4);
      lVar54 = (lVar55 + (long)param_3 * 2) * 0x10;
      auVar107 = NEON_smax(auVar92,auVar108,4);
      auVar90 = NEON_smax(auVar90,auVar108,4);
      auVar255._8_8_ = 0xffffffffffffffff;
      auVar255._0_8_ = 0xffffffffffffffff;
      auVar259._8_4_ = 0xffffffe1;
      auVar259._0_8_ = 0xffffffe1ffffffe1;
      auVar259._12_4_ = 0xffffffe1;
      auVar51._12_4_ = _UNK_004c513c;
      auVar51._0_12_ = _DAT_004c5130;
      auVar128._8_4_ = 0x7f7fffff;
      auVar128._0_8_ = 0x7f7fffff7f7fffff;
      auVar128._12_4_ = 0x7f7fffff;
      while( true ) {
        lVar55 = lVar55 + 1;
        auVar92 = *(undefined (*) [16])param_10;
        pauVar10 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar54);
        fVar261 = (float)*(undefined8 *)(*pauVar10 + 8);
        fVar262 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
        fVar77 = (float)*(undefined8 *)*pauVar10;
        fVar260 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
        auVar64._0_4_ = auVar92._0_4_ - fVar77;
        auVar64._4_4_ = auVar92._4_4_ - fVar260;
        auVar64._8_4_ = auVar92._8_4_ - fVar261;
        auVar64._12_4_ = auVar92._12_4_ - fVar262;
        auVar92 = NEON_cmlt(auVar64,0,4);
        bVar56 = auVar92[0] & 1;
        auVar65._0_5_ = CONCAT14(auVar92[4],(uint)bVar56) & 0x2ffffffff;
        auVar65._5_3_ = 0;
        auVar65[8] = auVar92[8] & 4;
        auVar65._9_3_ = 0;
        auVar65[12] = auVar92[12] & 8;
        auVar65._13_3_ = 0;
        auVar109 = NEON_ext(auVar65,auVar65,8,1);
        if (CONCAT13(auVar109[3] | auVar109[7],
                     CONCAT12(auVar109[2] | auVar109[6],
                              CONCAT11(auVar109[1] | auVar109[5],
                                       auVar109[0] | bVar56 | auVar109[4] | auVar92[4] & 2))) != 0xf
           ) {
          auVar43._8_4_ = 0x20;
          auVar43._0_8_ = 0x2000000020;
          auVar43._12_4_ = 0x20;
          auVar92 = NEON_smin(auVar236,auVar43,4);
          auVar44._8_4_ = 0x20;
          auVar44._0_8_ = 0x2000000020;
          auVar44._12_4_ = 0x20;
          auVar109 = NEON_smin(auVar107,auVar44,4);
          puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar54);
          auVar45._8_4_ = 0x20;
          auVar45._0_8_ = 0x2000000020;
          auVar45._12_4_ = 0x20;
          auVar189 = NEON_smin(auVar90,auVar45,4);
          auVar92 = NEON_smax(auVar92,auVar108,4);
          auVar158 = NEON_smax(auVar109,auVar108,4);
          auVar189 = NEON_smax(auVar189,auVar108,4);
          auVar109 = NEON_sshl(auVar255,auVar92,4);
          auVar158 = NEON_sshl(auVar255,auVar158,4);
          auVar194 = NEON_sshl(auVar255,auVar189,4);
          auVar42[1] = uVar219;
          auVar42[0] = uVar218;
          auVar42[2] = uVar220;
          auVar42[3] = uVar221;
          auVar42[4] = uVar222;
          auVar42[5] = uVar223;
          auVar42[6] = uVar224;
          auVar42[7] = uVar225;
          auVar42[8] = uVar226;
          auVar42[9] = uVar227;
          auVar42[10] = uVar228;
          auVar42[11] = uVar229;
          auVar42[12] = uVar230;
          auVar42[13] = uVar231;
          auVar42[14] = uVar232;
          auVar42[15] = uVar233;
          auVar189 = NEON_fmax(auVar42,*(undefined (*) [16])param_9,4);
          auVar92 = *(undefined (*) [16])(puVar9 + 2);
          auVar66[0] = auVar158[0] & auVar109[0] & ~auVar194[0];
          auVar66[1] = auVar158[1] & auVar109[1] & ~auVar194[1];
          auVar66[2] = auVar158[2] & auVar109[2] & ~auVar194[2];
          auVar66[3] = auVar158[3] & auVar109[3] & ~auVar194[3];
          auVar66[4] = auVar158[4] & auVar109[4] & ~auVar194[4];
          auVar66[5] = auVar158[5] & auVar109[5] & ~auVar194[5];
          auVar66[6] = auVar158[6] & auVar109[6] & ~auVar194[6];
          auVar66[7] = auVar158[7] & auVar109[7] & ~auVar194[7];
          auVar66[8] = auVar158[8] & auVar109[8] & ~auVar194[8];
          auVar66[9] = auVar158[9] & auVar109[9] & ~auVar194[9];
          auVar66[10] = auVar158[10] & auVar109[10] & ~auVar194[10];
          auVar66[11] = auVar158[11] & auVar109[11] & ~auVar194[11];
          auVar66[12] = auVar158[12] & auVar109[12] & ~auVar194[12];
          auVar66[13] = auVar158[13] & auVar109[13] & ~auVar194[13];
          auVar66[14] = auVar158[14] & auVar109[14] & ~auVar194[14];
          auVar66[15] = auVar158[15] & auVar109[15] & ~auVar194[15];
          auVar115._0_4_ = auVar189._0_4_ - fVar77;
          auVar115._4_4_ = auVar189._4_4_ - fVar260;
          auVar115._8_4_ = auVar189._8_4_ - fVar261;
          auVar115._12_4_ = auVar189._12_4_ - fVar262;
          auVar109 = a64_TBL(ZEXT816(0),auVar66,auVar51);
          auVar158 = NEON_sshl(auVar115,auVar259,4);
          auVar194 = NEON_cmeq(auVar109,0,2);
          auVar116[0] = auVar158[0] | auVar194[0];
          auVar116[1] = auVar158[1] | auVar194[1];
          auVar116[2] = auVar158[2] | auVar194[2];
          auVar116[3] = auVar158[3] | auVar194[3];
          auVar116[4] = auVar158[4] | auVar194[4];
          auVar116[5] = auVar158[5] | auVar194[5];
          auVar116[6] = auVar158[6] | auVar194[6];
          auVar116[7] = auVar158[7] | auVar194[7];
          auVar116[8] = auVar158[8] | auVar194[8];
          auVar116[9] = auVar158[9] | auVar194[9];
          auVar116[10] = auVar158[10] | auVar194[10];
          auVar116[11] = auVar158[11] | auVar194[11];
          auVar116[12] = auVar158[12] | auVar194[12];
          auVar116[13] = auVar158[13] | auVar194[13];
          auVar116[14] = auVar158[14] | auVar194[14];
          auVar116[15] = auVar158[15] | auVar194[15];
          auVar173._0_4_ = (auVar92._0_4_ + auVar92._0_4_) - (fVar77 + auVar189._0_4_);
          auVar173._4_4_ = (auVar92._4_4_ + auVar92._4_4_) - (fVar260 + auVar189._4_4_);
          auVar173._8_4_ = (auVar92._8_4_ + auVar92._8_4_) - (fVar261 + auVar189._8_4_);
          auVar173._12_4_ = (auVar92._12_4_ + auVar92._12_4_) - (fVar262 + auVar189._12_4_);
          auVar67[0] = auVar109[0] & ~auVar116[0];
          auVar67[1] = auVar109[1] & ~auVar116[1];
          auVar67[2] = auVar109[2] & ~auVar116[2];
          auVar67[3] = auVar109[3] & ~auVar116[3];
          auVar67[4] = auVar109[4] & ~auVar116[4];
          auVar67[5] = auVar109[5] & ~auVar116[5];
          auVar67[6] = auVar109[6] & ~auVar116[6];
          auVar67[7] = auVar109[7] & ~auVar116[7];
          auVar67[8] = auVar109[8] & ~auVar116[8];
          auVar67[9] = auVar109[9] & ~auVar116[9];
          auVar67[10] = auVar109[10] & ~auVar116[10];
          auVar67[11] = auVar109[11] & ~auVar116[11];
          auVar67[12] = auVar109[12] & ~auVar116[12];
          auVar67[13] = auVar109[13] & ~auVar116[13];
          auVar67[14] = auVar109[14] & ~auVar116[14];
          auVar67[15] = auVar109[15] & ~auVar116[15];
          auVar158 = NEON_sshl(auVar173,auVar259,4);
          auVar194 = NEON_cmeq(auVar67,auVar255,4);
          auVar109 = *(undefined (*) [16])(puVar9 + 4);
          auVar174[0] = (auVar158[0] | auVar194[0]) & ~auVar116[0];
          auVar174[1] = (auVar158[1] | auVar194[1]) & ~auVar116[1];
          auVar174[2] = (auVar158[2] | auVar194[2]) & ~auVar116[2];
          auVar174[3] = (auVar158[3] | auVar194[3]) & ~auVar116[3];
          auVar174[4] = (auVar158[4] | auVar194[4]) & ~auVar116[4];
          auVar174[5] = (auVar158[5] | auVar194[5]) & ~auVar116[5];
          auVar174[6] = (auVar158[6] | auVar194[6]) & ~auVar116[6];
          auVar174[7] = (auVar158[7] | auVar194[7]) & ~auVar116[7];
          auVar174[8] = (auVar158[8] | auVar194[8]) & ~auVar116[8];
          auVar174[9] = (auVar158[9] | auVar194[9]) & ~auVar116[9];
          auVar174[10] = (auVar158[10] | auVar194[10]) & ~auVar116[10];
          auVar174[11] = (auVar158[11] | auVar194[11]) & ~auVar116[11];
          auVar174[12] = (auVar158[12] | auVar194[12]) & ~auVar116[12];
          auVar174[13] = (auVar158[13] | auVar194[13]) & ~auVar116[13];
          auVar174[14] = (auVar158[14] | auVar194[14]) & ~auVar116[14];
          auVar174[15] = (auVar158[15] | auVar194[15]) & ~auVar116[15];
          auVar158 = NEON_cmlt(auVar116,0,4);
          auVar194 = NEON_cmlt(auVar174,0,4);
          auVar158 = NEON_bsl(auVar158,auVar92,auVar189,1);
          auVar68[0] = auVar109[0] & ~auVar174[0] | auVar67[0];
          auVar68[1] = auVar109[1] & ~auVar174[1] | auVar67[1];
          auVar68[2] = auVar109[2] & ~auVar174[2] | auVar67[2];
          auVar68[3] = auVar109[3] & ~auVar174[3] | auVar67[3];
          auVar68[4] = auVar109[4] & ~auVar174[4] | auVar67[4];
          auVar68[5] = auVar109[5] & ~auVar174[5] | auVar67[5];
          auVar68[6] = auVar109[6] & ~auVar174[6] | auVar67[6];
          auVar68[7] = auVar109[7] & ~auVar174[7] | auVar67[7];
          auVar68[8] = auVar109[8] & ~auVar174[8] | auVar67[8];
          auVar68[9] = auVar109[9] & ~auVar174[9] | auVar67[9];
          auVar68[10] = auVar109[10] & ~auVar174[10] | auVar67[10];
          auVar68[11] = auVar109[11] & ~auVar174[11] | auVar67[11];
          auVar68[12] = auVar109[12] & ~auVar174[12] | auVar67[12];
          auVar68[13] = auVar109[13] & ~auVar174[13] | auVar67[13];
          auVar68[14] = auVar109[14] & ~auVar174[14] | auVar67[14];
          auVar68[15] = auVar109[15] & ~auVar174[15] | auVar67[15];
          auVar92 = NEON_bif(auVar189,auVar92,auVar194,1);
          auVar189 = NEON_cmeq(auVar68,auVar255,4);
          auVar92 = NEON_fmin(auVar158,auVar92,4);
          auVar109 = NEON_bsl(auVar189,auVar128,auVar92,1);
          auVar22._12_4_ = fVar262;
          auVar22._0_12_ = *pauVar10;
          auVar92 = NEON_bif(auVar92,auVar22,auVar189,1);
          puVar9[1] = auVar92._8_8_;
          *puVar9 = auVar92._0_8_;
          puVar9[3] = auVar109._8_8_;
          puVar9[2] = auVar109._0_8_;
          lVar53 = *(long *)(this + 0x138) + lVar54;
          *(byte *)(lVar53 + 0x30) = auVar68[8] & ~auVar189[8];
          *(byte *)(lVar53 + 0x31) = auVar68[9] & ~auVar189[9];
          *(byte *)(lVar53 + 0x32) = auVar68[10] & ~auVar189[10];
          *(byte *)(lVar53 + 0x33) = auVar68[11] & ~auVar189[11];
          *(byte *)(lVar53 + 0x34) = auVar68[12] & ~auVar189[12];
          *(byte *)(lVar53 + 0x35) = auVar68[13] & ~auVar189[13];
          *(byte *)(lVar53 + 0x36) = auVar68[14] & ~auVar189[14];
          *(byte *)(lVar53 + 0x37) = auVar68[15] & ~auVar189[15];
          *(byte *)(lVar53 + 0x20) = auVar68[0] & ~auVar189[0];
          *(byte *)(lVar53 + 0x21) = auVar68[1] & ~auVar189[1];
          *(byte *)(lVar53 + 0x22) = auVar68[2] & ~auVar189[2];
          *(byte *)(lVar53 + 0x23) = auVar68[3] & ~auVar189[3];
          *(byte *)(lVar53 + 0x24) = auVar68[4] & ~auVar189[4];
          *(byte *)(lVar53 + 0x25) = auVar68[5] & ~auVar189[5];
          *(byte *)(lVar53 + 0x26) = auVar68[6] & ~auVar189[6];
          *(byte *)(lVar53 + 0x27) = auVar68[7] & ~auVar189[7];
        }
        if (param_3 + param_2 <= lVar55) break;
        auVar46._8_4_ = 0x20;
        auVar46._0_8_ = 0x2000000020;
        auVar46._12_4_ = 0x20;
        auVar90 = NEON_uqsub(auVar90,auVar46,2);
        auVar47._8_4_ = 0x20;
        auVar47._0_8_ = 0x2000000020;
        auVar47._12_4_ = 0x20;
        auVar236 = NEON_uqsub(auVar236,auVar47,2);
        lVar54 = lVar54 + 0x30;
        auVar48._8_4_ = 0x20;
        auVar48._0_8_ = 0x2000000020;
        auVar48._12_4_ = 0x20;
        auVar107 = NEON_uqsub(auVar107,auVar48,2);
        fVar77 = param_12 + (float)CONCAT13(uVar221,CONCAT12(uVar220,CONCAT11(uVar219,uVar218)));
        uVar218 = SUB41(fVar77,0);
        uVar219 = (undefined)((uint)fVar77 >> 8);
        uVar220 = (undefined)((uint)fVar77 >> 0x10);
        uVar221 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = param_12 + (float)CONCAT13(uVar225,CONCAT12(uVar224,CONCAT11(uVar223,uVar222)));
        uVar222 = SUB41(fVar77,0);
        uVar223 = (undefined)((uint)fVar77 >> 8);
        uVar224 = (undefined)((uint)fVar77 >> 0x10);
        uVar225 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = param_12 + (float)CONCAT13(uVar229,CONCAT12(uVar228,CONCAT11(uVar227,uVar226)));
        uVar226 = SUB41(fVar77,0);
        uVar227 = (undefined)((uint)fVar77 >> 8);
        uVar228 = (undefined)((uint)fVar77 >> 0x10);
        uVar229 = (undefined)((uint)fVar77 >> 0x18);
        fVar77 = param_12 + (float)CONCAT13(uVar233,CONCAT12(uVar232,CONCAT11(uVar231,uVar230)));
        uVar230 = SUB41(fVar77,0);
        uVar231 = (undefined)((uint)fVar77 >> 8);
        uVar232 = (undefined)((uint)fVar77 >> 0x10);
        uVar233 = (undefined)((uint)fVar77 >> 0x18);
      }
      param_3 = *(int *)(this + 300) + param_3;
    }
    if (param_3 < param_5) {
      auVar69._0_4_ = CONCAT13(uVar205,CONCAT12(uVar204,CONCAT11(uVar203,uVar202))) - iVar14;
      auVar69._4_4_ = CONCAT13(uVar209,CONCAT12(uVar208,CONCAT11(uVar207,uVar206))) - iVar14;
      auVar69._8_4_ = CONCAT13(uVar213,CONCAT12(uVar212,CONCAT11(uVar211,uVar210))) - iVar14;
      auVar69._12_4_ = CONCAT13(uVar217,CONCAT12(uVar216,CONCAT11(uVar215,uVar214))) - iVar14;
      auVar237._8_8_ = 0xffffffffffffffff;
      auVar237._0_8_ = 0xffffffffffffffff;
      auVar117._0_4_ = local_50 - iVar101;
      auVar117._4_4_ = iStack_4c - iVar101;
      auVar117._8_4_ = iVar103 - iVar101;
      auVar117._12_4_ = iVar104 - iVar101;
      auVar236 = *(undefined (*) [16])param_11;
      auVar28[8] = 0xe1;
      auVar28._0_8_ = 0xffffffe1ffffffe1;
      auVar28[9] = 0xff;
      auVar28[10] = 0xff;
      auVar28[11] = 0xff;
      auVar28[12] = 0xe1;
      auVar28[13] = 0xff;
      auVar28[14] = 0xff;
      auVar28[15] = 0xff;
      auVar90 = NEON_sshl(auVar69,auVar28,4);
      fVar77 = auVar236._0_4_;
      fVar260 = auVar236._4_4_;
      fVar261 = auVar236._8_4_;
      fVar262 = auVar236._12_4_;
      auVar29[8] = 0xe1;
      auVar29._0_8_ = 0xffffffe1ffffffe1;
      auVar29[9] = 0xff;
      auVar29[10] = 0xff;
      auVar29[11] = 0xff;
      auVar29[12] = 0xe1;
      auVar29[13] = 0xff;
      auVar29[14] = 0xff;
      auVar29[15] = 0xff;
      auVar236 = NEON_sshl(auVar117,auVar29,4);
      iVar103 = CONCAT13(bVar84 & auVar90[3],
                         CONCAT12(bVar83 & auVar90[2],
                                  CONCAT11(bVar82 & auVar90[1],bVar81 & auVar90[0])));
      auVar89._0_8_ =
           CONCAT17(bVar84 & auVar90[7],
                    CONCAT16(bVar83 & auVar90[6],
                             CONCAT15(bVar82 & auVar90[5],CONCAT14(bVar81 & auVar90[4],iVar103))));
      auVar89[8] = bVar81 & auVar90[8];
      auVar89[9] = bVar82 & auVar90[9];
      auVar89[10] = bVar83 & auVar90[10];
      auVar89[11] = bVar84 & auVar90[11];
      auVar99[12] = bVar81 & auVar90[12];
      auVar99._0_12_ = auVar89;
      auVar99[13] = bVar82 & auVar90[13];
      auVar99[14] = bVar83 & auVar90[14];
      auVar99[15] = bVar84 & auVar90[15];
      iVar251 = CONCAT13(bVar80 & auVar90[3],
                         CONCAT12(bVar79 & auVar90[2],
                                  CONCAT11(bVar78 & auVar90[1],bVar76 & auVar90[0])));
      auVar169._0_8_ =
           CONCAT17(bVar80 & auVar90[7],
                    CONCAT16(bVar79 & auVar90[6],
                             CONCAT15(bVar78 & auVar90[5],CONCAT14(bVar76 & auVar90[4],iVar251))));
      auVar169[8] = bVar76 & auVar90[8];
      auVar169[9] = bVar78 & auVar90[9];
      auVar169[10] = bVar79 & auVar90[10];
      auVar169[11] = bVar80 & auVar90[11];
      auVar175[12] = bVar76 & auVar90[12];
      auVar175._0_12_ = auVar169;
      auVar175[13] = bVar78 & auVar90[13];
      auVar175[14] = bVar79 & auVar90[14];
      auVar175[15] = bVar80 & auVar90[15];
      iVar104 = CONCAT13(bVar152 & auVar236[3],
                         CONCAT12(bVar151 & auVar236[2],
                                  CONCAT11(bVar150 & auVar236[1],bVar149 & auVar236[0])));
      auVar198._0_8_ =
           CONCAT17(bVar152 & auVar236[7],
                    CONCAT16(bVar151 & auVar236[6],
                             CONCAT15(bVar150 & auVar236[5],CONCAT14(bVar149 & auVar236[4],iVar104))
                            ));
      auVar198[8] = bStack_88 & auVar236[8];
      auVar198[9] = bStack_87 & auVar236[9];
      auVar198[10] = bStack_86 & auVar236[10];
      auVar198[11] = bStack_85 & auVar236[11];
      auVar200[12] = bStack_84 & auVar236[12];
      auVar200._0_12_ = auVar198;
      auVar200[13] = bStack_83 & auVar236[13];
      auVar200[14] = bStack_82 & auVar236[14];
      auVar200[15] = bStack_81 & auVar236[15];
      iVar179 = CONCAT13(bVar156 & auVar236[3],
                         CONCAT12(bVar155 & auVar236[2],
                                  CONCAT11(bVar154 & auVar236[1],bVar153 & auVar236[0])));
      auVar187._0_8_ =
           CONCAT17(bVar156 & auVar236[7],
                    CONCAT16(bVar155 & auVar236[6],
                             CONCAT15(bVar154 & auVar236[5],CONCAT14(bVar153 & auVar236[4],iVar179))
                            ));
      auVar187[8] = (byte)uStack_98 & auVar236[8];
      auVar187[9] = bVar85 & auVar236[9];
      auVar187[10] = bVar240 & auVar236[10];
      auVar187[11] = bVar241 & auVar236[11];
      auVar195[12] = bVar242 & auVar236[12];
      auVar195._0_12_ = auVar187;
      auVar195[13] = bVar234 & auVar236[13];
      auVar195[14] = bVar238 & auVar236[14];
      auVar195[15] = bVar239 & auVar236[15];
      iVar103 = iVar103 + auVar69._0_4_;
      iVar130 = (int)((ulong)auVar89._0_8_ >> 0x20) + auVar69._4_4_;
      iVar131 = auVar89._8_4_ + auVar69._8_4_;
      iVar132 = auVar99._12_4_ + auVar69._12_4_;
      auVar245._0_4_ = iVar87 + auVar188._0_4_ + iVar251;
      auVar245._4_4_ = iVar87 + auVar188._4_4_ + (int)((ulong)auVar169._0_8_ >> 0x20);
      auVar245._8_4_ = iVar13 + auVar188._8_4_ + auVar169._8_4_;
      auVar245._12_4_ = iVar13 + auVar188._12_4_ + auVar175._12_4_;
      iVar104 = iVar104 + auVar117._0_4_;
      iVar251 = (int)((ulong)auVar198._0_8_ >> 0x20) + auVar117._4_4_;
      iVar252 = auVar198._8_4_ + auVar117._8_4_;
      iVar129 = auVar200._12_4_ + auVar117._12_4_;
      iVar179 = iVar12 + iVar102 + iVar179;
      iVar180 = iVar12 + iVar180 + (int)((ulong)auVar187._0_8_ >> 0x20);
      iVar102 = iVar12 + iVar181 + auVar187._8_4_;
      iVar182 = iVar12 + iVar182 + auVar195._12_4_;
      auVar196._8_4_ = 0xfffffff8;
      auVar196._0_8_ = 0xfffffff8fffffff8;
      auVar196._12_4_ = 0xfffffff8;
      auVar236 = ZEXT816(0);
      while( true ) {
        auVar90 = NEON_sshl(auVar245,auVar196,4);
        lVar55 = (long)param_3;
        auVar27._4_4_ = iVar180;
        auVar27._0_4_ = iVar179;
        auVar27._8_4_ = iVar102;
        auVar27._12_4_ = iVar182;
        auVar107 = NEON_sshl(auVar27,auVar196,4);
        *(ulong *)(param_11 + 8) = CONCAT44(param_13 + fVar262,param_13 + fVar261);
        *(ulong *)param_11 = CONCAT44(param_13 + fVar260,param_13 + fVar77);
        fVar77 = fVar86 + param_13 + fVar77;
        fVar260 = fVar86 + param_13 + fVar260;
        fVar261 = fVar86 + param_13 + fVar261;
        fVar262 = fVar86 + param_13 + fVar262;
        auVar90 = NEON_smax(auVar90,auVar236,4);
        auVar107 = NEON_smax(auVar107,auVar236,4);
        lVar54 = (lVar55 + (long)param_3 * 2) * 0x10;
        while( true ) {
          lVar55 = lVar55 + 1;
          auVar188 = *(undefined (*) [16])param_10;
          auVar92 = *(undefined (*) [16])(*(long *)(this + 0x138) + lVar54);
          fVar119 = auVar92._0_4_;
          auVar70._0_4_ = auVar188._0_4_ - fVar119;
          fVar124 = auVar92._4_4_;
          auVar70._4_4_ = auVar188._4_4_ - fVar124;
          fVar125 = auVar92._8_4_;
          auVar70._8_4_ = auVar188._8_4_ - fVar125;
          fVar126 = auVar92._12_4_;
          auVar70._12_4_ = auVar188._12_4_ - fVar126;
          auVar188 = NEON_cmlt(auVar70,0,4);
          bVar56 = auVar188[0] & 1;
          auVar71._0_5_ = CONCAT14(auVar188[4],(uint)bVar56) & 0x2ffffffff;
          auVar71._5_3_ = 0;
          auVar71[8] = auVar188[8] & 4;
          auVar71._9_3_ = 0;
          auVar71[12] = auVar188[12] & 8;
          auVar71._13_3_ = 0;
          auVar108 = NEON_ext(auVar71,auVar71,8,1);
          if (CONCAT13(auVar108[3] | auVar108[7],
                       CONCAT12(auVar108[2] | auVar108[6],
                                CONCAT11(auVar108[1] | auVar108[5],
                                         auVar108[0] | bVar56 | auVar108[4] | auVar188[4] & 2))) !=
              0xf) {
            auVar38[8] = 0x20;
            auVar38._0_8_ = 0x2000000020;
            auVar38._9_3_ = 0;
            auVar38[12] = 0x20;
            auVar38._13_3_ = 0;
            auVar188 = NEON_smin(auVar107,auVar38,4);
            auVar39[8] = 0x20;
            auVar39._0_8_ = 0x2000000020;
            auVar39._9_3_ = 0;
            auVar39[12] = 0x20;
            auVar39._13_3_ = 0;
            auVar108 = NEON_smin(auVar90,auVar39,4);
            puVar9 = (undefined8 *)(*(long *)(this + 0x138) + lVar54);
            auVar49._4_4_ = fVar260;
            auVar49._0_4_ = fVar77;
            auVar49._8_4_ = fVar261;
            auVar49._12_4_ = fVar262;
            auVar109 = NEON_fmax(auVar49,*(undefined (*) [16])param_9,4);
            auVar188 = NEON_smax(auVar188,auVar236,4);
            auVar108 = NEON_smax(auVar108,auVar236,4);
            auVar165._0_4_ = auVar109._0_4_ - fVar119;
            auVar165._4_4_ = auVar109._4_4_ - fVar124;
            auVar165._8_4_ = auVar109._8_4_ - fVar125;
            auVar165._12_4_ = auVar109._12_4_ - fVar126;
            auVar188 = NEON_sshl(auVar237,auVar188,4);
            auVar108 = NEON_sshl(auVar237,auVar108,4);
            auVar30[8] = 0xe1;
            auVar30._0_8_ = 0xffffffe1ffffffe1;
            auVar30[9] = 0xff;
            auVar30[10] = 0xff;
            auVar30[11] = 0xff;
            auVar30[12] = 0xe1;
            auVar30[13] = 0xff;
            auVar30[14] = 0xff;
            auVar30[15] = 0xff;
            auVar158 = NEON_sshl(auVar165,auVar30,4);
            auVar72[0] = auVar188[0] & ~auVar108[0];
            auVar72[1] = auVar188[1] & ~auVar108[1];
            auVar72[2] = auVar188[2] & ~auVar108[2];
            auVar72[3] = auVar188[3] & ~auVar108[3];
            auVar72[4] = auVar188[4] & ~auVar108[4];
            auVar72[5] = auVar188[5] & ~auVar108[5];
            auVar72[6] = auVar188[6] & ~auVar108[6];
            auVar72[7] = auVar188[7] & ~auVar108[7];
            auVar72[8] = auVar188[8] & ~auVar108[8];
            auVar72[9] = auVar188[9] & ~auVar108[9];
            auVar72[10] = auVar188[10] & ~auVar108[10];
            auVar72[11] = auVar188[11] & ~auVar108[11];
            auVar72[12] = auVar188[12] & ~auVar108[12];
            auVar72[13] = auVar188[13] & ~auVar108[13];
            auVar72[14] = auVar188[14] & ~auVar108[14];
            auVar72[15] = auVar188[15] & ~auVar108[15];
            auVar52._12_4_ = _UNK_004c513c;
            auVar52._0_12_ = _DAT_004c5130;
            auVar108 = a64_TBL(ZEXT816(0),auVar72,auVar52);
            auVar188 = *(undefined (*) [16])(puVar9 + 2);
            auVar189 = NEON_cmeq(auVar108,0,2);
            auVar166[0] = auVar158[0] | auVar189[0];
            auVar166[1] = auVar158[1] | auVar189[1];
            auVar166[2] = auVar158[2] | auVar189[2];
            auVar166[3] = auVar158[3] | auVar189[3];
            auVar166[4] = auVar158[4] | auVar189[4];
            auVar166[5] = auVar158[5] | auVar189[5];
            auVar166[6] = auVar158[6] | auVar189[6];
            auVar166[7] = auVar158[7] | auVar189[7];
            auVar166[8] = auVar158[8] | auVar189[8];
            auVar166[9] = auVar158[9] | auVar189[9];
            auVar166[10] = auVar158[10] | auVar189[10];
            auVar166[11] = auVar158[11] | auVar189[11];
            auVar166[12] = auVar158[12] | auVar189[12];
            auVar166[13] = auVar158[13] | auVar189[13];
            auVar166[14] = auVar158[14] | auVar189[14];
            auVar166[15] = auVar158[15] | auVar189[15];
            auVar176._0_4_ = (auVar188._0_4_ + auVar188._0_4_) - (fVar119 + auVar109._0_4_);
            auVar176._4_4_ = (auVar188._4_4_ + auVar188._4_4_) - (fVar124 + auVar109._4_4_);
            auVar176._8_4_ = (auVar188._8_4_ + auVar188._8_4_) - (fVar125 + auVar109._8_4_);
            auVar176._12_4_ = (auVar188._12_4_ + auVar188._12_4_) - (fVar126 + auVar109._12_4_);
            auVar73[0] = auVar108[0] & ~auVar166[0];
            auVar73[1] = auVar108[1] & ~auVar166[1];
            auVar73[2] = auVar108[2] & ~auVar166[2];
            auVar73[3] = auVar108[3] & ~auVar166[3];
            auVar73[4] = auVar108[4] & ~auVar166[4];
            auVar73[5] = auVar108[5] & ~auVar166[5];
            auVar73[6] = auVar108[6] & ~auVar166[6];
            auVar73[7] = auVar108[7] & ~auVar166[7];
            auVar73[8] = auVar108[8] & ~auVar166[8];
            auVar73[9] = auVar108[9] & ~auVar166[9];
            auVar73[10] = auVar108[10] & ~auVar166[10];
            auVar73[11] = auVar108[11] & ~auVar166[11];
            auVar73[12] = auVar108[12] & ~auVar166[12];
            auVar73[13] = auVar108[13] & ~auVar166[13];
            auVar73[14] = auVar108[14] & ~auVar166[14];
            auVar73[15] = auVar108[15] & ~auVar166[15];
            auVar31[8] = 0xe1;
            auVar31._0_8_ = 0xffffffe1ffffffe1;
            auVar31[9] = 0xff;
            auVar31[10] = 0xff;
            auVar31[11] = 0xff;
            auVar31[12] = 0xe1;
            auVar31[13] = 0xff;
            auVar31[14] = 0xff;
            auVar31[15] = 0xff;
            auVar158 = NEON_sshl(auVar176,auVar31,4);
            auVar189 = NEON_cmeq(auVar73,auVar237,4);
            auVar108 = *(undefined (*) [16])(puVar9 + 4);
            auVar177[0] = (auVar158[0] | auVar189[0]) & ~auVar166[0];
            auVar177[1] = (auVar158[1] | auVar189[1]) & ~auVar166[1];
            auVar177[2] = (auVar158[2] | auVar189[2]) & ~auVar166[2];
            auVar177[3] = (auVar158[3] | auVar189[3]) & ~auVar166[3];
            auVar177[4] = (auVar158[4] | auVar189[4]) & ~auVar166[4];
            auVar177[5] = (auVar158[5] | auVar189[5]) & ~auVar166[5];
            auVar177[6] = (auVar158[6] | auVar189[6]) & ~auVar166[6];
            auVar177[7] = (auVar158[7] | auVar189[7]) & ~auVar166[7];
            auVar177[8] = (auVar158[8] | auVar189[8]) & ~auVar166[8];
            auVar177[9] = (auVar158[9] | auVar189[9]) & ~auVar166[9];
            auVar177[10] = (auVar158[10] | auVar189[10]) & ~auVar166[10];
            auVar177[11] = (auVar158[11] | auVar189[11]) & ~auVar166[11];
            auVar177[12] = (auVar158[12] | auVar189[12]) & ~auVar166[12];
            auVar177[13] = (auVar158[13] | auVar189[13]) & ~auVar166[13];
            auVar177[14] = (auVar158[14] | auVar189[14]) & ~auVar166[14];
            auVar177[15] = (auVar158[15] | auVar189[15]) & ~auVar166[15];
            auVar158 = NEON_cmlt(auVar166,0,4);
            auVar189 = NEON_cmlt(auVar177,0,4);
            auVar158 = NEON_bsl(auVar158,auVar188,auVar109,1);
            auVar74[0] = auVar108[0] & ~auVar177[0] | auVar73[0];
            auVar74[1] = auVar108[1] & ~auVar177[1] | auVar73[1];
            auVar74[2] = auVar108[2] & ~auVar177[2] | auVar73[2];
            auVar74[3] = auVar108[3] & ~auVar177[3] | auVar73[3];
            auVar74[4] = auVar108[4] & ~auVar177[4] | auVar73[4];
            auVar74[5] = auVar108[5] & ~auVar177[5] | auVar73[5];
            auVar74[6] = auVar108[6] & ~auVar177[6] | auVar73[6];
            auVar74[7] = auVar108[7] & ~auVar177[7] | auVar73[7];
            auVar74[8] = auVar108[8] & ~auVar177[8] | auVar73[8];
            auVar74[9] = auVar108[9] & ~auVar177[9] | auVar73[9];
            auVar74[10] = auVar108[10] & ~auVar177[10] | auVar73[10];
            auVar74[11] = auVar108[11] & ~auVar177[11] | auVar73[11];
            auVar74[12] = auVar108[12] & ~auVar177[12] | auVar73[12];
            auVar74[13] = auVar108[13] & ~auVar177[13] | auVar73[13];
            auVar74[14] = auVar108[14] & ~auVar177[14] | auVar73[14];
            auVar74[15] = auVar108[15] & ~auVar177[15] | auVar73[15];
            auVar188 = NEON_bit(auVar188,auVar109,auVar189,1);
            auVar108 = NEON_cmeq(auVar74,auVar237,4);
            auVar188 = NEON_fmin(auVar158,auVar188,4);
            auVar167._8_4_ = 0x7f7fffff;
            auVar167._0_8_ = 0x7f7fffff7f7fffff;
            auVar167._12_4_ = 0x7f7fffff;
            auVar109 = NEON_bif(auVar167,auVar188,auVar108,1);
            auVar188 = NEON_bif(auVar188,auVar92,auVar108,1);
            puVar9[1] = auVar188._8_8_;
            *puVar9 = auVar188._0_8_;
            puVar9[3] = auVar109._8_8_;
            puVar9[2] = auVar109._0_8_;
            lVar53 = *(long *)(this + 0x138) + lVar54;
            *(byte *)(lVar53 + 0x30) = auVar74[8] & ~auVar108[8];
            *(byte *)(lVar53 + 0x31) = auVar74[9] & ~auVar108[9];
            *(byte *)(lVar53 + 0x32) = auVar74[10] & ~auVar108[10];
            *(byte *)(lVar53 + 0x33) = auVar74[11] & ~auVar108[11];
            *(byte *)(lVar53 + 0x34) = auVar74[12] & ~auVar108[12];
            *(byte *)(lVar53 + 0x35) = auVar74[13] & ~auVar108[13];
            *(byte *)(lVar53 + 0x36) = auVar74[14] & ~auVar108[14];
            *(byte *)(lVar53 + 0x37) = auVar74[15] & ~auVar108[15];
            *(byte *)(lVar53 + 0x20) = auVar74[0] & ~auVar108[0];
            *(byte *)(lVar53 + 0x21) = auVar74[1] & ~auVar108[1];
            *(byte *)(lVar53 + 0x22) = auVar74[2] & ~auVar108[2];
            *(byte *)(lVar53 + 0x23) = auVar74[3] & ~auVar108[3];
            *(byte *)(lVar53 + 0x24) = auVar74[4] & ~auVar108[4];
            *(byte *)(lVar53 + 0x25) = auVar74[5] & ~auVar108[5];
            *(byte *)(lVar53 + 0x26) = auVar74[6] & ~auVar108[6];
            *(byte *)(lVar53 + 0x27) = auVar74[7] & ~auVar108[7];
          }
          if (param_3 + param_2 <= lVar55) break;
          fVar77 = param_12 + fVar77;
          fVar260 = param_12 + fVar260;
          fVar261 = param_12 + fVar261;
          fVar262 = param_12 + fVar262;
          auVar40[8] = 0x20;
          auVar40._0_8_ = 0x2000000020;
          auVar40._9_3_ = 0;
          auVar40[12] = 0x20;
          auVar40._13_3_ = 0;
          auVar90 = NEON_uqsub(auVar90,auVar40,2);
          lVar54 = lVar54 + 0x30;
          auVar41[8] = 0x20;
          auVar41._0_8_ = 0x2000000020;
          auVar41._9_3_ = 0;
          auVar41[12] = 0x20;
          auVar41._13_3_ = 0;
          auVar107 = NEON_uqsub(auVar107,auVar41,2);
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar75._0_4_ = iVar103 - iVar14;
        auVar75._4_4_ = iVar130 - iVar14;
        auVar75._8_4_ = iVar131 - iVar14;
        auVar75._12_4_ = iVar132 - iVar14;
        iVar201 = auVar245._4_4_;
        iVar247 = auVar245._8_4_;
        iVar248 = auVar245._12_4_;
        auVar100._0_4_ = iVar104 - iVar101;
        auVar100._4_4_ = iVar251 - iVar101;
        auVar100._8_4_ = iVar252 - iVar101;
        auVar100._12_4_ = iVar129 - iVar101;
        auVar32[8] = 0xe1;
        auVar32._0_8_ = 0xffffffe1ffffffe1;
        auVar32[9] = 0xff;
        auVar32[10] = 0xff;
        auVar32[11] = 0xff;
        auVar32[12] = 0xe1;
        auVar32[13] = 0xff;
        auVar32[14] = 0xff;
        auVar32[15] = 0xff;
        auVar90 = NEON_sshl(auVar75,auVar32,4);
        auVar33[8] = 0xe1;
        auVar33._0_8_ = 0xffffffe1ffffffe1;
        auVar33[9] = 0xff;
        auVar33[10] = 0xff;
        auVar33[11] = 0xff;
        auVar33[12] = 0xe1;
        auVar33[13] = 0xff;
        auVar33[14] = 0xff;
        auVar33[15] = 0xff;
        auVar107 = NEON_sshl(auVar100,auVar33,4);
        iVar103 = CONCAT13(auVar90[3] & bVar84,
                           CONCAT12(auVar90[2] & bVar83,
                                    CONCAT11(auVar90[1] & bVar82,auVar90[0] & bVar81)));
        auVar170._0_8_ =
             CONCAT17(auVar90[7] & bVar84,
                      CONCAT16(auVar90[6] & bVar83,
                               CONCAT15(auVar90[5] & bVar82,CONCAT14(auVar90[4] & bVar81,iVar103))))
        ;
        auVar170[8] = auVar90[8] & bVar81;
        auVar170[9] = auVar90[9] & bVar82;
        auVar170[10] = auVar90[10] & bVar83;
        auVar170[11] = auVar90[11] & bVar84;
        auVar178[12] = auVar90[12] & bVar81;
        auVar178._0_12_ = auVar170;
        auVar178[13] = auVar90[13] & bVar82;
        auVar178[14] = auVar90[14] & bVar83;
        auVar178[15] = auVar90[15] & bVar84;
        iVar181 = CONCAT13(auVar90[3] & bVar80,
                           CONCAT12(auVar90[2] & bVar79,
                                    CONCAT11(auVar90[1] & bVar78,auVar90[0] & bVar76)));
        auVar106._0_8_ =
             CONCAT17(auVar90[7] & bVar80,
                      CONCAT16(auVar90[6] & bVar79,
                               CONCAT15(auVar90[5] & bVar78,CONCAT14(auVar90[4] & bVar76,iVar181))))
        ;
        auVar106[8] = auVar90[8] & bVar76;
        auVar106[9] = auVar90[9] & bVar78;
        auVar106[10] = auVar90[10] & bVar79;
        auVar106[11] = auVar90[11] & bVar80;
        auVar118[12] = auVar90[12] & bVar76;
        auVar118._0_12_ = auVar106;
        auVar118[13] = auVar90[13] & bVar78;
        auVar118[14] = auVar90[14] & bVar79;
        auVar118[15] = auVar90[15] & bVar80;
        iVar183 = CONCAT13(auVar107[3] & bVar156,
                           CONCAT12(auVar107[2] & bVar155,
                                    CONCAT11(auVar107[1] & bVar154,auVar107[0] & bVar153)));
        auVar243._0_8_ =
             CONCAT17(auVar107[7] & bVar156,
                      CONCAT16(auVar107[6] & bVar155,
                               CONCAT15(auVar107[5] & bVar154,
                                        CONCAT14(auVar107[4] & bVar153,iVar183))));
        auVar243[8] = auVar107[8] & (byte)uStack_98;
        auVar243[9] = auVar107[9] & bVar85;
        auVar243[10] = auVar107[10] & bVar240;
        auVar243[11] = auVar107[11] & bVar241;
        auVar246[12] = auVar107[12] & bVar242;
        auVar246._0_12_ = auVar243;
        auVar246[13] = auVar107[13] & bVar234;
        auVar246[14] = auVar107[14] & bVar238;
        auVar246[15] = auVar107[15] & bVar239;
        iVar104 = CONCAT13(auVar107[3] & bVar152,
                           CONCAT12(auVar107[2] & bVar151,
                                    CONCAT11(auVar107[1] & bVar150,auVar107[0] & bVar149)));
        auVar157._0_8_ =
             CONCAT17(auVar107[7] & bVar152,
                      CONCAT16(auVar107[6] & bVar151,
                               CONCAT15(auVar107[5] & bVar150,
                                        CONCAT14(auVar107[4] & bVar149,iVar104))));
        auVar157[8] = auVar107[8] & bStack_88;
        auVar157[9] = auVar107[9] & bStack_87;
        auVar157[10] = auVar107[10] & bStack_86;
        auVar157[11] = auVar107[11] & bStack_85;
        auVar168[12] = auVar107[12] & bStack_84;
        auVar168._0_12_ = auVar157;
        auVar168[13] = auVar107[13] & bStack_83;
        auVar168[14] = auVar107[14] & bStack_82;
        auVar168[15] = auVar107[15] & bStack_81;
        iVar103 = iVar103 + auVar75._0_4_;
        iVar130 = (int)((ulong)auVar170._0_8_ >> 0x20) + auVar75._4_4_;
        iVar131 = auVar170._8_4_ + auVar75._8_4_;
        iVar132 = auVar178._12_4_ + auVar75._12_4_;
        auVar90 = *(undefined (*) [16])param_11;
        auVar245._0_4_ = auVar245._0_4_ + iVar87 + iVar181;
        auVar245._4_4_ = iVar201 + iVar87 + (int)((ulong)auVar106._0_8_ >> 0x20);
        auVar245._8_4_ = iVar247 + iVar13 + auVar106._8_4_;
        auVar245._12_4_ = iVar248 + iVar13 + auVar118._12_4_;
        fVar77 = auVar90._0_4_;
        fVar260 = auVar90._4_4_;
        fVar261 = auVar90._8_4_;
        fVar262 = auVar90._12_4_;
        iVar104 = iVar104 + auVar100._0_4_;
        iVar251 = (int)((ulong)auVar157._0_8_ >> 0x20) + auVar100._4_4_;
        iVar252 = auVar157._8_4_ + auVar100._8_4_;
        iVar129 = auVar168._12_4_ + auVar100._12_4_;
        iVar179 = iVar183 + iVar12 + iVar179;
        iVar180 = (int)((ulong)auVar243._0_8_ >> 0x20) + iVar12 + iVar180;
        iVar102 = auVar243._8_4_ + iVar12 + iVar102;
        iVar182 = auVar246._12_4_ + iVar12 + iVar182;
      }
    }
  }
  return 0;
}


