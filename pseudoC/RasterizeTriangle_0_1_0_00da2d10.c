// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<0,1,0>
// Entry Point: 00da2d10
// Size: 2640 bytes
// Signature: int __thiscall RasterizeTriangle<0,1,0>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0, 1,
   0>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0,1,0>
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
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined (*pauVar16) [12];
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
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
  int iVar42;
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
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  long lVar57;
  long lVar58;
  int iVar59;
  long lVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined auVar65 [12];
  undefined auVar66 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  byte bVar86;
  byte bVar88;
  byte bVar89;
  float fVar87;
  byte bVar90;
  byte bVar91;
  undefined auVar92 [12];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar104 [16];
  undefined auVar93 [12];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  byte bVar109;
  byte bVar111;
  byte bVar112;
  float fVar110;
  byte bVar113;
  int iVar114;
  undefined auVar115 [12];
  undefined auVar116 [12];
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  undefined auVar129 [16];
  undefined auVar130 [16];
  undefined auVar131 [16];
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  float fVar142;
  undefined auVar143 [12];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined auVar151 [12];
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  int iVar157;
  byte bVar158;
  undefined auVar159 [12];
  undefined auVar160 [12];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar164 [16];
  undefined auVar165 [16];
  undefined auVar166 [16];
  undefined auVar168 [16];
  undefined auVar169 [16];
  int iVar171;
  undefined auVar172 [12];
  undefined auVar174 [16];
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined auVar179 [16];
  undefined auVar180 [16];
  undefined auVar181 [16];
  undefined auVar182 [12];
  undefined auVar184 [16];
  undefined auVar185 [16];
  int iVar186;
  int iVar195;
  int iVar196;
  undefined auVar187 [12];
  undefined auVar188 [12];
  undefined auVar189 [12];
  int iVar197;
  undefined auVar192 [16];
  undefined auVar194 [16];
  undefined auVar198 [12];
  undefined auVar199 [16];
  int iVar200;
  undefined uVar201;
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
  byte bVar233;
  undefined auVar234 [12];
  byte bVar238;
  byte bVar239;
  byte bVar240;
  undefined auVar235 [16];
  undefined auVar236 [16];
  undefined auVar237 [16];
  byte bVar241;
  byte bVar242;
  byte bVar243;
  undefined auVar244 [12];
  undefined auVar245 [16];
  undefined auVar246 [16];
  int iVar249;
  undefined auVar248 [16];
  undefined auVar250 [16];
  undefined auVar251 [16];
  undefined auVar252 [16];
  undefined auVar253 [16];
  undefined auVar254 [16];
  undefined auVar255 [16];
  undefined auVar256 [16];
  undefined auVar257 [16];
  int local_80;
  int iStack_7c;
  undefined auVar67 [16];
  undefined auVar98 [16];
  undefined auVar103 [16];
  undefined auVar105 [16];
  undefined auVar122 [16];
  undefined auVar132 [16];
  undefined auVar150 [16];
  undefined auVar163 [16];
  undefined auVar167 [16];
  undefined auVar170 [16];
  undefined auVar173 [12];
  undefined auVar177 [16];
  undefined auVar178 [16];
  undefined auVar183 [16];
  undefined auVar190 [16];
  undefined auVar191 [16];
  undefined auVar193 [16];
  undefined auVar247 [16];
  
  auVar93 = _DAT_004c5130;
  lVar58 = (ulong)param_1 * 4;
  pfVar2 = (float *)(param_7 + lVar58);
  piVar3 = (int *)(param_6 + lVar58);
  auVar144._8_4_ = 0xffffffe1;
  auVar144._0_8_ = 0xffffffe1ffffffe1;
  auVar144._12_4_ = 0xffffffe1;
  fVar87 = *pfVar2;
  piVar4 = (int *)(param_14 + lVar58);
  piVar5 = (int *)(param_15 + lVar58);
  piVar6 = (int *)(param_17 + lVar58);
  fVar110 = pfVar2[4];
  iVar59 = *piVar5;
  piVar7 = (int *)(param_18 + lVar58);
  iVar249 = *piVar6;
  puVar8 = (undefined4 *)(param_16 + lVar58);
  iVar17 = *piVar4;
  iVar18 = piVar5[4];
  iVar114 = MP_INT_ABS((int)(fVar87 * 128.0));
  iVar133 = MP_INT_ABS((int)(fVar87 * 384.0));
  iVar134 = MP_INT_ABS((int)(fVar87 * 640.0));
  iVar136 = MP_INT_ABS((int)(fVar87 * 896.0));
  iVar19 = piVar6[4];
  iVar137 = piVar4[4];
  iVar186 = MP_INT_ABS((int)(fVar110 * 128.0));
  iVar195 = MP_INT_ABS((int)(fVar110 * 384.0));
  iVar196 = MP_INT_ABS((int)(fVar110 * 640.0));
  iVar197 = MP_INT_ABS((int)(fVar110 * 896.0));
  iVar135 = *piVar3;
  auVar94._0_4_ = iVar249 + iVar59 * -0x80 + iVar114 * iVar17;
  auVar94._4_4_ = iVar249 + iVar59 * -0x180 + iVar133 * iVar17;
  auVar94._8_4_ = iVar249 + iVar59 * -0x280 + iVar134 * iVar17;
  auVar94._12_4_ = iVar249 + iVar59 * -0x380 + iVar136 * iVar17;
  iVar114 = piVar3[4];
  uVar20 = *puVar8;
  piVar9 = (int *)(param_8 + lVar58);
  auVar199 = NEON_sshl(auVar94,auVar144,4);
  iVar133 = *piVar7;
  auVar117._0_4_ = iVar19 + iVar18 * -0x80 + iVar186 * iVar137;
  auVar117._4_4_ = iVar19 + iVar18 * -0x180 + iVar195 * iVar137;
  auVar117._8_4_ = iVar19 + iVar18 * -0x280 + iVar196 * iVar137;
  auVar117._12_4_ = iVar19 + iVar18 * -0x380 + iVar197 * iVar137;
  iVar18 = *piVar9;
  uVar21 = puVar8[4];
  bVar86 = (byte)iVar17;
  bVar88 = (byte)((uint)iVar17 >> 8);
  bVar89 = (byte)((uint)iVar17 >> 0x10);
  bVar90 = (byte)((uint)iVar17 >> 0x18);
  iVar17 = piVar9[4];
  auVar235 = NEON_sshl(auVar117,auVar144,4);
  iVar19 = piVar7[4];
  uVar1 = iVar18 + 1;
  uVar15 = iVar17 - 1;
  iVar59 = auVar94._0_4_ +
           CONCAT13(auVar199[3] & bVar90,
                    CONCAT12(auVar199[2] & bVar89,
                             CONCAT11(auVar199[1] & bVar88,auVar199[0] & bVar86)));
  uVar201 = (undefined)iVar59;
  uVar202 = (undefined)((uint)iVar59 >> 8);
  uVar203 = (undefined)((uint)iVar59 >> 0x10);
  uVar204 = (undefined)((uint)iVar59 >> 0x18);
  iVar59 = auVar94._4_4_ +
           CONCAT13(auVar199[7] & bVar90,
                    CONCAT12(auVar199[6] & bVar89,
                             CONCAT11(auVar199[5] & bVar88,auVar199[4] & bVar86)));
  uVar205 = (undefined)iVar59;
  uVar206 = (undefined)((uint)iVar59 >> 8);
  uVar207 = (undefined)((uint)iVar59 >> 0x10);
  uVar208 = (undefined)((uint)iVar59 >> 0x18);
  iVar59 = auVar94._8_4_ +
           CONCAT13(auVar199[11] & bVar90,
                    CONCAT12(auVar199[10] & bVar89,
                             CONCAT11(auVar199[9] & bVar88,auVar199[8] & bVar86)));
  uVar209 = (undefined)iVar59;
  uVar210 = (undefined)((uint)iVar59 >> 8);
  uVar211 = (undefined)((uint)iVar59 >> 0x10);
  uVar212 = (undefined)((uint)iVar59 >> 0x18);
  iVar59 = auVar94._12_4_ +
           CONCAT13(auVar199[15] & bVar90,
                    CONCAT12(auVar199[14] & bVar89,
                             CONCAT11(auVar199[13] & bVar88,auVar199[12] & bVar86)));
  uVar213 = (undefined)iVar59;
  uVar214 = (undefined)((uint)iVar59 >> 8);
  uVar215 = (undefined)((uint)iVar59 >> 0x10);
  uVar216 = (undefined)((uint)iVar59 >> 0x18);
  bVar109 = (byte)uVar20;
  bVar111 = (byte)((uint)uVar20 >> 8);
  bVar112 = (byte)((uint)uVar20 >> 0x10);
  bVar113 = (byte)((uint)uVar20 >> 0x18);
  iVar134 = CONCAT13(auVar199[3] & bVar113,
                     CONCAT12(auVar199[2] & bVar112,
                              CONCAT11(auVar199[1] & bVar111,auVar199[0] & bVar109)));
  auVar198._0_8_ =
       CONCAT17(auVar199[7] & bVar113,
                CONCAT16(auVar199[6] & bVar112,
                         CONCAT15(auVar199[5] & bVar111,CONCAT14(auVar199[4] & bVar109,iVar134))));
  auVar198[8] = auVar199[8] & bVar109;
  auVar198[9] = auVar199[9] & bVar111;
  auVar198[10] = auVar199[10] & bVar112;
  auVar198[11] = auVar199[11] & bVar113;
  auVar97[12] = auVar199[12] & bVar109;
  auVar97._0_12_ = auVar198;
  auVar97[13] = auVar199[13] & bVar111;
  auVar97[14] = auVar199[14] & bVar112;
  auVar97[15] = auVar199[15] & bVar113;
  bVar61 = (byte)iVar137;
  bVar62 = (byte)((uint)iVar137 >> 8);
  bVar63 = (byte)((uint)iVar137 >> 0x10);
  bVar64 = (byte)((uint)iVar137 >> 0x18);
  bVar138 = (byte)uVar21;
  bVar139 = (byte)((uint)uVar21 >> 8);
  bVar140 = (byte)((uint)uVar21 >> 0x10);
  bVar141 = (byte)((uint)uVar21 >> 0x18);
  iVar136 = CONCAT13(auVar235[3] & bVar141,
                     CONCAT12(auVar235[2] & bVar140,
                              CONCAT11(auVar235[1] & bVar139,auVar235[0] & bVar138)));
  auVar234._0_8_ =
       CONCAT17(auVar235[7] & bVar141,
                CONCAT16(auVar235[6] & bVar140,
                         CONCAT15(auVar235[5] & bVar139,CONCAT14(auVar235[4] & bVar138,iVar136))));
  auVar234[8] = auVar235[8] & bVar138;
  auVar234[9] = auVar235[9] & bVar139;
  auVar234[10] = auVar235[10] & bVar140;
  auVar234[11] = auVar235[11] & bVar141;
  auVar119[12] = auVar235[12] & bVar138;
  auVar119._0_12_ = auVar234;
  auVar119[13] = auVar235[13] & bVar139;
  auVar119[14] = auVar235[14] & bVar140;
  auVar119[15] = auVar235[15] & bVar141;
  iVar249 = (uVar15 & (int)uVar15 >> 0x1f) + iVar114;
  iVar59 = iVar135 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 0x2000;
  auVar107._0_4_ = iVar135 + (int)(fVar87 * 128.0) + iVar134;
  auVar107._4_4_ = iVar135 + (int)(fVar87 * 384.0) + (int)((ulong)auVar198._0_8_ >> 0x20);
  auVar107._8_4_ = iVar135 + (int)(fVar87 * 640.0) + auVar198._8_4_;
  auVar107._12_4_ = iVar135 + (int)(fVar87 * 896.0) + auVar97._12_4_;
  local_80 = auVar117._0_4_ +
             CONCAT13(auVar235[3] & bVar64,
                      CONCAT12(auVar235[2] & bVar63,
                               CONCAT11(auVar235[1] & bVar62,auVar235[0] & bVar61)));
  iStack_7c = auVar117._4_4_ +
              CONCAT13(auVar235[7] & bVar64,
                       CONCAT12(auVar235[6] & bVar63,
                                CONCAT11(auVar235[5] & bVar62,auVar235[4] & bVar61)));
  iVar135 = auVar117._8_4_ +
            CONCAT13(auVar235[11] & bVar64,
                     CONCAT12(auVar235[10] & bVar63,
                              CONCAT11(auVar235[9] & bVar62,auVar235[8] & bVar61)));
  iVar137 = auVar117._12_4_ +
            CONCAT13(auVar235[15] & bVar64,
                     CONCAT12(auVar235[14] & bVar63,
                              CONCAT11(auVar235[13] & bVar62,auVar235[12] & bVar61)));
  auVar199._0_4_ = iVar114 + (int)(fVar110 * 128.0) + iVar136;
  auVar199._4_4_ = iVar114 + (int)(fVar110 * 384.0) + (int)((ulong)auVar234._0_8_ >> 0x20);
  auVar199._8_4_ = iVar114 + (int)(fVar110 * 640.0) + auVar234._8_4_;
  auVar199._12_4_ = iVar114 + (int)(fVar110 * 896.0) + auVar119._12_4_;
  if (param_4 < param_3) {
    if (param_3 < param_5) {
      fVar152 = (float)*(undefined8 *)(param_11 + 8);
      fVar153 = (float)((ulong)*(undefined8 *)(param_11 + 8) >> 0x20);
      fVar87 = (float)*(undefined8 *)param_11;
      fVar110 = (float)((ulong)*(undefined8 *)param_11 >> 0x20);
      auVar236._8_4_ = 0x20;
      auVar236._0_8_ = 0x2000000020;
      auVar236._12_4_ = 0x20;
      auVar54._12_4_ = 0xf0b0703;
      auVar54._0_12_ = _DAT_004c5130;
      auVar245._8_4_ = 0xffffffe1;
      auVar245._0_8_ = 0xffffffe1ffffffe1;
      auVar245._12_4_ = 0xffffffe1;
      auVar248._8_8_ = 0xffffffffffffffff;
      auVar248._0_8_ = 0xffffffffffffffff;
      auVar251._8_4_ = 0x7f7fffff;
      auVar251._0_8_ = 0x7f7fffff7f7fffff;
      auVar251._12_4_ = 0x7f7fffff;
      while( true ) {
        uVar11 = iVar249 >> 0xd;
        iVar249 = iVar249 + uVar15;
        uVar13 = param_2 - 1U;
        if ((int)uVar11 <= (int)(param_2 - 1U)) {
          uVar13 = uVar11;
        }
        auVar35._8_4_ = 0xfffffff8;
        auVar35._0_8_ = 0xfffffff8fffffff8;
        auVar35._12_4_ = 0xfffffff8;
        auVar94 = NEON_sshl(auVar107,auVar35,4);
        uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        auVar36._8_4_ = 0xfffffff8;
        auVar36._0_8_ = 0xfffffff8fffffff8;
        auVar36._12_4_ = 0xfffffff8;
        auVar117 = NEON_sshl(auVar199,auVar36,4);
        lVar57 = (long)(int)(uVar13 + param_3);
        lVar58 = (lVar57 + (long)(int)(uVar13 + param_3) * 2) * 0x10;
        auVar95._0_4_ = auVar94._0_4_ + uVar13 * -0x20;
        auVar95._4_4_ = auVar94._4_4_ + uVar13 * -0x20;
        auVar95._8_4_ = auVar94._8_4_ + uVar13 * -0x20;
        auVar95._12_4_ = auVar94._12_4_ + uVar13 * -0x20;
        iVar114 = param_2;
        if (iVar59 >> 0xd <= param_2) {
          iVar114 = iVar59 >> 0xd;
        }
        fVar142 = (float)uVar13 * param_12;
        auVar118._0_4_ = auVar117._0_4_ + uVar13 * -0x20;
        auVar118._4_4_ = auVar117._4_4_ + uVar13 * -0x20;
        auVar118._8_4_ = auVar117._8_4_ + uVar13 * -0x20;
        auVar118._12_4_ = auVar117._12_4_ + uVar13 * -0x20;
        auVar117 = NEON_smax(auVar95,ZEXT216(0),4);
        auVar94 = NEON_smax(auVar118,ZEXT216(0),4);
        fVar87 = fVar87 + fVar142;
        fVar110 = fVar110 + fVar142;
        fVar152 = fVar152 + fVar142;
        fVar153 = fVar153 + fVar142;
        while( true ) {
          lVar57 = lVar57 + 1;
          auVar97 = *(undefined (*) [16])param_10;
          pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar58);
          fVar155 = (float)*(undefined8 *)(*pauVar16 + 8);
          fVar156 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
          fVar142 = (float)*(undefined8 *)*pauVar16;
          fVar154 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
          auVar96._0_4_ = auVar97._0_4_ - fVar142;
          auVar96._4_4_ = auVar97._4_4_ - fVar154;
          auVar96._8_4_ = auVar97._8_4_ - fVar155;
          auVar96._12_4_ = auVar97._12_4_ - fVar156;
          auVar97 = NEON_cmlt(auVar96,0,4);
          bVar91 = auVar97[0] & 1;
          auVar98._0_5_ = CONCAT14(auVar97[4],(uint)bVar91) & 0x2ffffffff;
          auVar98._5_3_ = 0;
          auVar98[8] = auVar97[8] & 4;
          auVar98._9_3_ = 0;
          auVar98[12] = auVar97[12] & 8;
          auVar98._13_3_ = 0;
          auVar235 = NEON_ext(auVar98,auVar98,8,1);
          if (CONCAT13(auVar235[3] | auVar235[7],
                       CONCAT12(auVar235[2] | auVar235[6],
                                CONCAT11(auVar235[1] | auVar235[5],
                                         auVar235[0] | bVar91 | auVar235[4] | auVar97[4] & 2))) !=
              0xf) {
            auVar97 = NEON_smin(auVar94,auVar236,4);
            auVar119 = NEON_smin(auVar117,auVar236,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar58);
            auVar22._4_4_ = fVar110;
            auVar22._0_4_ = fVar87;
            auVar22._8_4_ = fVar152;
            auVar22._12_4_ = fVar153;
            auVar144 = NEON_fmax(auVar22,*(undefined (*) [16])param_9,4);
            auVar235 = NEON_smax(auVar97,ZEXT216(0),4);
            auVar97 = *(undefined (*) [16])(puVar10 + 2);
            auVar119 = NEON_smax(auVar119,ZEXT216(0),4);
            auVar235 = NEON_sshl(auVar248,auVar235,4);
            auVar119 = NEON_sshl(auVar248,auVar119,4);
            auVar99[0] = auVar235[0] & ~auVar119[0];
            auVar99[1] = auVar235[1] & ~auVar119[1];
            auVar99[2] = auVar235[2] & ~auVar119[2];
            auVar99[3] = auVar235[3] & ~auVar119[3];
            auVar99[4] = auVar235[4] & ~auVar119[4];
            auVar99[5] = auVar235[5] & ~auVar119[5];
            auVar99[6] = auVar235[6] & ~auVar119[6];
            auVar99[7] = auVar235[7] & ~auVar119[7];
            auVar99[8] = auVar235[8] & ~auVar119[8];
            auVar99[9] = auVar235[9] & ~auVar119[9];
            auVar99[10] = auVar235[10] & ~auVar119[10];
            auVar99[11] = auVar235[11] & ~auVar119[11];
            auVar99[12] = auVar235[12] & ~auVar119[12];
            auVar99[13] = auVar235[13] & ~auVar119[13];
            auVar99[14] = auVar235[14] & ~auVar119[14];
            auVar99[15] = auVar235[15] & ~auVar119[15];
            auVar120._0_4_ = auVar144._0_4_ - fVar142;
            auVar120._4_4_ = auVar144._4_4_ - fVar154;
            auVar120._8_4_ = auVar144._8_4_ - fVar155;
            auVar120._12_4_ = auVar144._12_4_ - fVar156;
            auVar235 = a64_TBL(ZEXT816(0),auVar99,auVar54);
            auVar119 = NEON_sshl(auVar120,auVar245,4);
            auVar174 = NEON_cmeq(auVar235,0,2);
            auVar121[0] = auVar119[0] | auVar174[0];
            auVar121[1] = auVar119[1] | auVar174[1];
            auVar121[2] = auVar119[2] | auVar174[2];
            auVar121[3] = auVar119[3] | auVar174[3];
            auVar121[4] = auVar119[4] | auVar174[4];
            auVar121[5] = auVar119[5] | auVar174[5];
            auVar121[6] = auVar119[6] | auVar174[6];
            auVar121[7] = auVar119[7] | auVar174[7];
            auVar121[8] = auVar119[8] | auVar174[8];
            auVar121[9] = auVar119[9] | auVar174[9];
            auVar121[10] = auVar119[10] | auVar174[10];
            auVar121[11] = auVar119[11] | auVar174[11];
            auVar121[12] = auVar119[12] | auVar174[12];
            auVar121[13] = auVar119[13] | auVar174[13];
            auVar121[14] = auVar119[14] | auVar174[14];
            auVar121[15] = auVar119[15] | auVar174[15];
            auVar175._0_4_ = (auVar97._0_4_ + auVar97._0_4_) - (fVar142 + auVar144._0_4_);
            auVar175._4_4_ = (auVar97._4_4_ + auVar97._4_4_) - (fVar154 + auVar144._4_4_);
            auVar175._8_4_ = (auVar97._8_4_ + auVar97._8_4_) - (fVar155 + auVar144._8_4_);
            auVar175._12_4_ = (auVar97._12_4_ + auVar97._12_4_) - (fVar156 + auVar144._12_4_);
            auVar100[0] = auVar235[0] & ~auVar121[0];
            auVar100[1] = auVar235[1] & ~auVar121[1];
            auVar100[2] = auVar235[2] & ~auVar121[2];
            auVar100[3] = auVar235[3] & ~auVar121[3];
            auVar100[4] = auVar235[4] & ~auVar121[4];
            auVar100[5] = auVar235[5] & ~auVar121[5];
            auVar100[6] = auVar235[6] & ~auVar121[6];
            auVar100[7] = auVar235[7] & ~auVar121[7];
            auVar100[8] = auVar235[8] & ~auVar121[8];
            auVar100[9] = auVar235[9] & ~auVar121[9];
            auVar100[10] = auVar235[10] & ~auVar121[10];
            auVar100[11] = auVar235[11] & ~auVar121[11];
            auVar100[12] = auVar235[12] & ~auVar121[12];
            auVar100[13] = auVar235[13] & ~auVar121[13];
            auVar100[14] = auVar235[14] & ~auVar121[14];
            auVar100[15] = auVar235[15] & ~auVar121[15];
            auVar119 = NEON_sshl(auVar175,auVar245,4);
            auVar174 = NEON_cmeq(auVar100,auVar248,4);
            auVar235 = *(undefined (*) [16])(puVar10 + 4);
            auVar176[0] = (auVar119[0] | auVar174[0]) & ~auVar121[0];
            auVar176[1] = (auVar119[1] | auVar174[1]) & ~auVar121[1];
            auVar176[2] = (auVar119[2] | auVar174[2]) & ~auVar121[2];
            auVar176[3] = (auVar119[3] | auVar174[3]) & ~auVar121[3];
            auVar176[4] = (auVar119[4] | auVar174[4]) & ~auVar121[4];
            auVar176[5] = (auVar119[5] | auVar174[5]) & ~auVar121[5];
            auVar176[6] = (auVar119[6] | auVar174[6]) & ~auVar121[6];
            auVar176[7] = (auVar119[7] | auVar174[7]) & ~auVar121[7];
            auVar176[8] = (auVar119[8] | auVar174[8]) & ~auVar121[8];
            auVar176[9] = (auVar119[9] | auVar174[9]) & ~auVar121[9];
            auVar176[10] = (auVar119[10] | auVar174[10]) & ~auVar121[10];
            auVar176[11] = (auVar119[11] | auVar174[11]) & ~auVar121[11];
            auVar176[12] = (auVar119[12] | auVar174[12]) & ~auVar121[12];
            auVar176[13] = (auVar119[13] | auVar174[13]) & ~auVar121[13];
            auVar176[14] = (auVar119[14] | auVar174[14]) & ~auVar121[14];
            auVar176[15] = (auVar119[15] | auVar174[15]) & ~auVar121[15];
            auVar119 = NEON_cmlt(auVar121,0,4);
            auVar174 = NEON_cmlt(auVar176,0,4);
            auVar119 = NEON_bsl(auVar119,auVar97,auVar144,1);
            auVar101[0] = auVar235[0] & ~auVar176[0] | auVar100[0];
            auVar101[1] = auVar235[1] & ~auVar176[1] | auVar100[1];
            auVar101[2] = auVar235[2] & ~auVar176[2] | auVar100[2];
            auVar101[3] = auVar235[3] & ~auVar176[3] | auVar100[3];
            auVar101[4] = auVar235[4] & ~auVar176[4] | auVar100[4];
            auVar101[5] = auVar235[5] & ~auVar176[5] | auVar100[5];
            auVar101[6] = auVar235[6] & ~auVar176[6] | auVar100[6];
            auVar101[7] = auVar235[7] & ~auVar176[7] | auVar100[7];
            auVar101[8] = auVar235[8] & ~auVar176[8] | auVar100[8];
            auVar101[9] = auVar235[9] & ~auVar176[9] | auVar100[9];
            auVar101[10] = auVar235[10] & ~auVar176[10] | auVar100[10];
            auVar101[11] = auVar235[11] & ~auVar176[11] | auVar100[11];
            auVar101[12] = auVar235[12] & ~auVar176[12] | auVar100[12];
            auVar101[13] = auVar235[13] & ~auVar176[13] | auVar100[13];
            auVar101[14] = auVar235[14] & ~auVar176[14] | auVar100[14];
            auVar101[15] = auVar235[15] & ~auVar176[15] | auVar100[15];
            auVar97 = NEON_bif(auVar144,auVar97,auVar174,1);
            auVar144 = NEON_cmeq(auVar101,auVar248,4);
            auVar97 = NEON_fmin(auVar119,auVar97,4);
            auVar235 = NEON_bsl(auVar144,auVar251,auVar97,1);
            auVar25._12_4_ = fVar156;
            auVar25._0_12_ = *pauVar16;
            auVar97 = NEON_bif(auVar97,auVar25,auVar144,1);
            puVar10[1] = auVar97._8_8_;
            *puVar10 = auVar97._0_8_;
            puVar10[3] = auVar235._8_8_;
            puVar10[2] = auVar235._0_8_;
            lVar60 = *(long *)(this + 0x138) + lVar58;
            *(byte *)(lVar60 + 0x30) = auVar101[8] & ~auVar144[8];
            *(byte *)(lVar60 + 0x31) = auVar101[9] & ~auVar144[9];
            *(byte *)(lVar60 + 0x32) = auVar101[10] & ~auVar144[10];
            *(byte *)(lVar60 + 0x33) = auVar101[11] & ~auVar144[11];
            *(byte *)(lVar60 + 0x34) = auVar101[12] & ~auVar144[12];
            *(byte *)(lVar60 + 0x35) = auVar101[13] & ~auVar144[13];
            *(byte *)(lVar60 + 0x36) = auVar101[14] & ~auVar144[14];
            *(byte *)(lVar60 + 0x37) = auVar101[15] & ~auVar144[15];
            *(byte *)(lVar60 + 0x20) = auVar101[0] & ~auVar144[0];
            *(byte *)(lVar60 + 0x21) = auVar101[1] & ~auVar144[1];
            *(byte *)(lVar60 + 0x22) = auVar101[2] & ~auVar144[2];
            *(byte *)(lVar60 + 0x23) = auVar101[3] & ~auVar144[3];
            *(byte *)(lVar60 + 0x24) = auVar101[4] & ~auVar144[4];
            *(byte *)(lVar60 + 0x25) = auVar101[5] & ~auVar144[5];
            *(byte *)(lVar60 + 0x26) = auVar101[6] & ~auVar144[6];
            *(byte *)(lVar60 + 0x27) = auVar101[7] & ~auVar144[7];
          }
          if (iVar114 + param_3 <= lVar57) break;
          fVar87 = param_12 + fVar87;
          fVar110 = param_12 + fVar110;
          fVar152 = param_12 + fVar152;
          fVar153 = param_12 + fVar153;
          auVar117 = NEON_uqsub(auVar117,auVar236,2);
          lVar58 = lVar58 + 0x30;
          auVar94 = NEON_uqsub(auVar94,auVar236,2);
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar102._0_4_ = CONCAT13(uVar204,CONCAT12(uVar203,CONCAT11(uVar202,uVar201))) - iVar133;
        auVar102._4_4_ = CONCAT13(uVar208,CONCAT12(uVar207,CONCAT11(uVar206,uVar205))) - iVar133;
        auVar102._8_4_ = CONCAT13(uVar212,CONCAT12(uVar211,CONCAT11(uVar210,uVar209))) - iVar133;
        auVar102._12_4_ = CONCAT13(uVar216,CONCAT12(uVar215,CONCAT11(uVar214,uVar213))) - iVar133;
        auVar94 = *(undefined (*) [16])param_11;
        iVar197 = auVar107._4_4_;
        iVar157 = auVar107._8_4_;
        iVar171 = auVar107._12_4_;
        iVar59 = iVar59 + uVar1;
        fVar87 = param_13 + auVar94._0_4_;
        fVar110 = param_13 + auVar94._4_4_;
        fVar152 = param_13 + auVar94._8_4_;
        fVar153 = param_13 + auVar94._12_4_;
        auVar94 = NEON_sshl(auVar102,auVar245,4);
        iVar136 = auVar199._4_4_;
        iVar186 = auVar199._8_4_;
        iVar195 = auVar199._12_4_;
        auVar145._0_4_ = local_80 - iVar19;
        auVar145._4_4_ = iStack_7c - iVar19;
        auVar145._8_4_ = iVar135 - iVar19;
        auVar145._12_4_ = iVar137 - iVar19;
        *(ulong *)(param_11 + 8) = CONCAT44(fVar153,fVar152);
        *(ulong *)param_11 = CONCAT44(fVar110,fVar87);
        iVar114 = CONCAT13(bVar90 & auVar94[3],
                           CONCAT12(bVar89 & auVar94[2],
                                    CONCAT11(bVar88 & auVar94[1],bVar86 & auVar94[0])));
        auVar187._0_8_ =
             CONCAT17(bVar90 & auVar94[7],
                      CONCAT16(bVar89 & auVar94[6],
                               CONCAT15(bVar88 & auVar94[5],CONCAT14(bVar86 & auVar94[4],iVar114))))
        ;
        auVar187[8] = bVar86 & auVar94[8];
        auVar187[9] = bVar88 & auVar94[9];
        auVar187[10] = bVar89 & auVar94[10];
        auVar187[11] = bVar90 & auVar94[11];
        auVar190[12] = bVar86 & auVar94[12];
        auVar190._0_12_ = auVar187;
        auVar190[13] = bVar88 & auVar94[13];
        auVar190[14] = bVar89 & auVar94[14];
        auVar190[15] = bVar90 & auVar94[15];
        iVar134 = CONCAT13(bVar113 & auVar94[3],
                           CONCAT12(bVar112 & auVar94[2],
                                    CONCAT11(bVar111 & auVar94[1],bVar109 & auVar94[0])));
        auVar115._0_8_ =
             CONCAT17(bVar113 & auVar94[7],
                      CONCAT16(bVar112 & auVar94[6],
                               CONCAT15(bVar111 & auVar94[5],CONCAT14(bVar109 & auVar94[4],iVar134))
                              ));
        auVar115[8] = bVar109 & auVar94[8];
        auVar115[9] = bVar111 & auVar94[9];
        auVar115[10] = bVar112 & auVar94[10];
        auVar115[11] = bVar113 & auVar94[11];
        auVar122[12] = bVar109 & auVar94[12];
        auVar122._0_12_ = auVar115;
        auVar122[13] = bVar111 & auVar94[13];
        auVar122[14] = bVar112 & auVar94[14];
        auVar122[15] = bVar113 & auVar94[15];
        auVar94 = NEON_sshl(auVar145,auVar245,4);
        iVar114 = iVar114 + auVar102._0_4_;
        uVar201 = (undefined)iVar114;
        uVar202 = (undefined)((uint)iVar114 >> 8);
        uVar203 = (undefined)((uint)iVar114 >> 0x10);
        uVar204 = (undefined)((uint)iVar114 >> 0x18);
        iVar114 = (int)((ulong)auVar187._0_8_ >> 0x20) + auVar102._4_4_;
        uVar205 = (undefined)iVar114;
        uVar206 = (undefined)((uint)iVar114 >> 8);
        uVar207 = (undefined)((uint)iVar114 >> 0x10);
        uVar208 = (undefined)((uint)iVar114 >> 0x18);
        iVar114 = auVar187._8_4_ + auVar102._8_4_;
        uVar209 = (undefined)iVar114;
        uVar210 = (undefined)((uint)iVar114 >> 8);
        uVar211 = (undefined)((uint)iVar114 >> 0x10);
        uVar212 = (undefined)((uint)iVar114 >> 0x18);
        iVar114 = auVar190._12_4_ + auVar102._12_4_;
        uVar213 = (undefined)iVar114;
        uVar214 = (undefined)((uint)iVar114 >> 8);
        uVar215 = (undefined)((uint)iVar114 >> 0x10);
        uVar216 = (undefined)((uint)iVar114 >> 0x18);
        iVar114 = CONCAT13(bVar64 & auVar94[3],
                           CONCAT12(bVar63 & auVar94[2],
                                    CONCAT11(bVar62 & auVar94[1],bVar61 & auVar94[0])));
        iVar196 = CONCAT13(bVar141 & auVar94[3],
                           CONCAT12(bVar140 & auVar94[2],
                                    CONCAT11(bVar139 & auVar94[1],bVar138 & auVar94[0])));
        auVar188._0_8_ =
             CONCAT17(bVar141 & auVar94[7],
                      CONCAT16(bVar140 & auVar94[6],
                               CONCAT15(bVar139 & auVar94[5],CONCAT14(bVar138 & auVar94[4],iVar196))
                              ));
        auVar188[8] = bVar138 & auVar94[8];
        auVar188[9] = bVar139 & auVar94[9];
        auVar188[10] = bVar140 & auVar94[10];
        auVar188[11] = bVar141 & auVar94[11];
        auVar191[12] = bVar138 & auVar94[12];
        auVar191._0_12_ = auVar188;
        auVar191[13] = bVar139 & auVar94[13];
        auVar191[14] = bVar140 & auVar94[14];
        auVar191[15] = bVar141 & auVar94[15];
        auVar107._0_4_ = iVar18 + auVar107._0_4_ + iVar134;
        auVar107._4_4_ = iVar18 + iVar197 + (int)((ulong)auVar115._0_8_ >> 0x20);
        auVar107._8_4_ = iVar18 + iVar157 + auVar115._8_4_;
        auVar107._12_4_ = iVar18 + iVar171 + auVar122._12_4_;
        local_80 = iVar114 + auVar145._0_4_;
        iStack_7c = (int)(CONCAT17(bVar64 & auVar94[7],
                                   CONCAT16(bVar63 & auVar94[6],
                                            CONCAT15(bVar62 & auVar94[5],
                                                     CONCAT14(bVar61 & auVar94[4],iVar114)))) >>
                         0x20) + auVar145._4_4_;
        auVar199._0_4_ = iVar17 + auVar199._0_4_ + iVar196;
        auVar199._4_4_ = iVar17 + iVar136 + (int)((ulong)auVar188._0_8_ >> 0x20);
        auVar199._8_4_ = iVar17 + iVar186 + auVar188._8_4_;
        auVar199._12_4_ = iVar17 + iVar195 + auVar191._12_4_;
      }
    }
  }
  else {
    fVar87 = pfVar2[8];
    iVar134 = piVar9[8];
    iVar186 = piVar5[8];
    iVar195 = piVar6[8];
    iVar136 = piVar3[8];
    uVar11 = iVar134 - 1;
    iVar114 = param_5;
    if (param_4 <= param_5) {
      iVar114 = param_4;
    }
    iVar197 = piVar4[8];
    iVar157 = MP_INT_ABS((int)(fVar87 * 128.0));
    iVar171 = MP_INT_ABS((int)(fVar87 * 384.0));
    iVar200 = MP_INT_ABS((int)(fVar87 * 640.0));
    iVar42 = MP_INT_ABS((int)(fVar87 * 896.0));
    uVar20 = puVar8[8];
    bVar91 = (byte)uVar20;
    bVar241 = (byte)((uint)uVar20 >> 8);
    bVar242 = (byte)((uint)uVar20 >> 0x10);
    bVar243 = (byte)((uint)uVar20 >> 0x18);
    iVar196 = iVar136 + (uVar11 & (int)uVar11 >> 0x1f);
    uVar13 = param_2 - 1;
    auVar235._0_4_ = iVar195 + iVar186 * -0x80 + iVar157 * iVar197;
    auVar235._4_4_ = iVar195 + iVar186 * -0x180 + iVar171 * iVar197;
    auVar235._8_4_ = iVar195 + iVar186 * -0x280 + iVar200 * iVar197;
    auVar235._12_4_ = iVar195 + iVar186 * -0x380 + iVar42 * iVar197;
    auVar94 = NEON_sshl(auVar235,auVar144,4);
    iVar186 = iVar136 + (int)(fVar87 * 128.0) +
              CONCAT13(auVar94[3] & bVar243,
                       CONCAT12(auVar94[2] & bVar242,
                                CONCAT11(auVar94[1] & bVar241,auVar94[0] & bVar91)));
    uVar217 = (undefined)iVar186;
    uVar218 = (undefined)((uint)iVar186 >> 8);
    uVar219 = (undefined)((uint)iVar186 >> 0x10);
    uVar220 = (undefined)((uint)iVar186 >> 0x18);
    iVar186 = iVar136 + (int)(fVar87 * 384.0) +
              CONCAT13(auVar94[7] & bVar243,
                       CONCAT12(auVar94[6] & bVar242,
                                CONCAT11(auVar94[5] & bVar241,auVar94[4] & bVar91)));
    uVar221 = (undefined)iVar186;
    uVar222 = (undefined)((uint)iVar186 >> 8);
    uVar223 = (undefined)((uint)iVar186 >> 0x10);
    uVar224 = (undefined)((uint)iVar186 >> 0x18);
    iVar186 = iVar136 + (int)(fVar87 * 640.0) +
              CONCAT13(auVar94[11] & bVar243,
                       CONCAT12(auVar94[10] & bVar242,
                                CONCAT11(auVar94[9] & bVar241,auVar94[8] & bVar91)));
    uVar225 = (undefined)iVar186;
    uVar226 = (undefined)((uint)iVar186 >> 8);
    uVar227 = (undefined)((uint)iVar186 >> 0x10);
    uVar228 = (undefined)((uint)iVar186 >> 0x18);
    iVar136 = iVar136 + (int)(fVar87 * 896.0) +
              CONCAT13(auVar94[15] & bVar243,
                       CONCAT12(auVar94[14] & bVar242,
                                CONCAT11(auVar94[13] & bVar241,auVar94[12] & bVar91)));
    uVar229 = (undefined)iVar136;
    uVar230 = (undefined)((uint)iVar136 >> 8);
    uVar231 = (undefined)((uint)iVar136 >> 0x10);
    uVar232 = (undefined)((uint)iVar136 >> 0x18);
    if (param_3 < iVar114) {
      bVar233 = (byte)iVar197;
      bVar238 = (byte)((uint)iVar197 >> 8);
      bVar239 = (byte)((uint)iVar197 >> 0x10);
      bVar240 = (byte)((uint)iVar197 >> 0x18);
      iVar186 = CONCAT13(auVar94[3] & bVar240,
                         CONCAT12(auVar94[2] & bVar239,
                                  CONCAT11(auVar94[1] & bVar238,auVar94[0] & bVar233)));
      auVar151._0_8_ =
           CONCAT17(auVar94[7] & bVar240,
                    CONCAT16(auVar94[6] & bVar239,
                             CONCAT15(auVar94[5] & bVar238,CONCAT14(auVar94[4] & bVar233,iVar186))))
      ;
      auVar151[8] = auVar94[8] & bVar233;
      auVar151[9] = auVar94[9] & bVar238;
      auVar151[10] = auVar94[10] & bVar239;
      auVar151[11] = auVar94[11] & bVar240;
      auVar174[12] = auVar94[12] & bVar233;
      auVar174._0_12_ = auVar151;
      auVar174[13] = auVar94[13] & bVar238;
      auVar174[14] = auVar94[14] & bVar239;
      auVar174[15] = auVar94[15] & bVar240;
      auVar128._8_4_ = 0xfffffff8;
      auVar128._0_8_ = 0xfffffff8fffffff8;
      auVar128._12_4_ = 0xfffffff8;
      fVar152 = (float)*(undefined8 *)(param_11 + 8);
      fVar153 = (float)((ulong)*(undefined8 *)(param_11 + 8) >> 0x20);
      fVar87 = (float)*(undefined8 *)param_11;
      fVar110 = (float)((ulong)*(undefined8 *)param_11 >> 0x20);
      auVar94 = ZEXT816(0);
      auVar250._8_4_ = 0x20;
      auVar250._0_8_ = 0x2000000020;
      auVar250._12_4_ = 0x20;
      iVar136 = piVar7[8];
      iVar186 = auVar235._0_4_ + iVar186;
      iVar195 = auVar235._4_4_ + (int)((ulong)auVar151._0_8_ >> 0x20);
      iVar197 = auVar235._8_4_ + auVar151._8_4_;
      iVar157 = auVar235._12_4_ + auVar174._12_4_;
      auVar254._8_4_ = 0xffffffe1;
      auVar254._0_8_ = 0xffffffe1ffffffe1;
      auVar254._12_4_ = 0xffffffe1;
      auVar127._8_8_ = 0xffffffffffffffff;
      auVar127._0_8_ = 0xffffffffffffffff;
      do {
        uVar12 = iVar196 >> 0xd;
        iVar196 = iVar196 + uVar11;
        uVar14 = uVar13;
        if ((int)uVar12 <= (int)uVar13) {
          uVar14 = uVar12;
        }
        uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        lVar57 = (long)(int)(uVar14 + param_3);
        auVar117 = NEON_sshl(auVar107,auVar128,4);
        lVar58 = (lVar57 + (long)(int)(uVar14 + param_3) * 2) * 0x10;
        auVar180[1] = uVar218;
        auVar180[0] = uVar217;
        auVar180[2] = uVar219;
        auVar180[3] = uVar220;
        auVar180[4] = uVar221;
        auVar180[5] = uVar222;
        auVar180[6] = uVar223;
        auVar180[7] = uVar224;
        auVar180[8] = uVar225;
        auVar180[9] = uVar226;
        auVar180[10] = uVar227;
        auVar180[11] = uVar228;
        auVar180[12] = uVar229;
        auVar180[13] = uVar230;
        auVar180[14] = uVar231;
        auVar180[15] = uVar232;
        auVar97 = NEON_sshl(auVar180,auVar128,4);
        auVar192._0_4_ = auVar117._0_4_ + uVar14 * -0x20;
        auVar192._4_4_ = auVar117._4_4_ + uVar14 * -0x20;
        auVar192._8_4_ = auVar117._8_4_ + uVar14 * -0x20;
        auVar192._12_4_ = auVar117._12_4_ + uVar14 * -0x20;
        iVar171 = param_2;
        if (iVar59 >> 0xd <= param_2) {
          iVar171 = iVar59 >> 0xd;
        }
        auVar161._0_4_ = auVar97._0_4_ + uVar14 * -0x20;
        auVar161._4_4_ = auVar97._4_4_ + uVar14 * -0x20;
        auVar161._8_4_ = auVar97._8_4_ + uVar14 * -0x20;
        auVar161._12_4_ = auVar97._12_4_ + uVar14 * -0x20;
        fVar142 = (float)uVar14 * param_12;
        auVar117 = NEON_smax(auVar192,auVar94,4);
        auVar97 = NEON_smax(auVar161,auVar94,4);
        fVar87 = fVar142 + fVar87;
        fVar110 = fVar142 + fVar110;
        fVar152 = fVar142 + fVar152;
        fVar142 = fVar142 + fVar153;
        while( true ) {
          lVar57 = lVar57 + 1;
          auVar235 = *(undefined (*) [16])param_10;
          pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar58);
          fVar155 = (float)*(undefined8 *)(*pauVar16 + 8);
          fVar156 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
          fVar153 = (float)*(undefined8 *)*pauVar16;
          fVar154 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
          auVar162._0_4_ = auVar235._0_4_ - fVar153;
          auVar162._4_4_ = auVar235._4_4_ - fVar154;
          auVar162._8_4_ = auVar235._8_4_ - fVar155;
          auVar162._12_4_ = auVar235._12_4_ - fVar156;
          auVar235 = NEON_cmlt(auVar162,0,4);
          bVar158 = auVar235[0] & 1;
          auVar163._0_5_ = CONCAT14(auVar235[4],(uint)bVar158) & 0x2ffffffff;
          auVar163._5_3_ = 0;
          auVar163[8] = auVar235[8] & 4;
          auVar163._9_3_ = 0;
          auVar163[12] = auVar235[12] & 8;
          auVar163._13_3_ = 0;
          auVar119 = NEON_ext(auVar163,auVar163,8,1);
          if (CONCAT13(auVar119[3] | auVar119[7],
                       CONCAT12(auVar119[2] | auVar119[6],
                                CONCAT11(auVar119[1] | auVar119[5],
                                         auVar119[0] | bVar158 | auVar119[4] | auVar235[4] & 2))) !=
              0xf) {
            auVar235 = NEON_smin(auVar97,auVar250,4);
            auVar144 = NEON_smin(auVar117,auVar250,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar58);
            auVar27._4_4_ = fVar110;
            auVar27._0_4_ = fVar87;
            auVar27._8_4_ = fVar152;
            auVar27._12_4_ = fVar142;
            auVar174 = NEON_fmax(auVar27,*(undefined (*) [16])param_9,4);
            auVar119 = NEON_smax(auVar235,auVar94,4);
            auVar235 = *(undefined (*) [16])(puVar10 + 2);
            auVar144 = NEON_smax(auVar144,auVar94,4);
            auVar119 = NEON_sshl(auVar127,auVar119,4);
            auVar144 = NEON_sshl(auVar127,auVar144,4);
            auVar164[0] = auVar119[0] & ~auVar144[0];
            auVar164[1] = auVar119[1] & ~auVar144[1];
            auVar164[2] = auVar119[2] & ~auVar144[2];
            auVar164[3] = auVar119[3] & ~auVar144[3];
            auVar164[4] = auVar119[4] & ~auVar144[4];
            auVar164[5] = auVar119[5] & ~auVar144[5];
            auVar164[6] = auVar119[6] & ~auVar144[6];
            auVar164[7] = auVar119[7] & ~auVar144[7];
            auVar164[8] = auVar119[8] & ~auVar144[8];
            auVar164[9] = auVar119[9] & ~auVar144[9];
            auVar164[10] = auVar119[10] & ~auVar144[10];
            auVar164[11] = auVar119[11] & ~auVar144[11];
            auVar164[12] = auVar119[12] & ~auVar144[12];
            auVar164[13] = auVar119[13] & ~auVar144[13];
            auVar164[14] = auVar119[14] & ~auVar144[14];
            auVar164[15] = auVar119[15] & ~auVar144[15];
            auVar179._0_4_ = auVar174._0_4_ - fVar153;
            auVar179._4_4_ = auVar174._4_4_ - fVar154;
            auVar179._8_4_ = auVar174._8_4_ - fVar155;
            auVar179._12_4_ = auVar174._12_4_ - fVar156;
            auVar68._0_4_ = (auVar235._0_4_ + auVar235._0_4_) - (fVar153 + auVar174._0_4_);
            auVar68._4_4_ = (auVar235._4_4_ + auVar235._4_4_) - (fVar154 + auVar174._4_4_);
            auVar68._8_4_ = (auVar235._8_4_ + auVar235._8_4_) - (fVar155 + auVar174._8_4_);
            auVar68._12_4_ = (auVar235._12_4_ + auVar235._12_4_) - (fVar156 + auVar174._12_4_);
            auVar23._12_4_ = 0xf0b0703;
            auVar23._0_12_ = auVar93;
            auVar119 = a64_TBL(ZEXT816(0),auVar164,auVar23);
            auVar180 = NEON_sshl(auVar179,auVar254,4);
            auVar144 = NEON_sshl(auVar68,auVar254,4);
            auVar192 = NEON_cmeq(auVar119,0,2);
            auVar181[0] = auVar180[0] | auVar192[0];
            auVar181[1] = auVar180[1] | auVar192[1];
            auVar181[2] = auVar180[2] | auVar192[2];
            auVar181[3] = auVar180[3] | auVar192[3];
            auVar181[4] = auVar180[4] | auVar192[4];
            auVar181[5] = auVar180[5] | auVar192[5];
            auVar181[6] = auVar180[6] | auVar192[6];
            auVar181[7] = auVar180[7] | auVar192[7];
            auVar181[8] = auVar180[8] | auVar192[8];
            auVar181[9] = auVar180[9] | auVar192[9];
            auVar181[10] = auVar180[10] | auVar192[10];
            auVar181[11] = auVar180[11] | auVar192[11];
            auVar181[12] = auVar180[12] | auVar192[12];
            auVar181[13] = auVar180[13] | auVar192[13];
            auVar181[14] = auVar180[14] | auVar192[14];
            auVar181[15] = auVar180[15] | auVar192[15];
            auVar124[0] = auVar119[0] & ~auVar181[0];
            auVar124[1] = auVar119[1] & ~auVar181[1];
            auVar124[2] = auVar119[2] & ~auVar181[2];
            auVar124[3] = auVar119[3] & ~auVar181[3];
            auVar124[4] = auVar119[4] & ~auVar181[4];
            auVar124[5] = auVar119[5] & ~auVar181[5];
            auVar124[6] = auVar119[6] & ~auVar181[6];
            auVar124[7] = auVar119[7] & ~auVar181[7];
            auVar124[8] = auVar119[8] & ~auVar181[8];
            auVar124[9] = auVar119[9] & ~auVar181[9];
            auVar124[10] = auVar119[10] & ~auVar181[10];
            auVar124[11] = auVar119[11] & ~auVar181[11];
            auVar124[12] = auVar119[12] & ~auVar181[12];
            auVar124[13] = auVar119[13] & ~auVar181[13];
            auVar124[14] = auVar119[14] & ~auVar181[14];
            auVar124[15] = auVar119[15] & ~auVar181[15];
            auVar180 = NEON_cmeq(auVar124,auVar127,4);
            auVar119 = *(undefined (*) [16])(puVar10 + 4);
            auVar69[0] = (auVar144[0] | auVar180[0]) & ~auVar181[0];
            auVar69[1] = (auVar144[1] | auVar180[1]) & ~auVar181[1];
            auVar69[2] = (auVar144[2] | auVar180[2]) & ~auVar181[2];
            auVar69[3] = (auVar144[3] | auVar180[3]) & ~auVar181[3];
            auVar69[4] = (auVar144[4] | auVar180[4]) & ~auVar181[4];
            auVar69[5] = (auVar144[5] | auVar180[5]) & ~auVar181[5];
            auVar69[6] = (auVar144[6] | auVar180[6]) & ~auVar181[6];
            auVar69[7] = (auVar144[7] | auVar180[7]) & ~auVar181[7];
            auVar69[8] = (auVar144[8] | auVar180[8]) & ~auVar181[8];
            auVar69[9] = (auVar144[9] | auVar180[9]) & ~auVar181[9];
            auVar69[10] = (auVar144[10] | auVar180[10]) & ~auVar181[10];
            auVar69[11] = (auVar144[11] | auVar180[11]) & ~auVar181[11];
            auVar69[12] = (auVar144[12] | auVar180[12]) & ~auVar181[12];
            auVar69[13] = (auVar144[13] | auVar180[13]) & ~auVar181[13];
            auVar69[14] = (auVar144[14] | auVar180[14]) & ~auVar181[14];
            auVar69[15] = (auVar144[15] | auVar180[15]) & ~auVar181[15];
            auVar180 = NEON_cmlt(auVar181,0,4);
            auVar144 = NEON_cmlt(auVar69,0,4);
            auVar180 = NEON_bsl(auVar180,auVar235,auVar174,1);
            auVar125[0] = auVar119[0] & ~auVar69[0] | auVar124[0];
            auVar125[1] = auVar119[1] & ~auVar69[1] | auVar124[1];
            auVar125[2] = auVar119[2] & ~auVar69[2] | auVar124[2];
            auVar125[3] = auVar119[3] & ~auVar69[3] | auVar124[3];
            auVar125[4] = auVar119[4] & ~auVar69[4] | auVar124[4];
            auVar125[5] = auVar119[5] & ~auVar69[5] | auVar124[5];
            auVar125[6] = auVar119[6] & ~auVar69[6] | auVar124[6];
            auVar125[7] = auVar119[7] & ~auVar69[7] | auVar124[7];
            auVar125[8] = auVar119[8] & ~auVar69[8] | auVar124[8];
            auVar125[9] = auVar119[9] & ~auVar69[9] | auVar124[9];
            auVar125[10] = auVar119[10] & ~auVar69[10] | auVar124[10];
            auVar125[11] = auVar119[11] & ~auVar69[11] | auVar124[11];
            auVar125[12] = auVar119[12] & ~auVar69[12] | auVar124[12];
            auVar125[13] = auVar119[13] & ~auVar69[13] | auVar124[13];
            auVar125[14] = auVar119[14] & ~auVar69[14] | auVar124[14];
            auVar125[15] = auVar119[15] & ~auVar69[15] | auVar124[15];
            auVar235 = NEON_bsl(auVar144,auVar174,auVar235,1);
            auVar146._8_4_ = 0x7f7fffff;
            auVar146._0_8_ = 0x7f7fffff7f7fffff;
            auVar146._12_4_ = 0x7f7fffff;
            auVar119 = NEON_cmeq(auVar125,auVar127,4);
            auVar235 = NEON_fmin(auVar180,auVar235,4);
            auVar144 = NEON_bif(auVar146,auVar235,auVar119,1);
            auVar28._12_4_ = fVar156;
            auVar28._0_12_ = *pauVar16;
            auVar235 = NEON_bif(auVar235,auVar28,auVar119,1);
            puVar10[1] = auVar235._8_8_;
            *puVar10 = auVar235._0_8_;
            puVar10[3] = auVar144._8_8_;
            puVar10[2] = auVar144._0_8_;
            lVar60 = *(long *)(this + 0x138);
            auVar70._0_8_ =
                 CONCAT17(auVar125[7] & ~auVar119[7],
                          CONCAT16(auVar125[6] & ~auVar119[6],
                                   CONCAT15(auVar125[5] & ~auVar119[5],
                                            CONCAT14(auVar125[4] & ~auVar119[4],
                                                     CONCAT13(auVar125[3] & ~auVar119[3],
                                                              CONCAT12(auVar125[2] & ~auVar119[2],
                                                                       CONCAT11(auVar125[1] &
                                                                                ~auVar119[1],
                                                                                auVar125[0] &
                                                                                ~auVar119[0])))))));
            auVar70[8] = auVar125[8] & ~auVar119[8];
            auVar70[9] = auVar125[9] & ~auVar119[9];
            auVar70[10] = auVar125[10] & ~auVar119[10];
            auVar70[11] = auVar125[11] & ~auVar119[11];
            auVar70[12] = auVar125[12] & ~auVar119[12];
            auVar70[13] = auVar125[13] & ~auVar119[13];
            auVar70[14] = auVar125[14] & ~auVar119[14];
            auVar70[15] = auVar125[15] & ~auVar119[15];
            *(long *)(lVar60 + lVar58 + 0x28) = auVar70._8_8_;
            *(undefined8 *)(lVar60 + lVar58 + 0x20) = auVar70._0_8_;
          }
          if (iVar171 + param_3 <= lVar57) break;
          fVar87 = param_12 + fVar87;
          fVar110 = param_12 + fVar110;
          fVar152 = param_12 + fVar152;
          fVar142 = param_12 + fVar142;
          auVar117 = NEON_uqsub(auVar117,auVar250,2);
          lVar58 = lVar58 + 0x30;
          auVar97 = NEON_uqsub(auVar97,auVar250,2);
        }
        auVar66._0_4_ = CONCAT13(uVar204,CONCAT12(uVar203,CONCAT11(uVar202,uVar201))) - iVar133;
        auVar66._4_4_ = CONCAT13(uVar208,CONCAT12(uVar207,CONCAT11(uVar206,uVar205))) - iVar133;
        auVar66._8_4_ = CONCAT13(uVar212,CONCAT12(uVar211,CONCAT11(uVar210,uVar209))) - iVar133;
        auVar66._12_4_ = CONCAT13(uVar216,CONCAT12(uVar215,CONCAT11(uVar214,uVar213))) - iVar133;
        auVar117 = *(undefined (*) [16])param_11;
        auVar123._0_4_ = iVar186 - iVar136;
        auVar123._4_4_ = iVar195 - iVar136;
        auVar123._8_4_ = iVar197 - iVar136;
        auVar123._12_4_ = iVar157 - iVar136;
        iVar197 = auVar107._4_4_;
        iVar157 = auVar107._8_4_;
        iVar200 = auVar107._12_4_;
        iVar59 = iVar59 + uVar1;
        auVar97 = NEON_sshl(auVar66,auVar254,4);
        param_3 = *(int *)(this + 300) + param_3;
        auVar235 = NEON_sshl(auVar123,auVar254,4);
        iVar186 = CONCAT13(bVar90 & auVar97[3],
                           CONCAT12(bVar89 & auVar97[2],
                                    CONCAT11(bVar88 & auVar97[1],bVar86 & auVar97[0])));
        auVar172._0_8_ =
             CONCAT17(bVar90 & auVar97[7],
                      CONCAT16(bVar89 & auVar97[6],
                               CONCAT15(bVar88 & auVar97[5],CONCAT14(bVar86 & auVar97[4],iVar186))))
        ;
        auVar172[8] = bVar86 & auVar97[8];
        auVar172[9] = bVar88 & auVar97[9];
        auVar172[10] = bVar89 & auVar97[10];
        auVar172[11] = bVar90 & auVar97[11];
        auVar177[12] = bVar86 & auVar97[12];
        auVar177._0_12_ = auVar172;
        auVar177[13] = bVar88 & auVar97[13];
        auVar177[14] = bVar89 & auVar97[14];
        auVar177[15] = bVar90 & auVar97[15];
        iVar195 = CONCAT13(bVar113 & auVar97[3],
                           CONCAT12(bVar112 & auVar97[2],
                                    CONCAT11(bVar111 & auVar97[1],bVar109 & auVar97[0])));
        auVar92._0_8_ =
             CONCAT17(bVar113 & auVar97[7],
                      CONCAT16(bVar112 & auVar97[6],
                               CONCAT15(bVar111 & auVar97[5],CONCAT14(bVar109 & auVar97[4],iVar195))
                              ));
        auVar92[8] = bVar109 & auVar97[8];
        auVar92[9] = bVar111 & auVar97[9];
        auVar92[10] = bVar112 & auVar97[10];
        auVar92[11] = bVar113 & auVar97[11];
        auVar103[12] = bVar109 & auVar97[12];
        auVar103._0_12_ = auVar92;
        auVar103[13] = bVar111 & auVar97[13];
        auVar103[14] = bVar112 & auVar97[14];
        auVar103[15] = bVar113 & auVar97[15];
        iVar186 = iVar186 + auVar66._0_4_;
        uVar201 = (undefined)iVar186;
        uVar202 = (undefined)((uint)iVar186 >> 8);
        uVar203 = (undefined)((uint)iVar186 >> 0x10);
        uVar204 = (undefined)((uint)iVar186 >> 0x18);
        iVar186 = (int)((ulong)auVar172._0_8_ >> 0x20) + auVar66._4_4_;
        uVar205 = (undefined)iVar186;
        uVar206 = (undefined)((uint)iVar186 >> 8);
        uVar207 = (undefined)((uint)iVar186 >> 0x10);
        uVar208 = (undefined)((uint)iVar186 >> 0x18);
        iVar186 = auVar172._8_4_ + auVar66._8_4_;
        uVar209 = (undefined)iVar186;
        uVar210 = (undefined)((uint)iVar186 >> 8);
        uVar211 = (undefined)((uint)iVar186 >> 0x10);
        uVar212 = (undefined)((uint)iVar186 >> 0x18);
        iVar186 = auVar177._12_4_ + auVar66._12_4_;
        uVar213 = (undefined)iVar186;
        uVar214 = (undefined)((uint)iVar186 >> 8);
        uVar215 = (undefined)((uint)iVar186 >> 0x10);
        uVar216 = (undefined)((uint)iVar186 >> 0x18);
        iVar186 = CONCAT13(bVar240 & auVar235[3],
                           CONCAT12(bVar239 & auVar235[2],
                                    CONCAT11(bVar238 & auVar235[1],bVar233 & auVar235[0])));
        auVar65._0_8_ =
             CONCAT17(bVar240 & auVar235[7],
                      CONCAT16(bVar239 & auVar235[6],
                               CONCAT15(bVar238 & auVar235[5],
                                        CONCAT14(bVar233 & auVar235[4],iVar186))));
        auVar65[8] = bVar233 & auVar235[8];
        auVar65[9] = bVar238 & auVar235[9];
        auVar65[10] = bVar239 & auVar235[10];
        auVar65[11] = bVar240 & auVar235[11];
        auVar67[12] = bVar233 & auVar235[12];
        auVar67._0_12_ = auVar65;
        auVar67[13] = bVar238 & auVar235[13];
        auVar67[14] = bVar239 & auVar235[14];
        auVar67[15] = bVar240 & auVar235[15];
        iVar171 = CONCAT13(bVar243 & auVar235[3],
                           CONCAT12(bVar242 & auVar235[2],
                                    CONCAT11(bVar241 & auVar235[1],bVar91 & auVar235[0])));
        auVar173._0_8_ =
             CONCAT17(bVar243 & auVar235[7],
                      CONCAT16(bVar242 & auVar235[6],
                               CONCAT15(bVar241 & auVar235[5],CONCAT14(bVar91 & auVar235[4],iVar171)
                                       )));
        auVar173[8] = bVar91 & auVar235[8];
        auVar173[9] = bVar241 & auVar235[9];
        auVar173[10] = bVar242 & auVar235[10];
        auVar173[11] = bVar243 & auVar235[11];
        auVar178[12] = bVar91 & auVar235[12];
        auVar178._0_12_ = auVar173;
        auVar178[13] = bVar241 & auVar235[13];
        auVar178[14] = bVar242 & auVar235[14];
        auVar178[15] = bVar243 & auVar235[15];
        auVar107._0_4_ = iVar18 + auVar107._0_4_ + iVar195;
        auVar107._4_4_ = iVar18 + iVar197 + (int)((ulong)auVar92._0_8_ >> 0x20);
        auVar107._8_4_ = iVar18 + iVar157 + auVar92._8_4_;
        auVar107._12_4_ = iVar18 + iVar200 + auVar103._12_4_;
        fVar87 = param_13 + auVar117._0_4_;
        fVar110 = param_13 + auVar117._4_4_;
        fVar152 = param_13 + auVar117._8_4_;
        fVar153 = param_13 + auVar117._12_4_;
        iVar186 = iVar186 + auVar123._0_4_;
        iVar195 = (int)((ulong)auVar65._0_8_ >> 0x20) + auVar123._4_4_;
        iVar197 = auVar65._8_4_ + auVar123._8_4_;
        iVar157 = auVar67._12_4_ + auVar123._12_4_;
        iVar171 = iVar134 + CONCAT13(uVar220,CONCAT12(uVar219,CONCAT11(uVar218,uVar217))) + iVar171;
        uVar217 = (undefined)iVar171;
        uVar218 = (undefined)((uint)iVar171 >> 8);
        uVar219 = (undefined)((uint)iVar171 >> 0x10);
        uVar220 = (undefined)((uint)iVar171 >> 0x18);
        iVar171 = iVar134 + CONCAT13(uVar224,CONCAT12(uVar223,CONCAT11(uVar222,uVar221))) +
                  (int)((ulong)auVar173._0_8_ >> 0x20);
        uVar221 = (undefined)iVar171;
        uVar222 = (undefined)((uint)iVar171 >> 8);
        uVar223 = (undefined)((uint)iVar171 >> 0x10);
        uVar224 = (undefined)((uint)iVar171 >> 0x18);
        iVar171 = iVar134 + CONCAT13(uVar228,CONCAT12(uVar227,CONCAT11(uVar226,uVar225))) +
                  auVar173._8_4_;
        uVar225 = (undefined)iVar171;
        uVar226 = (undefined)((uint)iVar171 >> 8);
        uVar227 = (undefined)((uint)iVar171 >> 0x10);
        uVar228 = (undefined)((uint)iVar171 >> 0x18);
        iVar171 = iVar134 + CONCAT13(uVar232,CONCAT12(uVar231,CONCAT11(uVar230,uVar229))) +
                  auVar178._12_4_;
        uVar229 = (undefined)iVar171;
        uVar230 = (undefined)((uint)iVar171 >> 8);
        uVar231 = (undefined)((uint)iVar171 >> 0x10);
        uVar232 = (undefined)((uint)iVar171 >> 0x18);
        *(ulong *)(param_11 + 8) = CONCAT44(fVar153,fVar152);
        *(ulong *)param_11 = CONCAT44(fVar110,fVar87);
      } while (param_3 < iVar114);
    }
    auVar94 = _DAT_004c4480;
    if (param_3 < param_5) {
      auVar117 = *(undefined (*) [16])param_11;
      uVar11 = uVar13;
      if (iVar196 >> 0xd <= (int)uVar13) {
        uVar11 = iVar196 >> 0xd;
      }
      auVar71._8_4_ = 0xfffffff8;
      auVar71._0_8_ = 0xfffffff8fffffff8;
      auVar71._12_4_ = 0xfffffff8;
      iVar196 = iVar249 + uVar15;
      iVar249 = param_2;
      if (iVar59 >> 0xd <= param_2) {
        iVar249 = iVar59 >> 0xd;
      }
      uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      auVar235 = NEON_sshl(auVar107,auVar71,4);
      auVar37[1] = uVar218;
      auVar37[0] = uVar217;
      auVar37[2] = uVar219;
      auVar37[3] = uVar220;
      auVar37[4] = uVar221;
      auVar37[5] = uVar222;
      auVar37[6] = uVar223;
      auVar37[7] = uVar224;
      auVar37[8] = uVar225;
      auVar37[9] = uVar226;
      auVar37[10] = uVar227;
      auVar37[11] = uVar228;
      auVar37[12] = uVar229;
      auVar37[13] = uVar230;
      auVar37[14] = uVar231;
      auVar37[15] = uVar232;
      auVar119 = NEON_sshl(auVar37,auVar71,4);
      auVar97 = NEON_sshl(auVar199,auVar71,4);
      fVar87 = (float)uVar11 * param_12;
      auVar126._0_4_ = auVar119._0_4_ + uVar11 * -0x20;
      auVar126._4_4_ = auVar119._4_4_ + uVar11 * -0x20;
      auVar126._8_4_ = auVar119._8_4_ + uVar11 * -0x20;
      auVar126._12_4_ = auVar119._12_4_ + uVar11 * -0x20;
      lVar57 = (long)(int)(uVar11 + param_3);
      auVar72._0_4_ = auVar97._0_4_ + uVar11 * -0x20;
      auVar72._4_4_ = auVar97._4_4_ + uVar11 * -0x20;
      auVar72._8_4_ = auVar97._8_4_ + uVar11 * -0x20;
      auVar72._12_4_ = auVar97._12_4_ + uVar11 * -0x20;
      auVar104._0_4_ = auVar235._0_4_ + uVar11 * -0x20;
      auVar104._4_4_ = auVar235._4_4_ + uVar11 * -0x20;
      auVar104._8_4_ = auVar235._8_4_ + uVar11 * -0x20;
      auVar104._12_4_ = auVar235._12_4_ + uVar11 * -0x20;
      lVar58 = (lVar57 + (long)(int)(uVar11 + param_3) * 2) * 0x10;
      auVar235 = NEON_smax(auVar72,ZEXT216(0),4);
      auVar97 = NEON_smax(auVar126,ZEXT216(0),4);
      auVar119 = NEON_smax(auVar104,ZEXT216(0),4);
      auVar252._0_4_ = fVar87 + auVar117._0_4_;
      auVar252._4_4_ = fVar87 + auVar117._4_4_;
      auVar252._8_4_ = fVar87 + auVar117._8_4_;
      auVar252._12_4_ = fVar87 + auVar117._12_4_;
      auVar55._12_4_ = _UNK_004c513c;
      auVar55._0_12_ = _DAT_004c5130;
      auVar255._8_4_ = 0xffffffe1;
      auVar255._0_8_ = 0xffffffe1ffffffe1;
      auVar255._12_4_ = 0xffffffe1;
      while( true ) {
        lVar57 = lVar57 + 1;
        auVar117 = *(undefined (*) [16])param_10;
        pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar58);
        fVar152 = (float)*(undefined8 *)(*pauVar16 + 8);
        fVar153 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
        fVar87 = (float)*(undefined8 *)*pauVar16;
        fVar110 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
        auVar73._0_4_ = auVar117._0_4_ - fVar87;
        auVar73._4_4_ = auVar117._4_4_ - fVar110;
        auVar73._8_4_ = auVar117._8_4_ - fVar152;
        auVar73._12_4_ = auVar117._12_4_ - fVar153;
        auVar117 = NEON_cmlt(auVar73,0,4);
        auVar74[0] = auVar117[0] & auVar94[0];
        auVar74[1] = auVar117[1] & auVar94[1];
        auVar74[2] = auVar117[2] & auVar94[2];
        auVar74[3] = auVar117[3] & auVar94[3];
        auVar74[4] = auVar117[4] & auVar94[4];
        auVar74[5] = auVar117[5] & auVar94[5];
        auVar74[6] = auVar117[6] & auVar94[6];
        auVar74[7] = auVar117[7] & auVar94[7];
        auVar74[8] = auVar117[8] & auVar94[8];
        auVar74[9] = auVar117[9] & auVar94[9];
        auVar74[10] = auVar117[10] & auVar94[10];
        auVar74[11] = auVar117[11] & auVar94[11];
        auVar74[12] = auVar117[12] & auVar94[12];
        auVar74[13] = auVar117[13] & auVar94[13];
        auVar74[14] = auVar117[14] & auVar94[14];
        auVar74[15] = auVar117[15] & auVar94[15];
        auVar117 = NEON_ext(auVar74,auVar74,8,1);
        if (CONCAT13(auVar117[3] | auVar74[3] | auVar117[7] | auVar74[7],
                     CONCAT12(auVar117[2] | auVar74[2] | auVar117[6] | auVar74[6],
                              CONCAT11(auVar117[1] | auVar74[1] | auVar117[5] | auVar74[5],
                                       auVar117[0] | auVar74[0] | auVar117[4] | auVar74[4]))) != 0xf
           ) {
          auVar43[8] = 0x20;
          auVar43._0_8_ = 0x2000000020;
          auVar43._9_3_ = 0;
          auVar43[12] = 0x20;
          auVar43._13_3_ = 0;
          auVar117 = NEON_smin(auVar97,auVar43,4);
          auVar44[8] = 0x20;
          auVar44._0_8_ = 0x2000000020;
          auVar44._9_3_ = 0;
          auVar44[12] = 0x20;
          auVar44._13_3_ = 0;
          auVar144 = NEON_smin(auVar235,auVar44,4);
          puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar58);
          auVar45[8] = 0x20;
          auVar45._0_8_ = 0x2000000020;
          auVar45._9_3_ = 0;
          auVar45[12] = 0x20;
          auVar45._13_3_ = 0;
          auVar127 = NEON_smin(auVar119,auVar45,4);
          auVar117 = NEON_smax(auVar117,ZEXT216(0),4);
          auVar174 = NEON_smax(auVar144,ZEXT216(0),4);
          auVar127 = NEON_smax(auVar127,ZEXT216(0),4);
          auVar49[8] = 0xff;
          auVar49._0_8_ = 0xffffffffffffffff;
          auVar49[9] = 0xff;
          auVar49[10] = 0xff;
          auVar49[11] = 0xff;
          auVar49[12] = 0xff;
          auVar49[13] = 0xff;
          auVar49[14] = 0xff;
          auVar49[15] = 0xff;
          auVar144 = NEON_sshl(auVar49,auVar117,4);
          auVar50[8] = 0xff;
          auVar50._0_8_ = 0xffffffffffffffff;
          auVar50[9] = 0xff;
          auVar50[10] = 0xff;
          auVar50[11] = 0xff;
          auVar50[12] = 0xff;
          auVar50[13] = 0xff;
          auVar50[14] = 0xff;
          auVar50[15] = 0xff;
          auVar174 = NEON_sshl(auVar50,auVar174,4);
          auVar51[8] = 0xff;
          auVar51._0_8_ = 0xffffffffffffffff;
          auVar51[9] = 0xff;
          auVar51[10] = 0xff;
          auVar51[11] = 0xff;
          auVar51[12] = 0xff;
          auVar51[13] = 0xff;
          auVar51[14] = 0xff;
          auVar51[15] = 0xff;
          auVar128 = NEON_sshl(auVar51,auVar127,4);
          auVar127 = NEON_fmax(auVar252,*(undefined (*) [16])param_9,4);
          auVar117 = *(undefined (*) [16])(puVar10 + 2);
          auVar75[0] = auVar174[0] & auVar144[0] & ~auVar128[0];
          auVar75[1] = auVar174[1] & auVar144[1] & ~auVar128[1];
          auVar75[2] = auVar174[2] & auVar144[2] & ~auVar128[2];
          auVar75[3] = auVar174[3] & auVar144[3] & ~auVar128[3];
          auVar75[4] = auVar174[4] & auVar144[4] & ~auVar128[4];
          auVar75[5] = auVar174[5] & auVar144[5] & ~auVar128[5];
          auVar75[6] = auVar174[6] & auVar144[6] & ~auVar128[6];
          auVar75[7] = auVar174[7] & auVar144[7] & ~auVar128[7];
          auVar75[8] = auVar174[8] & auVar144[8] & ~auVar128[8];
          auVar75[9] = auVar174[9] & auVar144[9] & ~auVar128[9];
          auVar75[10] = auVar174[10] & auVar144[10] & ~auVar128[10];
          auVar75[11] = auVar174[11] & auVar144[11] & ~auVar128[11];
          auVar75[12] = auVar174[12] & auVar144[12] & ~auVar128[12];
          auVar75[13] = auVar174[13] & auVar144[13] & ~auVar128[13];
          auVar75[14] = auVar174[14] & auVar144[14] & ~auVar128[14];
          auVar75[15] = auVar174[15] & auVar144[15] & ~auVar128[15];
          auVar129._0_4_ = auVar127._0_4_ - fVar87;
          auVar129._4_4_ = auVar127._4_4_ - fVar110;
          auVar129._8_4_ = auVar127._8_4_ - fVar152;
          auVar129._12_4_ = auVar127._12_4_ - fVar153;
          auVar144 = a64_TBL(ZEXT816(0),auVar75,auVar55);
          auVar174 = NEON_sshl(auVar129,auVar255,4);
          auVar128 = NEON_cmeq(auVar144,0,2);
          auVar130[0] = auVar174[0] | auVar128[0];
          auVar130[1] = auVar174[1] | auVar128[1];
          auVar130[2] = auVar174[2] | auVar128[2];
          auVar130[3] = auVar174[3] | auVar128[3];
          auVar130[4] = auVar174[4] | auVar128[4];
          auVar130[5] = auVar174[5] | auVar128[5];
          auVar130[6] = auVar174[6] | auVar128[6];
          auVar130[7] = auVar174[7] | auVar128[7];
          auVar130[8] = auVar174[8] | auVar128[8];
          auVar130[9] = auVar174[9] | auVar128[9];
          auVar130[10] = auVar174[10] | auVar128[10];
          auVar130[11] = auVar174[11] | auVar128[11];
          auVar130[12] = auVar174[12] | auVar128[12];
          auVar130[13] = auVar174[13] | auVar128[13];
          auVar130[14] = auVar174[14] | auVar128[14];
          auVar130[15] = auVar174[15] | auVar128[15];
          auVar165._0_4_ = (auVar117._0_4_ + auVar117._0_4_) - (fVar87 + auVar127._0_4_);
          auVar165._4_4_ = (auVar117._4_4_ + auVar117._4_4_) - (fVar110 + auVar127._4_4_);
          auVar165._8_4_ = (auVar117._8_4_ + auVar117._8_4_) - (fVar152 + auVar127._8_4_);
          auVar165._12_4_ = (auVar117._12_4_ + auVar117._12_4_) - (fVar153 + auVar127._12_4_);
          auVar76[0] = auVar144[0] & ~auVar130[0];
          auVar76[1] = auVar144[1] & ~auVar130[1];
          auVar76[2] = auVar144[2] & ~auVar130[2];
          auVar76[3] = auVar144[3] & ~auVar130[3];
          auVar76[4] = auVar144[4] & ~auVar130[4];
          auVar76[5] = auVar144[5] & ~auVar130[5];
          auVar76[6] = auVar144[6] & ~auVar130[6];
          auVar76[7] = auVar144[7] & ~auVar130[7];
          auVar76[8] = auVar144[8] & ~auVar130[8];
          auVar76[9] = auVar144[9] & ~auVar130[9];
          auVar76[10] = auVar144[10] & ~auVar130[10];
          auVar76[11] = auVar144[11] & ~auVar130[11];
          auVar76[12] = auVar144[12] & ~auVar130[12];
          auVar76[13] = auVar144[13] & ~auVar130[13];
          auVar76[14] = auVar144[14] & ~auVar130[14];
          auVar76[15] = auVar144[15] & ~auVar130[15];
          auVar174 = NEON_sshl(auVar165,auVar255,4);
          auVar52[8] = 0xff;
          auVar52._0_8_ = 0xffffffffffffffff;
          auVar52[9] = 0xff;
          auVar52[10] = 0xff;
          auVar52[11] = 0xff;
          auVar52[12] = 0xff;
          auVar52[13] = 0xff;
          auVar52[14] = 0xff;
          auVar52[15] = 0xff;
          auVar128 = NEON_cmeq(auVar76,auVar52,4);
          auVar144 = *(undefined (*) [16])(puVar10 + 4);
          auVar166[0] = (auVar174[0] | auVar128[0]) & ~auVar130[0];
          auVar166[1] = (auVar174[1] | auVar128[1]) & ~auVar130[1];
          auVar166[2] = (auVar174[2] | auVar128[2]) & ~auVar130[2];
          auVar166[3] = (auVar174[3] | auVar128[3]) & ~auVar130[3];
          auVar166[4] = (auVar174[4] | auVar128[4]) & ~auVar130[4];
          auVar166[5] = (auVar174[5] | auVar128[5]) & ~auVar130[5];
          auVar166[6] = (auVar174[6] | auVar128[6]) & ~auVar130[6];
          auVar166[7] = (auVar174[7] | auVar128[7]) & ~auVar130[7];
          auVar166[8] = (auVar174[8] | auVar128[8]) & ~auVar130[8];
          auVar166[9] = (auVar174[9] | auVar128[9]) & ~auVar130[9];
          auVar166[10] = (auVar174[10] | auVar128[10]) & ~auVar130[10];
          auVar166[11] = (auVar174[11] | auVar128[11]) & ~auVar130[11];
          auVar166[12] = (auVar174[12] | auVar128[12]) & ~auVar130[12];
          auVar166[13] = (auVar174[13] | auVar128[13]) & ~auVar130[13];
          auVar166[14] = (auVar174[14] | auVar128[14]) & ~auVar130[14];
          auVar166[15] = (auVar174[15] | auVar128[15]) & ~auVar130[15];
          auVar174 = NEON_cmlt(auVar130,0,4);
          auVar128 = NEON_cmlt(auVar166,0,4);
          auVar174 = NEON_bsl(auVar174,auVar117,auVar127,1);
          auVar77[0] = auVar144[0] & ~auVar166[0] | auVar76[0];
          auVar77[1] = auVar144[1] & ~auVar166[1] | auVar76[1];
          auVar77[2] = auVar144[2] & ~auVar166[2] | auVar76[2];
          auVar77[3] = auVar144[3] & ~auVar166[3] | auVar76[3];
          auVar77[4] = auVar144[4] & ~auVar166[4] | auVar76[4];
          auVar77[5] = auVar144[5] & ~auVar166[5] | auVar76[5];
          auVar77[6] = auVar144[6] & ~auVar166[6] | auVar76[6];
          auVar77[7] = auVar144[7] & ~auVar166[7] | auVar76[7];
          auVar77[8] = auVar144[8] & ~auVar166[8] | auVar76[8];
          auVar77[9] = auVar144[9] & ~auVar166[9] | auVar76[9];
          auVar77[10] = auVar144[10] & ~auVar166[10] | auVar76[10];
          auVar77[11] = auVar144[11] & ~auVar166[11] | auVar76[11];
          auVar77[12] = auVar144[12] & ~auVar166[12] | auVar76[12];
          auVar77[13] = auVar144[13] & ~auVar166[13] | auVar76[13];
          auVar77[14] = auVar144[14] & ~auVar166[14] | auVar76[14];
          auVar77[15] = auVar144[15] & ~auVar166[15] | auVar76[15];
          auVar117 = NEON_bif(auVar127,auVar117,auVar128,1);
          auVar53[8] = 0xff;
          auVar53._0_8_ = 0xffffffffffffffff;
          auVar53[9] = 0xff;
          auVar53[10] = 0xff;
          auVar53[11] = 0xff;
          auVar53[12] = 0xff;
          auVar53[13] = 0xff;
          auVar53[14] = 0xff;
          auVar53[15] = 0xff;
          auVar127 = NEON_cmeq(auVar77,auVar53,4);
          auVar117 = NEON_fmin(auVar174,auVar117,4);
          auVar24._8_4_ = 0x7f7fffff;
          auVar24._0_8_ = 0x7f7fffff7f7fffff;
          auVar24._12_4_ = 0x7f7fffff;
          auVar144 = NEON_bsl(auVar127,auVar24,auVar117,1);
          auVar26._12_4_ = fVar153;
          auVar26._0_12_ = *pauVar16;
          auVar117 = NEON_bif(auVar117,auVar26,auVar127,1);
          puVar10[1] = auVar117._8_8_;
          *puVar10 = auVar117._0_8_;
          puVar10[3] = auVar144._8_8_;
          puVar10[2] = auVar144._0_8_;
          lVar60 = *(long *)(this + 0x138) + lVar58;
          *(byte *)(lVar60 + 0x30) = auVar77[8] & ~auVar127[8];
          *(byte *)(lVar60 + 0x31) = auVar77[9] & ~auVar127[9];
          *(byte *)(lVar60 + 0x32) = auVar77[10] & ~auVar127[10];
          *(byte *)(lVar60 + 0x33) = auVar77[11] & ~auVar127[11];
          *(byte *)(lVar60 + 0x34) = auVar77[12] & ~auVar127[12];
          *(byte *)(lVar60 + 0x35) = auVar77[13] & ~auVar127[13];
          *(byte *)(lVar60 + 0x36) = auVar77[14] & ~auVar127[14];
          *(byte *)(lVar60 + 0x37) = auVar77[15] & ~auVar127[15];
          *(byte *)(lVar60 + 0x20) = auVar77[0] & ~auVar127[0];
          *(byte *)(lVar60 + 0x21) = auVar77[1] & ~auVar127[1];
          *(byte *)(lVar60 + 0x22) = auVar77[2] & ~auVar127[2];
          *(byte *)(lVar60 + 0x23) = auVar77[3] & ~auVar127[3];
          *(byte *)(lVar60 + 0x24) = auVar77[4] & ~auVar127[4];
          *(byte *)(lVar60 + 0x25) = auVar77[5] & ~auVar127[5];
          *(byte *)(lVar60 + 0x26) = auVar77[6] & ~auVar127[6];
          *(byte *)(lVar60 + 0x27) = auVar77[7] & ~auVar127[7];
        }
        if (iVar249 + param_3 <= lVar57) break;
        auVar46[8] = 0x20;
        auVar46._0_8_ = 0x2000000020;
        auVar46._9_3_ = 0;
        auVar46[12] = 0x20;
        auVar46._13_3_ = 0;
        auVar119 = NEON_uqsub(auVar119,auVar46,2);
        auVar47[8] = 0x20;
        auVar47._0_8_ = 0x2000000020;
        auVar47._9_3_ = 0;
        auVar47[12] = 0x20;
        auVar47._13_3_ = 0;
        auVar97 = NEON_uqsub(auVar97,auVar47,2);
        lVar58 = lVar58 + 0x30;
        auVar48[8] = 0x20;
        auVar48._0_8_ = 0x2000000020;
        auVar48._9_3_ = 0;
        auVar48[12] = 0x20;
        auVar48._13_3_ = 0;
        auVar235 = NEON_uqsub(auVar235,auVar48,2);
        auVar253._0_4_ = param_12 + auVar252._0_4_;
        auVar253._4_4_ = param_12 + auVar252._4_4_;
        auVar253._8_4_ = param_12 + auVar252._8_4_;
        auVar253._12_4_ = param_12 + auVar252._12_4_;
        auVar252 = auVar253;
      }
      iVar59 = iVar59 + uVar1;
      param_3 = *(int *)(this + 300) + param_3;
      uVar11 = uVar15;
    }
    if (param_3 < param_5) {
      auVar78._0_4_ = CONCAT13(uVar204,CONCAT12(uVar203,CONCAT11(uVar202,uVar201))) - iVar133;
      auVar78._4_4_ = CONCAT13(uVar208,CONCAT12(uVar207,CONCAT11(uVar206,uVar205))) - iVar133;
      auVar78._8_4_ = CONCAT13(uVar212,CONCAT12(uVar211,CONCAT11(uVar210,uVar209))) - iVar133;
      auVar78._12_4_ = CONCAT13(uVar216,CONCAT12(uVar215,CONCAT11(uVar214,uVar213))) - iVar133;
      auVar235 = ZEXT816(0);
      auVar131._0_4_ = local_80 - iVar19;
      auVar131._4_4_ = iStack_7c - iVar19;
      auVar131._8_4_ = iVar135 - iVar19;
      auVar131._12_4_ = iVar137 - iVar19;
      auVar94 = *(undefined (*) [16])param_11;
      auVar29[8] = 0xe1;
      auVar29._0_8_ = 0xffffffe1ffffffe1;
      auVar29[9] = 0xff;
      auVar29[10] = 0xff;
      auVar29[11] = 0xff;
      auVar29[12] = 0xe1;
      auVar29[13] = 0xff;
      auVar29[14] = 0xff;
      auVar29[15] = 0xff;
      auVar117 = NEON_sshl(auVar78,auVar29,4);
      auVar237._8_8_ = 0xffffffffffffffff;
      auVar237._0_8_ = 0xffffffffffffffff;
      auVar30[8] = 0xe1;
      auVar30._0_8_ = 0xffffffe1ffffffe1;
      auVar30[9] = 0xff;
      auVar30[10] = 0xff;
      auVar30[11] = 0xff;
      auVar30[12] = 0xe1;
      auVar30[13] = 0xff;
      auVar30[14] = 0xff;
      auVar30[15] = 0xff;
      auVar97 = NEON_sshl(auVar131,auVar30,4);
      fVar87 = auVar94._0_4_;
      fVar110 = auVar94._4_4_;
      fVar152 = auVar94._8_4_;
      fVar153 = auVar94._12_4_;
      iVar249 = CONCAT13(bVar90 & auVar117[3],
                         CONCAT12(bVar89 & auVar117[2],
                                  CONCAT11(bVar88 & auVar117[1],bVar86 & auVar117[0])));
      auVar93._0_8_ =
           CONCAT17(bVar90 & auVar117[7],
                    CONCAT16(bVar89 & auVar117[6],
                             CONCAT15(bVar88 & auVar117[5],CONCAT14(bVar86 & auVar117[4],iVar249))))
      ;
      auVar93[8] = bVar86 & auVar117[8];
      auVar93[9] = bVar88 & auVar117[9];
      auVar93[10] = bVar89 & auVar117[10];
      auVar93[11] = bVar90 & auVar117[11];
      auVar105[12] = bVar86 & auVar117[12];
      auVar105._0_12_ = auVar93;
      auVar105[13] = bVar88 & auVar117[13];
      auVar105[14] = bVar89 & auVar117[14];
      auVar105[15] = bVar90 & auVar117[15];
      iVar114 = CONCAT13(bVar113 & auVar117[3],
                         CONCAT12(bVar112 & auVar117[2],
                                  CONCAT11(bVar111 & auVar117[1],bVar109 & auVar117[0])));
      auVar159._0_8_ =
           CONCAT17(bVar113 & auVar117[7],
                    CONCAT16(bVar112 & auVar117[6],
                             CONCAT15(bVar111 & auVar117[5],CONCAT14(bVar109 & auVar117[4],iVar114))
                            ));
      auVar159[8] = bVar109 & auVar117[8];
      auVar159[9] = bVar111 & auVar117[9];
      auVar159[10] = bVar112 & auVar117[10];
      auVar159[11] = bVar113 & auVar117[11];
      auVar167[12] = bVar109 & auVar117[12];
      auVar167._0_12_ = auVar159;
      auVar167[13] = bVar111 & auVar117[13];
      auVar167[14] = bVar112 & auVar117[14];
      auVar167[15] = bVar113 & auVar117[15];
      iVar135 = CONCAT13(bVar64 & auVar97[3],
                         CONCAT12(bVar63 & auVar97[2],
                                  CONCAT11(bVar62 & auVar97[1],bVar61 & auVar97[0])));
      auVar189._0_8_ =
           CONCAT17(bVar64 & auVar97[7],
                    CONCAT16(bVar63 & auVar97[6],
                             CONCAT15(bVar62 & auVar97[5],CONCAT14(bVar61 & auVar97[4],iVar135))));
      auVar189[8] = bVar61 & auVar97[8];
      auVar189[9] = bVar62 & auVar97[9];
      auVar189[10] = bVar63 & auVar97[10];
      auVar189[11] = bVar64 & auVar97[11];
      auVar193[12] = bVar61 & auVar97[12];
      auVar193._0_12_ = auVar189;
      auVar193[13] = bVar62 & auVar97[13];
      auVar193[14] = bVar63 & auVar97[14];
      auVar193[15] = bVar64 & auVar97[15];
      iVar137 = CONCAT13(bVar141 & auVar97[3],
                         CONCAT12(bVar140 & auVar97[2],
                                  CONCAT11(bVar139 & auVar97[1],bVar138 & auVar97[0])));
      auVar182._0_8_ =
           CONCAT17(bVar141 & auVar97[7],
                    CONCAT16(bVar140 & auVar97[6],
                             CONCAT15(bVar139 & auVar97[5],CONCAT14(bVar138 & auVar97[4],iVar137))))
      ;
      auVar182[8] = bVar138 & auVar97[8];
      auVar182[9] = bVar139 & auVar97[9];
      auVar182[10] = bVar140 & auVar97[10];
      auVar182[11] = bVar141 & auVar97[11];
      auVar183[12] = bVar138 & auVar97[12];
      auVar183._0_12_ = auVar182;
      auVar183[13] = bVar139 & auVar97[13];
      auVar183[14] = bVar140 & auVar97[14];
      auVar183[15] = bVar141 & auVar97[15];
      iVar249 = iVar249 + auVar78._0_4_;
      uVar201 = (undefined)iVar249;
      uVar202 = (undefined)((uint)iVar249 >> 8);
      uVar203 = (undefined)((uint)iVar249 >> 0x10);
      uVar204 = (undefined)((uint)iVar249 >> 0x18);
      iVar249 = (int)((ulong)auVar93._0_8_ >> 0x20) + auVar78._4_4_;
      uVar205 = (undefined)iVar249;
      uVar206 = (undefined)((uint)iVar249 >> 8);
      uVar207 = (undefined)((uint)iVar249 >> 0x10);
      uVar208 = (undefined)((uint)iVar249 >> 0x18);
      iVar249 = auVar93._8_4_ + auVar78._8_4_;
      uVar209 = (undefined)iVar249;
      uVar210 = (undefined)((uint)iVar249 >> 8);
      uVar211 = (undefined)((uint)iVar249 >> 0x10);
      uVar212 = (undefined)((uint)iVar249 >> 0x18);
      iVar249 = auVar105._12_4_ + auVar78._12_4_;
      uVar213 = (undefined)iVar249;
      uVar214 = (undefined)((uint)iVar249 >> 8);
      uVar215 = (undefined)((uint)iVar249 >> 0x10);
      uVar216 = (undefined)((uint)iVar249 >> 0x18);
      auVar246._0_4_ = iVar18 + auVar107._0_4_ + iVar114;
      auVar246._4_4_ = iVar18 + auVar107._4_4_ + (int)((ulong)auVar159._0_8_ >> 0x20);
      auVar246._8_4_ = iVar18 + auVar107._8_4_ + auVar159._8_4_;
      auVar246._12_4_ = iVar18 + auVar107._12_4_ + auVar167._12_4_;
      iVar135 = iVar135 + auVar131._0_4_;
      iVar249 = (int)((ulong)auVar189._0_8_ >> 0x20) + auVar131._4_4_;
      iVar114 = auVar189._8_4_ + auVar131._8_4_;
      iVar134 = auVar193._12_4_ + auVar131._12_4_;
      auVar184._0_4_ = iVar17 + auVar199._0_4_ + iVar137;
      auVar184._4_4_ = iVar17 + auVar199._4_4_ + (int)((ulong)auVar182._0_8_ >> 0x20);
      auVar184._8_4_ = iVar17 + auVar199._8_4_ + auVar182._8_4_;
      auVar184._12_4_ = iVar17 + auVar199._12_4_ + auVar183._12_4_;
      auVar194._8_4_ = 0xfffffff8;
      auVar194._0_8_ = 0xfffffff8fffffff8;
      auVar194._12_4_ = 0xfffffff8;
      while( true ) {
        uVar15 = iVar196 >> 0xd;
        *(float *)param_11 = param_13 + fVar87;
        *(float *)(param_11 + 4) = param_13 + fVar110;
        *(float *)(param_11 + 8) = param_13 + fVar152;
        *(float *)(param_11 + 0xc) = param_13 + fVar153;
        iVar196 = iVar196 + uVar11;
        uVar12 = uVar13;
        if ((int)uVar15 <= (int)uVar13) {
          uVar12 = uVar15;
        }
        auVar94 = NEON_sshl(auVar246,auVar194,4);
        uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        auVar117 = NEON_sshl(auVar184,auVar194,4);
        lVar57 = (long)(int)(uVar12 + param_3);
        lVar58 = (lVar57 + (long)(int)(uVar12 + param_3) * 2) * 0x10;
        auVar79._0_4_ = auVar94._0_4_ + uVar12 * -0x20;
        auVar79._4_4_ = auVar94._4_4_ + uVar12 * -0x20;
        auVar79._8_4_ = auVar94._8_4_ + uVar12 * -0x20;
        auVar79._12_4_ = auVar94._12_4_ + uVar12 * -0x20;
        iVar137 = param_2;
        if (iVar59 >> 0xd <= param_2) {
          iVar137 = iVar59 >> 0xd;
        }
        fVar142 = (float)uVar12 * param_12;
        auVar106._0_4_ = auVar117._0_4_ + uVar12 * -0x20;
        auVar106._4_4_ = auVar117._4_4_ + uVar12 * -0x20;
        auVar106._8_4_ = auVar117._8_4_ + uVar12 * -0x20;
        auVar106._12_4_ = auVar117._12_4_ + uVar12 * -0x20;
        auVar94 = NEON_smax(auVar79,auVar235,4);
        auVar117 = NEON_smax(auVar106,auVar235,4);
        auVar256._0_4_ = fVar142 + param_13 + fVar87;
        auVar256._4_4_ = fVar142 + param_13 + fVar110;
        auVar256._8_4_ = fVar142 + param_13 + fVar152;
        auVar256._12_4_ = fVar142 + param_13 + fVar153;
        while( true ) {
          lVar57 = lVar57 + 1;
          auVar199 = *(undefined (*) [16])param_10;
          auVar97 = *(undefined (*) [16])(*(long *)(this + 0x138) + lVar58);
          fVar87 = auVar97._0_4_;
          auVar80._0_4_ = auVar199._0_4_ - fVar87;
          fVar110 = auVar97._4_4_;
          auVar80._4_4_ = auVar199._4_4_ - fVar110;
          fVar152 = auVar97._8_4_;
          auVar80._8_4_ = auVar199._8_4_ - fVar152;
          fVar153 = auVar97._12_4_;
          auVar80._12_4_ = auVar199._12_4_ - fVar153;
          auVar199 = NEON_cmlt(auVar80,0,4);
          bVar91 = auVar199[0] & 1;
          auVar81._0_5_ = CONCAT14(auVar199[4],(uint)bVar91) & 0x2ffffffff;
          auVar81._5_3_ = 0;
          auVar81[8] = auVar199[8] & 4;
          auVar81._9_3_ = 0;
          auVar81[12] = auVar199[12] & 8;
          auVar81._13_3_ = 0;
          auVar107 = NEON_ext(auVar81,auVar81,8,1);
          if (CONCAT13(auVar107[3] | auVar107[7],
                       CONCAT12(auVar107[2] | auVar107[6],
                                CONCAT11(auVar107[1] | auVar107[5],
                                         auVar107[0] | bVar91 | auVar107[4] | auVar199[4] & 2))) !=
              0xf) {
            auVar38[8] = 0x20;
            auVar38._0_8_ = 0x2000000020;
            auVar38._9_3_ = 0;
            auVar38[12] = 0x20;
            auVar38._13_3_ = 0;
            auVar199 = NEON_smin(auVar117,auVar38,4);
            auVar39[8] = 0x20;
            auVar39._0_8_ = 0x2000000020;
            auVar39._9_3_ = 0;
            auVar39[12] = 0x20;
            auVar39._13_3_ = 0;
            auVar107 = NEON_smin(auVar94,auVar39,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar58);
            auVar119 = NEON_fmax(auVar256,*(undefined (*) [16])param_9,4);
            auVar199 = NEON_smax(auVar199,auVar235,4);
            auVar107 = NEON_smax(auVar107,auVar235,4);
            auVar147._0_4_ = auVar119._0_4_ - fVar87;
            auVar147._4_4_ = auVar119._4_4_ - fVar110;
            auVar147._8_4_ = auVar119._8_4_ - fVar152;
            auVar147._12_4_ = auVar119._12_4_ - fVar153;
            auVar199 = NEON_sshl(auVar237,auVar199,4);
            auVar107 = NEON_sshl(auVar237,auVar107,4);
            auVar31[8] = 0xe1;
            auVar31._0_8_ = 0xffffffe1ffffffe1;
            auVar31[9] = 0xff;
            auVar31[10] = 0xff;
            auVar31[11] = 0xff;
            auVar31[12] = 0xe1;
            auVar31[13] = 0xff;
            auVar31[14] = 0xff;
            auVar31[15] = 0xff;
            auVar144 = NEON_sshl(auVar147,auVar31,4);
            auVar82[0] = auVar199[0] & ~auVar107[0];
            auVar82[1] = auVar199[1] & ~auVar107[1];
            auVar82[2] = auVar199[2] & ~auVar107[2];
            auVar82[3] = auVar199[3] & ~auVar107[3];
            auVar82[4] = auVar199[4] & ~auVar107[4];
            auVar82[5] = auVar199[5] & ~auVar107[5];
            auVar82[6] = auVar199[6] & ~auVar107[6];
            auVar82[7] = auVar199[7] & ~auVar107[7];
            auVar82[8] = auVar199[8] & ~auVar107[8];
            auVar82[9] = auVar199[9] & ~auVar107[9];
            auVar82[10] = auVar199[10] & ~auVar107[10];
            auVar82[11] = auVar199[11] & ~auVar107[11];
            auVar82[12] = auVar199[12] & ~auVar107[12];
            auVar82[13] = auVar199[13] & ~auVar107[13];
            auVar82[14] = auVar199[14] & ~auVar107[14];
            auVar82[15] = auVar199[15] & ~auVar107[15];
            auVar56._12_4_ = _UNK_004c513c;
            auVar56._0_12_ = _DAT_004c5130;
            auVar107 = a64_TBL(ZEXT816(0),auVar82,auVar56);
            auVar199 = *(undefined (*) [16])(puVar10 + 2);
            auVar174 = NEON_cmeq(auVar107,0,2);
            auVar148[0] = auVar144[0] | auVar174[0];
            auVar148[1] = auVar144[1] | auVar174[1];
            auVar148[2] = auVar144[2] | auVar174[2];
            auVar148[3] = auVar144[3] | auVar174[3];
            auVar148[4] = auVar144[4] | auVar174[4];
            auVar148[5] = auVar144[5] | auVar174[5];
            auVar148[6] = auVar144[6] | auVar174[6];
            auVar148[7] = auVar144[7] | auVar174[7];
            auVar148[8] = auVar144[8] | auVar174[8];
            auVar148[9] = auVar144[9] | auVar174[9];
            auVar148[10] = auVar144[10] | auVar174[10];
            auVar148[11] = auVar144[11] | auVar174[11];
            auVar148[12] = auVar144[12] | auVar174[12];
            auVar148[13] = auVar144[13] | auVar174[13];
            auVar148[14] = auVar144[14] | auVar174[14];
            auVar148[15] = auVar144[15] | auVar174[15];
            auVar168._0_4_ = (auVar199._0_4_ + auVar199._0_4_) - (fVar87 + auVar119._0_4_);
            auVar168._4_4_ = (auVar199._4_4_ + auVar199._4_4_) - (fVar110 + auVar119._4_4_);
            auVar168._8_4_ = (auVar199._8_4_ + auVar199._8_4_) - (fVar152 + auVar119._8_4_);
            auVar168._12_4_ = (auVar199._12_4_ + auVar199._12_4_) - (fVar153 + auVar119._12_4_);
            auVar83[0] = auVar107[0] & ~auVar148[0];
            auVar83[1] = auVar107[1] & ~auVar148[1];
            auVar83[2] = auVar107[2] & ~auVar148[2];
            auVar83[3] = auVar107[3] & ~auVar148[3];
            auVar83[4] = auVar107[4] & ~auVar148[4];
            auVar83[5] = auVar107[5] & ~auVar148[5];
            auVar83[6] = auVar107[6] & ~auVar148[6];
            auVar83[7] = auVar107[7] & ~auVar148[7];
            auVar83[8] = auVar107[8] & ~auVar148[8];
            auVar83[9] = auVar107[9] & ~auVar148[9];
            auVar83[10] = auVar107[10] & ~auVar148[10];
            auVar83[11] = auVar107[11] & ~auVar148[11];
            auVar83[12] = auVar107[12] & ~auVar148[12];
            auVar83[13] = auVar107[13] & ~auVar148[13];
            auVar83[14] = auVar107[14] & ~auVar148[14];
            auVar83[15] = auVar107[15] & ~auVar148[15];
            auVar32[8] = 0xe1;
            auVar32._0_8_ = 0xffffffe1ffffffe1;
            auVar32[9] = 0xff;
            auVar32[10] = 0xff;
            auVar32[11] = 0xff;
            auVar32[12] = 0xe1;
            auVar32[13] = 0xff;
            auVar32[14] = 0xff;
            auVar32[15] = 0xff;
            auVar144 = NEON_sshl(auVar168,auVar32,4);
            auVar174 = NEON_cmeq(auVar83,auVar237,4);
            auVar107 = *(undefined (*) [16])(puVar10 + 4);
            auVar169[0] = (auVar144[0] | auVar174[0]) & ~auVar148[0];
            auVar169[1] = (auVar144[1] | auVar174[1]) & ~auVar148[1];
            auVar169[2] = (auVar144[2] | auVar174[2]) & ~auVar148[2];
            auVar169[3] = (auVar144[3] | auVar174[3]) & ~auVar148[3];
            auVar169[4] = (auVar144[4] | auVar174[4]) & ~auVar148[4];
            auVar169[5] = (auVar144[5] | auVar174[5]) & ~auVar148[5];
            auVar169[6] = (auVar144[6] | auVar174[6]) & ~auVar148[6];
            auVar169[7] = (auVar144[7] | auVar174[7]) & ~auVar148[7];
            auVar169[8] = (auVar144[8] | auVar174[8]) & ~auVar148[8];
            auVar169[9] = (auVar144[9] | auVar174[9]) & ~auVar148[9];
            auVar169[10] = (auVar144[10] | auVar174[10]) & ~auVar148[10];
            auVar169[11] = (auVar144[11] | auVar174[11]) & ~auVar148[11];
            auVar169[12] = (auVar144[12] | auVar174[12]) & ~auVar148[12];
            auVar169[13] = (auVar144[13] | auVar174[13]) & ~auVar148[13];
            auVar169[14] = (auVar144[14] | auVar174[14]) & ~auVar148[14];
            auVar169[15] = (auVar144[15] | auVar174[15]) & ~auVar148[15];
            auVar144 = NEON_cmlt(auVar148,0,4);
            auVar174 = NEON_cmlt(auVar169,0,4);
            auVar144 = NEON_bsl(auVar144,auVar199,auVar119,1);
            auVar84[0] = auVar107[0] & ~auVar169[0] | auVar83[0];
            auVar84[1] = auVar107[1] & ~auVar169[1] | auVar83[1];
            auVar84[2] = auVar107[2] & ~auVar169[2] | auVar83[2];
            auVar84[3] = auVar107[3] & ~auVar169[3] | auVar83[3];
            auVar84[4] = auVar107[4] & ~auVar169[4] | auVar83[4];
            auVar84[5] = auVar107[5] & ~auVar169[5] | auVar83[5];
            auVar84[6] = auVar107[6] & ~auVar169[6] | auVar83[6];
            auVar84[7] = auVar107[7] & ~auVar169[7] | auVar83[7];
            auVar84[8] = auVar107[8] & ~auVar169[8] | auVar83[8];
            auVar84[9] = auVar107[9] & ~auVar169[9] | auVar83[9];
            auVar84[10] = auVar107[10] & ~auVar169[10] | auVar83[10];
            auVar84[11] = auVar107[11] & ~auVar169[11] | auVar83[11];
            auVar84[12] = auVar107[12] & ~auVar169[12] | auVar83[12];
            auVar84[13] = auVar107[13] & ~auVar169[13] | auVar83[13];
            auVar84[14] = auVar107[14] & ~auVar169[14] | auVar83[14];
            auVar84[15] = auVar107[15] & ~auVar169[15] | auVar83[15];
            auVar199 = NEON_bit(auVar199,auVar119,auVar174,1);
            auVar107 = NEON_cmeq(auVar84,auVar237,4);
            auVar199 = NEON_fmin(auVar144,auVar199,4);
            auVar149._8_4_ = 0x7f7fffff;
            auVar149._0_8_ = 0x7f7fffff7f7fffff;
            auVar149._12_4_ = 0x7f7fffff;
            auVar119 = NEON_bif(auVar149,auVar199,auVar107,1);
            auVar199 = NEON_bif(auVar199,auVar97,auVar107,1);
            puVar10[1] = auVar199._8_8_;
            *puVar10 = auVar199._0_8_;
            puVar10[3] = auVar119._8_8_;
            puVar10[2] = auVar119._0_8_;
            lVar60 = *(long *)(this + 0x138) + lVar58;
            *(byte *)(lVar60 + 0x30) = auVar84[8] & ~auVar107[8];
            *(byte *)(lVar60 + 0x31) = auVar84[9] & ~auVar107[9];
            *(byte *)(lVar60 + 0x32) = auVar84[10] & ~auVar107[10];
            *(byte *)(lVar60 + 0x33) = auVar84[11] & ~auVar107[11];
            *(byte *)(lVar60 + 0x34) = auVar84[12] & ~auVar107[12];
            *(byte *)(lVar60 + 0x35) = auVar84[13] & ~auVar107[13];
            *(byte *)(lVar60 + 0x36) = auVar84[14] & ~auVar107[14];
            *(byte *)(lVar60 + 0x37) = auVar84[15] & ~auVar107[15];
            *(byte *)(lVar60 + 0x20) = auVar84[0] & ~auVar107[0];
            *(byte *)(lVar60 + 0x21) = auVar84[1] & ~auVar107[1];
            *(byte *)(lVar60 + 0x22) = auVar84[2] & ~auVar107[2];
            *(byte *)(lVar60 + 0x23) = auVar84[3] & ~auVar107[3];
            *(byte *)(lVar60 + 0x24) = auVar84[4] & ~auVar107[4];
            *(byte *)(lVar60 + 0x25) = auVar84[5] & ~auVar107[5];
            *(byte *)(lVar60 + 0x26) = auVar84[6] & ~auVar107[6];
            *(byte *)(lVar60 + 0x27) = auVar84[7] & ~auVar107[7];
          }
          if (iVar137 + param_3 <= lVar57) break;
          auVar257._0_4_ = param_12 + auVar256._0_4_;
          auVar257._4_4_ = param_12 + auVar256._4_4_;
          auVar257._8_4_ = param_12 + auVar256._8_4_;
          auVar257._12_4_ = param_12 + auVar256._12_4_;
          auVar40[8] = 0x20;
          auVar40._0_8_ = 0x2000000020;
          auVar40._9_3_ = 0;
          auVar40[12] = 0x20;
          auVar40._13_3_ = 0;
          auVar94 = NEON_uqsub(auVar94,auVar40,2);
          lVar58 = lVar58 + 0x30;
          auVar41[8] = 0x20;
          auVar41._0_8_ = 0x2000000020;
          auVar41._9_3_ = 0;
          auVar41[12] = 0x20;
          auVar41._13_3_ = 0;
          auVar117 = NEON_uqsub(auVar117,auVar41,2);
          auVar256 = auVar257;
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        auVar85._0_4_ = CONCAT13(uVar204,CONCAT12(uVar203,CONCAT11(uVar202,uVar201))) - iVar133;
        auVar85._4_4_ = CONCAT13(uVar208,CONCAT12(uVar207,CONCAT11(uVar206,uVar205))) - iVar133;
        auVar85._8_4_ = CONCAT13(uVar212,CONCAT12(uVar211,CONCAT11(uVar210,uVar209))) - iVar133;
        auVar85._12_4_ = CONCAT13(uVar216,CONCAT12(uVar215,CONCAT11(uVar214,uVar213))) - iVar133;
        iVar59 = iVar59 + uVar1;
        auVar108._0_4_ = iVar135 - iVar19;
        auVar108._4_4_ = iVar249 - iVar19;
        auVar108._8_4_ = iVar114 - iVar19;
        auVar108._12_4_ = iVar134 - iVar19;
        iVar134 = auVar246._4_4_;
        iVar136 = auVar246._8_4_;
        iVar186 = auVar246._12_4_;
        auVar33[8] = 0xe1;
        auVar33._0_8_ = 0xffffffe1ffffffe1;
        auVar33[9] = 0xff;
        auVar33[10] = 0xff;
        auVar33[11] = 0xff;
        auVar33[12] = 0xe1;
        auVar33[13] = 0xff;
        auVar33[14] = 0xff;
        auVar33[15] = 0xff;
        auVar94 = NEON_sshl(auVar85,auVar33,4);
        auVar34[8] = 0xe1;
        auVar34._0_8_ = 0xffffffe1ffffffe1;
        auVar34[9] = 0xff;
        auVar34[10] = 0xff;
        auVar34[11] = 0xff;
        auVar34[12] = 0xe1;
        auVar34[13] = 0xff;
        auVar34[14] = 0xff;
        auVar34[15] = 0xff;
        auVar117 = NEON_sshl(auVar108,auVar34,4);
        iVar249 = CONCAT13(auVar94[3] & bVar90,
                           CONCAT12(auVar94[2] & bVar89,
                                    CONCAT11(auVar94[1] & bVar88,auVar94[0] & bVar86)));
        auVar160._0_8_ =
             CONCAT17(auVar94[7] & bVar90,
                      CONCAT16(auVar94[6] & bVar89,
                               CONCAT15(auVar94[5] & bVar88,CONCAT14(auVar94[4] & bVar86,iVar249))))
        ;
        auVar160[8] = auVar94[8] & bVar86;
        auVar160[9] = auVar94[9] & bVar88;
        auVar160[10] = auVar94[10] & bVar89;
        auVar160[11] = auVar94[11] & bVar90;
        auVar170[12] = auVar94[12] & bVar86;
        auVar170._0_12_ = auVar160;
        auVar170[13] = auVar94[13] & bVar88;
        auVar170[14] = auVar94[14] & bVar89;
        auVar170[15] = auVar94[15] & bVar90;
        iVar137 = CONCAT13(auVar117[3] & bVar141,
                           CONCAT12(auVar117[2] & bVar140,
                                    CONCAT11(auVar117[1] & bVar139,auVar117[0] & bVar138)));
        auVar244._0_8_ =
             CONCAT17(auVar117[7] & bVar141,
                      CONCAT16(auVar117[6] & bVar140,
                               CONCAT15(auVar117[5] & bVar139,
                                        CONCAT14(auVar117[4] & bVar138,iVar137))));
        auVar244[8] = auVar117[8] & bVar138;
        auVar244[9] = auVar117[9] & bVar139;
        auVar244[10] = auVar117[10] & bVar140;
        auVar244[11] = auVar117[11] & bVar141;
        auVar247[12] = auVar117[12] & bVar138;
        auVar247._0_12_ = auVar244;
        auVar247[13] = auVar117[13] & bVar139;
        auVar247[14] = auVar117[14] & bVar140;
        auVar247[15] = auVar117[15] & bVar141;
        iVar114 = CONCAT13(auVar94[3] & bVar113,
                           CONCAT12(auVar94[2] & bVar112,
                                    CONCAT11(auVar94[1] & bVar111,auVar94[0] & bVar109)));
        auVar116._0_8_ =
             CONCAT17(auVar94[7] & bVar113,
                      CONCAT16(auVar94[6] & bVar112,
                               CONCAT15(auVar94[5] & bVar111,CONCAT14(auVar94[4] & bVar109,iVar114))
                              ));
        auVar116[8] = auVar94[8] & bVar109;
        auVar116[9] = auVar94[9] & bVar111;
        auVar116[10] = auVar94[10] & bVar112;
        auVar116[11] = auVar94[11] & bVar113;
        auVar132[12] = auVar94[12] & bVar109;
        auVar132._0_12_ = auVar116;
        auVar132[13] = auVar94[13] & bVar111;
        auVar132[14] = auVar94[14] & bVar112;
        auVar132[15] = auVar94[15] & bVar113;
        iVar135 = CONCAT13(auVar117[3] & bVar64,
                           CONCAT12(auVar117[2] & bVar63,
                                    CONCAT11(auVar117[1] & bVar62,auVar117[0] & bVar61)));
        auVar143._0_8_ =
             CONCAT17(auVar117[7] & bVar64,
                      CONCAT16(auVar117[6] & bVar63,
                               CONCAT15(auVar117[5] & bVar62,CONCAT14(auVar117[4] & bVar61,iVar135))
                              ));
        auVar143[8] = auVar117[8] & bVar61;
        auVar143[9] = auVar117[9] & bVar62;
        auVar143[10] = auVar117[10] & bVar63;
        auVar143[11] = auVar117[11] & bVar64;
        auVar150[12] = auVar117[12] & bVar61;
        auVar150._0_12_ = auVar143;
        auVar150[13] = auVar117[13] & bVar62;
        auVar150[14] = auVar117[14] & bVar63;
        auVar150[15] = auVar117[15] & bVar64;
        iVar249 = iVar249 + auVar85._0_4_;
        uVar201 = (undefined)iVar249;
        uVar202 = (undefined)((uint)iVar249 >> 8);
        uVar203 = (undefined)((uint)iVar249 >> 0x10);
        uVar204 = (undefined)((uint)iVar249 >> 0x18);
        iVar249 = (int)((ulong)auVar160._0_8_ >> 0x20) + auVar85._4_4_;
        uVar205 = (undefined)iVar249;
        uVar206 = (undefined)((uint)iVar249 >> 8);
        uVar207 = (undefined)((uint)iVar249 >> 0x10);
        uVar208 = (undefined)((uint)iVar249 >> 0x18);
        iVar249 = auVar160._8_4_ + auVar85._8_4_;
        uVar209 = (undefined)iVar249;
        uVar210 = (undefined)((uint)iVar249 >> 8);
        uVar211 = (undefined)((uint)iVar249 >> 0x10);
        uVar212 = (undefined)((uint)iVar249 >> 0x18);
        iVar249 = auVar170._12_4_ + auVar85._12_4_;
        uVar213 = (undefined)iVar249;
        uVar214 = (undefined)((uint)iVar249 >> 8);
        uVar215 = (undefined)((uint)iVar249 >> 0x10);
        uVar216 = (undefined)((uint)iVar249 >> 0x18);
        auVar94 = *(undefined (*) [16])param_11;
        auVar246._0_4_ = auVar246._0_4_ + iVar18 + iVar114;
        auVar246._4_4_ = iVar134 + iVar18 + (int)((ulong)auVar116._0_8_ >> 0x20);
        auVar246._8_4_ = iVar136 + iVar18 + auVar116._8_4_;
        auVar246._12_4_ = iVar186 + iVar18 + auVar132._12_4_;
        iVar135 = iVar135 + auVar108._0_4_;
        iVar249 = (int)((ulong)auVar143._0_8_ >> 0x20) + auVar108._4_4_;
        iVar114 = auVar143._8_4_ + auVar108._8_4_;
        iVar134 = auVar150._12_4_ + auVar108._12_4_;
        fVar87 = auVar94._0_4_;
        fVar110 = auVar94._4_4_;
        fVar152 = auVar94._8_4_;
        fVar153 = auVar94._12_4_;
        auVar185._0_4_ = iVar137 + iVar17 + auVar184._0_4_;
        auVar185._4_4_ = (int)((ulong)auVar244._0_8_ >> 0x20) + iVar17 + auVar184._4_4_;
        auVar185._8_4_ = auVar244._8_4_ + iVar17 + auVar184._8_4_;
        auVar185._12_4_ = auVar247._12_4_ + iVar17 + auVar184._12_4_;
        auVar184 = auVar185;
      }
    }
  }
  return 0;
}


