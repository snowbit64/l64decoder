// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<0,1,1>
// Entry Point: 00da22cc
// Size: 2628 bytes
// Signature: int __thiscall RasterizeTriangle<0,1,1>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0, 1,
   1>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<0,1,1>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  uint uVar1;
  float *pfVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined (*pauVar16) [12];
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
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
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  long lVar58;
  long lVar59;
  int iVar60;
  long lVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined auVar68 [16];
  int iVar66;
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
  undefined auVar86 [16];
  undefined auVar87 [16];
  byte bVar88;
  float fVar89;
  int iVar90;
  undefined auVar91 [12];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar105 [16];
  undefined auVar93 [12];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [12];
  undefined auVar111 [12];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  byte bVar126;
  byte bVar128;
  byte bVar129;
  float fVar127;
  byte bVar130;
  int iVar131;
  float fVar132;
  undefined auVar133 [12];
  int iVar146;
  int iVar147;
  int iVar148;
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar140 [16];
  undefined auVar141 [16];
  undefined auVar142 [16];
  undefined auVar143 [16];
  undefined auVar144 [16];
  int iVar149;
  undefined auVar150 [12];
  undefined auVar151 [12];
  int iVar161;
  int iVar162;
  int iVar163;
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar158 [16];
  undefined auVar159 [16];
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  undefined auVar168 [12];
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  undefined auVar178 [16];
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  int iVar183;
  undefined auVar184 [12];
  undefined auVar186 [12];
  undefined auVar187 [16];
  undefined auVar188 [16];
  undefined auVar189 [16];
  undefined auVar190 [16];
  int iVar196;
  int iVar197;
  int iVar198;
  undefined auVar194 [16];
  undefined auVar195 [16];
  undefined auVar199 [12];
  undefined auVar202 [16];
  undefined auVar200 [12];
  undefined auVar201 [12];
  undefined auVar205 [16];
  undefined auVar206 [16];
  undefined auVar207 [12];
  undefined auVar208 [12];
  undefined auVar210 [16];
  undefined auVar211 [16];
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
  undefined uVar234;
  undefined uVar235;
  undefined uVar236;
  undefined uVar237;
  undefined uVar238;
  undefined uVar239;
  undefined uVar240;
  undefined uVar241;
  undefined uVar242;
  undefined uVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  byte bVar247;
  byte bVar248;
  byte bVar249;
  byte bVar250;
  undefined auVar251 [16];
  int iVar254;
  undefined auVar252 [16];
  undefined auVar253 [16];
  int iVar255;
  undefined auVar256 [16];
  undefined auVar257 [16];
  undefined auVar258 [16];
  undefined auVar259 [16];
  undefined auVar260 [16];
  undefined auVar261 [16];
  undefined auVar262 [16];
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  byte bStack_b1;
  int local_90;
  int iStack_8c;
  int local_80;
  int iStack_7c;
  undefined auVar67 [12];
  undefined auVar69 [16];
  undefined auVar98 [16];
  undefined auVar92 [12];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar106 [16];
  undefined auVar117 [16];
  undefined auVar125 [16];
  undefined auVar145 [16];
  undefined auVar157 [16];
  undefined auVar160 [16];
  undefined auVar185 [12];
  undefined auVar191 [16];
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar203 [16];
  undefined auVar204 [16];
  undefined auVar209 [16];
  
  auVar93 = _DAT_004c5130;
  auVar94 = _DAT_004c4480;
  lVar59 = (ulong)param_1 * 4;
  pfVar2 = (float *)(param_7 + lVar59);
  auVar134._8_4_ = 0xffffffe1;
  auVar134._0_8_ = 0xffffffe1ffffffe1;
  auVar134._12_4_ = 0xffffffe1;
  piVar3 = (int *)(param_6 + lVar59);
  puVar4 = (undefined4 *)(param_16 + lVar59);
  piVar5 = (int *)(param_14 + lVar59);
  fVar89 = pfVar2[4];
  piVar6 = (int *)(param_15 + lVar59);
  fVar127 = pfVar2[8];
  piVar7 = (int *)(param_17 + lVar59);
  iVar255 = piVar6[4];
  iVar60 = piVar7[4];
  iVar17 = piVar5[4];
  iVar254 = piVar7[8];
  iVar131 = MP_INT_ABS((int)(fVar89 * 128.0));
  iVar146 = MP_INT_ABS((int)(fVar89 * 384.0));
  iVar147 = MP_INT_ABS((int)(fVar89 * 640.0));
  iVar148 = MP_INT_ABS((int)(fVar89 * 896.0));
  iVar174 = piVar5[8];
  piVar8 = (int *)(param_18 + lVar59);
  auVar187._0_4_ = iVar60 + iVar255 * -0x80 + iVar131 * iVar17;
  auVar187._4_4_ = iVar60 + iVar255 * -0x180 + iVar146 * iVar17;
  auVar187._8_4_ = iVar60 + iVar255 * -0x280 + iVar147 * iVar17;
  auVar187._12_4_ = iVar60 + iVar255 * -0x380 + iVar148 * iVar17;
  iVar60 = piVar6[8];
  uVar18 = puVar4[4];
  piVar9 = (int *)(param_8 + lVar59);
  iVar255 = piVar3[4];
  iVar149 = MP_INT_ABS((int)(fVar127 * 128.0));
  iVar161 = MP_INT_ABS((int)(fVar127 * 384.0));
  iVar162 = MP_INT_ABS((int)(fVar127 * 640.0));
  iVar163 = MP_INT_ABS((int)(fVar127 * 896.0));
  iVar148 = piVar8[4];
  auVar202 = NEON_sshl(auVar187,auVar134,4);
  iVar131 = piVar3[8];
  iVar146 = piVar9[8];
  iVar147 = piVar9[4];
  bVar62 = (byte)iVar17;
  bVar63 = (byte)((uint)iVar17 >> 8);
  bVar64 = (byte)((uint)iVar17 >> 0x10);
  bVar65 = (byte)((uint)iVar17 >> 0x18);
  local_90 = CONCAT13(auVar202[3] & bVar65,
                      CONCAT12(auVar202[2] & bVar64,
                               CONCAT11(auVar202[1] & bVar63,auVar202[0] & bVar62)));
  auVar207._0_8_ =
       CONCAT17(auVar202[7] & bVar65,
                CONCAT16(auVar202[6] & bVar64,
                         CONCAT15(auVar202[5] & bVar63,CONCAT14(auVar202[4] & bVar62,local_90))));
  auVar207[8] = auVar202[8] & bVar62;
  auVar207[9] = auVar202[9] & bVar63;
  auVar207[10] = auVar202[10] & bVar64;
  auVar207[11] = auVar202[11] & bVar65;
  auVar114[12] = auVar202[12] & bVar62;
  auVar114._0_12_ = auVar207;
  auVar114[13] = auVar202[13] & bVar63;
  auVar114[14] = auVar202[14] & bVar64;
  auVar114[15] = auVar202[15] & bVar65;
  auVar97._0_4_ = iVar254 + iVar60 * -0x80 + iVar149 * iVar174;
  auVar97._4_4_ = iVar254 + iVar60 * -0x180 + iVar161 * iVar174;
  auVar97._8_4_ = iVar254 + iVar60 * -0x280 + iVar162 * iVar174;
  auVar97._12_4_ = iVar254 + iVar60 * -0x380 + iVar163 * iVar174;
  uVar19 = puVar4[8];
  local_90 = auVar187._0_4_ + local_90;
  iStack_8c = auVar187._4_4_ + (int)((ulong)auVar207._0_8_ >> 0x20);
  iVar149 = auVar187._8_4_ + auVar207._8_4_;
  iVar161 = auVar187._12_4_ + auVar114._12_4_;
  uVar1 = iVar147 + 1;
  auVar187 = NEON_sshl(auVar97,auVar134,4);
  iVar17 = piVar8[8];
  uVar15 = iVar146 - 1;
  bVar179 = (byte)uVar18;
  bVar180 = (byte)((uint)uVar18 >> 8);
  bVar181 = (byte)((uint)uVar18 >> 0x10);
  bVar182 = (byte)((uint)uVar18 >> 0x18);
  iVar254 = CONCAT13(auVar202[3] & bVar182,
                     CONCAT12(auVar202[2] & bVar181,
                              CONCAT11(auVar202[1] & bVar180,auVar202[0] & bVar179)));
  auVar199._0_8_ =
       CONCAT17(auVar202[7] & bVar182,
                CONCAT16(auVar202[6] & bVar181,
                         CONCAT15(auVar202[5] & bVar180,CONCAT14(auVar202[4] & bVar179,iVar254))));
  auVar199[8] = auVar202[8] & bVar179;
  auVar199[9] = auVar202[9] & bVar180;
  auVar199[10] = auVar202[10] & bVar181;
  auVar199[11] = auVar202[11] & bVar182;
  auVar113[12] = auVar202[12] & bVar179;
  auVar113._0_12_ = auVar199;
  auVar113[13] = auVar202[13] & bVar180;
  auVar113[14] = auVar202[14] & bVar181;
  auVar113[15] = auVar202[15] & bVar182;
  bVar126 = (byte)iVar174;
  bVar128 = (byte)((uint)iVar174 >> 8);
  bVar129 = (byte)((uint)iVar174 >> 0x10);
  bVar130 = (byte)((uint)iVar174 >> 0x18);
  iVar60 = iVar131 + (uVar15 & (int)uVar15 >> 0x1f);
  bVar164 = (byte)uVar19;
  bVar165 = (byte)((uint)uVar19 >> 8);
  bVar166 = (byte)((uint)uVar19 >> 0x10);
  bVar167 = (byte)((uint)uVar19 >> 0x18);
  auVar108._0_4_ = iVar255 + (int)(fVar89 * 128.0) + iVar254;
  auVar108._4_4_ = iVar255 + (int)(fVar89 * 384.0) + (int)((ulong)auVar199._0_8_ >> 0x20);
  auVar108._8_4_ = iVar255 + (int)(fVar89 * 640.0) + auVar199._8_4_;
  auVar108._12_4_ = iVar255 + (int)(fVar89 * 896.0) + auVar113._12_4_;
  iVar255 = iVar255 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 0x2000;
  iVar254 = auVar97._0_4_ +
            CONCAT13(auVar187[3] & bVar130,
                     CONCAT12(auVar187[2] & bVar129,
                              CONCAT11(auVar187[1] & bVar128,auVar187[0] & bVar126)));
  uVar212 = (undefined)iVar254;
  uVar213 = (undefined)((uint)iVar254 >> 8);
  uVar214 = (undefined)((uint)iVar254 >> 0x10);
  uVar215 = (undefined)((uint)iVar254 >> 0x18);
  iVar254 = auVar97._4_4_ +
            CONCAT13(auVar187[7] & bVar130,
                     CONCAT12(auVar187[6] & bVar129,
                              CONCAT11(auVar187[5] & bVar128,auVar187[4] & bVar126)));
  uVar216 = (undefined)iVar254;
  uVar217 = (undefined)((uint)iVar254 >> 8);
  uVar218 = (undefined)((uint)iVar254 >> 0x10);
  uVar219 = (undefined)((uint)iVar254 >> 0x18);
  iVar254 = auVar97._8_4_ +
            CONCAT13(auVar187[11] & bVar130,
                     CONCAT12(auVar187[10] & bVar129,
                              CONCAT11(auVar187[9] & bVar128,auVar187[8] & bVar126)));
  uVar220 = (undefined)iVar254;
  uVar221 = (undefined)((uint)iVar254 >> 8);
  uVar222 = (undefined)((uint)iVar254 >> 0x10);
  uVar223 = (undefined)((uint)iVar254 >> 0x18);
  iVar254 = auVar97._12_4_ +
            CONCAT13(auVar187[15] & bVar130,
                     CONCAT12(auVar187[14] & bVar129,
                              CONCAT11(auVar187[13] & bVar128,auVar187[12] & bVar126)));
  uVar224 = (undefined)iVar254;
  uVar225 = (undefined)((uint)iVar254 >> 8);
  uVar226 = (undefined)((uint)iVar254 >> 0x10);
  uVar227 = (undefined)((uint)iVar254 >> 0x18);
  auVar202._0_4_ =
       iVar131 + (int)(fVar127 * 128.0) +
       CONCAT13(auVar187[3] & bVar167,
                CONCAT12(auVar187[2] & bVar166,CONCAT11(auVar187[1] & bVar165,auVar187[0] & bVar164)
                        ));
  auVar202._4_4_ =
       iVar131 + (int)(fVar127 * 384.0) +
       CONCAT13(auVar187[7] & bVar167,
                CONCAT12(auVar187[6] & bVar166,CONCAT11(auVar187[5] & bVar165,auVar187[4] & bVar164)
                        ));
  auVar202._8_4_ =
       iVar131 + (int)(fVar127 * 640.0) +
       CONCAT13(auVar187[11] & bVar167,
                CONCAT12(auVar187[10] & bVar166,
                         CONCAT11(auVar187[9] & bVar165,auVar187[8] & bVar164)));
  auVar202._12_4_ =
       iVar131 + (int)(fVar127 * 896.0) +
       CONCAT13(auVar187[15] & bVar167,
                CONCAT12(auVar187[14] & bVar166,
                         CONCAT11(auVar187[13] & bVar165,auVar187[12] & bVar164)));
  if (param_4 < param_3) {
    if (param_3 < param_5) {
      fVar169 = (float)*(undefined8 *)(param_11 + 8);
      fVar170 = (float)((ulong)*(undefined8 *)(param_11 + 8) >> 0x20);
      fVar89 = (float)*(undefined8 *)param_11;
      fVar127 = (float)((ulong)*(undefined8 *)param_11 >> 0x20);
      auVar55._12_4_ = 0xf0b0703;
      auVar55._0_12_ = _DAT_004c5130;
      auVar251._8_4_ = 0xffffffe1;
      auVar251._0_8_ = 0xffffffe1ffffffe1;
      auVar251._12_4_ = 0xffffffe1;
      auVar252._8_8_ = 0xffffffffffffffff;
      auVar252._0_8_ = 0xffffffffffffffff;
      auVar256._8_4_ = 0x7f7fffff;
      auVar256._0_8_ = 0x7f7fffff7f7fffff;
      auVar256._12_4_ = 0x7f7fffff;
      local_80 = iVar17;
      iStack_7c = iVar17;
      while( true ) {
        uVar11 = iVar60 >> 0xd;
        iVar60 = iVar60 + uVar15;
        uVar13 = param_2 - 1U;
        if ((int)uVar11 <= (int)(param_2 - 1U)) {
          uVar13 = uVar11;
        }
        auVar29._8_4_ = 0xfffffff8;
        auVar29._0_8_ = 0xfffffff8fffffff8;
        auVar29._12_4_ = 0xfffffff8;
        auVar94 = NEON_sshl(auVar108,auVar29,4);
        uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        auVar30._8_4_ = 0xfffffff8;
        auVar30._0_8_ = 0xfffffff8fffffff8;
        auVar30._12_4_ = 0xfffffff8;
        auVar187 = NEON_sshl(auVar202,auVar30,4);
        lVar58 = (long)(int)(uVar13 + param_3);
        lVar59 = (lVar58 + (long)(int)(uVar13 + param_3) * 2) * 0x10;
        auVar95._0_4_ = auVar94._0_4_ + uVar13 * -0x20;
        auVar95._4_4_ = auVar94._4_4_ + uVar13 * -0x20;
        auVar95._8_4_ = auVar94._8_4_ + uVar13 * -0x20;
        auVar95._12_4_ = auVar94._12_4_ + uVar13 * -0x20;
        iVar131 = param_2;
        if (iVar255 >> 0xd <= param_2) {
          iVar131 = iVar255 >> 0xd;
        }
        fVar132 = (float)uVar13 * param_12;
        auVar112._0_4_ = auVar187._0_4_ + uVar13 * -0x20;
        auVar112._4_4_ = auVar187._4_4_ + uVar13 * -0x20;
        auVar112._8_4_ = auVar187._8_4_ + uVar13 * -0x20;
        auVar112._12_4_ = auVar187._12_4_ + uVar13 * -0x20;
        auVar187 = NEON_smax(auVar95,ZEXT216(0),4);
        auVar94 = NEON_smax(auVar112,ZEXT216(0),4);
        fVar89 = fVar89 + fVar132;
        fVar127 = fVar127 + fVar132;
        fVar169 = fVar169 + fVar132;
        fVar170 = fVar170 + fVar132;
        while( true ) {
          lVar58 = lVar58 + 1;
          auVar97 = *(undefined (*) [16])param_10;
          pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar59);
          fVar172 = (float)*(undefined8 *)(*pauVar16 + 8);
          fVar173 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
          fVar132 = (float)*(undefined8 *)*pauVar16;
          fVar171 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
          auVar96._0_4_ = auVar97._0_4_ - fVar132;
          auVar96._4_4_ = auVar97._4_4_ - fVar171;
          auVar96._8_4_ = auVar97._8_4_ - fVar172;
          auVar96._12_4_ = auVar97._12_4_ - fVar173;
          auVar97 = NEON_cmlt(auVar96,0,4);
          bVar88 = auVar97[0] & 1;
          auVar98._0_5_ = CONCAT14(auVar97[4],(uint)bVar88) & 0x2ffffffff;
          auVar98._5_3_ = 0;
          auVar98[8] = auVar97[8] & 4;
          auVar98._9_3_ = 0;
          auVar98[12] = auVar97[12] & 8;
          auVar98._13_3_ = 0;
          auVar113 = NEON_ext(auVar98,auVar98,8,1);
          if (CONCAT13(auVar113[3] | auVar113[7],
                       CONCAT12(auVar113[2] | auVar113[6],
                                CONCAT11(auVar113[1] | auVar113[5],
                                         auVar113[0] | bVar88 | auVar113[4] | auVar97[4] & 2))) !=
              0xf) {
            auVar32[8] = 0x20;
            auVar32._0_8_ = 0x2000000020;
            auVar32._9_3_ = 0;
            auVar32[12] = 0x20;
            auVar32._13_3_ = 0;
            auVar97 = NEON_smin(auVar94,auVar32,4);
            auVar33[8] = 0x20;
            auVar33._0_8_ = 0x2000000020;
            auVar33._9_3_ = 0;
            auVar33[12] = 0x20;
            auVar33._13_3_ = 0;
            auVar114 = NEON_smin(auVar187,auVar33,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar59);
            auVar20._4_4_ = fVar127;
            auVar20._0_4_ = fVar89;
            auVar20._8_4_ = fVar169;
            auVar20._12_4_ = fVar170;
            auVar134 = NEON_fmax(auVar20,*(undefined (*) [16])param_9,4);
            auVar113 = NEON_smax(auVar97,ZEXT216(0),4);
            auVar97 = *(undefined (*) [16])(puVar10 + 2);
            auVar114 = NEON_smax(auVar114,ZEXT216(0),4);
            auVar113 = NEON_sshl(auVar252,auVar113,4);
            auVar114 = NEON_sshl(auVar252,auVar114,4);
            auVar99[0] = auVar113[0] & ~auVar114[0];
            auVar99[1] = auVar113[1] & ~auVar114[1];
            auVar99[2] = auVar113[2] & ~auVar114[2];
            auVar99[3] = auVar113[3] & ~auVar114[3];
            auVar99[4] = auVar113[4] & ~auVar114[4];
            auVar99[5] = auVar113[5] & ~auVar114[5];
            auVar99[6] = auVar113[6] & ~auVar114[6];
            auVar99[7] = auVar113[7] & ~auVar114[7];
            auVar99[8] = auVar113[8] & ~auVar114[8];
            auVar99[9] = auVar113[9] & ~auVar114[9];
            auVar99[10] = auVar113[10] & ~auVar114[10];
            auVar99[11] = auVar113[11] & ~auVar114[11];
            auVar99[12] = auVar113[12] & ~auVar114[12];
            auVar99[13] = auVar113[13] & ~auVar114[13];
            auVar99[14] = auVar113[14] & ~auVar114[14];
            auVar99[15] = auVar113[15] & ~auVar114[15];
            auVar115._0_4_ = auVar134._0_4_ - fVar132;
            auVar115._4_4_ = auVar134._4_4_ - fVar171;
            auVar115._8_4_ = auVar134._8_4_ - fVar172;
            auVar115._12_4_ = auVar134._12_4_ - fVar173;
            auVar113 = a64_TBL(ZEXT816(0),auVar99,auVar55);
            auVar114 = NEON_sshl(auVar115,auVar251,4);
            auVar188 = NEON_cmeq(auVar113,0,2);
            auVar116[0] = auVar114[0] | auVar188[0];
            auVar116[1] = auVar114[1] | auVar188[1];
            auVar116[2] = auVar114[2] | auVar188[2];
            auVar116[3] = auVar114[3] | auVar188[3];
            auVar116[4] = auVar114[4] | auVar188[4];
            auVar116[5] = auVar114[5] | auVar188[5];
            auVar116[6] = auVar114[6] | auVar188[6];
            auVar116[7] = auVar114[7] | auVar188[7];
            auVar116[8] = auVar114[8] | auVar188[8];
            auVar116[9] = auVar114[9] | auVar188[9];
            auVar116[10] = auVar114[10] | auVar188[10];
            auVar116[11] = auVar114[11] | auVar188[11];
            auVar116[12] = auVar114[12] | auVar188[12];
            auVar116[13] = auVar114[13] | auVar188[13];
            auVar116[14] = auVar114[14] | auVar188[14];
            auVar116[15] = auVar114[15] | auVar188[15];
            auVar189._0_4_ = (auVar97._0_4_ + auVar97._0_4_) - (fVar132 + auVar134._0_4_);
            auVar189._4_4_ = (auVar97._4_4_ + auVar97._4_4_) - (fVar171 + auVar134._4_4_);
            auVar189._8_4_ = (auVar97._8_4_ + auVar97._8_4_) - (fVar172 + auVar134._8_4_);
            auVar189._12_4_ = (auVar97._12_4_ + auVar97._12_4_) - (fVar173 + auVar134._12_4_);
            auVar100[0] = auVar113[0] & ~auVar116[0];
            auVar100[1] = auVar113[1] & ~auVar116[1];
            auVar100[2] = auVar113[2] & ~auVar116[2];
            auVar100[3] = auVar113[3] & ~auVar116[3];
            auVar100[4] = auVar113[4] & ~auVar116[4];
            auVar100[5] = auVar113[5] & ~auVar116[5];
            auVar100[6] = auVar113[6] & ~auVar116[6];
            auVar100[7] = auVar113[7] & ~auVar116[7];
            auVar100[8] = auVar113[8] & ~auVar116[8];
            auVar100[9] = auVar113[9] & ~auVar116[9];
            auVar100[10] = auVar113[10] & ~auVar116[10];
            auVar100[11] = auVar113[11] & ~auVar116[11];
            auVar100[12] = auVar113[12] & ~auVar116[12];
            auVar100[13] = auVar113[13] & ~auVar116[13];
            auVar100[14] = auVar113[14] & ~auVar116[14];
            auVar100[15] = auVar113[15] & ~auVar116[15];
            auVar114 = NEON_sshl(auVar189,auVar251,4);
            auVar188 = NEON_cmeq(auVar100,auVar252,4);
            auVar113 = *(undefined (*) [16])(puVar10 + 4);
            auVar190[0] = (auVar114[0] | auVar188[0]) & ~auVar116[0];
            auVar190[1] = (auVar114[1] | auVar188[1]) & ~auVar116[1];
            auVar190[2] = (auVar114[2] | auVar188[2]) & ~auVar116[2];
            auVar190[3] = (auVar114[3] | auVar188[3]) & ~auVar116[3];
            auVar190[4] = (auVar114[4] | auVar188[4]) & ~auVar116[4];
            auVar190[5] = (auVar114[5] | auVar188[5]) & ~auVar116[5];
            auVar190[6] = (auVar114[6] | auVar188[6]) & ~auVar116[6];
            auVar190[7] = (auVar114[7] | auVar188[7]) & ~auVar116[7];
            auVar190[8] = (auVar114[8] | auVar188[8]) & ~auVar116[8];
            auVar190[9] = (auVar114[9] | auVar188[9]) & ~auVar116[9];
            auVar190[10] = (auVar114[10] | auVar188[10]) & ~auVar116[10];
            auVar190[11] = (auVar114[11] | auVar188[11]) & ~auVar116[11];
            auVar190[12] = (auVar114[12] | auVar188[12]) & ~auVar116[12];
            auVar190[13] = (auVar114[13] | auVar188[13]) & ~auVar116[13];
            auVar190[14] = (auVar114[14] | auVar188[14]) & ~auVar116[14];
            auVar190[15] = (auVar114[15] | auVar188[15]) & ~auVar116[15];
            auVar114 = NEON_cmlt(auVar116,0,4);
            auVar188 = NEON_cmlt(auVar190,0,4);
            auVar114 = NEON_bsl(auVar114,auVar97,auVar134,1);
            auVar101[0] = auVar113[0] & ~auVar190[0] | auVar100[0];
            auVar101[1] = auVar113[1] & ~auVar190[1] | auVar100[1];
            auVar101[2] = auVar113[2] & ~auVar190[2] | auVar100[2];
            auVar101[3] = auVar113[3] & ~auVar190[3] | auVar100[3];
            auVar101[4] = auVar113[4] & ~auVar190[4] | auVar100[4];
            auVar101[5] = auVar113[5] & ~auVar190[5] | auVar100[5];
            auVar101[6] = auVar113[6] & ~auVar190[6] | auVar100[6];
            auVar101[7] = auVar113[7] & ~auVar190[7] | auVar100[7];
            auVar101[8] = auVar113[8] & ~auVar190[8] | auVar100[8];
            auVar101[9] = auVar113[9] & ~auVar190[9] | auVar100[9];
            auVar101[10] = auVar113[10] & ~auVar190[10] | auVar100[10];
            auVar101[11] = auVar113[11] & ~auVar190[11] | auVar100[11];
            auVar101[12] = auVar113[12] & ~auVar190[12] | auVar100[12];
            auVar101[13] = auVar113[13] & ~auVar190[13] | auVar100[13];
            auVar101[14] = auVar113[14] & ~auVar190[14] | auVar100[14];
            auVar101[15] = auVar113[15] & ~auVar190[15] | auVar100[15];
            auVar97 = NEON_bif(auVar134,auVar97,auVar188,1);
            auVar134 = NEON_cmeq(auVar101,auVar252,4);
            auVar97 = NEON_fmin(auVar114,auVar97,4);
            auVar113 = NEON_bsl(auVar134,auVar256,auVar97,1);
            auVar23._12_4_ = fVar173;
            auVar23._0_12_ = *pauVar16;
            auVar97 = NEON_bif(auVar97,auVar23,auVar134,1);
            puVar10[1] = auVar97._8_8_;
            *puVar10 = auVar97._0_8_;
            puVar10[3] = auVar113._8_8_;
            puVar10[2] = auVar113._0_8_;
            lVar61 = *(long *)(this + 0x138) + lVar59;
            *(byte *)(lVar61 + 0x30) = auVar101[8] & ~auVar134[8];
            *(byte *)(lVar61 + 0x31) = auVar101[9] & ~auVar134[9];
            *(byte *)(lVar61 + 0x32) = auVar101[10] & ~auVar134[10];
            *(byte *)(lVar61 + 0x33) = auVar101[11] & ~auVar134[11];
            *(byte *)(lVar61 + 0x34) = auVar101[12] & ~auVar134[12];
            *(byte *)(lVar61 + 0x35) = auVar101[13] & ~auVar134[13];
            *(byte *)(lVar61 + 0x36) = auVar101[14] & ~auVar134[14];
            *(byte *)(lVar61 + 0x37) = auVar101[15] & ~auVar134[15];
            *(byte *)(lVar61 + 0x20) = auVar101[0] & ~auVar134[0];
            *(byte *)(lVar61 + 0x21) = auVar101[1] & ~auVar134[1];
            *(byte *)(lVar61 + 0x22) = auVar101[2] & ~auVar134[2];
            *(byte *)(lVar61 + 0x23) = auVar101[3] & ~auVar134[3];
            *(byte *)(lVar61 + 0x24) = auVar101[4] & ~auVar134[4];
            *(byte *)(lVar61 + 0x25) = auVar101[5] & ~auVar134[5];
            *(byte *)(lVar61 + 0x26) = auVar101[6] & ~auVar134[6];
            *(byte *)(lVar61 + 0x27) = auVar101[7] & ~auVar134[7];
          }
          if (iVar131 + param_3 <= lVar58) break;
          fVar89 = param_12 + fVar89;
          fVar127 = param_12 + fVar127;
          fVar169 = param_12 + fVar169;
          fVar170 = param_12 + fVar170;
          auVar34[8] = 0x20;
          auVar34._0_8_ = 0x2000000020;
          auVar34._9_3_ = 0;
          auVar34[12] = 0x20;
          auVar34._13_3_ = 0;
          auVar187 = NEON_uqsub(auVar187,auVar34,2);
          lVar59 = lVar59 + 0x30;
          auVar35[8] = 0x20;
          auVar35._0_8_ = 0x2000000020;
          auVar35._9_3_ = 0;
          auVar35[12] = 0x20;
          auVar35._13_3_ = 0;
          auVar94 = NEON_uqsub(auVar94,auVar35,2);
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        iVar163 = auVar108._4_4_;
        iVar175 = auVar108._8_4_;
        iVar176 = auVar108._12_4_;
        iVar255 = iVar255 + uVar1;
        iVar254 = auVar202._4_4_;
        iVar174 = auVar202._8_4_;
        iVar162 = auVar202._12_4_;
        auVar102._0_4_ = local_90 - iVar148;
        auVar102._4_4_ = iStack_8c - iVar148;
        auVar102._8_4_ = iVar149 - iVar148;
        auVar102._12_4_ = iVar161 - iVar148;
        auVar135._0_4_ = CONCAT13(uVar215,CONCAT12(uVar214,CONCAT11(uVar213,uVar212))) - local_80;
        auVar135._4_4_ = CONCAT13(uVar219,CONCAT12(uVar218,CONCAT11(uVar217,uVar216))) - iStack_7c;
        auVar135._8_4_ = CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220))) - iVar17;
        auVar135._12_4_ = CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224))) - iVar17;
        auVar94 = *(undefined (*) [16])param_11;
        auVar187 = NEON_sshl(auVar102,auVar251,4);
        fVar89 = param_13 + auVar94._0_4_;
        fVar127 = param_13 + auVar94._4_4_;
        fVar169 = param_13 + auVar94._8_4_;
        fVar170 = param_13 + auVar94._12_4_;
        auVar94 = NEON_sshl(auVar135,auVar251,4);
        local_90 = CONCAT13(bVar65 & auVar187[3],
                            CONCAT12(bVar64 & auVar187[2],
                                     CONCAT11(bVar63 & auVar187[1],bVar62 & auVar187[0])));
        auVar200._0_8_ =
             CONCAT17(bVar65 & auVar187[7],
                      CONCAT16(bVar64 & auVar187[6],
                               CONCAT15(bVar63 & auVar187[5],CONCAT14(bVar62 & auVar187[4],local_90)
                                       )));
        auVar200[8] = bVar62 & auVar187[8];
        auVar200[9] = bVar63 & auVar187[9];
        auVar200[10] = bVar64 & auVar187[10];
        auVar200[11] = bVar65 & auVar187[11];
        auVar203[12] = bVar62 & auVar187[12];
        auVar203._0_12_ = auVar200;
        auVar203[13] = bVar63 & auVar187[13];
        auVar203[14] = bVar64 & auVar187[14];
        auVar203[15] = bVar65 & auVar187[15];
        iVar131 = CONCAT13(bVar182 & auVar187[3],
                           CONCAT12(bVar181 & auVar187[2],
                                    CONCAT11(bVar180 & auVar187[1],bVar179 & auVar187[0])));
        auVar110._0_8_ =
             CONCAT17(bVar182 & auVar187[7],
                      CONCAT16(bVar181 & auVar187[6],
                               CONCAT15(bVar180 & auVar187[5],
                                        CONCAT14(bVar179 & auVar187[4],iVar131))));
        auVar110[8] = bVar179 & auVar187[8];
        auVar110[9] = bVar180 & auVar187[9];
        auVar110[10] = bVar181 & auVar187[10];
        auVar110[11] = bVar182 & auVar187[11];
        auVar117[12] = bVar179 & auVar187[12];
        auVar117._0_12_ = auVar110;
        auVar117[13] = bVar180 & auVar187[13];
        auVar117[14] = bVar181 & auVar187[14];
        auVar117[15] = bVar182 & auVar187[15];
        *(ulong *)(param_11 + 8) = CONCAT44(fVar170,fVar169);
        *(ulong *)param_11 = CONCAT44(fVar127,fVar89);
        local_90 = local_90 + auVar102._0_4_;
        iStack_8c = (int)((ulong)auVar200._0_8_ >> 0x20) + auVar102._4_4_;
        local_80 = auVar200._8_4_ + auVar102._8_4_;
        iStack_7c = auVar203._12_4_ + auVar102._12_4_;
        auVar108._0_4_ = iVar147 + auVar108._0_4_ + iVar131;
        auVar108._4_4_ = iVar147 + iVar163 + (int)((ulong)auVar110._0_8_ >> 0x20);
        auVar108._8_4_ = iVar147 + iVar175 + auVar110._8_4_;
        auVar108._12_4_ = iVar147 + iVar176 + auVar117._12_4_;
        iVar131 = CONCAT13(bVar130 & auVar94[3],
                           CONCAT12(bVar129 & auVar94[2],
                                    CONCAT11(bVar128 & auVar94[1],bVar126 & auVar94[0])));
        auVar91._0_8_ =
             CONCAT17(bVar130 & auVar94[7],
                      CONCAT16(bVar129 & auVar94[6],
                               CONCAT15(bVar128 & auVar94[5],CONCAT14(bVar126 & auVar94[4],iVar131))
                              ));
        auVar91[8] = bVar126 & auVar94[8];
        auVar91[9] = bVar128 & auVar94[9];
        auVar91[10] = bVar129 & auVar94[10];
        auVar91[11] = bVar130 & auVar94[11];
        auVar103[12] = bVar126 & auVar94[12];
        auVar103._0_12_ = auVar91;
        auVar103[13] = bVar128 & auVar94[13];
        auVar103[14] = bVar129 & auVar94[14];
        auVar103[15] = bVar130 & auVar94[15];
        iVar163 = CONCAT13(bVar167 & auVar94[3],
                           CONCAT12(bVar166 & auVar94[2],
                                    CONCAT11(bVar165 & auVar94[1],bVar164 & auVar94[0])));
        auVar208._0_8_ =
             CONCAT17(bVar167 & auVar94[7],
                      CONCAT16(bVar166 & auVar94[6],
                               CONCAT15(bVar165 & auVar94[5],CONCAT14(bVar164 & auVar94[4],iVar163))
                              ));
        auVar208[8] = bVar164 & auVar94[8];
        auVar208[9] = bVar165 & auVar94[9];
        auVar208[10] = bVar166 & auVar94[10];
        auVar208[11] = bVar167 & auVar94[11];
        auVar209[12] = bVar164 & auVar94[12];
        auVar209._0_12_ = auVar208;
        auVar209[13] = bVar165 & auVar94[13];
        auVar209[14] = bVar166 & auVar94[14];
        auVar209[15] = bVar167 & auVar94[15];
        iVar131 = iVar131 + auVar135._0_4_;
        uVar212 = (undefined)iVar131;
        uVar213 = (undefined)((uint)iVar131 >> 8);
        uVar214 = (undefined)((uint)iVar131 >> 0x10);
        uVar215 = (undefined)((uint)iVar131 >> 0x18);
        iVar131 = (int)((ulong)auVar91._0_8_ >> 0x20) + auVar135._4_4_;
        uVar216 = (undefined)iVar131;
        uVar217 = (undefined)((uint)iVar131 >> 8);
        uVar218 = (undefined)((uint)iVar131 >> 0x10);
        uVar219 = (undefined)((uint)iVar131 >> 0x18);
        iVar131 = auVar91._8_4_ + auVar135._8_4_;
        uVar220 = (undefined)iVar131;
        uVar221 = (undefined)((uint)iVar131 >> 8);
        uVar222 = (undefined)((uint)iVar131 >> 0x10);
        uVar223 = (undefined)((uint)iVar131 >> 0x18);
        iVar131 = auVar103._12_4_ + auVar135._12_4_;
        uVar224 = (undefined)iVar131;
        uVar225 = (undefined)((uint)iVar131 >> 8);
        uVar226 = (undefined)((uint)iVar131 >> 0x10);
        uVar227 = (undefined)((uint)iVar131 >> 0x18);
        auVar202._0_4_ = iVar146 + auVar202._0_4_ + iVar163;
        auVar202._4_4_ = iVar146 + iVar254 + (int)((ulong)auVar208._0_8_ >> 0x20);
        auVar202._8_4_ = iVar146 + iVar174 + auVar208._8_4_;
        auVar202._12_4_ = iVar146 + iVar162 + auVar209._12_4_;
      }
    }
  }
  else {
    fVar89 = *pfVar2;
    iVar254 = *piVar6;
    iVar174 = *piVar7;
    iVar131 = param_5;
    if (param_4 <= param_5) {
      iVar131 = param_4;
    }
    iVar175 = *piVar5;
    bVar88 = (byte)iVar175;
    bVar244 = (byte)((uint)iVar175 >> 8);
    bVar245 = (byte)((uint)iVar175 >> 0x10);
    bVar246 = (byte)((uint)iVar175 >> 0x18);
    uVar18 = *puVar4;
    bVar247 = (byte)uVar18;
    bVar248 = (byte)((uint)uVar18 >> 8);
    bVar249 = (byte)((uint)uVar18 >> 0x10);
    bVar250 = (byte)((uint)uVar18 >> 0x18);
    iVar163 = *piVar9;
    uVar11 = iVar163 + 1;
    iVar176 = MP_INT_ABS((int)(fVar89 * 128.0));
    iVar177 = MP_INT_ABS((int)(fVar89 * 384.0));
    iVar66 = MP_INT_ABS((int)(fVar89 * 640.0));
    iVar90 = MP_INT_ABS((int)(fVar89 * 896.0));
    iVar162 = (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) +
              *(int *)(param_6 + (ulong)param_1 * 4) + 0x2000;
    uVar13 = param_2 - 1;
    auVar188._0_4_ = iVar174 + iVar254 * -0x80 + iVar176 * iVar175;
    auVar188._4_4_ = iVar174 + iVar254 * -0x180 + iVar177 * iVar175;
    auVar188._8_4_ = iVar174 + iVar254 * -0x280 + iVar66 * iVar175;
    auVar188._12_4_ = iVar174 + iVar254 * -0x380 + iVar90 * iVar175;
    iVar254 = *piVar3;
    auVar187 = NEON_sshl(auVar188,auVar134,4);
    iVar174 = iVar254 + (int)(fVar89 * 128.0) +
              CONCAT13(auVar187[3] & bVar250,
                       CONCAT12(auVar187[2] & bVar249,
                                CONCAT11(auVar187[1] & bVar248,auVar187[0] & bVar247)));
    uVar228 = (undefined)iVar174;
    uVar229 = (undefined)((uint)iVar174 >> 8);
    uVar230 = (undefined)((uint)iVar174 >> 0x10);
    uVar231 = (undefined)((uint)iVar174 >> 0x18);
    iVar174 = iVar254 + (int)(fVar89 * 384.0) +
              CONCAT13(auVar187[7] & bVar250,
                       CONCAT12(auVar187[6] & bVar249,
                                CONCAT11(auVar187[5] & bVar248,auVar187[4] & bVar247)));
    uVar232 = (undefined)iVar174;
    uVar233 = (undefined)((uint)iVar174 >> 8);
    uVar234 = (undefined)((uint)iVar174 >> 0x10);
    uVar235 = (undefined)((uint)iVar174 >> 0x18);
    iVar174 = iVar254 + (int)(fVar89 * 640.0) +
              CONCAT13(auVar187[11] & bVar250,
                       CONCAT12(auVar187[10] & bVar249,
                                CONCAT11(auVar187[9] & bVar248,auVar187[8] & bVar247)));
    uVar236 = (undefined)iVar174;
    uVar237 = (undefined)((uint)iVar174 >> 8);
    uVar238 = (undefined)((uint)iVar174 >> 0x10);
    uVar239 = (undefined)((uint)iVar174 >> 0x18);
    iVar254 = iVar254 + (int)(fVar89 * 896.0) +
              CONCAT13(auVar187[15] & bVar250,
                       CONCAT12(auVar187[14] & bVar249,
                                CONCAT11(auVar187[13] & bVar248,auVar187[12] & bVar247)));
    uVar240 = (undefined)iVar254;
    uVar241 = (undefined)((uint)iVar254 >> 8);
    uVar242 = (undefined)((uint)iVar254 >> 0x10);
    uVar243 = (undefined)((uint)iVar254 >> 0x18);
    if (param_3 < iVar131) {
      iVar174 = CONCAT13(auVar187[3] & bVar246,
                         CONCAT12(auVar187[2] & bVar245,
                                  CONCAT11(auVar187[1] & bVar244,auVar187[0] & bVar88)));
      auVar168._0_8_ =
           CONCAT17(auVar187[7] & bVar246,
                    CONCAT16(auVar187[6] & bVar245,
                             CONCAT15(auVar187[5] & bVar244,CONCAT14(auVar187[4] & bVar88,iVar174)))
                   );
      auVar168[8] = auVar187[8] & bVar88;
      auVar168[9] = auVar187[9] & bVar244;
      auVar168[10] = auVar187[10] & bVar245;
      auVar168[11] = auVar187[11] & bVar246;
      auVar153[12] = auVar187[12] & bVar88;
      auVar153._0_12_ = auVar168;
      auVar153[13] = auVar187[13] & bVar244;
      auVar153[14] = auVar187[14] & bVar245;
      auVar153[15] = auVar187[15] & bVar246;
      iVar254 = *piVar8;
      auVar253._8_4_ = 0xfffffff8;
      auVar253._0_8_ = 0xfffffff8fffffff8;
      auVar253._12_4_ = 0xfffffff8;
      fVar169 = (float)*(undefined8 *)(param_11 + 8);
      fVar170 = (float)((ulong)*(undefined8 *)(param_11 + 8) >> 0x20);
      fVar89 = (float)*(undefined8 *)param_11;
      fVar127 = (float)((ulong)*(undefined8 *)param_11 >> 0x20);
      auVar257._8_4_ = 0x20;
      auVar257._0_8_ = 0x2000000020;
      auVar257._12_4_ = 0x20;
      iVar174 = auVar188._0_4_ + iVar174;
      iVar175 = auVar188._4_4_ + (int)((ulong)auVar168._0_8_ >> 0x20);
      iVar176 = auVar188._8_4_ + auVar168._8_4_;
      iVar177 = auVar188._12_4_ + auVar153._12_4_;
      auVar260._8_4_ = 0xffffffe1;
      auVar260._0_8_ = 0xffffffe1ffffffe1;
      auVar260._12_4_ = 0xffffffe1;
      auVar121._8_8_ = 0xffffffffffffffff;
      auVar121._0_8_ = 0xffffffffffffffff;
      do {
        uVar12 = iVar60 >> 0xd;
        iVar60 = iVar60 + uVar15;
        uVar14 = uVar13;
        if ((int)uVar12 <= (int)uVar13) {
          uVar14 = uVar12;
        }
        uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        auVar210[1] = uVar229;
        auVar210[0] = uVar228;
        auVar210[2] = uVar230;
        auVar210[3] = uVar231;
        auVar210[4] = uVar232;
        auVar210[5] = uVar233;
        auVar210[6] = uVar234;
        auVar210[7] = uVar235;
        auVar210[8] = uVar236;
        auVar210[9] = uVar237;
        auVar210[10] = uVar238;
        auVar210[11] = uVar239;
        auVar210[12] = uVar240;
        auVar210[13] = uVar241;
        auVar210[14] = uVar242;
        auVar210[15] = uVar243;
        auVar187 = NEON_sshl(auVar210,auVar253,4);
        lVar58 = (long)(int)(uVar14 + param_3);
        auVar97 = NEON_sshl(auVar202,auVar253,4);
        lVar59 = (lVar58 + (long)(int)(uVar14 + param_3) * 2) * 0x10;
        auVar178._0_4_ = auVar187._0_4_ + uVar14 * -0x20;
        auVar178._4_4_ = auVar187._4_4_ + uVar14 * -0x20;
        auVar178._8_4_ = auVar187._8_4_ + uVar14 * -0x20;
        auVar178._12_4_ = auVar187._12_4_ + uVar14 * -0x20;
        iVar66 = param_2;
        if (iVar162 >> 0xd <= param_2) {
          iVar66 = iVar162 >> 0xd;
        }
        auVar136._0_4_ = auVar97._0_4_ + uVar14 * -0x20;
        auVar136._4_4_ = auVar97._4_4_ + uVar14 * -0x20;
        auVar136._8_4_ = auVar97._8_4_ + uVar14 * -0x20;
        auVar136._12_4_ = auVar97._12_4_ + uVar14 * -0x20;
        fVar132 = (float)uVar14 * param_12;
        auVar187 = NEON_smax(auVar178,ZEXT816(0),4);
        auVar97 = NEON_smax(auVar136,ZEXT816(0),4);
        fVar89 = fVar132 + fVar89;
        fVar127 = fVar132 + fVar127;
        fVar169 = fVar132 + fVar169;
        fVar132 = fVar132 + fVar170;
        while( true ) {
          lVar58 = lVar58 + 1;
          auVar113 = *(undefined (*) [16])param_10;
          pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar59);
          fVar172 = (float)*(undefined8 *)(*pauVar16 + 8);
          fVar173 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
          fVar170 = (float)*(undefined8 *)*pauVar16;
          fVar171 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
          auVar137._0_4_ = auVar113._0_4_ - fVar170;
          auVar137._4_4_ = auVar113._4_4_ - fVar171;
          auVar137._8_4_ = auVar113._8_4_ - fVar172;
          auVar137._12_4_ = auVar113._12_4_ - fVar173;
          auVar113 = NEON_cmlt(auVar137,0,4);
          auVar138[0] = auVar113[0] & auVar94[0];
          auVar138[1] = auVar113[1] & auVar94[1];
          auVar138[2] = auVar113[2] & auVar94[2];
          auVar138[3] = auVar113[3] & auVar94[3];
          auVar138[4] = auVar113[4] & auVar94[4];
          auVar138[5] = auVar113[5] & auVar94[5];
          auVar138[6] = auVar113[6] & auVar94[6];
          auVar138[7] = auVar113[7] & auVar94[7];
          auVar138[8] = auVar113[8] & auVar94[8];
          auVar138[9] = auVar113[9] & auVar94[9];
          auVar138[10] = auVar113[10] & auVar94[10];
          auVar138[11] = auVar113[11] & auVar94[11];
          auVar138[12] = auVar113[12] & auVar94[12];
          auVar138[13] = auVar113[13] & auVar94[13];
          auVar138[14] = auVar113[14] & auVar94[14];
          auVar138[15] = auVar113[15] & auVar94[15];
          auVar113 = NEON_ext(auVar138,auVar138,8,1);
          if (CONCAT13(auVar113[3] | auVar138[3] | auVar113[7] | auVar138[7],
                       CONCAT12(auVar113[2] | auVar138[2] | auVar113[6] | auVar138[6],
                                CONCAT11(auVar113[1] | auVar138[1] | auVar113[5] | auVar138[5],
                                         auVar113[0] | auVar138[0] | auVar113[4] | auVar138[4]))) !=
              0xf) {
            auVar113 = NEON_smin(auVar97,auVar257,4);
            auVar134 = NEON_smin(auVar187,auVar257,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar59);
            auVar25._4_4_ = fVar127;
            auVar25._0_4_ = fVar89;
            auVar25._8_4_ = fVar169;
            auVar25._12_4_ = fVar132;
            auVar188 = NEON_fmax(auVar25,*(undefined (*) [16])param_9,4);
            auVar114 = NEON_smax(auVar113,ZEXT816(0),4);
            auVar113 = *(undefined (*) [16])(puVar10 + 2);
            auVar134 = NEON_smax(auVar134,ZEXT816(0),4);
            auVar114 = NEON_sshl(auVar121,auVar114,4);
            auVar134 = NEON_sshl(auVar121,auVar134,4);
            auVar139[0] = auVar114[0] & ~auVar134[0];
            auVar139[1] = auVar114[1] & ~auVar134[1];
            auVar139[2] = auVar114[2] & ~auVar134[2];
            auVar139[3] = auVar114[3] & ~auVar134[3];
            auVar139[4] = auVar114[4] & ~auVar134[4];
            auVar139[5] = auVar114[5] & ~auVar134[5];
            auVar139[6] = auVar114[6] & ~auVar134[6];
            auVar139[7] = auVar114[7] & ~auVar134[7];
            auVar139[8] = auVar114[8] & ~auVar134[8];
            auVar139[9] = auVar114[9] & ~auVar134[9];
            auVar139[10] = auVar114[10] & ~auVar134[10];
            auVar139[11] = auVar114[11] & ~auVar134[11];
            auVar139[12] = auVar114[12] & ~auVar134[12];
            auVar139[13] = auVar114[13] & ~auVar134[13];
            auVar139[14] = auVar114[14] & ~auVar134[14];
            auVar139[15] = auVar114[15] & ~auVar134[15];
            auVar152._0_4_ = auVar188._0_4_ - fVar170;
            auVar152._4_4_ = auVar188._4_4_ - fVar171;
            auVar152._8_4_ = auVar188._8_4_ - fVar172;
            auVar152._12_4_ = auVar188._12_4_ - fVar173;
            auVar70._0_4_ = (auVar113._0_4_ + auVar113._0_4_) - (fVar170 + auVar188._0_4_);
            auVar70._4_4_ = (auVar113._4_4_ + auVar113._4_4_) - (fVar171 + auVar188._4_4_);
            auVar70._8_4_ = (auVar113._8_4_ + auVar113._8_4_) - (fVar172 + auVar188._8_4_);
            auVar70._12_4_ = (auVar113._12_4_ + auVar113._12_4_) - (fVar173 + auVar188._12_4_);
            auVar21._12_4_ = 0xf0b0703;
            auVar21._0_12_ = auVar93;
            auVar114 = a64_TBL(ZEXT816(0),auVar139,auVar21);
            auVar153 = NEON_sshl(auVar152,auVar260,4);
            auVar134 = NEON_sshl(auVar70,auVar260,4);
            auVar210 = NEON_cmeq(auVar114,0,2);
            auVar154[0] = auVar153[0] | auVar210[0];
            auVar154[1] = auVar153[1] | auVar210[1];
            auVar154[2] = auVar153[2] | auVar210[2];
            auVar154[3] = auVar153[3] | auVar210[3];
            auVar154[4] = auVar153[4] | auVar210[4];
            auVar154[5] = auVar153[5] | auVar210[5];
            auVar154[6] = auVar153[6] | auVar210[6];
            auVar154[7] = auVar153[7] | auVar210[7];
            auVar154[8] = auVar153[8] | auVar210[8];
            auVar154[9] = auVar153[9] | auVar210[9];
            auVar154[10] = auVar153[10] | auVar210[10];
            auVar154[11] = auVar153[11] | auVar210[11];
            auVar154[12] = auVar153[12] | auVar210[12];
            auVar154[13] = auVar153[13] | auVar210[13];
            auVar154[14] = auVar153[14] | auVar210[14];
            auVar154[15] = auVar153[15] | auVar210[15];
            auVar140[0] = auVar114[0] & ~auVar154[0];
            auVar140[1] = auVar114[1] & ~auVar154[1];
            auVar140[2] = auVar114[2] & ~auVar154[2];
            auVar140[3] = auVar114[3] & ~auVar154[3];
            auVar140[4] = auVar114[4] & ~auVar154[4];
            auVar140[5] = auVar114[5] & ~auVar154[5];
            auVar140[6] = auVar114[6] & ~auVar154[6];
            auVar140[7] = auVar114[7] & ~auVar154[7];
            auVar140[8] = auVar114[8] & ~auVar154[8];
            auVar140[9] = auVar114[9] & ~auVar154[9];
            auVar140[10] = auVar114[10] & ~auVar154[10];
            auVar140[11] = auVar114[11] & ~auVar154[11];
            auVar140[12] = auVar114[12] & ~auVar154[12];
            auVar140[13] = auVar114[13] & ~auVar154[13];
            auVar140[14] = auVar114[14] & ~auVar154[14];
            auVar140[15] = auVar114[15] & ~auVar154[15];
            auVar153 = NEON_cmeq(auVar140,auVar121,4);
            auVar114 = *(undefined (*) [16])(puVar10 + 4);
            auVar71[0] = (auVar134[0] | auVar153[0]) & ~auVar154[0];
            auVar71[1] = (auVar134[1] | auVar153[1]) & ~auVar154[1];
            auVar71[2] = (auVar134[2] | auVar153[2]) & ~auVar154[2];
            auVar71[3] = (auVar134[3] | auVar153[3]) & ~auVar154[3];
            auVar71[4] = (auVar134[4] | auVar153[4]) & ~auVar154[4];
            auVar71[5] = (auVar134[5] | auVar153[5]) & ~auVar154[5];
            auVar71[6] = (auVar134[6] | auVar153[6]) & ~auVar154[6];
            auVar71[7] = (auVar134[7] | auVar153[7]) & ~auVar154[7];
            auVar71[8] = (auVar134[8] | auVar153[8]) & ~auVar154[8];
            auVar71[9] = (auVar134[9] | auVar153[9]) & ~auVar154[9];
            auVar71[10] = (auVar134[10] | auVar153[10]) & ~auVar154[10];
            auVar71[11] = (auVar134[11] | auVar153[11]) & ~auVar154[11];
            auVar71[12] = (auVar134[12] | auVar153[12]) & ~auVar154[12];
            auVar71[13] = (auVar134[13] | auVar153[13]) & ~auVar154[13];
            auVar71[14] = (auVar134[14] | auVar153[14]) & ~auVar154[14];
            auVar71[15] = (auVar134[15] | auVar153[15]) & ~auVar154[15];
            auVar153 = NEON_cmlt(auVar154,0,4);
            auVar134 = NEON_cmlt(auVar71,0,4);
            auVar153 = NEON_bsl(auVar153,auVar113,auVar188,1);
            auVar141[0] = auVar114[0] & ~auVar71[0] | auVar140[0];
            auVar141[1] = auVar114[1] & ~auVar71[1] | auVar140[1];
            auVar141[2] = auVar114[2] & ~auVar71[2] | auVar140[2];
            auVar141[3] = auVar114[3] & ~auVar71[3] | auVar140[3];
            auVar141[4] = auVar114[4] & ~auVar71[4] | auVar140[4];
            auVar141[5] = auVar114[5] & ~auVar71[5] | auVar140[5];
            auVar141[6] = auVar114[6] & ~auVar71[6] | auVar140[6];
            auVar141[7] = auVar114[7] & ~auVar71[7] | auVar140[7];
            auVar141[8] = auVar114[8] & ~auVar71[8] | auVar140[8];
            auVar141[9] = auVar114[9] & ~auVar71[9] | auVar140[9];
            auVar141[10] = auVar114[10] & ~auVar71[10] | auVar140[10];
            auVar141[11] = auVar114[11] & ~auVar71[11] | auVar140[11];
            auVar141[12] = auVar114[12] & ~auVar71[12] | auVar140[12];
            auVar141[13] = auVar114[13] & ~auVar71[13] | auVar140[13];
            auVar141[14] = auVar114[14] & ~auVar71[14] | auVar140[14];
            auVar141[15] = auVar114[15] & ~auVar71[15] | auVar140[15];
            auVar113 = NEON_bsl(auVar134,auVar188,auVar113,1);
            auVar119._8_4_ = 0x7f7fffff;
            auVar119._0_8_ = 0x7f7fffff7f7fffff;
            auVar119._12_4_ = 0x7f7fffff;
            auVar114 = NEON_cmeq(auVar141,auVar121,4);
            auVar113 = NEON_fmin(auVar153,auVar113,4);
            auVar134 = NEON_bif(auVar119,auVar113,auVar114,1);
            auVar26._12_4_ = fVar173;
            auVar26._0_12_ = *pauVar16;
            auVar113 = NEON_bif(auVar113,auVar26,auVar114,1);
            puVar10[1] = auVar113._8_8_;
            *puVar10 = auVar113._0_8_;
            puVar10[3] = auVar134._8_8_;
            puVar10[2] = auVar134._0_8_;
            lVar61 = *(long *)(this + 0x138);
            auVar72._0_8_ =
                 CONCAT17(auVar141[7] & ~auVar114[7],
                          CONCAT16(auVar141[6] & ~auVar114[6],
                                   CONCAT15(auVar141[5] & ~auVar114[5],
                                            CONCAT14(auVar141[4] & ~auVar114[4],
                                                     CONCAT13(auVar141[3] & ~auVar114[3],
                                                              CONCAT12(auVar141[2] & ~auVar114[2],
                                                                       CONCAT11(auVar141[1] &
                                                                                ~auVar114[1],
                                                                                auVar141[0] &
                                                                                ~auVar114[0])))))));
            auVar72[8] = auVar141[8] & ~auVar114[8];
            auVar72[9] = auVar141[9] & ~auVar114[9];
            auVar72[10] = auVar141[10] & ~auVar114[10];
            auVar72[11] = auVar141[11] & ~auVar114[11];
            auVar72[12] = auVar141[12] & ~auVar114[12];
            auVar72[13] = auVar141[13] & ~auVar114[13];
            auVar72[14] = auVar141[14] & ~auVar114[14];
            auVar72[15] = auVar141[15] & ~auVar114[15];
            *(long *)(lVar61 + lVar59 + 0x28) = auVar72._8_8_;
            *(undefined8 *)(lVar61 + lVar59 + 0x20) = auVar72._0_8_;
          }
          if (iVar66 + param_3 <= lVar58) break;
          fVar89 = param_12 + fVar89;
          fVar127 = param_12 + fVar127;
          fVar169 = param_12 + fVar169;
          fVar132 = param_12 + fVar132;
          auVar187 = NEON_uqsub(auVar187,auVar257,2);
          lVar59 = lVar59 + 0x30;
          auVar97 = NEON_uqsub(auVar97,auVar257,2);
        }
        auVar68._0_4_ = iVar174 - iVar254;
        auVar68._4_4_ = iVar175 - iVar254;
        auVar68._8_4_ = iVar176 - iVar254;
        auVar68._12_4_ = iVar177 - iVar254;
        auVar187 = *(undefined (*) [16])param_11;
        iVar162 = iVar162 + uVar11;
        auVar118._0_4_ = CONCAT13(uVar215,CONCAT12(uVar214,CONCAT11(uVar213,uVar212))) - iVar17;
        auVar118._4_4_ = CONCAT13(uVar219,CONCAT12(uVar218,CONCAT11(uVar217,uVar216))) - iVar17;
        auVar118._8_4_ = CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220))) - iVar17;
        auVar118._12_4_ = CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224))) - iVar17;
        auVar97 = NEON_sshl(auVar68,auVar260,4);
        param_3 = *(int *)(this + 300) + param_3;
        iVar196 = auVar202._4_4_;
        iVar197 = auVar202._8_4_;
        iVar198 = auVar202._12_4_;
        auVar113 = NEON_sshl(auVar118,auVar260,4);
        iVar174 = CONCAT13(bVar246 & auVar97[3],
                           CONCAT12(bVar245 & auVar97[2],
                                    CONCAT11(bVar244 & auVar97[1],bVar88 & auVar97[0])));
        auVar184._0_8_ =
             CONCAT17(bVar246 & auVar97[7],
                      CONCAT16(bVar245 & auVar97[6],
                               CONCAT15(bVar244 & auVar97[5],CONCAT14(bVar88 & auVar97[4],iVar174)))
                     );
        auVar184[8] = bVar88 & auVar97[8];
        auVar184[9] = bVar244 & auVar97[9];
        auVar184[10] = bVar245 & auVar97[10];
        auVar184[11] = bVar246 & auVar97[11];
        auVar191[12] = bVar88 & auVar97[12];
        auVar191._0_12_ = auVar184;
        auVar191[13] = bVar244 & auVar97[13];
        auVar191[14] = bVar245 & auVar97[14];
        auVar191[15] = bVar246 & auVar97[15];
        iVar90 = CONCAT13(bVar250 & auVar97[3],
                          CONCAT12(bVar249 & auVar97[2],
                                   CONCAT11(bVar248 & auVar97[1],bVar247 & auVar97[0])));
        auVar92._0_8_ =
             CONCAT17(bVar250 & auVar97[7],
                      CONCAT16(bVar249 & auVar97[6],
                               CONCAT15(bVar248 & auVar97[5],CONCAT14(bVar247 & auVar97[4],iVar90)))
                     );
        auVar92[8] = bVar247 & auVar97[8];
        auVar92[9] = bVar248 & auVar97[9];
        auVar92[10] = bVar249 & auVar97[10];
        auVar92[11] = bVar250 & auVar97[11];
        auVar104[12] = bVar247 & auVar97[12];
        auVar104._0_12_ = auVar92;
        auVar104[13] = bVar248 & auVar97[13];
        auVar104[14] = bVar249 & auVar97[14];
        auVar104[15] = bVar250 & auVar97[15];
        fVar89 = param_13 + auVar187._0_4_;
        fVar127 = param_13 + auVar187._4_4_;
        fVar169 = param_13 + auVar187._8_4_;
        fVar170 = param_13 + auVar187._12_4_;
        iVar174 = iVar174 + auVar68._0_4_;
        iVar175 = (int)((ulong)auVar184._0_8_ >> 0x20) + auVar68._4_4_;
        iVar176 = auVar184._8_4_ + auVar68._8_4_;
        iVar177 = auVar191._12_4_ + auVar68._12_4_;
        iVar66 = CONCAT13(bVar130 & auVar113[3],
                          CONCAT12(bVar129 & auVar113[2],
                                   CONCAT11(bVar128 & auVar113[1],bVar126 & auVar113[0])));
        auVar67._0_8_ =
             CONCAT17(bVar130 & auVar113[7],
                      CONCAT16(bVar129 & auVar113[6],
                               CONCAT15(bVar128 & auVar113[5],CONCAT14(bVar126 & auVar113[4],iVar66)
                                       )));
        auVar67[8] = bVar126 & auVar113[8];
        auVar67[9] = bVar128 & auVar113[9];
        auVar67[10] = bVar129 & auVar113[10];
        auVar67[11] = bVar130 & auVar113[11];
        auVar69[12] = bVar126 & auVar113[12];
        auVar69._0_12_ = auVar67;
        auVar69[13] = bVar128 & auVar113[13];
        auVar69[14] = bVar129 & auVar113[14];
        auVar69[15] = bVar130 & auVar113[15];
        iVar183 = CONCAT13(bVar167 & auVar113[3],
                           CONCAT12(bVar166 & auVar113[2],
                                    CONCAT11(bVar165 & auVar113[1],bVar164 & auVar113[0])));
        auVar185._0_8_ =
             CONCAT17(bVar167 & auVar113[7],
                      CONCAT16(bVar166 & auVar113[6],
                               CONCAT15(bVar165 & auVar113[5],
                                        CONCAT14(bVar164 & auVar113[4],iVar183))));
        auVar185[8] = bVar164 & auVar113[8];
        auVar185[9] = bVar165 & auVar113[9];
        auVar185[10] = bVar166 & auVar113[10];
        auVar185[11] = bVar167 & auVar113[11];
        auVar192[12] = bVar164 & auVar113[12];
        auVar192._0_12_ = auVar185;
        auVar192[13] = bVar165 & auVar113[13];
        auVar192[14] = bVar166 & auVar113[14];
        auVar192[15] = bVar167 & auVar113[15];
        *(ulong *)(param_11 + 8) = CONCAT44(fVar170,fVar169);
        *(ulong *)param_11 = CONCAT44(fVar127,fVar89);
        iVar90 = iVar163 + CONCAT13(uVar231,CONCAT12(uVar230,CONCAT11(uVar229,uVar228))) + iVar90;
        uVar228 = (undefined)iVar90;
        uVar229 = (undefined)((uint)iVar90 >> 8);
        uVar230 = (undefined)((uint)iVar90 >> 0x10);
        uVar231 = (undefined)((uint)iVar90 >> 0x18);
        iVar90 = iVar163 + CONCAT13(uVar235,CONCAT12(uVar234,CONCAT11(uVar233,uVar232))) +
                 (int)((ulong)auVar92._0_8_ >> 0x20);
        uVar232 = (undefined)iVar90;
        uVar233 = (undefined)((uint)iVar90 >> 8);
        uVar234 = (undefined)((uint)iVar90 >> 0x10);
        uVar235 = (undefined)((uint)iVar90 >> 0x18);
        iVar90 = iVar163 + CONCAT13(uVar239,CONCAT12(uVar238,CONCAT11(uVar237,uVar236))) +
                 auVar92._8_4_;
        uVar236 = (undefined)iVar90;
        uVar237 = (undefined)((uint)iVar90 >> 8);
        uVar238 = (undefined)((uint)iVar90 >> 0x10);
        uVar239 = (undefined)((uint)iVar90 >> 0x18);
        iVar90 = iVar163 + CONCAT13(uVar243,CONCAT12(uVar242,CONCAT11(uVar241,uVar240))) +
                 auVar104._12_4_;
        uVar240 = (undefined)iVar90;
        uVar241 = (undefined)((uint)iVar90 >> 8);
        uVar242 = (undefined)((uint)iVar90 >> 0x10);
        uVar243 = (undefined)((uint)iVar90 >> 0x18);
        iVar66 = iVar66 + auVar118._0_4_;
        uVar212 = (undefined)iVar66;
        uVar213 = (undefined)((uint)iVar66 >> 8);
        uVar214 = (undefined)((uint)iVar66 >> 0x10);
        uVar215 = (undefined)((uint)iVar66 >> 0x18);
        iVar66 = (int)((ulong)auVar67._0_8_ >> 0x20) + auVar118._4_4_;
        uVar216 = (undefined)iVar66;
        uVar217 = (undefined)((uint)iVar66 >> 8);
        uVar218 = (undefined)((uint)iVar66 >> 0x10);
        uVar219 = (undefined)((uint)iVar66 >> 0x18);
        iVar66 = auVar67._8_4_ + auVar118._8_4_;
        uVar220 = (undefined)iVar66;
        uVar221 = (undefined)((uint)iVar66 >> 8);
        uVar222 = (undefined)((uint)iVar66 >> 0x10);
        uVar223 = (undefined)((uint)iVar66 >> 0x18);
        iVar66 = auVar69._12_4_ + auVar118._12_4_;
        uVar224 = (undefined)iVar66;
        uVar225 = (undefined)((uint)iVar66 >> 8);
        uVar226 = (undefined)((uint)iVar66 >> 0x10);
        uVar227 = (undefined)((uint)iVar66 >> 0x18);
        auVar202._0_4_ = iVar146 + auVar202._0_4_ + iVar183;
        auVar202._4_4_ = iVar146 + iVar196 + (int)((ulong)auVar185._0_8_ >> 0x20);
        auVar202._8_4_ = iVar146 + iVar197 + auVar185._8_4_;
        auVar202._12_4_ = iVar146 + iVar198 + auVar192._12_4_;
      } while (param_3 < iVar131);
    }
    auVar94 = _DAT_004c4480;
    if (param_3 < param_5) {
      auVar94 = *(undefined (*) [16])param_11;
      uVar11 = uVar13;
      if (iVar60 >> 0xd <= (int)uVar13) {
        uVar11 = iVar60 >> 0xd;
      }
      auVar73._8_4_ = 0xfffffff8;
      auVar73._0_8_ = 0xfffffff8fffffff8;
      auVar73._12_4_ = 0xfffffff8;
      iVar131 = param_2;
      if (iVar162 >> 0xd <= param_2) {
        iVar131 = iVar162 >> 0xd;
      }
      uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      iVar60 = iVar60 + uVar15;
      auVar31[1] = uVar229;
      auVar31[0] = uVar228;
      auVar31[2] = uVar230;
      auVar31[3] = uVar231;
      auVar31[4] = uVar232;
      auVar31[5] = uVar233;
      auVar31[6] = uVar234;
      auVar31[7] = uVar235;
      auVar31[8] = uVar236;
      auVar31[9] = uVar237;
      auVar31[10] = uVar238;
      auVar31[11] = uVar239;
      auVar31[12] = uVar240;
      auVar31[13] = uVar241;
      auVar31[14] = uVar242;
      auVar31[15] = uVar243;
      auVar97 = NEON_sshl(auVar31,auVar73,4);
      auVar56._12_4_ = _UNK_004c513c;
      auVar56._0_12_ = _DAT_004c5130;
      auVar113 = NEON_sshl(auVar108,auVar73,4);
      auVar187 = NEON_sshl(auVar202,auVar73,4);
      auVar105._0_4_ = auVar97._0_4_ + uVar11 * -0x20;
      auVar105._4_4_ = auVar97._4_4_ + uVar11 * -0x20;
      auVar105._8_4_ = auVar97._8_4_ + uVar11 * -0x20;
      auVar105._12_4_ = auVar97._12_4_ + uVar11 * -0x20;
      lVar58 = (long)(int)(uVar11 + param_3);
      fVar89 = (float)uVar11 * param_12;
      auVar120._0_4_ = auVar113._0_4_ + uVar11 * -0x20;
      auVar120._4_4_ = auVar113._4_4_ + uVar11 * -0x20;
      auVar120._8_4_ = auVar113._8_4_ + uVar11 * -0x20;
      auVar120._12_4_ = auVar113._12_4_ + uVar11 * -0x20;
      auVar74._0_4_ = auVar187._0_4_ + uVar11 * -0x20;
      auVar74._4_4_ = auVar187._4_4_ + uVar11 * -0x20;
      auVar74._8_4_ = auVar187._8_4_ + uVar11 * -0x20;
      auVar74._12_4_ = auVar187._12_4_ + uVar11 * -0x20;
      auVar187 = NEON_smax(auVar105,ZEXT216(0),4);
      lVar59 = (lVar58 + (long)(int)(uVar11 + param_3) * 2) * 0x10;
      auVar97 = NEON_smax(auVar120,ZEXT216(0),4);
      auVar113 = NEON_smax(auVar74,ZEXT216(0),4);
      auVar258._0_4_ = fVar89 + auVar94._0_4_;
      auVar258._4_4_ = fVar89 + auVar94._4_4_;
      auVar258._8_4_ = fVar89 + auVar94._8_4_;
      auVar258._12_4_ = fVar89 + auVar94._12_4_;
      auVar94._8_4_ = 0xffffffe1;
      auVar94._0_8_ = 0xffffffe1ffffffe1;
      auVar94._12_4_ = 0xffffffe1;
      while( true ) {
        lVar58 = lVar58 + 1;
        auVar114 = *(undefined (*) [16])param_10;
        pauVar16 = (undefined (*) [12])(*(long *)(this + 0x138) + lVar59);
        fVar169 = (float)*(undefined8 *)(*pauVar16 + 8);
        fVar170 = (float)((ulong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
        fVar89 = (float)*(undefined8 *)*pauVar16;
        fVar127 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
        auVar75._0_4_ = auVar114._0_4_ - fVar89;
        auVar75._4_4_ = auVar114._4_4_ - fVar127;
        auVar75._8_4_ = auVar114._8_4_ - fVar169;
        auVar75._12_4_ = auVar114._12_4_ - fVar170;
        auVar114 = NEON_cmlt(auVar75,0,4);
        bVar88 = auVar114[0] & 1;
        auVar76._0_5_ = CONCAT14(auVar114[4],(uint)bVar88) & 0x2ffffffff;
        auVar76._5_3_ = 0;
        auVar76[8] = auVar114[8] & 4;
        auVar76._9_3_ = 0;
        auVar76[12] = auVar114[12] & 8;
        auVar76._13_3_ = 0;
        auVar134 = NEON_ext(auVar76,auVar76,8,1);
        if (CONCAT13(auVar134[3] | auVar134[7],
                     CONCAT12(auVar134[2] | auVar134[6],
                              CONCAT11(auVar134[1] | auVar134[5],
                                       auVar134[0] | bVar88 | auVar134[4] | auVar114[4] & 2))) !=
            0xf) {
          auVar40[8] = 0x20;
          auVar40._0_8_ = 0x2000000020;
          auVar40._9_3_ = 0;
          auVar40[12] = 0x20;
          auVar40._13_3_ = 0;
          auVar114 = NEON_smin(auVar187,auVar40,4);
          auVar41[8] = 0x20;
          auVar41._0_8_ = 0x2000000020;
          auVar41._9_3_ = 0;
          auVar41[12] = 0x20;
          auVar41._13_3_ = 0;
          auVar134 = NEON_smin(auVar97,auVar41,4);
          puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar59);
          auVar42[8] = 0x20;
          auVar42._0_8_ = 0x2000000020;
          auVar42._9_3_ = 0;
          auVar42[12] = 0x20;
          auVar42._13_3_ = 0;
          auVar153 = NEON_smin(auVar113,auVar42,4);
          auVar114 = NEON_smax(auVar114,ZEXT216(0),4);
          auVar188 = NEON_smax(auVar134,ZEXT216(0),4);
          auVar153 = NEON_smax(auVar153,ZEXT216(0),4);
          auVar50._8_4_ = 0xffffffff;
          auVar50._0_8_ = 0xffffffffffffffff;
          auVar50._12_4_ = 0xffffffff;
          auVar134 = NEON_sshl(auVar50,auVar114,4);
          auVar51._8_4_ = 0xffffffff;
          auVar51._0_8_ = 0xffffffffffffffff;
          auVar51._12_4_ = 0xffffffff;
          auVar188 = NEON_sshl(auVar51,auVar188,4);
          auVar52._8_4_ = 0xffffffff;
          auVar52._0_8_ = 0xffffffffffffffff;
          auVar52._12_4_ = 0xffffffff;
          auVar121 = NEON_sshl(auVar52,auVar153,4);
          auVar153 = NEON_fmax(auVar258,*(undefined (*) [16])param_9,4);
          auVar114 = *(undefined (*) [16])(puVar10 + 2);
          auVar77[0] = auVar121[0] & ~(auVar188[0] | auVar134[0]);
          auVar77[1] = auVar121[1] & ~(auVar188[1] | auVar134[1]);
          auVar77[2] = auVar121[2] & ~(auVar188[2] | auVar134[2]);
          auVar77[3] = auVar121[3] & ~(auVar188[3] | auVar134[3]);
          auVar77[4] = auVar121[4] & ~(auVar188[4] | auVar134[4]);
          auVar77[5] = auVar121[5] & ~(auVar188[5] | auVar134[5]);
          auVar77[6] = auVar121[6] & ~(auVar188[6] | auVar134[6]);
          auVar77[7] = auVar121[7] & ~(auVar188[7] | auVar134[7]);
          auVar77[8] = auVar121[8] & ~(auVar188[8] | auVar134[8]);
          auVar77[9] = auVar121[9] & ~(auVar188[9] | auVar134[9]);
          auVar77[10] = auVar121[10] & ~(auVar188[10] | auVar134[10]);
          auVar77[11] = auVar121[11] & ~(auVar188[11] | auVar134[11]);
          auVar77[12] = auVar121[12] & ~(auVar188[12] | auVar134[12]);
          auVar77[13] = auVar121[13] & ~(auVar188[13] | auVar134[13]);
          auVar77[14] = auVar121[14] & ~(auVar188[14] | auVar134[14]);
          auVar77[15] = auVar121[15] & ~(auVar188[15] | auVar134[15]);
          auVar122._0_4_ = auVar153._0_4_ - fVar89;
          auVar122._4_4_ = auVar153._4_4_ - fVar127;
          auVar122._8_4_ = auVar153._8_4_ - fVar169;
          auVar122._12_4_ = auVar153._12_4_ - fVar170;
          auVar134 = a64_TBL(ZEXT816(0),auVar77,auVar56);
          auVar188 = NEON_sshl(auVar122,auVar94,4);
          auVar121 = NEON_cmeq(auVar134,0,2);
          auVar123[0] = auVar188[0] | auVar121[0];
          auVar123[1] = auVar188[1] | auVar121[1];
          auVar123[2] = auVar188[2] | auVar121[2];
          auVar123[3] = auVar188[3] | auVar121[3];
          auVar123[4] = auVar188[4] | auVar121[4];
          auVar123[5] = auVar188[5] | auVar121[5];
          auVar123[6] = auVar188[6] | auVar121[6];
          auVar123[7] = auVar188[7] | auVar121[7];
          auVar123[8] = auVar188[8] | auVar121[8];
          auVar123[9] = auVar188[9] | auVar121[9];
          auVar123[10] = auVar188[10] | auVar121[10];
          auVar123[11] = auVar188[11] | auVar121[11];
          auVar123[12] = auVar188[12] | auVar121[12];
          auVar123[13] = auVar188[13] | auVar121[13];
          auVar123[14] = auVar188[14] | auVar121[14];
          auVar123[15] = auVar188[15] | auVar121[15];
          auVar155._0_4_ = (auVar114._0_4_ + auVar114._0_4_) - (fVar89 + auVar153._0_4_);
          auVar155._4_4_ = (auVar114._4_4_ + auVar114._4_4_) - (fVar127 + auVar153._4_4_);
          auVar155._8_4_ = (auVar114._8_4_ + auVar114._8_4_) - (fVar169 + auVar153._8_4_);
          auVar155._12_4_ = (auVar114._12_4_ + auVar114._12_4_) - (fVar170 + auVar153._12_4_);
          auVar78[0] = auVar134[0] & ~auVar123[0];
          auVar78[1] = auVar134[1] & ~auVar123[1];
          auVar78[2] = auVar134[2] & ~auVar123[2];
          auVar78[3] = auVar134[3] & ~auVar123[3];
          auVar78[4] = auVar134[4] & ~auVar123[4];
          auVar78[5] = auVar134[5] & ~auVar123[5];
          auVar78[6] = auVar134[6] & ~auVar123[6];
          auVar78[7] = auVar134[7] & ~auVar123[7];
          auVar78[8] = auVar134[8] & ~auVar123[8];
          auVar78[9] = auVar134[9] & ~auVar123[9];
          auVar78[10] = auVar134[10] & ~auVar123[10];
          auVar78[11] = auVar134[11] & ~auVar123[11];
          auVar78[12] = auVar134[12] & ~auVar123[12];
          auVar78[13] = auVar134[13] & ~auVar123[13];
          auVar78[14] = auVar134[14] & ~auVar123[14];
          auVar78[15] = auVar134[15] & ~auVar123[15];
          auVar188 = NEON_sshl(auVar155,auVar94,4);
          auVar53._8_4_ = 0xffffffff;
          auVar53._0_8_ = 0xffffffffffffffff;
          auVar53._12_4_ = 0xffffffff;
          auVar121 = NEON_cmeq(auVar78,auVar53,4);
          auVar134 = *(undefined (*) [16])(puVar10 + 4);
          auVar156[0] = (auVar188[0] | auVar121[0]) & ~auVar123[0];
          auVar156[1] = (auVar188[1] | auVar121[1]) & ~auVar123[1];
          auVar156[2] = (auVar188[2] | auVar121[2]) & ~auVar123[2];
          auVar156[3] = (auVar188[3] | auVar121[3]) & ~auVar123[3];
          auVar156[4] = (auVar188[4] | auVar121[4]) & ~auVar123[4];
          auVar156[5] = (auVar188[5] | auVar121[5]) & ~auVar123[5];
          auVar156[6] = (auVar188[6] | auVar121[6]) & ~auVar123[6];
          auVar156[7] = (auVar188[7] | auVar121[7]) & ~auVar123[7];
          auVar156[8] = (auVar188[8] | auVar121[8]) & ~auVar123[8];
          auVar156[9] = (auVar188[9] | auVar121[9]) & ~auVar123[9];
          auVar156[10] = (auVar188[10] | auVar121[10]) & ~auVar123[10];
          auVar156[11] = (auVar188[11] | auVar121[11]) & ~auVar123[11];
          auVar156[12] = (auVar188[12] | auVar121[12]) & ~auVar123[12];
          auVar156[13] = (auVar188[13] | auVar121[13]) & ~auVar123[13];
          auVar156[14] = (auVar188[14] | auVar121[14]) & ~auVar123[14];
          auVar156[15] = (auVar188[15] | auVar121[15]) & ~auVar123[15];
          auVar188 = NEON_cmlt(auVar123,0,4);
          auVar121 = NEON_cmlt(auVar156,0,4);
          auVar188 = NEON_bsl(auVar188,auVar114,auVar153,1);
          auVar79[0] = auVar134[0] & ~auVar156[0] | auVar78[0];
          auVar79[1] = auVar134[1] & ~auVar156[1] | auVar78[1];
          auVar79[2] = auVar134[2] & ~auVar156[2] | auVar78[2];
          auVar79[3] = auVar134[3] & ~auVar156[3] | auVar78[3];
          auVar79[4] = auVar134[4] & ~auVar156[4] | auVar78[4];
          auVar79[5] = auVar134[5] & ~auVar156[5] | auVar78[5];
          auVar79[6] = auVar134[6] & ~auVar156[6] | auVar78[6];
          auVar79[7] = auVar134[7] & ~auVar156[7] | auVar78[7];
          auVar79[8] = auVar134[8] & ~auVar156[8] | auVar78[8];
          auVar79[9] = auVar134[9] & ~auVar156[9] | auVar78[9];
          auVar79[10] = auVar134[10] & ~auVar156[10] | auVar78[10];
          auVar79[11] = auVar134[11] & ~auVar156[11] | auVar78[11];
          auVar79[12] = auVar134[12] & ~auVar156[12] | auVar78[12];
          auVar79[13] = auVar134[13] & ~auVar156[13] | auVar78[13];
          auVar79[14] = auVar134[14] & ~auVar156[14] | auVar78[14];
          auVar79[15] = auVar134[15] & ~auVar156[15] | auVar78[15];
          auVar114 = NEON_bif(auVar153,auVar114,auVar121,1);
          auVar54._8_4_ = 0xffffffff;
          auVar54._0_8_ = 0xffffffffffffffff;
          auVar54._12_4_ = 0xffffffff;
          auVar153 = NEON_cmeq(auVar79,auVar54,4);
          auVar114 = NEON_fmin(auVar188,auVar114,4);
          auVar22._8_4_ = 0x7f7fffff;
          auVar22._0_8_ = 0x7f7fffff7f7fffff;
          auVar22._12_4_ = 0x7f7fffff;
          auVar134 = NEON_bsl(auVar153,auVar22,auVar114,1);
          auVar24._12_4_ = fVar170;
          auVar24._0_12_ = *pauVar16;
          auVar114 = NEON_bif(auVar114,auVar24,auVar153,1);
          puVar10[1] = auVar114._8_8_;
          *puVar10 = auVar114._0_8_;
          puVar10[3] = auVar134._8_8_;
          puVar10[2] = auVar134._0_8_;
          lVar61 = *(long *)(this + 0x138) + lVar59;
          *(byte *)(lVar61 + 0x30) = auVar79[8] & ~auVar153[8];
          *(byte *)(lVar61 + 0x31) = auVar79[9] & ~auVar153[9];
          *(byte *)(lVar61 + 0x32) = auVar79[10] & ~auVar153[10];
          *(byte *)(lVar61 + 0x33) = auVar79[11] & ~auVar153[11];
          *(byte *)(lVar61 + 0x34) = auVar79[12] & ~auVar153[12];
          *(byte *)(lVar61 + 0x35) = auVar79[13] & ~auVar153[13];
          *(byte *)(lVar61 + 0x36) = auVar79[14] & ~auVar153[14];
          *(byte *)(lVar61 + 0x37) = auVar79[15] & ~auVar153[15];
          *(byte *)(lVar61 + 0x20) = auVar79[0] & ~auVar153[0];
          *(byte *)(lVar61 + 0x21) = auVar79[1] & ~auVar153[1];
          *(byte *)(lVar61 + 0x22) = auVar79[2] & ~auVar153[2];
          *(byte *)(lVar61 + 0x23) = auVar79[3] & ~auVar153[3];
          *(byte *)(lVar61 + 0x24) = auVar79[4] & ~auVar153[4];
          *(byte *)(lVar61 + 0x25) = auVar79[5] & ~auVar153[5];
          *(byte *)(lVar61 + 0x26) = auVar79[6] & ~auVar153[6];
          *(byte *)(lVar61 + 0x27) = auVar79[7] & ~auVar153[7];
        }
        if (iVar131 + param_3 <= lVar58) break;
        auVar43[8] = 0x20;
        auVar43._0_8_ = 0x2000000020;
        auVar43._9_3_ = 0;
        auVar43[12] = 0x20;
        auVar43._13_3_ = 0;
        auVar187 = NEON_uqsub(auVar187,auVar43,2);
        auVar44[8] = 0x20;
        auVar44._0_8_ = 0x2000000020;
        auVar44._9_3_ = 0;
        auVar44[12] = 0x20;
        auVar44._13_3_ = 0;
        auVar97 = NEON_uqsub(auVar97,auVar44,2);
        lVar59 = lVar59 + 0x30;
        auVar259._0_4_ = param_12 + auVar258._0_4_;
        auVar259._4_4_ = param_12 + auVar258._4_4_;
        auVar259._8_4_ = param_12 + auVar258._8_4_;
        auVar259._12_4_ = param_12 + auVar258._12_4_;
        auVar45[8] = 0x20;
        auVar45._0_8_ = 0x2000000020;
        auVar45._9_3_ = 0;
        auVar45[12] = 0x20;
        auVar45._13_3_ = 0;
        auVar113 = NEON_uqsub(auVar113,auVar45,2);
        auVar258 = auVar259;
      }
      iVar162 = iVar255 + uVar1;
      param_3 = *(int *)(this + 300) + param_3;
      uVar11 = uVar1;
      auVar94 = _DAT_004c4480;
    }
    _DAT_004c4480 = auVar94;
    if (param_3 < param_5) {
      auVar211._8_4_ = 0xffffffe1;
      auVar211._0_8_ = 0xffffffe1ffffffe1;
      auVar211._12_4_ = 0xffffffe1;
      auVar80._0_4_ = local_90 - iVar148;
      auVar80._4_4_ = iStack_8c - iVar148;
      auVar80._8_4_ = iVar149 - iVar148;
      auVar80._12_4_ = iVar161 - iVar148;
      auVar124._0_4_ = CONCAT13(uVar215,CONCAT12(uVar214,CONCAT11(uVar213,uVar212))) - iVar17;
      auVar124._4_4_ = CONCAT13(uVar219,CONCAT12(uVar218,CONCAT11(uVar217,uVar216))) - iVar17;
      auVar124._8_4_ = CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220))) - iVar17;
      auVar124._12_4_ = CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224))) - iVar17;
      auVar187 = *(undefined (*) [16])param_11;
      auVar97 = NEON_sshl(auVar80,auVar211,4);
      fVar169 = auVar187._0_4_;
      fVar170 = auVar187._4_4_;
      fVar89 = auVar187._8_4_;
      fVar127 = auVar187._12_4_;
      auVar187 = NEON_sshl(auVar124,auVar211,4);
      iVar255 = CONCAT13(bVar182 & auVar97[3],
                         CONCAT12(bVar181 & auVar97[2],
                                  CONCAT11(bVar180 & auVar97[1],bVar179 & auVar97[0])));
      auVar93._0_8_ =
           CONCAT17(bVar182 & auVar97[7],
                    CONCAT16(bVar181 & auVar97[6],
                             CONCAT15(bVar180 & auVar97[5],CONCAT14(bVar179 & auVar97[4],iVar255))))
      ;
      auVar93[8] = bVar62 & auVar97[8];
      auVar93[9] = bVar63 & auVar97[9];
      auVar93[10] = bVar64 & auVar97[10];
      auVar93[11] = bVar65 & auVar97[11];
      auVar106[12] = bVar62 & auVar97[12];
      auVar106._0_12_ = auVar93;
      auVar106[13] = bVar63 & auVar97[13];
      auVar106[14] = bVar64 & auVar97[14];
      auVar106[15] = bVar65 & auVar97[15];
      iVar254 = CONCAT13(bVar182 & auVar97[3],
                         CONCAT12(bVar181 & auVar97[2],
                                  CONCAT11(bVar180 & auVar97[1],bVar179 & auVar97[0])));
      auVar150._0_8_ =
           CONCAT17(bVar182 & auVar97[7],
                    CONCAT16(bVar181 & auVar97[6],
                             CONCAT15(bVar180 & auVar97[5],CONCAT14(bVar179 & auVar97[4],iVar254))))
      ;
      auVar150[8] = bStack_b8 & auVar97[8];
      auVar150[9] = bStack_b7 & auVar97[9];
      auVar150[10] = bStack_b6 & auVar97[10];
      auVar150[11] = bStack_b5 & auVar97[11];
      auVar157[12] = bStack_b4 & auVar97[12];
      auVar157._0_12_ = auVar150;
      auVar157[13] = bStack_b3 & auVar97[13];
      auVar157[14] = bStack_b2 & auVar97[14];
      auVar157[15] = bStack_b1 & auVar97[15];
      iVar131 = CONCAT13(bVar130 & auVar187[3],
                         CONCAT12(bVar129 & auVar187[2],
                                  CONCAT11(bVar128 & auVar187[1],bVar126 & auVar187[0])));
      auVar201._0_8_ =
           CONCAT17(bVar130 & auVar187[7],
                    CONCAT16(bVar129 & auVar187[6],
                             CONCAT15(bVar128 & auVar187[5],CONCAT14(bVar126 & auVar187[4],iVar131))
                            ));
      auVar201[8] = bVar126 & auVar187[8];
      auVar201[9] = bVar128 & auVar187[9];
      auVar201[10] = bVar129 & auVar187[10];
      auVar201[11] = bVar130 & auVar187[11];
      auVar204[12] = bVar126 & auVar187[12];
      auVar204._0_12_ = auVar201;
      auVar204[13] = bVar128 & auVar187[13];
      auVar204[14] = bVar129 & auVar187[14];
      auVar204[15] = bVar130 & auVar187[15];
      iVar255 = iVar255 + auVar80._0_4_;
      iVar161 = (int)((ulong)auVar93._0_8_ >> 0x20) + auVar80._4_4_;
      iVar163 = auVar93._8_4_ + auVar80._8_4_;
      iVar175 = auVar106._12_4_ + auVar80._12_4_;
      auVar194._0_4_ = iVar147 + auVar108._0_4_ + iVar254;
      auVar194._4_4_ = iVar147 + auVar108._4_4_ + (int)((ulong)auVar150._0_8_ >> 0x20);
      auVar194._8_4_ = iVar147 + auVar108._8_4_ + auVar150._8_4_;
      auVar194._12_4_ = iVar147 + auVar108._12_4_ + auVar157._12_4_;
      iVar131 = iVar131 + auVar124._0_4_;
      iVar254 = (int)((ulong)auVar201._0_8_ >> 0x20) + auVar124._4_4_;
      iVar174 = auVar201._8_4_ + auVar124._8_4_;
      iVar149 = auVar204._12_4_ + auVar124._12_4_;
      auVar205._0_4_ =
           iVar146 + auVar202._0_4_ +
           CONCAT13(bVar167 & auVar187[3],
                    CONCAT12(bVar166 & auVar187[2],
                             CONCAT11(bVar165 & auVar187[1],bVar164 & auVar187[0])));
      auVar205._4_4_ =
           iVar146 + auVar202._4_4_ +
           CONCAT13(bVar167 & auVar187[7],
                    CONCAT12(bVar166 & auVar187[6],
                             CONCAT11(bVar165 & auVar187[5],bVar164 & auVar187[4])));
      auVar205._8_4_ =
           iVar146 + auVar202._8_4_ +
           CONCAT13(bVar167 & auVar187[11],
                    CONCAT12(bVar166 & auVar187[10],
                             CONCAT11(bVar165 & auVar187[9],bVar164 & auVar187[8])));
      auVar205._12_4_ =
           iVar146 + auVar202._12_4_ +
           CONCAT13(bVar167 & auVar187[15],
                    CONCAT12(bVar166 & auVar187[14],
                             CONCAT11(bVar165 & auVar187[13],bVar164 & auVar187[12])));
      while( true ) {
        uVar1 = iVar60 >> 0xd;
        *(float *)param_11 = param_13 + fVar169;
        *(float *)(param_11 + 4) = param_13 + fVar170;
        *(float *)(param_11 + 8) = param_13 + fVar89;
        *(float *)(param_11 + 0xc) = param_13 + fVar127;
        iVar60 = iVar60 + uVar15;
        uVar12 = uVar13;
        if ((int)uVar1 <= (int)uVar13) {
          uVar12 = uVar1;
        }
        auVar27[8] = 0xf8;
        auVar27._0_8_ = 0xfffffff8fffffff8;
        auVar27[9] = 0xff;
        auVar27[10] = 0xff;
        auVar27[11] = 0xff;
        auVar27[12] = 0xf8;
        auVar27[13] = 0xff;
        auVar27[14] = 0xff;
        auVar27[15] = 0xff;
        auVar187 = NEON_sshl(auVar194,auVar27,4);
        uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        auVar28[8] = 0xf8;
        auVar28._0_8_ = 0xfffffff8fffffff8;
        auVar28[9] = 0xff;
        auVar28[10] = 0xff;
        auVar28[11] = 0xff;
        auVar28[12] = 0xf8;
        auVar28[13] = 0xff;
        auVar28[14] = 0xff;
        auVar28[15] = 0xff;
        auVar97 = NEON_sshl(auVar205,auVar28,4);
        lVar58 = (long)(int)(uVar12 + param_3);
        lVar59 = (lVar58 + (long)(int)(uVar12 + param_3) * 2) * 0x10;
        auVar81._0_4_ = auVar187._0_4_ + uVar12 * -0x20;
        auVar81._4_4_ = auVar187._4_4_ + uVar12 * -0x20;
        auVar81._8_4_ = auVar187._8_4_ + uVar12 * -0x20;
        auVar81._12_4_ = auVar187._12_4_ + uVar12 * -0x20;
        iVar176 = param_2;
        if (iVar162 >> 0xd <= param_2) {
          iVar176 = iVar162 >> 0xd;
        }
        fVar132 = (float)uVar12 * param_12;
        auVar107._0_4_ = auVar97._0_4_ + uVar12 * -0x20;
        auVar107._4_4_ = auVar97._4_4_ + uVar12 * -0x20;
        auVar107._8_4_ = auVar97._8_4_ + uVar12 * -0x20;
        auVar107._12_4_ = auVar97._12_4_ + uVar12 * -0x20;
        auVar187 = NEON_smax(auVar81,ZEXT216(0),4);
        auVar97 = NEON_smax(auVar107,ZEXT216(0),4);
        auVar261._0_4_ = fVar132 + param_13 + fVar169;
        auVar261._4_4_ = fVar132 + param_13 + fVar170;
        auVar261._8_4_ = fVar132 + param_13 + fVar89;
        auVar261._12_4_ = fVar132 + param_13 + fVar127;
        while( true ) {
          lVar58 = lVar58 + 1;
          auVar202 = *(undefined (*) [16])param_10;
          auVar113 = *(undefined (*) [16])(*(long *)(this + 0x138) + lVar59);
          fVar89 = auVar113._0_4_;
          auVar82._0_4_ = auVar202._0_4_ - fVar89;
          fVar127 = auVar113._4_4_;
          auVar82._4_4_ = auVar202._4_4_ - fVar127;
          fVar169 = auVar113._8_4_;
          auVar82._8_4_ = auVar202._8_4_ - fVar169;
          fVar170 = auVar113._12_4_;
          auVar82._12_4_ = auVar202._12_4_ - fVar170;
          auVar202 = NEON_cmlt(auVar82,0,4);
          auVar83[0] = auVar202[0] & auVar94[0];
          auVar83[1] = auVar202[1] & auVar94[1];
          auVar83[2] = auVar202[2] & auVar94[2];
          auVar83[3] = auVar202[3] & auVar94[3];
          auVar83[4] = auVar202[4] & auVar94[4];
          auVar83[5] = auVar202[5] & auVar94[5];
          auVar83[6] = auVar202[6] & auVar94[6];
          auVar83[7] = auVar202[7] & auVar94[7];
          auVar83[8] = auVar202[8] & auVar94[8];
          auVar83[9] = auVar202[9] & auVar94[9];
          auVar83[10] = auVar202[10] & auVar94[10];
          auVar83[11] = auVar202[11] & auVar94[11];
          auVar83[12] = auVar202[12] & auVar94[12];
          auVar83[13] = auVar202[13] & auVar94[13];
          auVar83[14] = auVar202[14] & auVar94[14];
          auVar83[15] = auVar202[15] & auVar94[15];
          auVar202 = NEON_ext(auVar83,auVar83,8,1);
          if (CONCAT13(auVar202[3] | auVar83[3] | auVar202[7] | auVar83[7],
                       CONCAT12(auVar202[2] | auVar83[2] | auVar202[6] | auVar83[6],
                                CONCAT11(auVar202[1] | auVar83[1] | auVar202[5] | auVar83[5],
                                         auVar202[0] | auVar83[0] | auVar202[4] | auVar83[4]))) !=
              0xf) {
            auVar36[8] = 0x20;
            auVar36._0_8_ = 0x2000000020;
            auVar36._9_3_ = 0;
            auVar36[12] = 0x20;
            auVar36._13_3_ = 0;
            auVar202 = NEON_smin(auVar97,auVar36,4);
            auVar37[8] = 0x20;
            auVar37._0_8_ = 0x2000000020;
            auVar37._9_3_ = 0;
            auVar37[12] = 0x20;
            auVar37._13_3_ = 0;
            auVar108 = NEON_smin(auVar187,auVar37,4);
            puVar10 = (undefined8 *)(*(long *)(this + 0x138) + lVar59);
            auVar114 = NEON_fmax(auVar261,*(undefined (*) [16])param_9,4);
            auVar202 = NEON_smax(auVar202,ZEXT216(0),4);
            auVar108 = NEON_smax(auVar108,ZEXT216(0),4);
            auVar142._0_4_ = auVar114._0_4_ - fVar89;
            auVar142._4_4_ = auVar114._4_4_ - fVar127;
            auVar142._8_4_ = auVar114._8_4_ - fVar169;
            auVar142._12_4_ = auVar114._12_4_ - fVar170;
            auVar46[8] = 0xff;
            auVar46._0_8_ = 0xffffffffffffffff;
            auVar46[9] = 0xff;
            auVar46[10] = 0xff;
            auVar46[11] = 0xff;
            auVar46[12] = 0xff;
            auVar46[13] = 0xff;
            auVar46[14] = 0xff;
            auVar46[15] = 0xff;
            auVar202 = NEON_sshl(auVar46,auVar202,4);
            auVar47[8] = 0xff;
            auVar47._0_8_ = 0xffffffffffffffff;
            auVar47[9] = 0xff;
            auVar47[10] = 0xff;
            auVar47[11] = 0xff;
            auVar47[12] = 0xff;
            auVar47[13] = 0xff;
            auVar47[14] = 0xff;
            auVar47[15] = 0xff;
            auVar108 = NEON_sshl(auVar47,auVar108,4);
            auVar134 = NEON_sshl(auVar142,auVar211,4);
            auVar84[0] = auVar202[0] & ~auVar108[0];
            auVar84[1] = auVar202[1] & ~auVar108[1];
            auVar84[2] = auVar202[2] & ~auVar108[2];
            auVar84[3] = auVar202[3] & ~auVar108[3];
            auVar84[4] = auVar202[4] & ~auVar108[4];
            auVar84[5] = auVar202[5] & ~auVar108[5];
            auVar84[6] = auVar202[6] & ~auVar108[6];
            auVar84[7] = auVar202[7] & ~auVar108[7];
            auVar84[8] = auVar202[8] & ~auVar108[8];
            auVar84[9] = auVar202[9] & ~auVar108[9];
            auVar84[10] = auVar202[10] & ~auVar108[10];
            auVar84[11] = auVar202[11] & ~auVar108[11];
            auVar84[12] = auVar202[12] & ~auVar108[12];
            auVar84[13] = auVar202[13] & ~auVar108[13];
            auVar84[14] = auVar202[14] & ~auVar108[14];
            auVar84[15] = auVar202[15] & ~auVar108[15];
            auVar57._12_4_ = _UNK_004c513c;
            auVar57._0_12_ = _DAT_004c5130;
            auVar108 = a64_TBL(ZEXT816(0),auVar84,auVar57);
            auVar202 = *(undefined (*) [16])(puVar10 + 2);
            auVar188 = NEON_cmeq(auVar108,0,2);
            auVar143[0] = auVar134[0] | auVar188[0];
            auVar143[1] = auVar134[1] | auVar188[1];
            auVar143[2] = auVar134[2] | auVar188[2];
            auVar143[3] = auVar134[3] | auVar188[3];
            auVar143[4] = auVar134[4] | auVar188[4];
            auVar143[5] = auVar134[5] | auVar188[5];
            auVar143[6] = auVar134[6] | auVar188[6];
            auVar143[7] = auVar134[7] | auVar188[7];
            auVar143[8] = auVar134[8] | auVar188[8];
            auVar143[9] = auVar134[9] | auVar188[9];
            auVar143[10] = auVar134[10] | auVar188[10];
            auVar143[11] = auVar134[11] | auVar188[11];
            auVar143[12] = auVar134[12] | auVar188[12];
            auVar143[13] = auVar134[13] | auVar188[13];
            auVar143[14] = auVar134[14] | auVar188[14];
            auVar143[15] = auVar134[15] | auVar188[15];
            auVar158._0_4_ = (auVar202._0_4_ + auVar202._0_4_) - (fVar89 + auVar114._0_4_);
            auVar158._4_4_ = (auVar202._4_4_ + auVar202._4_4_) - (fVar127 + auVar114._4_4_);
            auVar158._8_4_ = (auVar202._8_4_ + auVar202._8_4_) - (fVar169 + auVar114._8_4_);
            auVar158._12_4_ = (auVar202._12_4_ + auVar202._12_4_) - (fVar170 + auVar114._12_4_);
            auVar85[0] = auVar108[0] & ~auVar143[0];
            auVar85[1] = auVar108[1] & ~auVar143[1];
            auVar85[2] = auVar108[2] & ~auVar143[2];
            auVar85[3] = auVar108[3] & ~auVar143[3];
            auVar85[4] = auVar108[4] & ~auVar143[4];
            auVar85[5] = auVar108[5] & ~auVar143[5];
            auVar85[6] = auVar108[6] & ~auVar143[6];
            auVar85[7] = auVar108[7] & ~auVar143[7];
            auVar85[8] = auVar108[8] & ~auVar143[8];
            auVar85[9] = auVar108[9] & ~auVar143[9];
            auVar85[10] = auVar108[10] & ~auVar143[10];
            auVar85[11] = auVar108[11] & ~auVar143[11];
            auVar85[12] = auVar108[12] & ~auVar143[12];
            auVar85[13] = auVar108[13] & ~auVar143[13];
            auVar85[14] = auVar108[14] & ~auVar143[14];
            auVar85[15] = auVar108[15] & ~auVar143[15];
            auVar134 = NEON_sshl(auVar158,auVar211,4);
            auVar48[8] = 0xff;
            auVar48._0_8_ = 0xffffffffffffffff;
            auVar48[9] = 0xff;
            auVar48[10] = 0xff;
            auVar48[11] = 0xff;
            auVar48[12] = 0xff;
            auVar48[13] = 0xff;
            auVar48[14] = 0xff;
            auVar48[15] = 0xff;
            auVar188 = NEON_cmeq(auVar85,auVar48,4);
            auVar108 = *(undefined (*) [16])(puVar10 + 4);
            auVar159[0] = (auVar134[0] | auVar188[0]) & ~auVar143[0];
            auVar159[1] = (auVar134[1] | auVar188[1]) & ~auVar143[1];
            auVar159[2] = (auVar134[2] | auVar188[2]) & ~auVar143[2];
            auVar159[3] = (auVar134[3] | auVar188[3]) & ~auVar143[3];
            auVar159[4] = (auVar134[4] | auVar188[4]) & ~auVar143[4];
            auVar159[5] = (auVar134[5] | auVar188[5]) & ~auVar143[5];
            auVar159[6] = (auVar134[6] | auVar188[6]) & ~auVar143[6];
            auVar159[7] = (auVar134[7] | auVar188[7]) & ~auVar143[7];
            auVar159[8] = (auVar134[8] | auVar188[8]) & ~auVar143[8];
            auVar159[9] = (auVar134[9] | auVar188[9]) & ~auVar143[9];
            auVar159[10] = (auVar134[10] | auVar188[10]) & ~auVar143[10];
            auVar159[11] = (auVar134[11] | auVar188[11]) & ~auVar143[11];
            auVar159[12] = (auVar134[12] | auVar188[12]) & ~auVar143[12];
            auVar159[13] = (auVar134[13] | auVar188[13]) & ~auVar143[13];
            auVar159[14] = (auVar134[14] | auVar188[14]) & ~auVar143[14];
            auVar159[15] = (auVar134[15] | auVar188[15]) & ~auVar143[15];
            auVar134 = NEON_cmlt(auVar143,0,4);
            auVar188 = NEON_cmlt(auVar159,0,4);
            auVar134 = NEON_bsl(auVar134,auVar202,auVar114,1);
            auVar86[0] = auVar108[0] & ~auVar159[0] | auVar85[0];
            auVar86[1] = auVar108[1] & ~auVar159[1] | auVar85[1];
            auVar86[2] = auVar108[2] & ~auVar159[2] | auVar85[2];
            auVar86[3] = auVar108[3] & ~auVar159[3] | auVar85[3];
            auVar86[4] = auVar108[4] & ~auVar159[4] | auVar85[4];
            auVar86[5] = auVar108[5] & ~auVar159[5] | auVar85[5];
            auVar86[6] = auVar108[6] & ~auVar159[6] | auVar85[6];
            auVar86[7] = auVar108[7] & ~auVar159[7] | auVar85[7];
            auVar86[8] = auVar108[8] & ~auVar159[8] | auVar85[8];
            auVar86[9] = auVar108[9] & ~auVar159[9] | auVar85[9];
            auVar86[10] = auVar108[10] & ~auVar159[10] | auVar85[10];
            auVar86[11] = auVar108[11] & ~auVar159[11] | auVar85[11];
            auVar86[12] = auVar108[12] & ~auVar159[12] | auVar85[12];
            auVar86[13] = auVar108[13] & ~auVar159[13] | auVar85[13];
            auVar86[14] = auVar108[14] & ~auVar159[14] | auVar85[14];
            auVar86[15] = auVar108[15] & ~auVar159[15] | auVar85[15];
            auVar202 = NEON_bit(auVar202,auVar114,auVar188,1);
            auVar49[8] = 0xff;
            auVar49._0_8_ = 0xffffffffffffffff;
            auVar49[9] = 0xff;
            auVar49[10] = 0xff;
            auVar49[11] = 0xff;
            auVar49[12] = 0xff;
            auVar49[13] = 0xff;
            auVar49[14] = 0xff;
            auVar49[15] = 0xff;
            auVar108 = NEON_cmeq(auVar86,auVar49,4);
            auVar202 = NEON_fmin(auVar134,auVar202,4);
            auVar144._8_4_ = 0x7f7fffff;
            auVar144._0_8_ = 0x7f7fffff7f7fffff;
            auVar144._12_4_ = 0x7f7fffff;
            auVar114 = NEON_bif(auVar144,auVar202,auVar108,1);
            auVar202 = NEON_bif(auVar202,auVar113,auVar108,1);
            puVar10[1] = auVar202._8_8_;
            *puVar10 = auVar202._0_8_;
            puVar10[3] = auVar114._8_8_;
            puVar10[2] = auVar114._0_8_;
            lVar61 = *(long *)(this + 0x138) + lVar59;
            *(byte *)(lVar61 + 0x30) = auVar86[8] & ~auVar108[8];
            *(byte *)(lVar61 + 0x31) = auVar86[9] & ~auVar108[9];
            *(byte *)(lVar61 + 0x32) = auVar86[10] & ~auVar108[10];
            *(byte *)(lVar61 + 0x33) = auVar86[11] & ~auVar108[11];
            *(byte *)(lVar61 + 0x34) = auVar86[12] & ~auVar108[12];
            *(byte *)(lVar61 + 0x35) = auVar86[13] & ~auVar108[13];
            *(byte *)(lVar61 + 0x36) = auVar86[14] & ~auVar108[14];
            *(byte *)(lVar61 + 0x37) = auVar86[15] & ~auVar108[15];
            *(byte *)(lVar61 + 0x20) = auVar86[0] & ~auVar108[0];
            *(byte *)(lVar61 + 0x21) = auVar86[1] & ~auVar108[1];
            *(byte *)(lVar61 + 0x22) = auVar86[2] & ~auVar108[2];
            *(byte *)(lVar61 + 0x23) = auVar86[3] & ~auVar108[3];
            *(byte *)(lVar61 + 0x24) = auVar86[4] & ~auVar108[4];
            *(byte *)(lVar61 + 0x25) = auVar86[5] & ~auVar108[5];
            *(byte *)(lVar61 + 0x26) = auVar86[6] & ~auVar108[6];
            *(byte *)(lVar61 + 0x27) = auVar86[7] & ~auVar108[7];
          }
          if (iVar176 + param_3 <= lVar58) break;
          auVar262._0_4_ = param_12 + auVar261._0_4_;
          auVar262._4_4_ = param_12 + auVar261._4_4_;
          auVar262._8_4_ = param_12 + auVar261._8_4_;
          auVar262._12_4_ = param_12 + auVar261._12_4_;
          auVar38[8] = 0x20;
          auVar38._0_8_ = 0x2000000020;
          auVar38._9_3_ = 0;
          auVar38[12] = 0x20;
          auVar38._13_3_ = 0;
          auVar187 = NEON_uqsub(auVar187,auVar38,2);
          lVar59 = lVar59 + 0x30;
          auVar39[8] = 0x20;
          auVar39._0_8_ = 0x2000000020;
          auVar39._9_3_ = 0;
          auVar39[12] = 0x20;
          auVar39._13_3_ = 0;
          auVar97 = NEON_uqsub(auVar97,auVar39,2);
          auVar261 = auVar262;
        }
        param_3 = *(int *)(this + 300) + param_3;
        if (param_5 <= param_3) break;
        iVar162 = iVar162 + uVar11;
        auVar87._0_4_ = iVar255 - iVar148;
        auVar87._4_4_ = iVar161 - iVar148;
        auVar87._8_4_ = iVar163 - iVar148;
        auVar87._12_4_ = iVar175 - iVar148;
        auVar109._0_4_ = iVar131 - iVar17;
        auVar109._4_4_ = iVar254 - iVar17;
        auVar109._8_4_ = iVar174 - iVar17;
        auVar109._12_4_ = iVar149 - iVar17;
        auVar187 = NEON_sshl(auVar87,auVar211,4);
        auVar97 = NEON_sshl(auVar109,auVar211,4);
        iVar255 = CONCAT13(auVar187[3] & bVar182,
                           CONCAT12(auVar187[2] & bVar181,
                                    CONCAT11(auVar187[1] & bVar180,auVar187[0] & bVar179)));
        auVar151._0_8_ =
             CONCAT17(auVar187[7] & bVar182,
                      CONCAT16(auVar187[6] & bVar181,
                               CONCAT15(auVar187[5] & bVar180,
                                        CONCAT14(auVar187[4] & bVar179,iVar255))));
        auVar151[8] = auVar187[8] & bVar62;
        auVar151[9] = auVar187[9] & bVar63;
        auVar151[10] = auVar187[10] & bVar64;
        auVar151[11] = auVar187[11] & bVar65;
        auVar160[12] = auVar187[12] & bVar62;
        auVar160._0_12_ = auVar151;
        auVar160[13] = auVar187[13] & bVar63;
        auVar160[14] = auVar187[14] & bVar64;
        auVar160[15] = auVar187[15] & bVar65;
        iVar176 = CONCAT13(auVar187[3] & bVar182,
                           CONCAT12(auVar187[2] & bVar181,
                                    CONCAT11(auVar187[1] & bVar180,auVar187[0] & bVar179)));
        auVar111._0_8_ =
             CONCAT17(auVar187[7] & bVar182,
                      CONCAT16(auVar187[6] & bVar181,
                               CONCAT15(auVar187[5] & bVar180,
                                        CONCAT14(auVar187[4] & bVar179,iVar176))));
        auVar111[8] = auVar187[8] & bStack_b8;
        auVar111[9] = auVar187[9] & bStack_b7;
        auVar111[10] = auVar187[10] & bStack_b6;
        auVar111[11] = auVar187[11] & bStack_b5;
        auVar125[12] = auVar187[12] & bStack_b4;
        auVar125._0_12_ = auVar111;
        auVar125[13] = auVar187[13] & bStack_b3;
        auVar125[14] = auVar187[14] & bStack_b2;
        auVar125[15] = auVar187[15] & bStack_b1;
        iVar177 = CONCAT13(auVar97[3] & bVar167,
                           CONCAT12(auVar97[2] & bVar166,
                                    CONCAT11(auVar97[1] & bVar165,auVar97[0] & bVar164)));
        auVar186._0_8_ =
             CONCAT17(auVar97[7] & bVar167,
                      CONCAT16(auVar97[6] & bVar166,
                               CONCAT15(auVar97[5] & bVar165,CONCAT14(auVar97[4] & bVar164,iVar177))
                              ));
        auVar186[8] = auVar97[8] & bVar164;
        auVar186[9] = auVar97[9] & bVar165;
        auVar186[10] = auVar97[10] & bVar166;
        auVar186[11] = auVar97[11] & bVar167;
        auVar193[12] = auVar97[12] & bVar164;
        auVar193._0_12_ = auVar186;
        auVar193[13] = auVar97[13] & bVar165;
        auVar193[14] = auVar97[14] & bVar166;
        auVar193[15] = auVar97[15] & bVar167;
        iVar131 = CONCAT13(auVar97[3] & bVar130,
                           CONCAT12(auVar97[2] & bVar129,
                                    CONCAT11(auVar97[1] & bVar128,auVar97[0] & bVar126)));
        auVar133._0_8_ =
             CONCAT17(auVar97[7] & bVar130,
                      CONCAT16(auVar97[6] & bVar129,
                               CONCAT15(auVar97[5] & bVar128,CONCAT14(auVar97[4] & bVar126,iVar131))
                              ));
        auVar133[8] = auVar97[8] & bVar126;
        auVar133[9] = auVar97[9] & bVar128;
        auVar133[10] = auVar97[10] & bVar129;
        auVar133[11] = auVar97[11] & bVar130;
        auVar145[12] = auVar97[12] & bVar126;
        auVar145._0_12_ = auVar133;
        auVar145[13] = auVar97[13] & bVar128;
        auVar145[14] = auVar97[14] & bVar129;
        auVar145[15] = auVar97[15] & bVar130;
        iVar255 = iVar255 + auVar87._0_4_;
        iVar161 = (int)((ulong)auVar151._0_8_ >> 0x20) + auVar87._4_4_;
        iVar163 = auVar151._8_4_ + auVar87._8_4_;
        iVar175 = auVar160._12_4_ + auVar87._12_4_;
        auVar187 = *(undefined (*) [16])param_11;
        iVar131 = iVar131 + auVar109._0_4_;
        iVar254 = (int)((ulong)auVar133._0_8_ >> 0x20) + auVar109._4_4_;
        iVar174 = auVar133._8_4_ + auVar109._8_4_;
        iVar149 = auVar145._12_4_ + auVar109._12_4_;
        fVar169 = auVar187._0_4_;
        fVar170 = auVar187._4_4_;
        fVar89 = auVar187._8_4_;
        fVar127 = auVar187._12_4_;
        auVar195._0_4_ = iVar176 + iVar147 + auVar194._0_4_;
        auVar195._4_4_ = (int)((ulong)auVar111._0_8_ >> 0x20) + iVar147 + auVar194._4_4_;
        auVar195._8_4_ = auVar111._8_4_ + iVar147 + auVar194._8_4_;
        auVar195._12_4_ = auVar125._12_4_ + iVar147 + auVar194._12_4_;
        auVar206._0_4_ = iVar177 + iVar146 + auVar205._0_4_;
        auVar206._4_4_ = (int)((ulong)auVar186._0_8_ >> 0x20) + iVar146 + auVar205._4_4_;
        auVar206._8_4_ = auVar186._8_4_ + iVar146 + auVar205._8_4_;
        auVar206._12_4_ = auVar193._12_4_ + iVar146 + auVar205._12_4_;
        auVar194 = auVar195;
        auVar205 = auVar206;
      }
    }
  }
  return 0;
}


