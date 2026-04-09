// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<1,0,0>
// Entry Point: 00da7594
// Size: 1872 bytes
// Signature: int __thiscall RasterizeTriangle<1,0,0>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1, 0,
   0>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1,0,0>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined auVar16 [16];
  float fVar17;
  undefined auVar18 [16];
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
  undefined auVar49 [16];
  undefined auVar50 [16];
  unkbyte9 Var51;
  long lVar52;
  undefined (*pauVar53) [16];
  byte bVar54;
  undefined auVar55 [12];
  undefined auVar56 [12];
  undefined auVar57 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  byte bVar70;
  byte bVar72;
  byte bVar73;
  float fVar71;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar81;
  byte bVar82;
  float fVar80;
  byte bVar83;
  undefined auVar84 [12];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar85 [12];
  undefined auVar86 [12];
  undefined auVar95 [16];
  undefined auVar97 [16];
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined auVar107 [16];
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  undefined uVar112;
  undefined uVar113;
  undefined uVar114;
  undefined uVar115;
  undefined uVar116;
  undefined uVar117;
  undefined uVar118;
  undefined uVar119;
  undefined uVar120;
  undefined uVar121;
  undefined uVar122;
  undefined uVar123;
  undefined uVar124;
  undefined uVar125;
  undefined uVar126;
  undefined uVar127;
  float fVar128;
  int iVar129;
  undefined auVar130 [12];
  undefined auVar132 [12];
  int iVar141;
  undefined auVar133 [16];
  undefined auVar134 [16];
  int iVar142;
  undefined auVar131 [12];
  int iVar143;
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  undefined auVar153 [12];
  undefined auVar154 [12];
  undefined auVar155 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined uVar159;
  undefined uVar160;
  undefined uVar161;
  undefined uVar162;
  undefined uVar163;
  undefined uVar164;
  undefined uVar165;
  undefined uVar166;
  undefined uVar167;
  undefined uVar168;
  undefined uVar169;
  undefined uVar170;
  undefined uVar171;
  undefined uVar172;
  undefined uVar173;
  undefined uVar174;
  undefined uVar175;
  undefined uVar176;
  undefined uVar177;
  undefined uVar178;
  undefined uVar179;
  undefined uVar180;
  undefined uVar181;
  undefined uVar182;
  undefined uVar183;
  undefined uVar184;
  undefined uVar185;
  undefined uVar186;
  undefined uVar187;
  undefined uVar188;
  undefined uVar189;
  undefined uVar190;
  undefined8 uVar191;
  undefined8 uVar192;
  undefined auVar193 [12];
  undefined auVar194 [16];
  int iVar198;
  undefined auVar195 [16];
  undefined auVar196 [16];
  byte bVar199;
  undefined auVar200 [12];
  byte bVar203;
  byte bVar204;
  byte bVar205;
  undefined auVar201 [16];
  undefined auVar202 [16];
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  float fVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  undefined auVar210 [12];
  float fVar222;
  byte bVar226;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  float fVar227;
  undefined auVar212 [16];
  undefined auVar231 [12];
  undefined auVar232 [16];
  undefined auVar233 [12];
  undefined auVar235 [12];
  undefined auVar236 [16];
  undefined auVar237 [16];
  undefined auVar239 [16];
  undefined auVar240 [16];
  undefined auVar241 [16];
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined auVar62 [16];
  undefined auVar58 [16];
  undefined auVar69 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar96 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined auVar140 [16];
  undefined auVar156 [16];
  undefined auVar197 [16];
  undefined auVar211 [16];
  undefined auVar234 [16];
  undefined auVar238 [16];
  
  Var51 = _DAT_004c5130;
  lVar52 = (ulong)param_1 * 4;
  pfVar1 = (float *)(param_7 + lVar52);
  auVar91._8_4_ = 0xffffffe1;
  auVar91._0_8_ = 0xffffffe1ffffffe1;
  auVar91._12_4_ = 0xffffffe1;
  piVar2 = (int *)(param_8 + lVar52);
  fVar71 = *pfVar1;
  piVar3 = (int *)(param_18 + lVar52);
  piVar4 = (int *)(param_14 + lVar52);
  iVar9 = *piVar2;
  iVar10 = *piVar3;
  puVar5 = (undefined4 *)(param_16 + lVar52);
  piVar6 = (int *)(param_15 + lVar52);
  piVar7 = (int *)(param_17 + lVar52);
  fVar80 = pfVar1[4];
  iVar149 = *piVar6;
  iVar152 = *piVar7;
  iVar11 = *piVar4;
  iVar98 = MP_INT_ABS((int)(fVar71 * 128.0));
  iVar99 = MP_INT_ABS((int)(fVar71 * 384.0));
  iVar100 = MP_INT_ABS((int)(fVar71 * 640.0));
  iVar101 = MP_INT_ABS((int)(fVar71 * 896.0));
  iVar12 = piVar7[4];
  iVar108 = SUB164(_DAT_004c4990,0);
  iVar109 = SUB164(_DAT_004c4990,4);
  iVar110 = SUB164(_DAT_004c4990,8);
  iVar111 = SUB164(_DAT_004c4990,0xc);
  piVar8 = (int *)(param_6 + lVar52);
  iVar150 = piVar6[4];
  iVar151 = *piVar8;
  auVar134._0_4_ = iVar152 + iVar149 * iVar108 + iVar98 * iVar11;
  auVar134._4_4_ = iVar152 + iVar149 * iVar109 + iVar99 * iVar11;
  auVar134._8_4_ = iVar152 + iVar149 * iVar110 + iVar100 * iVar11;
  auVar134._12_4_ = iVar152 + iVar149 * iVar111 + iVar101 * iVar11;
  uVar13 = *puVar5;
  iVar149 = piVar4[4];
  iVar98 = MP_INT_ABS((int)(fVar80 * 128.0));
  iVar100 = MP_INT_ABS((int)(fVar80 * 384.0));
  iVar101 = MP_INT_ABS((int)(fVar80 * 640.0));
  iVar102 = MP_INT_ABS((int)(fVar80 * 896.0));
  auVar155 = NEON_sshl(auVar134,auVar91,4);
  iVar152 = piVar8[4];
  uVar14 = puVar5[4];
  iVar99 = iVar12 + iVar150 * iVar108 + iVar98 * iVar149;
  iVar100 = iVar12 + iVar150 * iVar109 + iVar100 * iVar149;
  iVar101 = iVar12 + iVar150 * iVar110 + iVar101 * iVar149;
  iVar102 = iVar12 + iVar150 * iVar111 + iVar102 * iVar149;
  bVar75 = (byte)iVar11;
  bVar76 = (byte)((uint)iVar11 >> 8);
  bVar77 = (byte)((uint)iVar11 >> 0x10);
  bVar78 = (byte)((uint)iVar11 >> 0x18);
  bVar70 = (byte)uVar13;
  bVar72 = (byte)((uint)uVar13 >> 8);
  bVar73 = (byte)((uint)uVar13 >> 0x10);
  bVar74 = (byte)((uint)uVar13 >> 0x18);
  iVar150 = CONCAT13(auVar155[3] & bVar74,
                     CONCAT12(auVar155[2] & bVar73,
                              CONCAT11(auVar155[1] & bVar72,auVar155[0] & bVar70)));
  auVar153._0_8_ =
       CONCAT17(auVar155[7] & bVar74,
                CONCAT16(auVar155[6] & bVar73,
                         CONCAT15(auVar155[5] & bVar72,CONCAT14(auVar155[4] & bVar70,iVar150))));
  auVar153[8] = auVar155[8] & bVar70;
  auVar153[9] = auVar155[9] & bVar72;
  auVar153[10] = auVar155[10] & bVar73;
  auVar153[11] = auVar155[11] & bVar74;
  auVar133[12] = auVar155[12] & bVar70;
  auVar133._0_12_ = auVar153;
  auVar133[13] = auVar155[13] & bVar72;
  auVar133[14] = auVar155[14] & bVar73;
  auVar133[15] = auVar155[15] & bVar74;
  iVar11 = piVar2[4];
  iVar12 = piVar3[4];
  auVar201._4_4_ = iVar100;
  auVar201._0_4_ = iVar99;
  auVar201._8_4_ = iVar101;
  auVar201._12_4_ = iVar102;
  auVar201 = NEON_sshl(auVar201,auVar91,4);
  iVar98 = auVar134._0_4_ +
           CONCAT13(auVar155[3] & bVar78,
                    CONCAT12(auVar155[2] & bVar77,
                             CONCAT11(auVar155[1] & bVar76,auVar155[0] & bVar75)));
  uVar175 = (undefined)iVar98;
  uVar176 = (undefined)((uint)iVar98 >> 8);
  uVar177 = (undefined)((uint)iVar98 >> 0x10);
  uVar178 = (undefined)((uint)iVar98 >> 0x18);
  iVar98 = auVar134._4_4_ +
           CONCAT13(auVar155[7] & bVar78,
                    CONCAT12(auVar155[6] & bVar77,
                             CONCAT11(auVar155[5] & bVar76,auVar155[4] & bVar75)));
  uVar179 = (undefined)iVar98;
  uVar180 = (undefined)((uint)iVar98 >> 8);
  uVar181 = (undefined)((uint)iVar98 >> 0x10);
  uVar182 = (undefined)((uint)iVar98 >> 0x18);
  iVar98 = auVar134._8_4_ +
           CONCAT13(auVar155[11] & bVar78,
                    CONCAT12(auVar155[10] & bVar77,
                             CONCAT11(auVar155[9] & bVar76,auVar155[8] & bVar75)));
  uVar183 = (undefined)iVar98;
  uVar184 = (undefined)((uint)iVar98 >> 8);
  uVar185 = (undefined)((uint)iVar98 >> 0x10);
  uVar186 = (undefined)((uint)iVar98 >> 0x18);
  iVar98 = auVar134._12_4_ +
           CONCAT13(auVar155[15] & bVar78,
                    CONCAT12(auVar155[14] & bVar77,
                             CONCAT11(auVar155[13] & bVar76,auVar155[12] & bVar75)));
  uVar187 = (undefined)iVar98;
  uVar188 = (undefined)((uint)iVar98 >> 8);
  uVar189 = (undefined)((uint)iVar98 >> 0x10);
  uVar190 = (undefined)((uint)iVar98 >> 0x18);
  iVar150 = iVar151 + (int)(fVar71 * 128.0) + iVar150;
  uVar159 = (undefined)iVar150;
  uVar160 = (undefined)((uint)iVar150 >> 8);
  uVar161 = (undefined)((uint)iVar150 >> 0x10);
  uVar162 = (undefined)((uint)iVar150 >> 0x18);
  iVar150 = iVar151 + (int)(fVar71 * 384.0) + (int)((ulong)auVar153._0_8_ >> 0x20);
  uVar163 = (undefined)iVar150;
  uVar164 = (undefined)((uint)iVar150 >> 8);
  uVar165 = (undefined)((uint)iVar150 >> 0x10);
  uVar166 = (undefined)((uint)iVar150 >> 0x18);
  iVar150 = iVar151 + (int)(fVar71 * 640.0) + auVar153._8_4_;
  uVar167 = (undefined)iVar150;
  uVar168 = (undefined)((uint)iVar150 >> 8);
  uVar169 = (undefined)((uint)iVar150 >> 0x10);
  uVar170 = (undefined)((uint)iVar150 >> 0x18);
  iVar150 = iVar151 + (int)(fVar71 * 896.0) + auVar133._12_4_;
  uVar171 = (undefined)iVar150;
  uVar172 = (undefined)((uint)iVar150 >> 8);
  uVar173 = (undefined)((uint)iVar150 >> 0x10);
  uVar174 = (undefined)((uint)iVar150 >> 0x18);
  bVar79 = (byte)iVar149;
  bVar81 = (byte)((uint)iVar149 >> 8);
  bVar82 = (byte)((uint)iVar149 >> 0x10);
  bVar83 = (byte)((uint)iVar149 >> 0x18);
  iVar150 = CONCAT13(auVar201[3] & bVar83,
                     CONCAT12(auVar201[2] & bVar82,
                              CONCAT11(auVar201[1] & bVar81,auVar201[0] & bVar79)));
  auVar231._0_8_ =
       CONCAT17(auVar201[7] & bVar83,
                CONCAT16(auVar201[6] & bVar82,
                         CONCAT15(auVar201[5] & bVar81,CONCAT14(auVar201[4] & bVar79,iVar150))));
  auVar231[8] = auVar201[8] & bVar79;
  auVar231[9] = auVar201[9] & bVar81;
  auVar231[10] = auVar201[10] & bVar82;
  auVar231[11] = auVar201[11] & bVar83;
  auVar88[12] = auVar201[12] & bVar79;
  auVar88._0_12_ = auVar231;
  auVar88[13] = auVar201[13] & bVar81;
  auVar88[14] = auVar201[14] & bVar82;
  auVar88[15] = auVar201[15] & bVar83;
  bVar103 = (byte)uVar14;
  bVar104 = (byte)((uint)uVar14 >> 8);
  bVar105 = (byte)((uint)uVar14 >> 0x10);
  bVar106 = (byte)((uint)uVar14 >> 0x18);
  iVar149 = CONCAT13(auVar201[3] & bVar106,
                     CONCAT12(auVar201[2] & bVar105,
                              CONCAT11(auVar201[1] & bVar104,auVar201[0] & bVar103)));
  auVar200._0_8_ =
       CONCAT17(auVar201[7] & bVar106,
                CONCAT16(auVar201[6] & bVar105,
                         CONCAT15(auVar201[5] & bVar104,CONCAT14(auVar201[4] & bVar103,iVar149))));
  auVar200[8] = auVar201[8] & bVar103;
  auVar200[9] = auVar201[9] & bVar104;
  auVar200[10] = auVar201[10] & bVar105;
  auVar200[11] = auVar201[11] & bVar106;
  auVar155[12] = auVar201[12] & bVar103;
  auVar155._0_12_ = auVar200;
  auVar155[13] = auVar201[13] & bVar104;
  auVar155[14] = auVar201[14] & bVar105;
  auVar155[15] = auVar201[15] & bVar106;
  iVar99 = iVar99 + iVar150;
  iVar100 = iVar100 + (int)((ulong)auVar231._0_8_ >> 0x20);
  iVar101 = iVar101 + auVar231._8_4_;
  iVar102 = iVar102 + auVar88._12_4_;
  iVar149 = iVar152 + (int)(fVar80 * 128.0) + iVar149;
  iVar150 = iVar152 + (int)(fVar80 * 384.0) + (int)((ulong)auVar200._0_8_ >> 0x20);
  iVar151 = iVar152 + (int)(fVar80 * 640.0) + auVar200._8_4_;
  iVar152 = iVar152 + (int)(fVar80 * 896.0) + auVar155._12_4_;
  bVar54 = SUB161(_DAT_004c4480,0);
  bVar213 = SUB161(_DAT_004c4480,1);
  bVar214 = SUB161(_DAT_004c4480,2);
  bVar215 = SUB161(_DAT_004c4480,3);
  bVar216 = SUB161(_DAT_004c4480,4);
  bVar218 = SUB161(_DAT_004c4480,5);
  bVar219 = SUB161(_DAT_004c4480,6);
  bVar220 = SUB161(_DAT_004c4480,7);
  bVar221 = SUB161(_DAT_004c4480,8);
  bVar223 = SUB161(_DAT_004c4480,9);
  bVar224 = SUB161(_DAT_004c4480,10);
  bVar225 = SUB161(_DAT_004c4480,0xb);
  bVar226 = SUB161(_DAT_004c4480,0xc);
  bVar228 = SUB161(_DAT_004c4480,0xd);
  bVar229 = SUB161(_DAT_004c4480,0xe);
  bVar230 = SUB161(_DAT_004c4480,0xf);
  if (param_4 < param_3) {
    if (param_5 <= param_3) {
      _UNK_004c5139 = 0xf0b07030e0a06;
      return 1;
    }
    auVar148._8_4_ = 0xfffffff8;
    auVar148._0_8_ = 0xfffffff8fffffff8;
    auVar148._12_4_ = 0xfffffff8;
    uVar192 = *(undefined8 *)(param_11 + 8);
    uVar191 = *(undefined8 *)param_11;
    auVar201 = ZEXT816(0);
    fVar71 = param_12 * 0.0;
    auVar95._8_4_ = 0xffffffe1;
    auVar95._0_8_ = 0xffffffe1ffffffe1;
    auVar95._12_4_ = 0xffffffe1;
    auVar138._8_8_ = 0xffffffffffffffff;
    auVar138._0_8_ = 0xffffffffffffffff;
    while( true ) {
      auVar20[1] = uVar160;
      auVar20[0] = uVar159;
      auVar20[2] = uVar161;
      auVar20[3] = uVar162;
      auVar20[4] = uVar163;
      auVar20[5] = uVar164;
      auVar20[6] = uVar165;
      auVar20[7] = uVar166;
      auVar20[8] = uVar167;
      auVar20[9] = uVar168;
      auVar20[10] = uVar169;
      auVar20[11] = uVar170;
      auVar20[12] = uVar171;
      auVar20[13] = uVar172;
      auVar20[14] = uVar173;
      auVar20[15] = uVar174;
      auVar155 = NEON_sshl(auVar20,auVar148,4);
      auVar144._4_4_ = iVar150;
      auVar144._0_4_ = iVar149;
      auVar144._8_4_ = iVar151;
      auVar144._12_4_ = iVar152;
      auVar133 = NEON_sshl(auVar144,auVar148,4);
      auVar236._0_4_ = fVar71 + (float)uVar191;
      fVar80 = (float)((ulong)uVar191 >> 0x20);
      auVar236._4_4_ = fVar71 + fVar80;
      auVar236._8_4_ = fVar71 + (float)uVar192;
      fVar217 = (float)((ulong)uVar192 >> 0x20);
      auVar236._12_4_ = fVar71 + fVar217;
      lVar52 = (long)param_3;
      pauVar53 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      auVar134 = *(undefined (*) [16])param_10;
      auVar155 = NEON_smax(auVar155,auVar201,4);
      auVar133 = NEON_smax(auVar133,auVar201,4);
      while( true ) {
        lVar52 = lVar52 + 1;
        auVar91 = *pauVar53;
        auVar87._0_4_ = auVar134._0_4_ - auVar91._0_4_;
        auVar87._4_4_ = auVar134._4_4_ - auVar91._4_4_;
        auVar87._8_4_ = auVar134._8_4_ - auVar91._8_4_;
        auVar87._12_4_ = auVar134._12_4_ - auVar91._12_4_;
        auVar88 = NEON_cmlt(auVar87,0,4);
        auVar89[0] = auVar88[0] & bVar54;
        auVar89[1] = auVar88[1] & bVar213;
        auVar89[2] = auVar88[2] & bVar214;
        auVar89[3] = auVar88[3] & bVar215;
        auVar89[4] = auVar88[4] & bVar216;
        auVar89[5] = auVar88[5] & bVar218;
        auVar89[6] = auVar88[6] & bVar219;
        auVar89[7] = auVar88[7] & bVar220;
        auVar89[8] = auVar88[8] & bVar221;
        auVar89[9] = auVar88[9] & bVar223;
        auVar89[10] = auVar88[10] & bVar224;
        auVar89[11] = auVar88[11] & bVar225;
        auVar89[12] = auVar88[12] & bVar226;
        auVar89[13] = auVar88[13] & bVar228;
        auVar89[14] = auVar88[14] & bVar229;
        auVar89[15] = auVar88[15] & bVar230;
        auVar88 = NEON_ext(auVar89,auVar89,8,1);
        if (CONCAT13(auVar88[3] | auVar89[3] | auVar88[7] | auVar89[7],
                     CONCAT12(auVar88[2] | auVar89[2] | auVar88[6] | auVar89[6],
                              CONCAT11(auVar88[1] | auVar89[1] | auVar88[5] | auVar89[5],
                                       auVar88[0] | auVar89[0] | auVar88[4] | auVar89[4]))) != 0xf)
        {
          auVar31[8] = 0x20;
          auVar31._0_8_ = 0x2000000020;
          auVar31._9_3_ = 0;
          auVar31[12] = 0x20;
          auVar31._13_3_ = 0;
          auVar88 = NEON_smin(auVar133,auVar31,4);
          auVar32[8] = 0x20;
          auVar32._0_8_ = 0x2000000020;
          auVar32._9_3_ = 0;
          auVar32[12] = 0x20;
          auVar32._13_3_ = 0;
          auVar144 = NEON_smin(auVar155,auVar32,4);
          auVar88 = NEON_smax(auVar88,auVar201,4);
          auVar144 = NEON_smax(auVar144,auVar201,4);
          auVar88 = NEON_sshl(auVar138,auVar88,4);
          auVar144 = NEON_sshl(auVar138,auVar144,4);
          auVar90[0] = auVar88[0] & ~auVar144[0];
          auVar90[1] = auVar88[1] & ~auVar144[1];
          auVar90[2] = auVar88[2] & ~auVar144[2];
          auVar90[3] = auVar88[3] & ~auVar144[3];
          auVar90[4] = auVar88[4] & ~auVar144[4];
          auVar90[5] = auVar88[5] & ~auVar144[5];
          auVar90[6] = auVar88[6] & ~auVar144[6];
          auVar90[7] = auVar88[7] & ~auVar144[7];
          auVar90[8] = auVar88[8] & ~auVar144[8];
          auVar90[9] = auVar88[9] & ~auVar144[9];
          auVar90[10] = auVar88[10] & ~auVar144[10];
          auVar90[11] = auVar88[11] & ~auVar144[11];
          auVar90[12] = auVar88[12] & ~auVar144[12];
          auVar90[13] = auVar88[13] & ~auVar144[13];
          auVar90[14] = auVar88[14] & ~auVar144[14];
          auVar90[15] = auVar88[15] & ~auVar144[15];
          auVar144 = NEON_fmin(auVar236,auVar134,4);
          auVar40[9] = 6;
          auVar40._0_9_ = Var51;
          auVar40[10] = 10;
          auVar40[11] = 0xe;
          auVar40[12] = 3;
          auVar40[13] = 7;
          auVar40[14] = 0xb;
          auVar40[15] = 0xf;
          auVar88 = a64_TBL(ZEXT816(0),auVar90,auVar40);
          auVar144 = NEON_fcmge(auVar144,auVar91,4);
          auVar91 = NEON_cmeq(auVar88,0,2);
          if (CONCAT17(auVar144[15] & ~auVar91[15] | auVar144[7] & ~auVar91[7],
                       CONCAT16(auVar144[14] & ~auVar91[14] | auVar144[6] & ~auVar91[6],
                                CONCAT15(auVar144[13] & ~auVar91[13] | auVar144[5] & ~auVar91[5],
                                         CONCAT14(auVar144[12] & ~auVar91[12] |
                                                  auVar144[4] & ~auVar91[4],
                                                  CONCAT13(auVar144[11] & ~auVar91[11] |
                                                           auVar144[3] & ~auVar91[3],
                                                           CONCAT12(auVar144[10] & ~auVar91[10] |
                                                                    auVar144[2] & ~auVar91[2],
                                                                    CONCAT11(auVar144[9] &
                                                                             ~auVar91[9] |
                                                                             auVar144[1] &
                                                                             ~auVar91[1],
                                                                             auVar144[8] &
                                                                             ~auVar91[8] |
                                                                             auVar144[0] &
                                                                             ~auVar91[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar52) break;
        auVar237._0_4_ = param_12 + auVar236._0_4_;
        auVar237._4_4_ = param_12 + auVar236._4_4_;
        auVar237._8_4_ = param_12 + auVar236._8_4_;
        auVar237._12_4_ = param_12 + auVar236._12_4_;
        auVar33[8] = 0x20;
        auVar33._0_8_ = 0x2000000020;
        auVar33._9_3_ = 0;
        auVar33[12] = 0x20;
        auVar33._13_3_ = 0;
        auVar155 = NEON_uqsub(auVar155,auVar33,2);
        pauVar53 = pauVar53 + 3;
        auVar34[8] = 0x20;
        auVar34._0_8_ = 0x2000000020;
        auVar34._9_3_ = 0;
        auVar34[12] = 0x20;
        auVar34._13_3_ = 0;
        auVar133 = NEON_uqsub(auVar133,auVar34,2);
        auVar236 = auVar237;
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar92._0_4_ = CONCAT13(uVar178,CONCAT12(uVar177,CONCAT11(uVar176,uVar175))) - iVar10;
      auVar92._4_4_ = CONCAT13(uVar182,CONCAT12(uVar181,CONCAT11(uVar180,uVar179))) - iVar10;
      auVar92._8_4_ = CONCAT13(uVar186,CONCAT12(uVar185,CONCAT11(uVar184,uVar183))) - iVar10;
      auVar92._12_4_ = CONCAT13(uVar190,CONCAT12(uVar189,CONCAT11(uVar188,uVar187))) - iVar10;
      auVar145._0_4_ = iVar99 - iVar12;
      auVar145._4_4_ = iVar100 - iVar12;
      auVar145._8_4_ = iVar101 - iVar12;
      auVar145._12_4_ = iVar102 - iVar12;
      auVar134 = NEON_sshl(auVar92,auVar95,4);
      auVar155 = NEON_sshl(auVar145,auVar95,4);
      uVar191 = CONCAT44(param_13 + fVar80,param_13 + (float)uVar191);
      uVar192 = CONCAT44(param_13 + fVar217,param_13 + (float)uVar192);
      iVar98 = CONCAT13(bVar74 & auVar134[3],
                        CONCAT12(bVar73 & auVar134[2],
                                 CONCAT11(bVar72 & auVar134[1],bVar70 & auVar134[0])));
      auVar130._0_8_ =
           CONCAT17(bVar74 & auVar134[7],
                    CONCAT16(bVar73 & auVar134[6],
                             CONCAT15(bVar72 & auVar134[5],CONCAT14(bVar70 & auVar134[4],iVar98))));
      auVar130[8] = bVar70 & auVar134[8];
      auVar130[9] = bVar72 & auVar134[9];
      auVar130[10] = bVar73 & auVar134[10];
      auVar130[11] = bVar74 & auVar134[11];
      auVar135[12] = bVar70 & auVar134[12];
      auVar135._0_12_ = auVar130;
      auVar135[13] = bVar72 & auVar134[13];
      auVar135[14] = bVar73 & auVar134[14];
      auVar135[15] = bVar74 & auVar134[15];
      *(undefined8 *)(param_11 + 8) = uVar192;
      *(undefined8 *)param_11 = uVar191;
      iVar99 = CONCAT13(bVar78 & auVar134[3],
                        CONCAT12(bVar77 & auVar134[2],
                                 CONCAT11(bVar76 & auVar134[1],bVar75 & auVar134[0]))) +
               auVar92._0_4_;
      uVar175 = (undefined)iVar99;
      uVar176 = (undefined)((uint)iVar99 >> 8);
      uVar177 = (undefined)((uint)iVar99 >> 0x10);
      uVar178 = (undefined)((uint)iVar99 >> 0x18);
      iVar99 = CONCAT13(bVar78 & auVar134[7],
                        CONCAT12(bVar77 & auVar134[6],
                                 CONCAT11(bVar76 & auVar134[5],bVar75 & auVar134[4]))) +
               auVar92._4_4_;
      uVar179 = (undefined)iVar99;
      uVar180 = (undefined)((uint)iVar99 >> 8);
      uVar181 = (undefined)((uint)iVar99 >> 0x10);
      uVar182 = (undefined)((uint)iVar99 >> 0x18);
      iVar99 = CONCAT13(bVar78 & auVar134[11],
                        CONCAT12(bVar77 & auVar134[10],
                                 CONCAT11(bVar76 & auVar134[9],bVar75 & auVar134[8]))) +
               auVar92._8_4_;
      uVar183 = (undefined)iVar99;
      uVar184 = (undefined)((uint)iVar99 >> 8);
      uVar185 = (undefined)((uint)iVar99 >> 0x10);
      uVar186 = (undefined)((uint)iVar99 >> 0x18);
      iVar99 = CONCAT13(bVar78 & auVar134[15],
                        CONCAT12(bVar77 & auVar134[14],
                                 CONCAT11(bVar76 & auVar134[13],bVar75 & auVar134[12]))) +
               auVar92._12_4_;
      uVar187 = (undefined)iVar99;
      uVar188 = (undefined)((uint)iVar99 >> 8);
      uVar189 = (undefined)((uint)iVar99 >> 0x10);
      uVar190 = (undefined)((uint)iVar99 >> 0x18);
      iVar99 = CONCAT13(bVar83 & auVar155[3],
                        CONCAT12(bVar82 & auVar155[2],
                                 CONCAT11(bVar81 & auVar155[1],bVar79 & auVar155[0])));
      auVar84._0_8_ =
           CONCAT17(bVar83 & auVar155[7],
                    CONCAT16(bVar82 & auVar155[6],
                             CONCAT15(bVar81 & auVar155[5],CONCAT14(bVar79 & auVar155[4],iVar99))));
      auVar84[8] = bVar79 & auVar155[8];
      auVar84[9] = bVar81 & auVar155[9];
      auVar84[10] = bVar82 & auVar155[10];
      auVar84[11] = bVar83 & auVar155[11];
      auVar93[12] = bVar79 & auVar155[12];
      auVar93._0_12_ = auVar84;
      auVar93[13] = bVar81 & auVar155[13];
      auVar93[14] = bVar82 & auVar155[14];
      auVar93[15] = bVar83 & auVar155[15];
      iVar108 = CONCAT13(bVar106 & auVar155[3],
                         CONCAT12(bVar105 & auVar155[2],
                                  CONCAT11(bVar104 & auVar155[1],bVar103 & auVar155[0])));
      auVar235._0_8_ =
           CONCAT17(bVar106 & auVar155[7],
                    CONCAT16(bVar105 & auVar155[6],
                             CONCAT15(bVar104 & auVar155[5],CONCAT14(bVar103 & auVar155[4],iVar108))
                            ));
      auVar235[8] = bVar103 & auVar155[8];
      auVar235[9] = bVar104 & auVar155[9];
      auVar235[10] = bVar105 & auVar155[10];
      auVar235[11] = bVar106 & auVar155[11];
      auVar238[12] = bVar103 & auVar155[12];
      auVar238._0_12_ = auVar235;
      auVar238[13] = bVar104 & auVar155[13];
      auVar238[14] = bVar105 & auVar155[14];
      auVar238[15] = bVar106 & auVar155[15];
      iVar98 = iVar9 + CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) + iVar98;
      uVar159 = (undefined)iVar98;
      uVar160 = (undefined)((uint)iVar98 >> 8);
      uVar161 = (undefined)((uint)iVar98 >> 0x10);
      uVar162 = (undefined)((uint)iVar98 >> 0x18);
      iVar98 = iVar9 + CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) +
               (int)((ulong)auVar130._0_8_ >> 0x20);
      uVar163 = (undefined)iVar98;
      uVar164 = (undefined)((uint)iVar98 >> 8);
      uVar165 = (undefined)((uint)iVar98 >> 0x10);
      uVar166 = (undefined)((uint)iVar98 >> 0x18);
      iVar98 = iVar9 + CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) +
               auVar130._8_4_;
      uVar167 = (undefined)iVar98;
      uVar168 = (undefined)((uint)iVar98 >> 8);
      uVar169 = (undefined)((uint)iVar98 >> 0x10);
      uVar170 = (undefined)((uint)iVar98 >> 0x18);
      iVar98 = iVar9 + CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) +
               auVar135._12_4_;
      uVar171 = (undefined)iVar98;
      uVar172 = (undefined)((uint)iVar98 >> 8);
      uVar173 = (undefined)((uint)iVar98 >> 0x10);
      uVar174 = (undefined)((uint)iVar98 >> 0x18);
      iVar99 = iVar99 + auVar145._0_4_;
      iVar100 = (int)((ulong)auVar84._0_8_ >> 0x20) + auVar145._4_4_;
      iVar101 = auVar84._8_4_ + auVar145._8_4_;
      iVar102 = auVar93._12_4_ + auVar145._12_4_;
      iVar149 = iVar11 + iVar149 + iVar108;
      iVar150 = iVar11 + iVar150 + (int)((ulong)auVar235._0_8_ >> 0x20);
      iVar151 = iVar11 + iVar151 + auVar235._8_4_;
      iVar152 = iVar11 + iVar152 + auVar238._12_4_;
    }
    return 1;
  }
  fVar71 = pfVar1[8];
  iVar101 = piVar6[8];
  iVar102 = piVar7[8];
  iVar198 = piVar4[8];
  iVar129 = MP_INT_ABS((int)(fVar71 * 128.0));
  iVar141 = MP_INT_ABS((int)(fVar71 * 384.0));
  iVar142 = MP_INT_ABS((int)(fVar71 * 640.0));
  iVar143 = MP_INT_ABS((int)(fVar71 * 896.0));
  uVar13 = puVar5[8];
  bVar206 = (byte)uVar13;
  bVar207 = (byte)((uint)uVar13 >> 8);
  bVar208 = (byte)((uint)uVar13 >> 0x10);
  bVar209 = (byte)((uint)uVar13 >> 0x18);
  iVar15 = piVar8[8];
  iVar98 = param_5;
  if (param_4 <= param_5) {
    iVar98 = param_4;
  }
  auVar239._0_4_ = iVar102 + iVar101 * iVar108 + iVar129 * iVar198;
  auVar239._4_4_ = iVar102 + iVar101 * iVar109 + iVar141 * iVar198;
  auVar239._8_4_ = iVar102 + iVar101 * iVar110 + iVar142 * iVar198;
  auVar239._12_4_ = iVar102 + iVar101 * iVar111 + iVar143 * iVar198;
  fVar80 = param_12 * 0.0;
  auVar201 = NEON_sshl(auVar239,auVar91,4);
  iVar101 = CONCAT13(auVar201[3] & bVar209,
                     CONCAT12(auVar201[2] & bVar208,
                              CONCAT11(auVar201[1] & bVar207,auVar201[0] & bVar206)));
  auVar210._0_8_ =
       CONCAT17(auVar201[7] & bVar209,
                CONCAT16(auVar201[6] & bVar208,
                         CONCAT15(auVar201[5] & bVar207,CONCAT14(auVar201[4] & bVar206,iVar101))));
  auVar210[8] = auVar201[8] & bVar206;
  auVar210[9] = auVar201[9] & bVar207;
  auVar210[10] = auVar201[10] & bVar208;
  auVar210[11] = auVar201[11] & bVar209;
  auVar211[12] = auVar201[12] & bVar206;
  auVar211._0_12_ = auVar210;
  auVar211[13] = auVar201[13] & bVar207;
  auVar211[14] = auVar201[14] & bVar208;
  auVar211[15] = auVar201[15] & bVar209;
  auVar194._0_4_ = iVar15 + (int)(fVar71 * 128.0) + iVar101;
  auVar194._4_4_ = iVar15 + (int)(fVar71 * 384.0) + (int)((ulong)auVar210._0_8_ >> 0x20);
  auVar194._8_4_ = iVar15 + (int)(fVar71 * 640.0) + auVar210._8_4_;
  auVar194._12_4_ = iVar15 + (int)(fVar71 * 896.0) + auVar211._12_4_;
  if (param_3 < iVar98) {
    bVar199 = (byte)iVar198;
    bVar203 = (byte)((uint)iVar198 >> 8);
    bVar204 = (byte)((uint)iVar198 >> 0x10);
    bVar205 = (byte)((uint)iVar198 >> 0x18);
    iVar108 = CONCAT13(auVar201[3] & bVar205,
                       CONCAT12(auVar201[2] & bVar204,
                                CONCAT11(auVar201[1] & bVar203,auVar201[0] & bVar199)));
    auVar131._0_8_ =
         CONCAT17(auVar201[7] & bVar205,
                  CONCAT16(auVar201[6] & bVar204,
                           CONCAT15(auVar201[5] & bVar203,CONCAT14(auVar201[4] & bVar199,iVar108))))
    ;
    auVar131[8] = auVar201[8] & bVar199;
    auVar131[9] = auVar201[9] & bVar203;
    auVar131[10] = auVar201[10] & bVar204;
    auVar131[11] = auVar201[11] & bVar205;
    auVar136[12] = auVar201[12] & bVar199;
    auVar136._0_12_ = auVar131;
    auVar136[13] = auVar201[13] & bVar203;
    auVar136[14] = auVar201[14] & bVar204;
    auVar136[15] = auVar201[15] & bVar205;
    fVar71 = *(float *)param_11;
    fVar217 = *(float *)(param_11 + 4);
    fVar222 = *(float *)(param_11 + 8);
    fVar227 = *(float *)(param_11 + 0xc);
    auVar232._8_4_ = 0xfffffff8;
    auVar232._0_8_ = 0xfffffff8fffffff8;
    auVar232._12_4_ = 0xfffffff8;
    iVar101 = piVar3[8];
    auVar201 = ZEXT816(0);
    iVar102 = piVar2[8];
    iVar108 = auVar239._0_4_ + iVar108;
    iVar109 = auVar239._4_4_ + (int)((ulong)auVar131._0_8_ >> 0x20);
    iVar110 = auVar239._8_4_ + auVar131._8_4_;
    iVar111 = auVar239._12_4_ + auVar136._12_4_;
    auVar240._8_4_ = 0x20;
    auVar240._0_8_ = 0x2000000020;
    auVar240._12_4_ = 0x20;
    auVar107._8_8_ = 0xffffffffffffffff;
    auVar107._0_8_ = 0xffffffffffffffff;
    do {
      auVar21[1] = uVar160;
      auVar21[0] = uVar159;
      auVar21[2] = uVar161;
      auVar21[3] = uVar162;
      auVar21[4] = uVar163;
      auVar21[5] = uVar164;
      auVar21[6] = uVar165;
      auVar21[7] = uVar166;
      auVar21[8] = uVar167;
      auVar21[9] = uVar168;
      auVar21[10] = uVar169;
      auVar21[11] = uVar170;
      auVar21[12] = uVar171;
      auVar21[13] = uVar172;
      auVar21[14] = uVar173;
      auVar21[15] = uVar174;
      auVar134 = NEON_sshl(auVar21,auVar232,4);
      auVar155 = NEON_sshl(auVar194,auVar232,4);
      lVar52 = (long)param_3;
      pauVar53 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      fVar128 = (float)((ulong)*(undefined8 *)(param_10 + 8) >> 0x20);
      fVar17 = fVar80 + fVar71;
      uVar112 = SUB41(fVar17,0);
      uVar113 = (undefined)((uint)fVar17 >> 8);
      uVar114 = (undefined)((uint)fVar17 >> 0x10);
      uVar115 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar217;
      uVar116 = SUB41(fVar17,0);
      uVar117 = (undefined)((uint)fVar17 >> 8);
      uVar118 = (undefined)((uint)fVar17 >> 0x10);
      uVar119 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar222;
      uVar120 = SUB41(fVar17,0);
      uVar121 = (undefined)((uint)fVar17 >> 8);
      uVar122 = (undefined)((uint)fVar17 >> 0x10);
      uVar123 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar227;
      uVar124 = SUB41(fVar17,0);
      uVar125 = (undefined)((uint)fVar17 >> 8);
      uVar126 = (undefined)((uint)fVar17 >> 0x10);
      uVar127 = (undefined)((uint)fVar17 >> 0x18);
      auVar134 = NEON_smax(auVar134,auVar201,4);
      auVar155 = NEON_smax(auVar155,auVar201,4);
      while( true ) {
        lVar52 = lVar52 + 1;
        auVar133 = *pauVar53;
        auVar146._0_4_ = (float)*(undefined8 *)param_10 - auVar133._0_4_;
        auVar146._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar133._4_4_;
        auVar146._8_4_ = (float)*(undefined8 *)(param_10 + 8) - auVar133._8_4_;
        auVar146._12_4_ = fVar128 - auVar133._12_4_;
        auVar91 = NEON_cmlt(auVar146,0,4);
        auVar147[0] = auVar91[0] & bVar54;
        auVar147[1] = auVar91[1] & bVar213;
        auVar147[2] = auVar91[2] & bVar214;
        auVar147[3] = auVar91[3] & bVar215;
        auVar147[4] = auVar91[4] & bVar216;
        auVar147[5] = auVar91[5] & bVar218;
        auVar147[6] = auVar91[6] & bVar219;
        auVar147[7] = auVar91[7] & bVar220;
        auVar147[8] = auVar91[8] & bVar221;
        auVar147[9] = auVar91[9] & bVar223;
        auVar147[10] = auVar91[10] & bVar224;
        auVar147[11] = auVar91[11] & bVar225;
        auVar147[12] = auVar91[12] & bVar226;
        auVar147[13] = auVar91[13] & bVar228;
        auVar147[14] = auVar91[14] & bVar229;
        auVar147[15] = auVar91[15] & bVar230;
        auVar91 = NEON_ext(auVar147,auVar147,8,1);
        if (CONCAT13(auVar91[3] | auVar147[3] | auVar91[7] | auVar147[7],
                     CONCAT12(auVar91[2] | auVar147[2] | auVar91[6] | auVar147[6],
                              CONCAT11(auVar91[1] | auVar147[1] | auVar91[5] | auVar147[5],
                                       auVar91[0] | auVar147[0] | auVar91[4] | auVar147[4]))) != 0xf
           ) {
          auVar91 = NEON_smin(auVar155,auVar240,4);
          auVar148 = NEON_smin(auVar134,auVar240,4);
          auVar16[1] = uVar113;
          auVar16[0] = uVar112;
          auVar16[2] = uVar114;
          auVar16[3] = uVar115;
          auVar16[4] = uVar116;
          auVar16[5] = uVar117;
          auVar16[6] = uVar118;
          auVar16[7] = uVar119;
          auVar16[8] = uVar120;
          auVar16[9] = uVar121;
          auVar16[10] = uVar122;
          auVar16[11] = uVar123;
          auVar16[12] = uVar124;
          auVar16[13] = uVar125;
          auVar16[14] = uVar126;
          auVar16[15] = uVar127;
          auVar18._12_4_ = fVar128;
          auVar18._0_12_ = *(undefined (*) [12])param_10;
          auVar88 = NEON_fmin(auVar16,auVar18,4);
          auVar91 = NEON_smax(auVar91,auVar201,4);
          auVar148 = NEON_smax(auVar148,auVar201,4);
          auVar88 = NEON_fcmge(auVar88,auVar133,4);
          auVar133 = NEON_sshl(auVar107,auVar91,4);
          auVar91 = NEON_sshl(auVar107,auVar148,4);
          auVar59[0] = auVar133[0] & ~auVar91[0];
          auVar59[1] = auVar133[1] & ~auVar91[1];
          auVar59[2] = auVar133[2] & ~auVar91[2];
          auVar59[3] = auVar133[3] & ~auVar91[3];
          auVar59[4] = auVar133[4] & ~auVar91[4];
          auVar59[5] = auVar133[5] & ~auVar91[5];
          auVar59[6] = auVar133[6] & ~auVar91[6];
          auVar59[7] = auVar133[7] & ~auVar91[7];
          auVar59[8] = auVar133[8] & ~auVar91[8];
          auVar59[9] = auVar133[9] & ~auVar91[9];
          auVar59[10] = auVar133[10] & ~auVar91[10];
          auVar59[11] = auVar133[11] & ~auVar91[11];
          auVar59[12] = auVar133[12] & ~auVar91[12];
          auVar59[13] = auVar133[13] & ~auVar91[13];
          auVar59[14] = auVar133[14] & ~auVar91[14];
          auVar59[15] = auVar133[15] & ~auVar91[15];
          auVar48._9_7_ = _UNK_004c5139;
          auVar48._0_9_ = _DAT_004c5130;
          auVar133 = a64_TBL(ZEXT816(0),auVar59,auVar48);
          auVar133 = NEON_cmeq(auVar133,0,2);
          if (CONCAT17(auVar88[15] & ~auVar133[15] | auVar88[7] & ~auVar133[7],
                       CONCAT16(auVar88[14] & ~auVar133[14] | auVar88[6] & ~auVar133[6],
                                CONCAT15(auVar88[13] & ~auVar133[13] | auVar88[5] & ~auVar133[5],
                                         CONCAT14(auVar88[12] & ~auVar133[12] |
                                                  auVar88[4] & ~auVar133[4],
                                                  CONCAT13(auVar88[11] & ~auVar133[11] |
                                                           auVar88[3] & ~auVar133[3],
                                                           CONCAT12(auVar88[10] & ~auVar133[10] |
                                                                    auVar88[2] & ~auVar133[2],
                                                                    CONCAT11(auVar88[9] &
                                                                             ~auVar133[9] |
                                                                             auVar88[1] &
                                                                             ~auVar133[1],
                                                                             auVar88[8] &
                                                                             ~auVar133[8] |
                                                                             auVar88[0] &
                                                                             ~auVar133[0]))))))) !=
              0) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar52) break;
        fVar17 = param_12 + (float)CONCAT13(uVar115,CONCAT12(uVar114,CONCAT11(uVar113,uVar112)));
        uVar112 = SUB41(fVar17,0);
        uVar113 = (undefined)((uint)fVar17 >> 8);
        uVar114 = (undefined)((uint)fVar17 >> 0x10);
        uVar115 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar119,CONCAT12(uVar118,CONCAT11(uVar117,uVar116)));
        uVar116 = SUB41(fVar17,0);
        uVar117 = (undefined)((uint)fVar17 >> 8);
        uVar118 = (undefined)((uint)fVar17 >> 0x10);
        uVar119 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar123,CONCAT12(uVar122,CONCAT11(uVar121,uVar120)));
        uVar120 = SUB41(fVar17,0);
        uVar121 = (undefined)((uint)fVar17 >> 8);
        uVar122 = (undefined)((uint)fVar17 >> 0x10);
        uVar123 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar127,CONCAT12(uVar126,CONCAT11(uVar125,uVar124)));
        uVar124 = SUB41(fVar17,0);
        uVar125 = (undefined)((uint)fVar17 >> 8);
        uVar126 = (undefined)((uint)fVar17 >> 0x10);
        uVar127 = (undefined)((uint)fVar17 >> 0x18);
        auVar134 = NEON_uqsub(auVar134,auVar240,2);
        pauVar53 = pauVar53 + 3;
        auVar155 = NEON_uqsub(auVar155,auVar240,2);
      }
      auVar57._0_4_ = CONCAT13(uVar178,CONCAT12(uVar177,CONCAT11(uVar176,uVar175))) - iVar10;
      auVar57._4_4_ = CONCAT13(uVar182,CONCAT12(uVar181,CONCAT11(uVar180,uVar179))) - iVar10;
      auVar57._8_4_ = CONCAT13(uVar186,CONCAT12(uVar185,CONCAT11(uVar184,uVar183))) - iVar10;
      auVar57._12_4_ = CONCAT13(uVar190,CONCAT12(uVar189,CONCAT11(uVar188,uVar187))) - iVar10;
      auVar137._0_4_ = iVar108 - iVar101;
      auVar137._4_4_ = iVar109 - iVar101;
      auVar137._8_4_ = iVar110 - iVar101;
      auVar137._12_4_ = iVar111 - iVar101;
      param_3 = *(int *)(this + 300) + param_3;
      iVar110 = auVar194._4_4_;
      iVar111 = auVar194._8_4_;
      iVar198 = auVar194._12_4_;
      auVar25[8] = 0xe1;
      auVar25._0_8_ = 0xffffffe1ffffffe1;
      auVar25[9] = 0xff;
      auVar25[10] = 0xff;
      auVar25[11] = 0xff;
      auVar25[12] = 0xe1;
      auVar25[13] = 0xff;
      auVar25[14] = 0xff;
      auVar25[15] = 0xff;
      auVar134 = NEON_sshl(auVar57,auVar25,4);
      auVar26[8] = 0xe1;
      auVar26._0_8_ = 0xffffffe1ffffffe1;
      auVar26[9] = 0xff;
      auVar26[10] = 0xff;
      auVar26[11] = 0xff;
      auVar26[12] = 0xe1;
      auVar26[13] = 0xff;
      auVar26[14] = 0xff;
      auVar26[15] = 0xff;
      auVar155 = NEON_sshl(auVar137,auVar26,4);
      iVar109 = CONCAT13(bVar74 & auVar134[3],
                         CONCAT12(bVar73 & auVar134[2],
                                  CONCAT11(bVar72 & auVar134[1],bVar70 & auVar134[0])));
      auVar85._0_8_ =
           CONCAT17(bVar74 & auVar134[7],
                    CONCAT16(bVar73 & auVar134[6],
                             CONCAT15(bVar72 & auVar134[5],CONCAT14(bVar70 & auVar134[4],iVar109))))
      ;
      auVar85[8] = bVar70 & auVar134[8];
      auVar85[9] = bVar72 & auVar134[9];
      auVar85[10] = bVar73 & auVar134[10];
      auVar85[11] = bVar74 & auVar134[11];
      auVar94[12] = bVar70 & auVar134[12];
      auVar94._0_12_ = auVar85;
      auVar94[13] = bVar72 & auVar134[13];
      auVar94[14] = bVar73 & auVar134[14];
      auVar94[15] = bVar74 & auVar134[15];
      iVar108 = CONCAT13(bVar78 & auVar134[3],
                         CONCAT12(bVar77 & auVar134[2],
                                  CONCAT11(bVar76 & auVar134[1],bVar75 & auVar134[0]))) +
                auVar57._0_4_;
      uVar175 = (undefined)iVar108;
      uVar176 = (undefined)((uint)iVar108 >> 8);
      uVar177 = (undefined)((uint)iVar108 >> 0x10);
      uVar178 = (undefined)((uint)iVar108 >> 0x18);
      iVar108 = CONCAT13(bVar78 & auVar134[7],
                         CONCAT12(bVar77 & auVar134[6],
                                  CONCAT11(bVar76 & auVar134[5],bVar75 & auVar134[4]))) +
                auVar57._4_4_;
      uVar179 = (undefined)iVar108;
      uVar180 = (undefined)((uint)iVar108 >> 8);
      uVar181 = (undefined)((uint)iVar108 >> 0x10);
      uVar182 = (undefined)((uint)iVar108 >> 0x18);
      iVar108 = CONCAT13(bVar78 & auVar134[11],
                         CONCAT12(bVar77 & auVar134[10],
                                  CONCAT11(bVar76 & auVar134[9],bVar75 & auVar134[8]))) +
                auVar57._8_4_;
      uVar183 = (undefined)iVar108;
      uVar184 = (undefined)((uint)iVar108 >> 8);
      uVar185 = (undefined)((uint)iVar108 >> 0x10);
      uVar186 = (undefined)((uint)iVar108 >> 0x18);
      iVar108 = CONCAT13(bVar78 & auVar134[15],
                         CONCAT12(bVar77 & auVar134[14],
                                  CONCAT11(bVar76 & auVar134[13],bVar75 & auVar134[12]))) +
                auVar57._12_4_;
      uVar187 = (undefined)iVar108;
      uVar188 = (undefined)((uint)iVar108 >> 8);
      uVar189 = (undefined)((uint)iVar108 >> 0x10);
      uVar190 = (undefined)((uint)iVar108 >> 0x18);
      iVar108 = CONCAT13(bVar205 & auVar155[3],
                         CONCAT12(bVar204 & auVar155[2],
                                  CONCAT11(bVar203 & auVar155[1],bVar199 & auVar155[0])));
      auVar55._0_8_ =
           CONCAT17(bVar205 & auVar155[7],
                    CONCAT16(bVar204 & auVar155[6],
                             CONCAT15(bVar203 & auVar155[5],CONCAT14(bVar199 & auVar155[4],iVar108))
                            ));
      auVar55[8] = bVar199 & auVar155[8];
      auVar55[9] = bVar203 & auVar155[9];
      auVar55[10] = bVar204 & auVar155[10];
      auVar55[11] = bVar205 & auVar155[11];
      auVar58[12] = bVar199 & auVar155[12];
      auVar58._0_12_ = auVar55;
      auVar58[13] = bVar203 & auVar155[13];
      auVar58[14] = bVar204 & auVar155[14];
      auVar58[15] = bVar205 & auVar155[15];
      iVar109 = iVar9 + CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) + iVar109;
      uVar159 = (undefined)iVar109;
      uVar160 = (undefined)((uint)iVar109 >> 8);
      uVar161 = (undefined)((uint)iVar109 >> 0x10);
      uVar162 = (undefined)((uint)iVar109 >> 0x18);
      iVar109 = iVar9 + CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) +
                (int)((ulong)auVar85._0_8_ >> 0x20);
      uVar163 = (undefined)iVar109;
      uVar164 = (undefined)((uint)iVar109 >> 8);
      uVar165 = (undefined)((uint)iVar109 >> 0x10);
      uVar166 = (undefined)((uint)iVar109 >> 0x18);
      iVar109 = iVar9 + CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) +
                auVar85._8_4_;
      uVar167 = (undefined)iVar109;
      uVar168 = (undefined)((uint)iVar109 >> 8);
      uVar169 = (undefined)((uint)iVar109 >> 0x10);
      uVar170 = (undefined)((uint)iVar109 >> 0x18);
      iVar109 = iVar9 + CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) +
                auVar94._12_4_;
      uVar171 = (undefined)iVar109;
      uVar172 = (undefined)((uint)iVar109 >> 8);
      uVar173 = (undefined)((uint)iVar109 >> 0x10);
      uVar174 = (undefined)((uint)iVar109 >> 0x18);
      fVar71 = param_13 + fVar71;
      fVar217 = param_13 + fVar217;
      fVar222 = param_13 + fVar222;
      fVar227 = param_13 + fVar227;
      auVar194._0_4_ =
           iVar102 + auVar194._0_4_ +
           CONCAT13(bVar209 & auVar155[3],
                    CONCAT12(bVar208 & auVar155[2],
                             CONCAT11(bVar207 & auVar155[1],bVar206 & auVar155[0])));
      auVar194._4_4_ =
           iVar102 + iVar110 +
           CONCAT13(bVar209 & auVar155[7],
                    CONCAT12(bVar208 & auVar155[6],
                             CONCAT11(bVar207 & auVar155[5],bVar206 & auVar155[4])));
      auVar194._8_4_ =
           iVar102 + iVar111 +
           CONCAT13(bVar209 & auVar155[11],
                    CONCAT12(bVar208 & auVar155[10],
                             CONCAT11(bVar207 & auVar155[9],bVar206 & auVar155[8])));
      auVar194._12_4_ =
           iVar102 + iVar198 +
           CONCAT13(bVar209 & auVar155[15],
                    CONCAT12(bVar208 & auVar155[14],
                             CONCAT11(bVar207 & auVar155[13],bVar206 & auVar155[12])));
      iVar108 = iVar108 + auVar137._0_4_;
      iVar109 = (int)((ulong)auVar55._0_8_ >> 0x20) + auVar137._4_4_;
      iVar110 = auVar55._8_4_ + auVar137._8_4_;
      iVar111 = auVar58._12_4_ + auVar137._12_4_;
      *(float *)(param_11 + 0x10) = fVar222;
      *(float *)(param_11 + 0x14) = fVar227;
      *(float *)param_11 = fVar71;
      *(float *)(param_11 + 4) = fVar217;
    } while (param_3 < iVar98);
  }
  auVar201 = _DAT_004c4480;
  if (param_3 < param_5) {
    auVar60._8_4_ = 0xfffffff8;
    auVar60._0_8_ = 0xfffffff8fffffff8;
    auVar60._12_4_ = 0xfffffff8;
    auVar134 = *(undefined (*) [16])param_11;
    auVar88 = ZEXT816(0);
    pauVar53 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
    auVar133 = NEON_sshl(auVar194,auVar60,4);
    auVar19._4_4_ = iVar150;
    auVar19._0_4_ = iVar149;
    auVar19._8_4_ = iVar151;
    auVar19._12_4_ = iVar152;
    auVar91 = NEON_sshl(auVar19,auVar60,4);
    lVar52 = (long)param_3;
    auVar22[1] = uVar160;
    auVar22[0] = uVar159;
    auVar22[2] = uVar161;
    auVar22[3] = uVar162;
    auVar22[4] = uVar163;
    auVar22[5] = uVar164;
    auVar22[6] = uVar165;
    auVar22[7] = uVar166;
    auVar22[8] = uVar167;
    auVar22[9] = uVar168;
    auVar22[10] = uVar169;
    auVar22[11] = uVar170;
    auVar22[12] = uVar171;
    auVar22[13] = uVar172;
    auVar22[14] = uVar173;
    auVar22[15] = uVar174;
    auVar155 = NEON_sshl(auVar22,auVar60,4);
    uVar191 = *(undefined8 *)(param_10 + 8);
    auVar195._0_4_ = fVar80 + auVar134._0_4_;
    auVar195._4_4_ = fVar80 + auVar134._4_4_;
    auVar195._8_4_ = fVar80 + auVar134._8_4_;
    auVar195._12_4_ = fVar80 + auVar134._12_4_;
    auVar134 = NEON_smax(auVar133,auVar88,4);
    auVar133 = NEON_smax(auVar91,auVar88,4);
    auVar155 = NEON_smax(auVar155,auVar88,4);
    auVar241._8_8_ = 0xffffffffffffffff;
    auVar241._0_8_ = 0xffffffffffffffff;
    auVar49._9_7_ = _UNK_004c5139;
    auVar49._0_9_ = _DAT_004c5130;
    while( true ) {
      lVar52 = lVar52 + 1;
      auVar91 = *pauVar53;
      auVar61._0_4_ = (float)*(undefined8 *)param_10 - auVar91._0_4_;
      auVar61._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar91._4_4_;
      auVar61._8_4_ = (float)uVar191 - auVar91._8_4_;
      auVar61._12_4_ = (float)((ulong)uVar191 >> 0x20) - auVar91._12_4_;
      auVar148 = NEON_cmlt(auVar61,0,4);
      bVar54 = auVar148[0] & 1;
      auVar62._0_5_ = CONCAT14(auVar148[4],(uint)bVar54) & 0x2ffffffff;
      auVar62._5_3_ = 0;
      auVar62[8] = auVar148[8] & 4;
      auVar62._9_3_ = 0;
      auVar62[12] = auVar148[12] & 8;
      auVar62._13_3_ = 0;
      auVar95 = NEON_ext(auVar62,auVar62,8,1);
      if (CONCAT13(auVar95[3] | auVar95[7],
                   CONCAT12(auVar95[2] | auVar95[6],
                            CONCAT11(auVar95[1] | auVar95[5],
                                     auVar95[0] | bVar54 | auVar95[4] | auVar148[4] & 2))) != 0xf) {
        auVar41[8] = 0x20;
        auVar41._0_8_ = 0x2000000020;
        auVar41._9_3_ = 0;
        auVar41[12] = 0x20;
        auVar41._13_3_ = 0;
        auVar148 = NEON_smin(auVar134,auVar41,4);
        auVar42[8] = 0x20;
        auVar42._0_8_ = 0x2000000020;
        auVar42._9_3_ = 0;
        auVar42[12] = 0x20;
        auVar42._13_3_ = 0;
        auVar95 = NEON_smin(auVar133,auVar42,4);
        auVar43[8] = 0x20;
        auVar43._0_8_ = 0x2000000020;
        auVar43._9_3_ = 0;
        auVar43[12] = 0x20;
        auVar43._13_3_ = 0;
        auVar138 = NEON_smin(auVar155,auVar43,4);
        auVar148 = NEON_smax(auVar148,auVar88,4);
        auVar95 = NEON_smax(auVar95,auVar88,4);
        auVar138 = NEON_smax(auVar138,auVar88,4);
        auVar148 = NEON_sshl(auVar241,auVar148,4);
        auVar95 = NEON_sshl(auVar241,auVar95,4);
        auVar138 = NEON_sshl(auVar241,auVar138,4);
        auVar63[0] = auVar95[0] & auVar148[0] & ~auVar138[0];
        auVar63[1] = auVar95[1] & auVar148[1] & ~auVar138[1];
        auVar63[2] = auVar95[2] & auVar148[2] & ~auVar138[2];
        auVar63[3] = auVar95[3] & auVar148[3] & ~auVar138[3];
        auVar63[4] = auVar95[4] & auVar148[4] & ~auVar138[4];
        auVar63[5] = auVar95[5] & auVar148[5] & ~auVar138[5];
        auVar63[6] = auVar95[6] & auVar148[6] & ~auVar138[6];
        auVar63[7] = auVar95[7] & auVar148[7] & ~auVar138[7];
        auVar63[8] = auVar95[8] & auVar148[8] & ~auVar138[8];
        auVar63[9] = auVar95[9] & auVar148[9] & ~auVar138[9];
        auVar63[10] = auVar95[10] & auVar148[10] & ~auVar138[10];
        auVar63[11] = auVar95[11] & auVar148[11] & ~auVar138[11];
        auVar63[12] = auVar95[12] & auVar148[12] & ~auVar138[12];
        auVar63[13] = auVar95[13] & auVar148[13] & ~auVar138[13];
        auVar63[14] = auVar95[14] & auVar148[14] & ~auVar138[14];
        auVar63[15] = auVar95[15] & auVar148[15] & ~auVar138[15];
        auVar35[9] = (char)((ulong)uVar191 >> 8);
        auVar35._0_9_ = *(unkbyte9 *)param_10;
        auVar35[10] = (char)((ulong)uVar191 >> 0x10);
        auVar35[11] = (char)((ulong)uVar191 >> 0x18);
        auVar35[12] = (char)((ulong)uVar191 >> 0x20);
        auVar35[13] = (char)((ulong)uVar191 >> 0x28);
        auVar35[14] = (char)((ulong)uVar191 >> 0x30);
        auVar35[15] = (char)((ulong)uVar191 >> 0x38);
        auVar95 = NEON_fmin(auVar195,auVar35,4);
        auVar148 = a64_TBL(ZEXT816(0),auVar63,auVar49);
        auVar95 = NEON_fcmge(auVar95,auVar91,4);
        auVar91 = NEON_cmeq(auVar148,0,2);
        if (CONCAT17(auVar95[15] & ~auVar91[15] | auVar95[7] & ~auVar91[7],
                     CONCAT16(auVar95[14] & ~auVar91[14] | auVar95[6] & ~auVar91[6],
                              CONCAT15(auVar95[13] & ~auVar91[13] | auVar95[5] & ~auVar91[5],
                                       CONCAT14(auVar95[12] & ~auVar91[12] |
                                                auVar95[4] & ~auVar91[4],
                                                CONCAT13(auVar95[11] & ~auVar91[11] |
                                                         auVar95[3] & ~auVar91[3],
                                                         CONCAT12(auVar95[10] & ~auVar91[10] |
                                                                  auVar95[2] & ~auVar91[2],
                                                                  CONCAT11(auVar95[9] & ~auVar91[9]
                                                                           | auVar95[1] &
                                                                             ~auVar91[1],
                                                                           auVar95[8] & ~auVar91[8]
                                                                           | auVar95[0] &
                                                                             ~auVar91[0]))))))) != 0
           ) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
          return 0;
        }
      }
      if (param_3 + param_2 <= lVar52) break;
      auVar44[8] = 0x20;
      auVar44._0_8_ = 0x2000000020;
      auVar44._9_3_ = 0;
      auVar44[12] = 0x20;
      auVar44._13_3_ = 0;
      auVar155 = NEON_uqsub(auVar155,auVar44,2);
      auVar45[8] = 0x20;
      auVar45._0_8_ = 0x2000000020;
      auVar45._9_3_ = 0;
      auVar45[12] = 0x20;
      auVar45._13_3_ = 0;
      auVar134 = NEON_uqsub(auVar134,auVar45,2);
      pauVar53 = pauVar53 + 3;
      auVar46[8] = 0x20;
      auVar46._0_8_ = 0x2000000020;
      auVar46._9_3_ = 0;
      auVar46[12] = 0x20;
      auVar46._13_3_ = 0;
      auVar133 = NEON_uqsub(auVar133,auVar46,2);
      auVar196._0_4_ = param_12 + auVar195._0_4_;
      auVar196._4_4_ = param_12 + auVar195._4_4_;
      auVar196._8_4_ = param_12 + auVar195._8_4_;
      auVar196._12_4_ = param_12 + auVar195._12_4_;
      auVar195 = auVar196;
    }
    param_3 = *(int *)(this + 300) + param_3;
  }
  if (param_3 < param_5) {
    auVar64._0_4_ = CONCAT13(uVar178,CONCAT12(uVar177,CONCAT11(uVar176,uVar175))) - iVar10;
    auVar64._4_4_ = CONCAT13(uVar182,CONCAT12(uVar181,CONCAT11(uVar180,uVar179))) - iVar10;
    auVar64._8_4_ = CONCAT13(uVar186,CONCAT12(uVar185,CONCAT11(uVar184,uVar183))) - iVar10;
    auVar64._12_4_ = CONCAT13(uVar190,CONCAT12(uVar189,CONCAT11(uVar188,uVar187))) - iVar10;
    auVar134 = *(undefined (*) [16])param_11;
    auVar139._0_4_ = iVar99 - iVar12;
    auVar139._4_4_ = iVar100 - iVar12;
    auVar139._8_4_ = (int)uStack_68 - (int)uStack_58;
    iVar100 = (int)((ulong)uStack_58 >> 0x20);
    auVar139._12_4_ = (int)((ulong)uStack_68 >> 0x20) - iVar100;
    auVar27[8] = 0xe1;
    auVar27._0_8_ = 0xffffffe1ffffffe1;
    auVar27[9] = 0xff;
    auVar27[10] = 0xff;
    auVar27[11] = 0xff;
    auVar27[12] = 0xe1;
    auVar27[13] = 0xff;
    auVar27[14] = 0xff;
    auVar27[15] = 0xff;
    auVar155 = NEON_sshl(auVar64,auVar27,4);
    auVar28[8] = 0xe1;
    auVar28._0_8_ = 0xffffffe1ffffffe1;
    auVar28[9] = 0xff;
    auVar28[10] = 0xff;
    auVar28[11] = 0xff;
    auVar28[12] = 0xe1;
    auVar28[13] = 0xff;
    auVar28[14] = 0xff;
    auVar28[15] = 0xff;
    auVar133 = NEON_sshl(auVar139,auVar28,4);
    fVar71 = auVar134._0_4_;
    fVar217 = auVar134._4_4_;
    fVar222 = auVar134._8_4_;
    fVar227 = auVar134._12_4_;
    auVar212._8_8_ = 0xffffffffffffffff;
    auVar212._0_8_ = 0xffffffffffffffff;
    iVar98 = CONCAT13(bVar78 & auVar155[3],
                      CONCAT12(bVar77 & auVar155[2],
                               CONCAT11(bVar76 & auVar155[1],bVar75 & auVar155[0])));
    auVar86._0_8_ =
         CONCAT17(bVar78 & auVar155[7],
                  CONCAT16(bVar77 & auVar155[6],
                           CONCAT15(bVar76 & auVar155[5],CONCAT14(bVar75 & auVar155[4],iVar98))));
    auVar86[8] = bVar75 & auVar155[8];
    auVar86[9] = bVar76 & auVar155[9];
    auVar86[10] = bVar77 & auVar155[10];
    auVar86[11] = bVar78 & auVar155[11];
    auVar96[12] = bVar75 & auVar155[12];
    auVar96._0_12_ = auVar86;
    auVar96[13] = bVar76 & auVar155[13];
    auVar96[14] = bVar77 & auVar155[14];
    auVar96[15] = bVar78 & auVar155[15];
    iVar99 = CONCAT13(bVar74 & auVar155[3],
                      CONCAT12(bVar73 & auVar155[2],
                               CONCAT11(bVar72 & auVar155[1],bVar70 & auVar155[0])));
    auVar154._0_8_ =
         CONCAT17(bVar74 & auVar155[7],
                  CONCAT16(bVar73 & auVar155[6],
                           CONCAT15(bVar72 & auVar155[5],CONCAT14(bVar70 & auVar155[4],iVar99))));
    auVar154[8] = bVar70 & auVar155[8];
    auVar154[9] = bVar72 & auVar155[9];
    auVar154[10] = bVar73 & auVar155[10];
    auVar154[11] = bVar74 & auVar155[11];
    auVar156[12] = bVar70 & auVar155[12];
    auVar156._0_12_ = auVar154;
    auVar156[13] = bVar72 & auVar155[13];
    auVar156[14] = bVar73 & auVar155[14];
    auVar156[15] = bVar74 & auVar155[15];
    iVar101 = CONCAT13(bVar106 & auVar133[3],
                       CONCAT12(bVar105 & auVar133[2],
                                CONCAT11(bVar104 & auVar133[1],bVar103 & auVar133[0])));
    auVar193._0_8_ =
         CONCAT17(bVar106 & auVar133[7],
                  CONCAT16(bVar105 & auVar133[6],
                           CONCAT15(bVar104 & auVar133[5],CONCAT14(bVar103 & auVar133[4],iVar101))))
    ;
    auVar193[8] = bVar103 & auVar133[8];
    auVar193[9] = bVar104 & auVar133[9];
    auVar193[10] = bVar105 & auVar133[10];
    auVar193[11] = bVar106 & auVar133[11];
    auVar197[12] = bVar103 & auVar133[12];
    auVar197._0_12_ = auVar193;
    auVar197[13] = bVar104 & auVar133[13];
    auVar197[14] = bVar105 & auVar133[14];
    auVar197[15] = bVar106 & auVar133[15];
    iVar98 = iVar98 + auVar64._0_4_;
    uVar175 = (undefined)iVar98;
    uVar176 = (undefined)((uint)iVar98 >> 8);
    uVar177 = (undefined)((uint)iVar98 >> 0x10);
    uVar178 = (undefined)((uint)iVar98 >> 0x18);
    iVar98 = (int)((ulong)auVar86._0_8_ >> 0x20) + auVar64._4_4_;
    uVar179 = (undefined)iVar98;
    uVar180 = (undefined)((uint)iVar98 >> 8);
    uVar181 = (undefined)((uint)iVar98 >> 0x10);
    uVar182 = (undefined)((uint)iVar98 >> 0x18);
    iVar98 = auVar86._8_4_ + auVar64._8_4_;
    uVar183 = (undefined)iVar98;
    uVar184 = (undefined)((uint)iVar98 >> 8);
    uVar185 = (undefined)((uint)iVar98 >> 0x10);
    uVar186 = (undefined)((uint)iVar98 >> 0x18);
    iVar98 = auVar96._12_4_ + auVar64._12_4_;
    uVar187 = (undefined)iVar98;
    uVar188 = (undefined)((uint)iVar98 >> 8);
    uVar189 = (undefined)((uint)iVar98 >> 0x10);
    uVar190 = (undefined)((uint)iVar98 >> 0x18);
    auVar202._0_4_ = iVar9 + CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) + iVar99;
    auVar202._4_4_ =
         iVar9 + CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) +
         (int)((ulong)auVar154._0_8_ >> 0x20);
    auVar202._8_4_ =
         iVar9 + CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) + auVar154._8_4_;
    auVar202._12_4_ =
         iVar9 + CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) + auVar156._12_4_;
    iVar98 = CONCAT13(bVar83 & auVar133[3],
                      CONCAT12(bVar82 & auVar133[2],
                               CONCAT11(bVar81 & auVar133[1],bVar79 & auVar133[0]))) +
             auVar139._0_4_;
    iVar99 = CONCAT13(bVar83 & auVar133[7],
                      CONCAT12(bVar82 & auVar133[6],
                               CONCAT11(bVar81 & auVar133[5],bVar79 & auVar133[4]))) +
             auVar139._4_4_;
    iVar102 = CONCAT13(bVar83 & auVar133[11],
                       CONCAT12(bVar82 & auVar133[10],
                                CONCAT11(bVar81 & auVar133[9],bVar79 & auVar133[8]))) +
              auVar139._8_4_;
    iVar108 = CONCAT13(bVar83 & auVar133[15],
                       CONCAT12(bVar82 & auVar133[14],
                                CONCAT11(bVar81 & auVar133[13],bVar79 & auVar133[12]))) +
              auVar139._12_4_;
    auVar157._0_4_ = iVar11 + iVar149 + iVar101;
    auVar157._4_4_ = iVar11 + iVar150 + (int)((ulong)auVar193._0_8_ >> 0x20);
    auVar157._8_4_ = iVar11 + iVar151 + auVar193._8_4_;
    auVar157._12_4_ = iVar11 + iVar152 + auVar197._12_4_;
    auVar134 = ZEXT816(0);
    while( true ) {
      fVar227 = param_13 + fVar227;
      fVar222 = param_13 + fVar222;
      fVar217 = param_13 + fVar217;
      fVar71 = param_13 + fVar71;
      *(ulong *)(param_11 + 8) = CONCAT44(fVar227,fVar222);
      *(ulong *)param_11 = CONCAT44(fVar217,fVar71);
      auVar23[8] = 0xf8;
      auVar23._0_8_ = 0xfffffff8fffffff8;
      auVar23[9] = 0xff;
      auVar23[10] = 0xff;
      auVar23[11] = 0xff;
      auVar23[12] = 0xf8;
      auVar23[13] = 0xff;
      auVar23[14] = 0xff;
      auVar23[15] = 0xff;
      auVar155 = NEON_sshl(auVar202,auVar23,4);
      auVar24[8] = 0xf8;
      auVar24._0_8_ = 0xfffffff8fffffff8;
      auVar24[9] = 0xff;
      auVar24[10] = 0xff;
      auVar24[11] = 0xff;
      auVar24[12] = 0xf8;
      auVar24[13] = 0xff;
      auVar24[14] = 0xff;
      auVar24[15] = 0xff;
      auVar133 = NEON_sshl(auVar157,auVar24,4);
      lVar52 = (long)param_3;
      fVar17 = fVar80 + fVar71;
      uVar159 = SUB41(fVar17,0);
      uVar160 = (undefined)((uint)fVar17 >> 8);
      uVar161 = (undefined)((uint)fVar17 >> 0x10);
      uVar162 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar217;
      uVar163 = SUB41(fVar17,0);
      uVar164 = (undefined)((uint)fVar17 >> 8);
      uVar165 = (undefined)((uint)fVar17 >> 0x10);
      uVar166 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar222;
      uVar167 = SUB41(fVar17,0);
      uVar168 = (undefined)((uint)fVar17 >> 8);
      uVar169 = (undefined)((uint)fVar17 >> 0x10);
      uVar170 = (undefined)((uint)fVar17 >> 0x18);
      fVar17 = fVar80 + fVar227;
      uVar171 = SUB41(fVar17,0);
      uVar172 = (undefined)((uint)fVar17 >> 8);
      uVar173 = (undefined)((uint)fVar17 >> 0x10);
      uVar174 = (undefined)((uint)fVar17 >> 0x18);
      auVar91 = *(undefined (*) [16])param_10;
      pauVar53 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      auVar155 = NEON_smax(auVar155,auVar134,4);
      auVar133 = NEON_smax(auVar133,auVar134,4);
      while( true ) {
        lVar52 = lVar52 + 1;
        auVar88 = *pauVar53;
        auVar65._0_4_ = auVar91._0_4_ - auVar88._0_4_;
        auVar65._4_4_ = auVar91._4_4_ - auVar88._4_4_;
        auVar65._8_4_ = auVar91._8_4_ - auVar88._8_4_;
        auVar65._12_4_ = auVar91._12_4_ - auVar88._12_4_;
        auVar148 = NEON_cmlt(auVar65,0,4);
        auVar66[0] = auVar148[0] & auVar201[0];
        auVar66[1] = auVar148[1] & auVar201[1];
        auVar66[2] = auVar148[2] & auVar201[2];
        auVar66[3] = auVar148[3] & auVar201[3];
        auVar66[4] = auVar148[4] & auVar201[4];
        auVar66[5] = auVar148[5] & auVar201[5];
        auVar66[6] = auVar148[6] & auVar201[6];
        auVar66[7] = auVar148[7] & auVar201[7];
        auVar66[8] = auVar148[8] & auVar201[8];
        auVar66[9] = auVar148[9] & auVar201[9];
        auVar66[10] = auVar148[10] & auVar201[10];
        auVar66[11] = auVar148[11] & auVar201[11];
        auVar66[12] = auVar148[12] & auVar201[12];
        auVar66[13] = auVar148[13] & auVar201[13];
        auVar66[14] = auVar148[14] & auVar201[14];
        auVar66[15] = auVar148[15] & auVar201[15];
        auVar148 = NEON_ext(auVar66,auVar66,8,1);
        if (CONCAT13(auVar148[3] | auVar66[3] | auVar148[7] | auVar66[7],
                     CONCAT12(auVar148[2] | auVar66[2] | auVar148[6] | auVar66[6],
                              CONCAT11(auVar148[1] | auVar66[1] | auVar148[5] | auVar66[5],
                                       auVar148[0] | auVar66[0] | auVar148[4] | auVar66[4]))) != 0xf
           ) {
          auVar36[8] = 0x20;
          auVar36._0_8_ = 0x2000000020;
          auVar36._9_3_ = 0;
          auVar36[12] = 0x20;
          auVar36._13_3_ = 0;
          auVar148 = NEON_smin(auVar133,auVar36,4);
          auVar37[8] = 0x20;
          auVar37._0_8_ = 0x2000000020;
          auVar37._9_3_ = 0;
          auVar37[12] = 0x20;
          auVar37._13_3_ = 0;
          auVar95 = NEON_smin(auVar155,auVar37,4);
          auVar47[1] = uVar160;
          auVar47[0] = uVar159;
          auVar47[2] = uVar161;
          auVar47[3] = uVar162;
          auVar47[4] = uVar163;
          auVar47[5] = uVar164;
          auVar47[6] = uVar165;
          auVar47[7] = uVar166;
          auVar47[8] = uVar167;
          auVar47[9] = uVar168;
          auVar47[10] = uVar169;
          auVar47[11] = uVar170;
          auVar47[12] = uVar171;
          auVar47[13] = uVar172;
          auVar47[14] = uVar173;
          auVar47[15] = uVar174;
          auVar138 = NEON_fmin(auVar47,auVar91,4);
          auVar148 = NEON_smax(auVar148,auVar134,4);
          auVar95 = NEON_smax(auVar95,auVar134,4);
          auVar148 = NEON_sshl(auVar212,auVar148,4);
          auVar95 = NEON_sshl(auVar212,auVar95,4);
          auVar67[0] = auVar148[0] & ~auVar95[0];
          auVar67[1] = auVar148[1] & ~auVar95[1];
          auVar67[2] = auVar148[2] & ~auVar95[2];
          auVar67[3] = auVar148[3] & ~auVar95[3];
          auVar67[4] = auVar148[4] & ~auVar95[4];
          auVar67[5] = auVar148[5] & ~auVar95[5];
          auVar67[6] = auVar148[6] & ~auVar95[6];
          auVar67[7] = auVar148[7] & ~auVar95[7];
          auVar67[8] = auVar148[8] & ~auVar95[8];
          auVar67[9] = auVar148[9] & ~auVar95[9];
          auVar67[10] = auVar148[10] & ~auVar95[10];
          auVar67[11] = auVar148[11] & ~auVar95[11];
          auVar67[12] = auVar148[12] & ~auVar95[12];
          auVar67[13] = auVar148[13] & ~auVar95[13];
          auVar67[14] = auVar148[14] & ~auVar95[14];
          auVar67[15] = auVar148[15] & ~auVar95[15];
          auVar50._9_7_ = _UNK_004c5139;
          auVar50._0_9_ = _DAT_004c5130;
          auVar148 = a64_TBL(ZEXT816(0),auVar67,auVar50);
          auVar95 = NEON_fcmge(auVar138,auVar88,4);
          auVar88 = NEON_cmeq(auVar148,0,2);
          if (CONCAT17(auVar95[15] & ~auVar88[15] | auVar95[7] & ~auVar88[7],
                       CONCAT16(auVar95[14] & ~auVar88[14] | auVar95[6] & ~auVar88[6],
                                CONCAT15(auVar95[13] & ~auVar88[13] | auVar95[5] & ~auVar88[5],
                                         CONCAT14(auVar95[12] & ~auVar88[12] |
                                                  auVar95[4] & ~auVar88[4],
                                                  CONCAT13(auVar95[11] & ~auVar88[11] |
                                                           auVar95[3] & ~auVar88[3],
                                                           CONCAT12(auVar95[10] & ~auVar88[10] |
                                                                    auVar95[2] & ~auVar88[2],
                                                                    CONCAT11(auVar95[9] &
                                                                             ~auVar88[9] |
                                                                             auVar95[1] &
                                                                             ~auVar88[1],
                                                                             auVar95[8] &
                                                                             ~auVar88[8] |
                                                                             auVar95[0] &
                                                                             ~auVar88[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar52) break;
        fVar17 = param_12 + (float)CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159)));
        uVar159 = SUB41(fVar17,0);
        uVar160 = (undefined)((uint)fVar17 >> 8);
        uVar161 = (undefined)((uint)fVar17 >> 0x10);
        uVar162 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163)));
        uVar163 = SUB41(fVar17,0);
        uVar164 = (undefined)((uint)fVar17 >> 8);
        uVar165 = (undefined)((uint)fVar17 >> 0x10);
        uVar166 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)));
        uVar167 = SUB41(fVar17,0);
        uVar168 = (undefined)((uint)fVar17 >> 8);
        uVar169 = (undefined)((uint)fVar17 >> 0x10);
        uVar170 = (undefined)((uint)fVar17 >> 0x18);
        fVar17 = param_12 + (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)));
        uVar171 = SUB41(fVar17,0);
        uVar172 = (undefined)((uint)fVar17 >> 8);
        uVar173 = (undefined)((uint)fVar17 >> 0x10);
        uVar174 = (undefined)((uint)fVar17 >> 0x18);
        auVar38[8] = 0x20;
        auVar38._0_8_ = 0x2000000020;
        auVar38._9_3_ = 0;
        auVar38[12] = 0x20;
        auVar38._13_3_ = 0;
        auVar155 = NEON_uqsub(auVar155,auVar38,2);
        pauVar53 = pauVar53 + 3;
        auVar39[8] = 0x20;
        auVar39._0_8_ = 0x2000000020;
        auVar39._9_3_ = 0;
        auVar39[12] = 0x20;
        auVar39._13_3_ = 0;
        auVar133 = NEON_uqsub(auVar133,auVar39,2);
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar68._0_4_ = CONCAT13(uVar178,CONCAT12(uVar177,CONCAT11(uVar176,uVar175))) - iVar10;
      auVar68._4_4_ = CONCAT13(uVar182,CONCAT12(uVar181,CONCAT11(uVar180,uVar179))) - iVar10;
      auVar68._8_4_ = CONCAT13(uVar186,CONCAT12(uVar185,CONCAT11(uVar184,uVar183))) - iVar10;
      auVar68._12_4_ = CONCAT13(uVar190,CONCAT12(uVar189,CONCAT11(uVar188,uVar187))) - iVar10;
      auVar97._0_4_ = iVar98 - iVar12;
      auVar97._4_4_ = iVar99 - iVar12;
      auVar97._8_4_ = iVar102 - (int)uStack_58;
      auVar97._12_4_ = iVar108 - iVar100;
      iVar150 = auVar202._4_4_;
      iVar151 = auVar202._8_4_;
      iVar99 = auVar202._12_4_;
      auVar29[8] = 0xe1;
      auVar29._0_8_ = 0xffffffe1ffffffe1;
      auVar29[9] = 0xff;
      auVar29[10] = 0xff;
      auVar29[11] = 0xff;
      auVar29[12] = 0xe1;
      auVar29[13] = 0xff;
      auVar29[14] = 0xff;
      auVar29[15] = 0xff;
      auVar155 = NEON_sshl(auVar68,auVar29,4);
      auVar30[8] = 0xe1;
      auVar30._0_8_ = 0xffffffe1ffffffe1;
      auVar30[9] = 0xff;
      auVar30[10] = 0xff;
      auVar30[11] = 0xff;
      auVar30[12] = 0xe1;
      auVar30[13] = 0xff;
      auVar30[14] = 0xff;
      auVar30[15] = 0xff;
      auVar133 = NEON_sshl(auVar97,auVar30,4);
      iVar149 = CONCAT13(auVar155[3] & bVar78,
                         CONCAT12(auVar155[2] & bVar77,
                                  CONCAT11(auVar155[1] & bVar76,auVar155[0] & bVar75)));
      auVar233._0_8_ =
           CONCAT17(auVar155[7] & bVar78,
                    CONCAT16(auVar155[6] & bVar77,
                             CONCAT15(auVar155[5] & bVar76,CONCAT14(auVar155[4] & bVar75,iVar149))))
      ;
      auVar233[8] = auVar155[8] & bVar75;
      auVar233[9] = auVar155[9] & bVar76;
      auVar233[10] = auVar155[10] & bVar77;
      auVar233[11] = auVar155[11] & bVar78;
      auVar234[12] = auVar155[12] & bVar75;
      auVar234._0_12_ = auVar233;
      auVar234[13] = auVar155[13] & bVar76;
      auVar234[14] = auVar155[14] & bVar77;
      auVar234[15] = auVar155[15] & bVar78;
      iVar152 = CONCAT13(auVar155[3] & bVar74,
                         CONCAT12(auVar155[2] & bVar73,
                                  CONCAT11(auVar155[1] & bVar72,auVar155[0] & bVar70)));
      auVar132._0_8_ =
           CONCAT17(auVar155[7] & bVar74,
                    CONCAT16(auVar155[6] & bVar73,
                             CONCAT15(auVar155[5] & bVar72,CONCAT14(auVar155[4] & bVar70,iVar152))))
      ;
      auVar132[8] = auVar155[8] & bVar70;
      auVar132[9] = auVar155[9] & bVar72;
      auVar132[10] = auVar155[10] & bVar73;
      auVar132[11] = auVar155[11] & bVar74;
      auVar140[12] = auVar155[12] & bVar70;
      auVar140._0_12_ = auVar132;
      auVar140[13] = auVar155[13] & bVar72;
      auVar140[14] = auVar155[14] & bVar73;
      auVar140[15] = auVar155[15] & bVar74;
      iVar149 = iVar149 + auVar68._0_4_;
      uVar175 = (undefined)iVar149;
      uVar176 = (undefined)((uint)iVar149 >> 8);
      uVar177 = (undefined)((uint)iVar149 >> 0x10);
      uVar178 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = (int)((ulong)auVar233._0_8_ >> 0x20) + auVar68._4_4_;
      uVar179 = (undefined)iVar149;
      uVar180 = (undefined)((uint)iVar149 >> 8);
      uVar181 = (undefined)((uint)iVar149 >> 0x10);
      uVar182 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = auVar233._8_4_ + auVar68._8_4_;
      uVar183 = (undefined)iVar149;
      uVar184 = (undefined)((uint)iVar149 >> 8);
      uVar185 = (undefined)((uint)iVar149 >> 0x10);
      uVar186 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = auVar234._12_4_ + auVar68._12_4_;
      uVar187 = (undefined)iVar149;
      uVar188 = (undefined)((uint)iVar149 >> 8);
      uVar189 = (undefined)((uint)iVar149 >> 0x10);
      uVar190 = (undefined)((uint)iVar149 >> 0x18);
      iVar98 = CONCAT13(auVar133[3] & bVar83,
                        CONCAT12(auVar133[2] & bVar82,
                                 CONCAT11(auVar133[1] & bVar81,auVar133[0] & bVar79)));
      auVar56._0_8_ =
           CONCAT17(auVar133[7] & bVar83,
                    CONCAT16(auVar133[6] & bVar82,
                             CONCAT15(auVar133[5] & bVar81,CONCAT14(auVar133[4] & bVar79,iVar98))));
      auVar56[8] = auVar133[8] & bVar79;
      auVar56[9] = auVar133[9] & bVar81;
      auVar56[10] = auVar133[10] & bVar82;
      auVar56[11] = auVar133[11] & bVar83;
      auVar69[12] = auVar133[12] & bVar79;
      auVar69._0_12_ = auVar56;
      auVar69[13] = auVar133[13] & bVar81;
      auVar69[14] = auVar133[14] & bVar82;
      auVar69[15] = auVar133[15] & bVar83;
      auVar202._0_4_ = auVar202._0_4_ + iVar9 + iVar152;
      auVar202._4_4_ = iVar150 + iVar9 + (int)((ulong)auVar132._0_8_ >> 0x20);
      auVar202._8_4_ = iVar151 + iVar9 + auVar132._8_4_;
      auVar202._12_4_ = iVar99 + iVar9 + auVar140._12_4_;
      iVar98 = iVar98 + auVar97._0_4_;
      iVar99 = (int)((ulong)auVar56._0_8_ >> 0x20) + auVar97._4_4_;
      iVar102 = auVar56._8_4_ + auVar97._8_4_;
      iVar108 = auVar69._12_4_ + auVar97._12_4_;
      auVar158._0_4_ =
           CONCAT13(auVar133[3] & bVar106,
                    CONCAT12(auVar133[2] & bVar105,
                             CONCAT11(auVar133[1] & bVar104,auVar133[0] & bVar103))) + iVar11 +
           auVar157._0_4_;
      auVar158._4_4_ =
           CONCAT13(auVar133[7] & bVar106,
                    CONCAT12(auVar133[6] & bVar105,
                             CONCAT11(auVar133[5] & bVar104,auVar133[4] & bVar103))) + iVar11 +
           auVar157._4_4_;
      auVar158._8_4_ =
           CONCAT13(auVar133[11] & bVar106,
                    CONCAT12(auVar133[10] & bVar105,
                             CONCAT11(auVar133[9] & bVar104,auVar133[8] & bVar103))) + iVar11 +
           auVar157._8_4_;
      auVar158._12_4_ =
           CONCAT13(auVar133[15] & bVar106,
                    CONCAT12(auVar133[14] & bVar105,
                             CONCAT11(auVar133[13] & bVar104,auVar133[12] & bVar103))) + iVar11 +
           auVar157._12_4_;
      auVar157 = auVar158;
    }
  }
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
  return 1;
}


