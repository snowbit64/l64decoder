// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<1,1,1>
// Entry Point: 00da5d60
// Size: 2168 bytes
// Signature: int __thiscall RasterizeTriangle<1,1,1>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1, 1,
   1>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1,1,1>
          (MaskedOcclusionCullingPrivate *this,uint param_1,int param_2,int param_3,int param_4,
          int param_5,__Int32x4_t *param_6,__Float32x4_t *param_7,__Int32x4_t *param_8,
          __Float32x4_t *param_9,__Float32x4_t *param_10,__Float32x4_t *param_11,float param_12,
          float param_13,__Int32x4_t *param_14,__Int32x4_t *param_15,__Int32x4_t *param_16,
          __Int32x4_t *param_17,__Int32x4_t *param_18)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
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
  unkbyte9 Var47;
  long lVar48;
  int iVar49;
  undefined (*pauVar50) [16];
  byte bVar51;
  undefined auVar52 [12];
  undefined auVar53 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
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
  byte bVar71;
  byte bVar72;
  float fVar70;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar80;
  byte bVar81;
  float fVar79;
  byte bVar82;
  int iVar83;
  int iVar84;
  undefined auVar85 [12];
  int iVar99;
  undefined auVar89 [16];
  undefined auVar90 [16];
  int iVar100;
  undefined auVar86 [12];
  undefined auVar87 [12];
  int iVar101;
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar98 [16];
  int iVar102;
  undefined auVar103 [12];
  undefined auVar104 [12];
  int iVar119;
  int iVar120;
  int iVar121;
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  float fVar129;
  float fVar130;
  int iVar131;
  int iVar132;
  undefined uVar133;
  undefined uVar134;
  undefined uVar135;
  undefined auVar136 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  int iVar141;
  undefined auVar143 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar148 [12];
  int iVar150;
  undefined auVar149 [16];
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar158;
  int iVar159;
  undefined auVar154 [12];
  int iVar160;
  undefined auVar156 [16];
  undefined auVar157 [16];
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
  int iVar177;
  int iVar182;
  int iVar183;
  undefined auVar178 [12];
  undefined auVar180 [16];
  undefined auVar181 [16];
  undefined8 uVar184;
  undefined8 uVar185;
  int iVar192;
  undefined auVar186 [12];
  int iVar193;
  undefined auVar187 [12];
  undefined auVar189 [16];
  undefined auVar191 [16];
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  undefined auVar199 [16];
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  undefined auVar203 [16];
  undefined auVar219 [12];
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
  undefined auVar233 [12];
  undefined auVar234 [16];
  undefined auVar236 [16];
  undefined auVar237 [16];
  undefined auVar59 [16];
  undefined auVar54 [16];
  undefined auVar88 [12];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar97 [16];
  undefined auVar109 [16];
  undefined auVar118 [16];
  undefined auVar142 [12];
  undefined auVar147 [16];
  undefined auVar155 [16];
  undefined auVar179 [16];
  undefined auVar188 [16];
  undefined auVar190 [16];
  undefined auVar235 [16];
  
  Var47 = _DAT_004c5130;
  lVar48 = (ulong)param_1 * 4;
  pfVar2 = (float *)(param_7 + lVar48);
  puVar3 = (undefined4 *)(param_16 + lVar48);
  piVar4 = (int *)(param_6 + lVar48);
  piVar5 = (int *)(param_8 + lVar48);
  piVar6 = (int *)(param_14 + lVar48);
  fVar70 = pfVar2[4];
  piVar7 = (int *)(param_15 + lVar48);
  fVar79 = pfVar2[8];
  piVar8 = (int *)(param_17 + lVar48);
  iVar49 = piVar7[4];
  iVar84 = piVar8[4];
  iVar16 = piVar6[4];
  piVar9 = (int *)(param_18 + lVar48);
  auVar89._8_4_ = 0xffffffe1;
  auVar89._0_8_ = 0xffffffe1ffffffe1;
  auVar89._12_4_ = 0xffffffe1;
  iVar131 = SUB164(_DAT_004c4990,0);
  iVar132 = SUB164(_DAT_004c4990,4);
  iVar152 = SUB164(_DAT_004c4990,8);
  iVar192 = SUB164(_DAT_004c4990,0xc);
  uVar17 = puVar3[4];
  iVar102 = MP_INT_ABS((int)(fVar70 * 128.0));
  iVar119 = MP_INT_ABS((int)(fVar70 * 384.0));
  iVar120 = MP_INT_ABS((int)(fVar70 * 640.0));
  iVar121 = MP_INT_ABS((int)(fVar70 * 896.0));
  iVar177 = piVar6[8];
  iVar141 = piVar4[4];
  iVar182 = piVar8[8];
  iVar150 = iVar84 + iVar49 * iVar131 + iVar102 * iVar16;
  iVar183 = iVar84 + iVar49 * iVar132 + iVar119 * iVar16;
  iVar151 = iVar84 + iVar49 * iVar152 + iVar120 * iVar16;
  iVar121 = iVar84 + iVar49 * iVar192 + iVar121 * iVar16;
  iVar49 = piVar7[8];
  iVar153 = MP_INT_ABS((int)(fVar79 * 128.0));
  iVar158 = MP_INT_ABS((int)(fVar79 * 384.0));
  iVar159 = MP_INT_ABS((int)(fVar79 * 640.0));
  iVar160 = MP_INT_ABS((int)(fVar79 * 896.0));
  iVar120 = piVar9[4];
  iVar84 = piVar4[8];
  iVar102 = piVar5[8];
  auVar149[4] = (char)iVar183;
  auVar149._0_4_ = iVar150;
  auVar149[5] = (char)((uint)iVar183 >> 8);
  auVar149[6] = (char)((uint)iVar183 >> 0x10);
  auVar149[7] = (char)((uint)iVar183 >> 0x18);
  auVar149[8] = (char)iVar151;
  auVar149[9] = (char)((uint)iVar151 >> 8);
  auVar149[10] = (char)((uint)iVar151 >> 0x10);
  auVar149[11] = (char)((uint)iVar151 >> 0x18);
  auVar149[12] = (char)iVar121;
  auVar149[13] = (char)((uint)iVar121 >> 8);
  auVar149[14] = (char)((uint)iVar121 >> 0x10);
  auVar149[15] = (char)((uint)iVar121 >> 0x18);
  auVar149 = NEON_sshl(auVar149,auVar89,4);
  iVar119 = piVar5[4];
  uVar133 = (undefined)((uint)iVar119 >> 8);
  uVar134 = (undefined)((uint)iVar119 >> 0x10);
  uVar135 = (undefined)((uint)iVar119 >> 0x18);
  uVar1 = iVar119 + 1;
  bVar69 = (byte)iVar16;
  bVar71 = (byte)((uint)iVar16 >> 8);
  bVar72 = (byte)((uint)iVar16 >> 0x10);
  bVar73 = (byte)((uint)iVar16 >> 0x18);
  auVar143._0_4_ = iVar182 + iVar49 * iVar131 + iVar153 * iVar177;
  auVar143._4_4_ = iVar182 + iVar49 * iVar132 + iVar158 * iVar177;
  auVar143._8_4_ = iVar182 + iVar49 * iVar152 + iVar159 * iVar177;
  auVar143._12_4_ = iVar182 + iVar49 * iVar192 + iVar160 * iVar177;
  bVar74 = (byte)uVar17;
  bVar75 = (byte)((uint)uVar17 >> 8);
  bVar76 = (byte)((uint)uVar17 >> 0x10);
  bVar77 = (byte)((uint)uVar17 >> 0x18);
  iVar182 = CONCAT13(auVar149[3] & bVar77,
                     CONCAT12(auVar149[2] & bVar76,
                              CONCAT11(auVar149[1] & bVar75,auVar149[0] & bVar74)));
  auVar148._0_8_ =
       CONCAT17(auVar149[7] & bVar77,
                CONCAT16(auVar149[6] & bVar76,
                         CONCAT15(auVar149[5] & bVar75,CONCAT14(auVar149[4] & bVar74,iVar182))));
  auVar148[8] = auVar149[8] & bVar74;
  auVar148[9] = auVar149[9] & bVar75;
  auVar148[10] = auVar149[10] & bVar76;
  auVar148[11] = auVar149[11] & bVar77;
  auVar234[12] = auVar149[12] & bVar74;
  auVar234._0_12_ = auVar148;
  auVar234[13] = auVar149[13] & bVar75;
  auVar234[14] = auVar149[14] & bVar76;
  auVar234[15] = auVar149[15] & bVar77;
  iVar150 = iVar150 + CONCAT13(auVar149[3] & bVar73,
                               CONCAT12(auVar149[2] & bVar72,
                                        CONCAT11(auVar149[1] & bVar71,auVar149[0] & bVar69)));
  uVar161 = (undefined)iVar150;
  uVar162 = (undefined)((uint)iVar150 >> 8);
  uVar163 = (undefined)((uint)iVar150 >> 0x10);
  uVar164 = (undefined)((uint)iVar150 >> 0x18);
  iVar183 = iVar183 + CONCAT13(auVar149[7] & bVar73,
                               CONCAT12(auVar149[6] & bVar72,
                                        CONCAT11(auVar149[5] & bVar71,auVar149[4] & bVar69)));
  uVar165 = (undefined)iVar183;
  uVar166 = (undefined)((uint)iVar183 >> 8);
  uVar167 = (undefined)((uint)iVar183 >> 0x10);
  uVar168 = (undefined)((uint)iVar183 >> 0x18);
  iVar151 = iVar151 + CONCAT13(auVar149[11] & bVar73,
                               CONCAT12(auVar149[10] & bVar72,
                                        CONCAT11(auVar149[9] & bVar71,auVar149[8] & bVar69)));
  uVar169 = (undefined)iVar151;
  uVar170 = (undefined)((uint)iVar151 >> 8);
  uVar171 = (undefined)((uint)iVar151 >> 0x10);
  uVar172 = (undefined)((uint)iVar151 >> 0x18);
  iVar121 = iVar121 + CONCAT13(auVar149[15] & bVar73,
                               CONCAT12(auVar149[14] & bVar72,
                                        CONCAT11(auVar149[13] & bVar71,auVar149[12] & bVar69)));
  uVar173 = (undefined)iVar121;
  uVar174 = (undefined)((uint)iVar121 >> 8);
  uVar175 = (undefined)((uint)iVar121 >> 0x10);
  uVar176 = (undefined)((uint)iVar121 >> 0x18);
  uVar17 = puVar3[8];
  bVar122 = (byte)uVar17;
  bVar123 = (byte)((uint)uVar17 >> 8);
  bVar124 = (byte)((uint)uVar17 >> 0x10);
  bVar125 = (byte)((uint)uVar17 >> 0x18);
  auVar149 = NEON_sshl(auVar143,auVar89,4);
  iVar16 = piVar9[8];
  uVar15 = iVar102 - 1;
  bVar78 = (byte)iVar177;
  bVar80 = (byte)((uint)iVar177 >> 8);
  bVar81 = (byte)((uint)iVar177 >> 0x10);
  bVar82 = (byte)((uint)iVar177 >> 0x18);
  iVar153 = CONCAT13(auVar149[3] & bVar125,
                     CONCAT12(auVar149[2] & bVar124,
                              CONCAT11(auVar149[1] & bVar123,auVar149[0] & bVar122)));
  auVar219._0_8_ =
       CONCAT17(auVar149[7] & bVar125,
                CONCAT16(auVar149[6] & bVar124,
                         CONCAT15(auVar149[5] & bVar123,CONCAT14(auVar149[4] & bVar122,iVar153))));
  auVar219[8] = auVar149[8] & bVar122;
  auVar219[9] = auVar149[9] & bVar123;
  auVar219[10] = auVar149[10] & bVar124;
  auVar219[11] = auVar149[11] & bVar125;
  auVar106[12] = auVar149[12] & bVar122;
  auVar106._0_12_ = auVar219;
  auVar106[13] = auVar149[13] & bVar123;
  auVar106[14] = auVar149[14] & bVar124;
  auVar106[15] = auVar149[15] & bVar125;
  iVar49 = iVar84 + (uVar15 & (int)uVar15 >> 0x1f);
  auVar64._0_4_ = iVar141 + (int)(fVar70 * 128.0) + iVar182;
  auVar64._4_4_ = iVar141 + (int)(fVar70 * 384.0) + (int)((ulong)auVar148._0_8_ >> 0x20);
  auVar64._8_4_ = iVar141 + (int)(fVar70 * 640.0) + auVar148._8_4_;
  auVar64._12_4_ = iVar141 + (int)(fVar70 * 896.0) + auVar234._12_4_;
  iVar141 = iVar141 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 0x2000;
  iVar177 = auVar143._0_4_ +
            CONCAT13(auVar149[3] & bVar82,
                     CONCAT12(auVar149[2] & bVar81,
                              CONCAT11(auVar149[1] & bVar80,auVar149[0] & bVar78)));
  iVar182 = auVar143._4_4_ +
            CONCAT13(auVar149[7] & bVar82,
                     CONCAT12(auVar149[6] & bVar81,
                              CONCAT11(auVar149[5] & bVar80,auVar149[4] & bVar78)));
  iVar183 = auVar143._8_4_ +
            CONCAT13(auVar149[11] & bVar82,
                     CONCAT12(auVar149[10] & bVar81,
                              CONCAT11(auVar149[9] & bVar80,auVar149[8] & bVar78)));
  iVar121 = auVar143._12_4_ +
            CONCAT13(auVar149[15] & bVar82,
                     CONCAT12(auVar149[14] & bVar81,
                              CONCAT11(auVar149[13] & bVar80,auVar149[12] & bVar78)));
  auVar66._0_4_ = iVar84 + (int)(fVar79 * 128.0) + iVar153;
  auVar66._4_4_ = iVar84 + (int)(fVar79 * 384.0) + (int)((ulong)auVar219._0_8_ >> 0x20);
  auVar66._8_4_ = iVar84 + (int)(fVar79 * 640.0) + auVar219._8_4_;
  auVar66._12_4_ = iVar84 + (int)(fVar79 * 896.0) + auVar106._12_4_;
  bVar51 = SUB161(_DAT_004c4480,0);
  bVar204 = SUB161(_DAT_004c4480,1);
  bVar205 = SUB161(_DAT_004c4480,2);
  bVar206 = SUB161(_DAT_004c4480,3);
  bVar207 = SUB161(_DAT_004c4480,4);
  bVar208 = SUB161(_DAT_004c4480,5);
  bVar209 = SUB161(_DAT_004c4480,6);
  bVar210 = SUB161(_DAT_004c4480,7);
  bVar211 = SUB161(_DAT_004c4480,8);
  bVar212 = SUB161(_DAT_004c4480,9);
  bVar213 = SUB161(_DAT_004c4480,10);
  bVar214 = SUB161(_DAT_004c4480,0xb);
  bVar215 = SUB161(_DAT_004c4480,0xc);
  bVar216 = SUB161(_DAT_004c4480,0xd);
  bVar217 = SUB161(_DAT_004c4480,0xe);
  bVar218 = SUB161(_DAT_004c4480,0xf);
  if (param_4 < param_3) {
    if (param_5 <= param_3) {
      _UNK_004c5139 = 0xf0b07030e0a06;
      return 1;
    }
    auVar113._8_4_ = 0xfffffff8;
    auVar113._0_8_ = 0xfffffff8fffffff8;
    auVar113._12_4_ = 0xfffffff8;
    uVar185 = *(undefined8 *)(param_11 + 8);
    uVar184 = *(undefined8 *)param_11;
    auVar146._8_4_ = 0x20;
    auVar146._0_8_ = 0x2000000020;
    auVar146._12_4_ = 0x20;
    auVar96._8_4_ = 0xffffffe1;
    auVar96._0_8_ = 0xffffffe1ffffffe1;
    auVar96._12_4_ = 0xffffffe1;
    while( true ) {
      uVar10 = iVar49 >> 0xd;
      iVar49 = iVar49 + uVar15;
      uVar12 = param_2 - 1U;
      if ((int)uVar10 <= (int)(param_2 - 1U)) {
        uVar12 = uVar10;
      }
      auVar149 = NEON_sshl(auVar64,auVar113,4);
      iVar84 = param_2;
      if (iVar141 >> 0xd <= param_2) {
        iVar84 = iVar141 >> 0xd;
      }
      uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
      iVar141 = iVar141 + uVar1;
      auVar143 = NEON_sshl(auVar66,auVar113,4);
      lVar48 = (long)(int)(uVar12 + param_3);
      auVar144._0_4_ = auVar149._0_4_ + uVar12 * -0x20;
      auVar144._4_4_ = auVar149._4_4_ + uVar12 * -0x20;
      auVar144._8_4_ = auVar149._8_4_ + uVar12 * -0x20;
      auVar144._12_4_ = auVar149._12_4_ + uVar12 * -0x20;
      fVar70 = (float)uVar12 * param_12;
      pauVar50 = (undefined (*) [16])
                 (*(long *)(this + 0x138) + (long)(int)(uVar12 + param_3) * 0x30);
      auVar115._0_4_ = auVar143._0_4_ + uVar12 * -0x20;
      auVar115._4_4_ = auVar143._4_4_ + uVar12 * -0x20;
      auVar115._8_4_ = auVar143._8_4_ + uVar12 * -0x20;
      auVar115._12_4_ = auVar143._12_4_ + uVar12 * -0x20;
      auVar234 = *(undefined (*) [16])param_10;
      auVar149 = NEON_smax(auVar144,ZEXT216(0),4);
      auVar143 = NEON_smax(auVar115,ZEXT216(0),4);
      fVar79 = (float)uVar184 + fVar70;
      fVar137 = (float)((ulong)uVar184 >> 0x20);
      fVar129 = fVar137 + fVar70;
      fVar130 = (float)uVar185 + fVar70;
      fVar138 = (float)((ulong)uVar185 >> 0x20);
      fVar70 = fVar138 + fVar70;
      while( true ) {
        lVar48 = lVar48 + 1;
        auVar89 = *pauVar50;
        auVar105._0_4_ = auVar234._0_4_ - auVar89._0_4_;
        auVar105._4_4_ = auVar234._4_4_ - auVar89._4_4_;
        auVar105._8_4_ = auVar234._8_4_ - auVar89._8_4_;
        auVar105._12_4_ = auVar234._12_4_ - auVar89._12_4_;
        auVar106 = NEON_cmlt(auVar105,0,4);
        auVar107[0] = auVar106[0] & bVar51;
        auVar107[1] = auVar106[1] & bVar204;
        auVar107[2] = auVar106[2] & bVar205;
        auVar107[3] = auVar106[3] & bVar206;
        auVar107[4] = auVar106[4] & bVar207;
        auVar107[5] = auVar106[5] & bVar208;
        auVar107[6] = auVar106[6] & bVar209;
        auVar107[7] = auVar106[7] & bVar210;
        auVar107[8] = auVar106[8] & bVar211;
        auVar107[9] = auVar106[9] & bVar212;
        auVar107[10] = auVar106[10] & bVar213;
        auVar107[11] = auVar106[11] & bVar214;
        auVar107[12] = auVar106[12] & bVar215;
        auVar107[13] = auVar106[13] & bVar216;
        auVar107[14] = auVar106[14] & bVar217;
        auVar107[15] = auVar106[15] & bVar218;
        auVar106 = NEON_ext(auVar107,auVar107,8,1);
        if (CONCAT13(auVar106[3] | auVar107[3] | auVar106[7] | auVar107[7],
                     CONCAT12(auVar106[2] | auVar107[2] | auVar106[6] | auVar107[6],
                              CONCAT11(auVar106[1] | auVar107[1] | auVar106[5] | auVar107[5],
                                       auVar106[0] | auVar107[0] | auVar106[4] | auVar107[4]))) !=
            0xf) {
          auVar106 = NEON_smin(auVar143,auVar146,4);
          auVar144 = NEON_smin(auVar149,auVar146,4);
          auVar106 = NEON_smax(auVar106,ZEXT216(0),4);
          auVar144 = NEON_smax(auVar144,ZEXT216(0),4);
          auVar27[8] = 0xff;
          auVar27._0_8_ = 0xffffffffffffffff;
          auVar27[9] = 0xff;
          auVar27[10] = 0xff;
          auVar27[11] = 0xff;
          auVar27[12] = 0xff;
          auVar27[13] = 0xff;
          auVar27[14] = 0xff;
          auVar27[15] = 0xff;
          auVar106 = NEON_sshl(auVar27,auVar106,4);
          auVar28[8] = 0xff;
          auVar28._0_8_ = 0xffffffffffffffff;
          auVar28[9] = 0xff;
          auVar28[10] = 0xff;
          auVar28[11] = 0xff;
          auVar28[12] = 0xff;
          auVar28[13] = 0xff;
          auVar28[14] = 0xff;
          auVar28[15] = 0xff;
          auVar144 = NEON_sshl(auVar28,auVar144,4);
          auVar108[0] = auVar106[0] & ~auVar144[0];
          auVar108[1] = auVar106[1] & ~auVar144[1];
          auVar108[2] = auVar106[2] & ~auVar144[2];
          auVar108[3] = auVar106[3] & ~auVar144[3];
          auVar108[4] = auVar106[4] & ~auVar144[4];
          auVar108[5] = auVar106[5] & ~auVar144[5];
          auVar108[6] = auVar106[6] & ~auVar144[6];
          auVar108[7] = auVar106[7] & ~auVar144[7];
          auVar108[8] = auVar106[8] & ~auVar144[8];
          auVar108[9] = auVar106[9] & ~auVar144[9];
          auVar108[10] = auVar106[10] & ~auVar144[10];
          auVar108[11] = auVar106[11] & ~auVar144[11];
          auVar108[12] = auVar106[12] & ~auVar144[12];
          auVar108[13] = auVar106[13] & ~auVar144[13];
          auVar108[14] = auVar106[14] & ~auVar144[14];
          auVar108[15] = auVar106[15] & ~auVar144[15];
          auVar18._4_4_ = fVar129;
          auVar18._0_4_ = fVar79;
          auVar18._8_4_ = fVar130;
          auVar18._12_4_ = fVar70;
          auVar144 = NEON_fmin(auVar18,auVar234,4);
          auVar32[9] = 6;
          auVar32._0_9_ = Var47;
          auVar32[10] = 10;
          auVar32[11] = 0xe;
          auVar32[12] = 3;
          auVar32[13] = 7;
          auVar32[14] = 0xb;
          auVar32[15] = 0xf;
          auVar106 = a64_TBL(ZEXT816(0),auVar108,auVar32);
          auVar89 = NEON_fcmge(auVar144,auVar89,4);
          auVar106 = NEON_cmeq(auVar106,0,2);
          if (CONCAT17(auVar89[15] & ~auVar106[15] | auVar89[7] & ~auVar106[7],
                       CONCAT16(auVar89[14] & ~auVar106[14] | auVar89[6] & ~auVar106[6],
                                CONCAT15(auVar89[13] & ~auVar106[13] | auVar89[5] & ~auVar106[5],
                                         CONCAT14(auVar89[12] & ~auVar106[12] |
                                                  auVar89[4] & ~auVar106[4],
                                                  CONCAT13(auVar89[11] & ~auVar106[11] |
                                                           auVar89[3] & ~auVar106[3],
                                                           CONCAT12(auVar89[10] & ~auVar106[10] |
                                                                    auVar89[2] & ~auVar106[2],
                                                                    CONCAT11(auVar89[9] &
                                                                             ~auVar106[9] |
                                                                             auVar89[1] &
                                                                             ~auVar106[1],
                                                                             auVar89[8] &
                                                                             ~auVar106[8] |
                                                                             auVar89[0] &
                                                                             ~auVar106[0]))))))) !=
              0) {
            return 0;
          }
        }
        if (iVar84 + param_3 <= lVar48) break;
        fVar79 = param_12 + fVar79;
        fVar129 = param_12 + fVar129;
        fVar130 = param_12 + fVar130;
        fVar70 = param_12 + fVar70;
        auVar149 = NEON_uqsub(auVar149,auVar146,2);
        pauVar50 = pauVar50 + 3;
        auVar143 = NEON_uqsub(auVar143,auVar146,2);
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar90._0_4_ = CONCAT13(uVar164,CONCAT12(uVar163,CONCAT11(uVar162,uVar161))) - iVar120;
      auVar90._4_4_ = CONCAT13(uVar168,CONCAT12(uVar167,CONCAT11(uVar166,uVar165))) - iVar120;
      auVar90._8_4_ = CONCAT13(uVar172,CONCAT12(uVar171,CONCAT11(uVar170,uVar169))) - iVar120;
      auVar90._12_4_ = CONCAT13(uVar176,CONCAT12(uVar175,CONCAT11(uVar174,uVar173))) - iVar120;
      auVar145._0_4_ = iVar177 - iVar16;
      auVar145._4_4_ = iVar182 - iVar16;
      auVar145._8_4_ = iVar183 - iVar16;
      auVar145._12_4_ = iVar121 - iVar16;
      iVar121 = auVar64._4_4_;
      iVar153 = auVar64._8_4_;
      iVar158 = auVar64._12_4_;
      iVar150 = auVar66._4_4_;
      iVar183 = auVar66._8_4_;
      iVar151 = auVar66._12_4_;
      auVar149 = NEON_sshl(auVar90,auVar96,4);
      auVar143 = NEON_sshl(auVar145,auVar96,4);
      uVar184 = CONCAT44(param_13 + fVar137,param_13 + (float)uVar184);
      uVar185 = CONCAT44(param_13 + fVar138,param_13 + (float)uVar185);
      iVar182 = CONCAT13(bVar77 & auVar149[3],
                         CONCAT12(bVar76 & auVar149[2],
                                  CONCAT11(bVar75 & auVar149[1],bVar74 & auVar149[0])));
      auVar103._0_8_ =
           CONCAT17(bVar77 & auVar149[7],
                    CONCAT16(bVar76 & auVar149[6],
                             CONCAT15(bVar75 & auVar149[5],CONCAT14(bVar74 & auVar149[4],iVar182))))
      ;
      auVar103[8] = bVar74 & auVar149[8];
      auVar103[9] = bVar75 & auVar149[9];
      auVar103[10] = bVar76 & auVar149[10];
      auVar103[11] = bVar77 & auVar149[11];
      auVar109[12] = bVar74 & auVar149[12];
      auVar109._0_12_ = auVar103;
      auVar109[13] = bVar75 & auVar149[13];
      auVar109[14] = bVar76 & auVar149[14];
      auVar109[15] = bVar77 & auVar149[15];
      iVar159 = CONCAT13(bVar125 & auVar143[3],
                         CONCAT12(bVar124 & auVar143[2],
                                  CONCAT11(bVar123 & auVar143[1],bVar122 & auVar143[0])));
      auVar233._0_8_ =
           CONCAT17(bVar125 & auVar143[7],
                    CONCAT16(bVar124 & auVar143[6],
                             CONCAT15(bVar123 & auVar143[5],CONCAT14(bVar122 & auVar143[4],iVar159))
                            ));
      auVar233[8] = bVar122 & auVar143[8];
      auVar233[9] = bVar123 & auVar143[9];
      auVar233[10] = bVar124 & auVar143[10];
      auVar233[11] = bVar125 & auVar143[11];
      auVar235[12] = bVar122 & auVar143[12];
      auVar235._0_12_ = auVar233;
      auVar235[13] = bVar123 & auVar143[13];
      auVar235[14] = bVar124 & auVar143[14];
      auVar235[15] = bVar125 & auVar143[15];
      *(undefined8 *)(param_11 + 8) = uVar185;
      *(undefined8 *)param_11 = uVar184;
      iVar84 = CONCAT13(bVar73 & auVar149[3],
                        CONCAT12(bVar72 & auVar149[2],
                                 CONCAT11(bVar71 & auVar149[1],bVar69 & auVar149[0]))) +
               auVar90._0_4_;
      uVar161 = (undefined)iVar84;
      uVar162 = (undefined)((uint)iVar84 >> 8);
      uVar163 = (undefined)((uint)iVar84 >> 0x10);
      uVar164 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(bVar73 & auVar149[7],
                        CONCAT12(bVar72 & auVar149[6],
                                 CONCAT11(bVar71 & auVar149[5],bVar69 & auVar149[4]))) +
               auVar90._4_4_;
      uVar165 = (undefined)iVar84;
      uVar166 = (undefined)((uint)iVar84 >> 8);
      uVar167 = (undefined)((uint)iVar84 >> 0x10);
      uVar168 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(bVar73 & auVar149[11],
                        CONCAT12(bVar72 & auVar149[10],
                                 CONCAT11(bVar71 & auVar149[9],bVar69 & auVar149[8]))) +
               auVar90._8_4_;
      uVar169 = (undefined)iVar84;
      uVar170 = (undefined)((uint)iVar84 >> 8);
      uVar171 = (undefined)((uint)iVar84 >> 0x10);
      uVar172 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(bVar73 & auVar149[15],
                        CONCAT12(bVar72 & auVar149[14],
                                 CONCAT11(bVar71 & auVar149[13],bVar69 & auVar149[12]))) +
               auVar90._12_4_;
      uVar173 = (undefined)iVar84;
      uVar174 = (undefined)((uint)iVar84 >> 8);
      uVar175 = (undefined)((uint)iVar84 >> 0x10);
      uVar176 = (undefined)((uint)iVar84 >> 0x18);
      iVar177 = CONCAT13(bVar82 & auVar143[3],
                         CONCAT12(bVar81 & auVar143[2],
                                  CONCAT11(bVar80 & auVar143[1],bVar78 & auVar143[0])));
      auVar85._0_8_ =
           CONCAT17(bVar82 & auVar143[7],
                    CONCAT16(bVar81 & auVar143[6],
                             CONCAT15(bVar80 & auVar143[5],CONCAT14(bVar78 & auVar143[4],iVar177))))
      ;
      auVar85[8] = bVar78 & auVar143[8];
      auVar85[9] = bVar80 & auVar143[9];
      auVar85[10] = bVar81 & auVar143[10];
      auVar85[11] = bVar82 & auVar143[11];
      auVar91[12] = bVar78 & auVar143[12];
      auVar91._0_12_ = auVar85;
      auVar91[13] = bVar80 & auVar143[13];
      auVar91[14] = bVar81 & auVar143[14];
      auVar91[15] = bVar82 & auVar143[15];
      auVar64._0_4_ = iVar119 + auVar64._0_4_ + iVar182;
      auVar64._4_4_ = iVar119 + iVar121 + (int)((ulong)auVar103._0_8_ >> 0x20);
      auVar64._8_4_ = iVar119 + iVar153 + auVar103._8_4_;
      auVar64._12_4_ = iVar119 + iVar158 + auVar109._12_4_;
      auVar66._0_4_ = iVar102 + auVar66._0_4_ + iVar159;
      auVar66._4_4_ = iVar102 + iVar150 + (int)((ulong)auVar233._0_8_ >> 0x20);
      auVar66._8_4_ = iVar102 + iVar183 + auVar233._8_4_;
      auVar66._12_4_ = iVar102 + iVar151 + auVar235._12_4_;
      iVar177 = iVar177 + auVar145._0_4_;
      iVar182 = (int)((ulong)auVar85._0_8_ >> 0x20) + auVar145._4_4_;
      iVar183 = auVar85._8_4_ + auVar145._8_4_;
      iVar121 = auVar91._12_4_ + auVar145._12_4_;
    }
    return 1;
  }
  fVar70 = *pfVar2;
  iVar153 = *piVar8;
  iVar158 = *piVar6;
  bVar194 = (byte)iVar158;
  bVar195 = (byte)((uint)iVar158 >> 8);
  bVar196 = (byte)((uint)iVar158 >> 0x10);
  bVar197 = (byte)((uint)iVar158 >> 0x18);
  iVar159 = *piVar7;
  uVar17 = *puVar3;
  iVar84 = param_5;
  if (param_4 <= param_5) {
    iVar84 = param_4;
  }
  iVar14 = *piVar5;
  iVar193 = *piVar4;
  uVar10 = iVar14 + 1;
  iVar83 = MP_INT_ABS((int)(fVar70 * 128.0));
  iVar99 = MP_INT_ABS((int)(fVar70 * 384.0));
  iVar100 = MP_INT_ABS((int)(fVar70 * 640.0));
  iVar101 = MP_INT_ABS((int)(fVar70 * 896.0));
  iVar160 = (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) + *(int *)(param_6 + (ulong)param_1 * 4)
            + 0x2000;
  uVar12 = param_2 - 1;
  auVar236._0_4_ = iVar153 + iVar159 * iVar131 + iVar83 * iVar158;
  auVar236._4_4_ = iVar153 + iVar159 * iVar132 + iVar99 * iVar158;
  auVar236._8_4_ = iVar153 + iVar159 * iVar152 + iVar100 * iVar158;
  auVar236._12_4_ = iVar153 + iVar159 * iVar192 + iVar101 * iVar158;
  auVar149 = NEON_sshl(auVar236,auVar89,4);
  bVar198 = (byte)uVar17;
  bVar200 = (byte)((uint)uVar17 >> 8);
  bVar201 = (byte)((uint)uVar17 >> 0x10);
  bVar202 = (byte)((uint)uVar17 >> 0x18);
  iVar153 = CONCAT13(auVar149[3] & bVar202,
                     CONCAT12(auVar149[2] & bVar201,
                              CONCAT11(auVar149[1] & bVar200,auVar149[0] & bVar198)));
  auVar186._0_8_ =
       CONCAT17(auVar149[7] & bVar202,
                CONCAT16(auVar149[6] & bVar201,
                         CONCAT15(auVar149[5] & bVar200,CONCAT14(auVar149[4] & bVar198,iVar153))));
  auVar186[8] = auVar149[8] & bVar198;
  auVar186[9] = auVar149[9] & bVar200;
  auVar186[10] = auVar149[10] & bVar201;
  auVar186[11] = auVar149[11] & bVar202;
  auVar188[12] = auVar149[12] & bVar198;
  auVar188._0_12_ = auVar186;
  auVar188[13] = auVar149[13] & bVar200;
  auVar188[14] = auVar149[14] & bVar201;
  auVar188[15] = auVar149[15] & bVar202;
  auVar189._0_4_ = iVar193 + (int)(fVar70 * 128.0) + iVar153;
  auVar189._4_4_ = iVar193 + (int)(fVar70 * 384.0) + (int)((ulong)auVar186._0_8_ >> 0x20);
  auVar189._8_4_ = iVar193 + (int)(fVar70 * 640.0) + auVar186._8_4_;
  auVar189._12_4_ = iVar193 + (int)(fVar70 * 896.0) + auVar188._12_4_;
  if (param_3 < iVar84) {
    iVar158 = CONCAT13(auVar149[3] & bVar197,
                       CONCAT12(auVar149[2] & bVar196,
                                CONCAT11(auVar149[1] & bVar195,auVar149[0] & bVar194)));
    auVar86._0_8_ =
         CONCAT17(auVar149[7] & bVar197,
                  CONCAT16(auVar149[6] & bVar196,
                           CONCAT15(auVar149[5] & bVar195,CONCAT14(auVar149[4] & bVar194,iVar158))))
    ;
    auVar86[8] = auVar149[8] & bVar194;
    auVar86[9] = auVar149[9] & bVar195;
    auVar86[10] = auVar149[10] & bVar196;
    auVar86[11] = auVar149[11] & bVar197;
    auVar92[12] = auVar149[12] & bVar194;
    auVar92._0_12_ = auVar86;
    auVar92[13] = auVar149[13] & bVar195;
    auVar92[14] = auVar149[14] & bVar196;
    auVar92[15] = auVar149[15] & bVar197;
    iVar153 = *piVar9;
    fVar70 = *(float *)param_11;
    fVar79 = *(float *)(param_11 + 4);
    fVar129 = *(float *)(param_11 + 8);
    fVar130 = *(float *)(param_11 + 0xc);
    iVar158 = auVar236._0_4_ + iVar158;
    iVar159 = auVar236._4_4_ + (int)((ulong)auVar86._0_8_ >> 0x20);
    iVar131 = auVar236._8_4_ + auVar86._8_4_;
    iVar132 = auVar236._12_4_ + auVar92._12_4_;
    auVar126._8_8_ = 0xffffffffffffffff;
    auVar126._0_8_ = 0xffffffffffffffff;
    do {
      uVar11 = iVar49 >> 0xd;
      iVar49 = iVar49 + uVar15;
      uVar13 = uVar12;
      if ((int)uVar11 <= (int)uVar12) {
        uVar13 = uVar11;
      }
      auVar29[8] = 0xf8;
      auVar29._0_8_ = 0xfffffff8fffffff8;
      auVar29[9] = 0xff;
      auVar29[10] = 0xff;
      auVar29[11] = 0xff;
      auVar29[12] = 0xf8;
      auVar29[13] = 0xff;
      auVar29[14] = 0xff;
      auVar29[15] = 0xff;
      auVar149 = NEON_sshl(auVar189,auVar29,4);
      iVar152 = param_2;
      if (iVar160 >> 0xd <= param_2) {
        iVar152 = iVar160 >> 0xd;
      }
      uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
      iVar160 = iVar160 + uVar10;
      auVar30[8] = 0xf8;
      auVar30._0_8_ = 0xfffffff8fffffff8;
      auVar30[9] = 0xff;
      auVar30[10] = 0xff;
      auVar30[11] = 0xff;
      auVar30[12] = 0xf8;
      auVar30[13] = 0xff;
      auVar30[14] = 0xff;
      auVar30[15] = 0xff;
      auVar143 = NEON_sshl(auVar66,auVar30,4);
      lVar48 = (long)(int)(uVar13 + param_3);
      auVar94._0_4_ = auVar149._0_4_ + uVar13 * -0x20;
      auVar94._4_4_ = auVar149._4_4_ + uVar13 * -0x20;
      auVar94._8_4_ = auVar149._8_4_ + uVar13 * -0x20;
      auVar94._12_4_ = auVar149._12_4_ + uVar13 * -0x20;
      fVar137 = (float)uVar13 * param_12;
      pauVar50 = (undefined (*) [16])
                 (*(long *)(this + 0x138) + (long)(int)(uVar13 + param_3) * 0x30);
      uVar184 = *(undefined8 *)(param_10 + 8);
      auVar136._0_4_ = auVar143._0_4_ + uVar13 * -0x20;
      auVar136._4_4_ = auVar143._4_4_ + uVar13 * -0x20;
      auVar136._8_4_ = auVar143._8_4_ + uVar13 * -0x20;
      auVar136._12_4_ = auVar143._12_4_ + uVar13 * -0x20;
      auVar149 = NEON_smax(auVar94,ZEXT216(0),4);
      auVar143 = NEON_smax(auVar136,ZEXT216(0),4);
      fVar138 = fVar137 + fVar70;
      fVar139 = fVar137 + fVar79;
      fVar140 = fVar137 + fVar129;
      fVar137 = fVar137 + fVar130;
      while( true ) {
        lVar48 = lVar48 + 1;
        auVar234 = *pauVar50;
        auVar111._0_4_ = (float)*(undefined8 *)param_10 - auVar234._0_4_;
        auVar111._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar234._4_4_;
        auVar111._8_4_ = (float)uVar184 - auVar234._8_4_;
        auVar111._12_4_ = (float)((ulong)uVar184 >> 0x20) - auVar234._12_4_;
        auVar89 = NEON_cmlt(auVar111,0,4);
        auVar112[0] = auVar89[0] & bVar51;
        auVar112[1] = auVar89[1] & bVar204;
        auVar112[2] = auVar89[2] & bVar205;
        auVar112[3] = auVar89[3] & bVar206;
        auVar112[4] = auVar89[4] & bVar207;
        auVar112[5] = auVar89[5] & bVar208;
        auVar112[6] = auVar89[6] & bVar209;
        auVar112[7] = auVar89[7] & bVar210;
        auVar112[8] = auVar89[8] & bVar211;
        auVar112[9] = auVar89[9] & bVar212;
        auVar112[10] = auVar89[10] & bVar213;
        auVar112[11] = auVar89[11] & bVar214;
        auVar112[12] = auVar89[12] & bVar215;
        auVar112[13] = auVar89[13] & bVar216;
        auVar112[14] = auVar89[14] & bVar217;
        auVar112[15] = auVar89[15] & bVar218;
        auVar89 = NEON_ext(auVar112,auVar112,8,1);
        if (CONCAT13(auVar89[3] | auVar112[3] | auVar89[7] | auVar112[7],
                     CONCAT12(auVar89[2] | auVar112[2] | auVar89[6] | auVar112[6],
                              CONCAT11(auVar89[1] | auVar112[1] | auVar89[5] | auVar112[5],
                                       auVar89[0] | auVar112[0] | auVar89[4] | auVar112[4]))) != 0xf
           ) {
          auVar33[8] = 0x20;
          auVar33._0_8_ = 0x2000000020;
          auVar33._9_3_ = 0;
          auVar33[12] = 0x20;
          auVar33._13_3_ = 0;
          auVar89 = NEON_smin(auVar143,auVar33,4);
          auVar34[8] = 0x20;
          auVar34._0_8_ = 0x2000000020;
          auVar34._9_3_ = 0;
          auVar34[12] = 0x20;
          auVar34._13_3_ = 0;
          auVar106 = NEON_smin(auVar149,auVar34,4);
          auVar21[9] = (char)((ulong)uVar184 >> 8);
          auVar21._0_9_ = *(unkbyte9 *)param_10;
          auVar21[10] = (char)((ulong)uVar184 >> 0x10);
          auVar21[11] = (char)((ulong)uVar184 >> 0x18);
          auVar21[12] = (char)((ulong)uVar184 >> 0x20);
          auVar21[13] = (char)((ulong)uVar184 >> 0x28);
          auVar21[14] = (char)((ulong)uVar184 >> 0x30);
          auVar21[15] = (char)((ulong)uVar184 >> 0x38);
          auVar22._4_4_ = fVar139;
          auVar22._0_4_ = fVar138;
          auVar22._8_4_ = fVar140;
          auVar22._12_4_ = fVar137;
          auVar146 = NEON_fmin(auVar22,auVar21,4);
          auVar89 = NEON_smax(auVar89,ZEXT216(0),4);
          auVar113 = NEON_smax(auVar106,ZEXT216(0),4);
          auVar106 = NEON_fcmge(auVar146,auVar234,4);
          auVar234 = NEON_sshl(auVar126,auVar89,4);
          auVar89 = NEON_sshl(auVar126,auVar113,4);
          auVar55[0] = auVar234[0] & ~auVar89[0];
          auVar55[1] = auVar234[1] & ~auVar89[1];
          auVar55[2] = auVar234[2] & ~auVar89[2];
          auVar55[3] = auVar234[3] & ~auVar89[3];
          auVar55[4] = auVar234[4] & ~auVar89[4];
          auVar55[5] = auVar234[5] & ~auVar89[5];
          auVar55[6] = auVar234[6] & ~auVar89[6];
          auVar55[7] = auVar234[7] & ~auVar89[7];
          auVar55[8] = auVar234[8] & ~auVar89[8];
          auVar55[9] = auVar234[9] & ~auVar89[9];
          auVar55[10] = auVar234[10] & ~auVar89[10];
          auVar55[11] = auVar234[11] & ~auVar89[11];
          auVar55[12] = auVar234[12] & ~auVar89[12];
          auVar55[13] = auVar234[13] & ~auVar89[13];
          auVar55[14] = auVar234[14] & ~auVar89[14];
          auVar55[15] = auVar234[15] & ~auVar89[15];
          auVar44._9_7_ = _UNK_004c5139;
          auVar44._0_9_ = _DAT_004c5130;
          auVar234 = a64_TBL(ZEXT816(0),auVar55,auVar44);
          auVar234 = NEON_cmeq(auVar234,0,2);
          if (CONCAT17(auVar106[15] & ~auVar234[15] | auVar106[7] & ~auVar234[7],
                       CONCAT16(auVar106[14] & ~auVar234[14] | auVar106[6] & ~auVar234[6],
                                CONCAT15(auVar106[13] & ~auVar234[13] | auVar106[5] & ~auVar234[5],
                                         CONCAT14(auVar106[12] & ~auVar234[12] |
                                                  auVar106[4] & ~auVar234[4],
                                                  CONCAT13(auVar106[11] & ~auVar234[11] |
                                                           auVar106[3] & ~auVar234[3],
                                                           CONCAT12(auVar106[10] & ~auVar234[10] |
                                                                    auVar106[2] & ~auVar234[2],
                                                                    CONCAT11(auVar106[9] &
                                                                             ~auVar234[9] |
                                                                             auVar106[1] &
                                                                             ~auVar234[1],
                                                                             auVar106[8] &
                                                                             ~auVar234[8] |
                                                                             auVar106[0] &
                                                                             ~auVar234[0]))))))) !=
              0) {
            return 0;
          }
        }
        if (iVar152 + param_3 <= lVar48) break;
        fVar138 = param_12 + fVar138;
        fVar139 = param_12 + fVar139;
        fVar140 = param_12 + fVar140;
        fVar137 = param_12 + fVar137;
        auVar35[8] = 0x20;
        auVar35._0_8_ = 0x2000000020;
        auVar35._9_3_ = 0;
        auVar35[12] = 0x20;
        auVar35._13_3_ = 0;
        auVar149 = NEON_uqsub(auVar149,auVar35,2);
        pauVar50 = pauVar50 + 3;
        auVar36[8] = 0x20;
        auVar36._0_8_ = 0x2000000020;
        auVar36._9_3_ = 0;
        auVar36[12] = 0x20;
        auVar36._13_3_ = 0;
        auVar143 = NEON_uqsub(auVar143,auVar36,2);
      }
      auVar53._0_4_ = iVar158 - iVar153;
      auVar53._4_4_ = iVar159 - iVar153;
      auVar53._8_4_ = iVar131 - iVar153;
      auVar53._12_4_ = iVar132 - iVar153;
      auVar110._0_4_ = iVar177 - iVar16;
      auVar110._4_4_ = iVar182 - iVar16;
      auVar110._8_4_ = iVar183 - iVar16;
      auVar110._12_4_ = iVar121 - iVar16;
      iVar192 = auVar189._4_4_;
      iVar193 = auVar189._8_4_;
      iVar83 = auVar189._12_4_;
      param_3 = *(int *)(this + 300) + param_3;
      iVar183 = auVar66._4_4_;
      iVar121 = auVar66._8_4_;
      iVar152 = auVar66._12_4_;
      auVar19._8_4_ = 0xffffffe1;
      auVar19._0_8_ = 0xffffffe1ffffffe1;
      auVar19._12_4_ = 0xffffffe1;
      auVar149 = NEON_sshl(auVar53,auVar19,4);
      auVar20._8_4_ = 0xffffffe1;
      auVar20._0_8_ = 0xffffffe1ffffffe1;
      auVar20._12_4_ = 0xffffffe1;
      auVar143 = NEON_sshl(auVar110,auVar20,4);
      iVar158 = CONCAT13(bVar197 & auVar149[3],
                         CONCAT12(bVar196 & auVar149[2],
                                  CONCAT11(bVar195 & auVar149[1],bVar194 & auVar149[0])));
      auVar178._0_8_ =
           CONCAT17(bVar197 & auVar149[7],
                    CONCAT16(bVar196 & auVar149[6],
                             CONCAT15(bVar195 & auVar149[5],CONCAT14(bVar194 & auVar149[4],iVar158))
                            ));
      auVar178[8] = bVar194 & auVar149[8];
      auVar178[9] = bVar195 & auVar149[9];
      auVar178[10] = bVar196 & auVar149[10];
      auVar178[11] = bVar197 & auVar149[11];
      auVar179[12] = bVar194 & auVar149[12];
      auVar179._0_12_ = auVar178;
      auVar179[13] = bVar195 & auVar149[13];
      auVar179[14] = bVar196 & auVar149[14];
      auVar179[15] = bVar197 & auVar149[15];
      iVar182 = CONCAT13(bVar202 & auVar149[3],
                         CONCAT12(bVar201 & auVar149[2],
                                  CONCAT11(bVar200 & auVar149[1],bVar198 & auVar149[0])));
      auVar87._0_8_ =
           CONCAT17(bVar202 & auVar149[7],
                    CONCAT16(bVar201 & auVar149[6],
                             CONCAT15(bVar200 & auVar149[5],CONCAT14(bVar198 & auVar149[4],iVar182))
                            ));
      auVar87[8] = bVar198 & auVar149[8];
      auVar87[9] = bVar200 & auVar149[9];
      auVar87[10] = bVar201 & auVar149[10];
      auVar87[11] = bVar202 & auVar149[11];
      auVar93[12] = bVar198 & auVar149[12];
      auVar93._0_12_ = auVar87;
      auVar93[13] = bVar200 & auVar149[13];
      auVar93[14] = bVar201 & auVar149[14];
      auVar93[15] = bVar202 & auVar149[15];
      iVar158 = iVar158 + auVar53._0_4_;
      iVar159 = (int)((ulong)auVar178._0_8_ >> 0x20) + auVar53._4_4_;
      iVar131 = auVar178._8_4_ + auVar53._8_4_;
      iVar132 = auVar179._12_4_ + auVar53._12_4_;
      iVar177 = CONCAT13(bVar82 & auVar143[3],
                         CONCAT12(bVar81 & auVar143[2],
                                  CONCAT11(bVar80 & auVar143[1],bVar78 & auVar143[0])));
      auVar52._0_8_ =
           CONCAT17(bVar82 & auVar143[7],
                    CONCAT16(bVar81 & auVar143[6],
                             CONCAT15(bVar80 & auVar143[5],CONCAT14(bVar78 & auVar143[4],iVar177))))
      ;
      auVar52[8] = bVar78 & auVar143[8];
      auVar52[9] = bVar80 & auVar143[9];
      auVar52[10] = bVar81 & auVar143[10];
      auVar52[11] = bVar82 & auVar143[11];
      auVar54[12] = bVar78 & auVar143[12];
      auVar54._0_12_ = auVar52;
      auVar54[13] = bVar80 & auVar143[13];
      auVar54[14] = bVar81 & auVar143[14];
      auVar54[15] = bVar82 & auVar143[15];
      auVar189._0_4_ = iVar14 + auVar189._0_4_ + iVar182;
      auVar189._4_4_ = iVar14 + iVar192 + (int)((ulong)auVar87._0_8_ >> 0x20);
      auVar189._8_4_ = iVar14 + iVar193 + auVar87._8_4_;
      auVar189._12_4_ = iVar14 + iVar83 + auVar93._12_4_;
      fVar70 = param_13 + fVar70;
      fVar79 = param_13 + fVar79;
      fVar129 = param_13 + fVar129;
      fVar130 = param_13 + fVar130;
      auVar66._0_4_ =
           iVar102 + auVar66._0_4_ +
           CONCAT13(bVar125 & auVar143[3],
                    CONCAT12(bVar124 & auVar143[2],
                             CONCAT11(bVar123 & auVar143[1],bVar122 & auVar143[0])));
      auVar66._4_4_ =
           iVar102 + iVar183 +
           CONCAT13(bVar125 & auVar143[7],
                    CONCAT12(bVar124 & auVar143[6],
                             CONCAT11(bVar123 & auVar143[5],bVar122 & auVar143[4])));
      auVar66._8_4_ =
           iVar102 + iVar121 +
           CONCAT13(bVar125 & auVar143[11],
                    CONCAT12(bVar124 & auVar143[10],
                             CONCAT11(bVar123 & auVar143[9],bVar122 & auVar143[8])));
      auVar66._12_4_ =
           iVar102 + iVar152 +
           CONCAT13(bVar125 & auVar143[15],
                    CONCAT12(bVar124 & auVar143[14],
                             CONCAT11(bVar123 & auVar143[13],bVar122 & auVar143[12])));
      iVar177 = iVar177 + auVar110._0_4_;
      iVar182 = (int)((ulong)auVar52._0_8_ >> 0x20) + auVar110._4_4_;
      iVar183 = auVar52._8_4_ + auVar110._8_4_;
      iVar121 = auVar54._12_4_ + auVar110._12_4_;
      *(float *)(param_11 + 0x10) = fVar129;
      *(float *)(param_11 + 0x14) = fVar130;
      *(float *)param_11 = fVar70;
      *(float *)(param_11 + 4) = fVar79;
    } while (param_3 < iVar84);
  }
  auVar149 = _DAT_004c4480;
  if (param_3 < param_5) {
    iVar84 = iVar160 >> 0xd;
    iVar160 = iVar141 + uVar1;
    uVar10 = uVar12;
    if (iVar49 >> 0xd <= (int)uVar12) {
      uVar10 = iVar49 >> 0xd;
    }
    auVar56._8_4_ = 0xfffffff8;
    auVar56._0_8_ = 0xfffffff8fffffff8;
    auVar56._12_4_ = 0xfffffff8;
    iVar141 = param_2;
    if (iVar84 <= param_2) {
      iVar141 = iVar84;
    }
    uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    auVar143 = *(undefined (*) [16])param_11;
    iVar49 = iVar49 + uVar15;
    auVar106 = NEON_sshl(auVar189,auVar56,4);
    auVar234 = *(undefined (*) [16])param_10;
    auVar113 = NEON_sshl(auVar64,auVar56,4);
    auVar89 = NEON_sshl(auVar66,auVar56,4);
    auVar95._0_4_ = auVar106._0_4_ + uVar10 * -0x20;
    auVar95._4_4_ = auVar106._4_4_ + uVar10 * -0x20;
    auVar95._8_4_ = auVar106._8_4_ + uVar10 * -0x20;
    auVar95._12_4_ = auVar106._12_4_ + uVar10 * -0x20;
    fVar79 = (float)uVar10 * param_12;
    lVar48 = (long)(int)(uVar10 + param_3);
    auVar114._0_4_ = auVar113._0_4_ + uVar10 * -0x20;
    auVar114._4_4_ = auVar113._4_4_ + uVar10 * -0x20;
    auVar114._8_4_ = auVar113._8_4_ + uVar10 * -0x20;
    auVar114._12_4_ = auVar113._12_4_ + uVar10 * -0x20;
    auVar57._0_4_ = auVar89._0_4_ + uVar10 * -0x20;
    auVar57._4_4_ = auVar89._4_4_ + uVar10 * -0x20;
    auVar57._8_4_ = auVar89._8_4_ + uVar10 * -0x20;
    auVar57._12_4_ = auVar89._12_4_ + uVar10 * -0x20;
    pauVar50 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)(int)(uVar10 + param_3) * 0x30);
    auVar89 = NEON_smax(auVar95,ZEXT216(0),4);
    auVar106 = NEON_smax(auVar114,ZEXT216(0),4);
    auVar113 = NEON_smax(auVar57,ZEXT216(0),4);
    fVar70 = fVar79 + auVar143._0_4_;
    uVar161 = SUB41(fVar70,0);
    uVar162 = (undefined)((uint)fVar70 >> 8);
    uVar163 = (undefined)((uint)fVar70 >> 0x10);
    uVar164 = (undefined)((uint)fVar70 >> 0x18);
    fVar70 = fVar79 + auVar143._4_4_;
    uVar169 = SUB41(fVar70,0);
    uVar170 = (undefined)((uint)fVar70 >> 8);
    uVar171 = (undefined)((uint)fVar70 >> 0x10);
    uVar172 = (undefined)((uint)fVar70 >> 0x18);
    fVar70 = fVar79 + auVar143._8_4_;
    uVar220 = SUB41(fVar70,0);
    uVar221 = (undefined)((uint)fVar70 >> 8);
    uVar222 = (undefined)((uint)fVar70 >> 0x10);
    uVar223 = (undefined)((uint)fVar70 >> 0x18);
    fVar79 = fVar79 + auVar143._12_4_;
    uVar224 = SUB41(fVar79,0);
    uVar225 = (undefined)((uint)fVar79 >> 8);
    uVar226 = (undefined)((uint)fVar79 >> 0x10);
    uVar227 = (undefined)((uint)fVar79 >> 0x18);
    auVar237._8_8_ = 0xffffffffffffffff;
    auVar237._0_8_ = 0xffffffffffffffff;
    auVar45._9_7_ = _UNK_004c5139;
    auVar45._0_9_ = _DAT_004c5130;
    while( true ) {
      lVar48 = lVar48 + 1;
      auVar143 = *pauVar50;
      auVar58._0_4_ = auVar234._0_4_ - auVar143._0_4_;
      auVar58._4_4_ = auVar234._4_4_ - auVar143._4_4_;
      auVar58._8_4_ = auVar234._8_4_ - auVar143._8_4_;
      auVar58._12_4_ = auVar234._12_4_ - auVar143._12_4_;
      auVar146 = NEON_cmlt(auVar58,0,4);
      bVar51 = auVar146[0] & 1;
      auVar59._0_5_ = CONCAT14(auVar146[4],(uint)bVar51) & 0x2ffffffff;
      auVar59._5_3_ = 0;
      auVar59[8] = auVar146[8] & 4;
      auVar59._9_3_ = 0;
      auVar59[12] = auVar146[12] & 8;
      auVar59._13_3_ = 0;
      auVar96 = NEON_ext(auVar59,auVar59,8,1);
      if (CONCAT13(auVar96[3] | auVar96[7],
                   CONCAT12(auVar96[2] | auVar96[6],
                            CONCAT11(auVar96[1] | auVar96[5],
                                     auVar96[0] | bVar51 | auVar96[4] | auVar146[4] & 2))) != 0xf) {
        auVar37[8] = 0x20;
        auVar37._0_8_ = 0x2000000020;
        auVar37._9_3_ = 0;
        auVar37[12] = 0x20;
        auVar37._13_3_ = 0;
        auVar146 = NEON_smin(auVar89,auVar37,4);
        auVar38[8] = 0x20;
        auVar38._0_8_ = 0x2000000020;
        auVar38._9_3_ = 0;
        auVar38[12] = 0x20;
        auVar38._13_3_ = 0;
        auVar96 = NEON_smin(auVar106,auVar38,4);
        auVar39[8] = 0x20;
        auVar39._0_8_ = 0x2000000020;
        auVar39._9_3_ = 0;
        auVar39[12] = 0x20;
        auVar39._13_3_ = 0;
        auVar144 = NEON_smin(auVar113,auVar39,4);
        auVar146 = NEON_smax(auVar146,ZEXT216(0),4);
        auVar96 = NEON_smax(auVar96,ZEXT216(0),4);
        auVar144 = NEON_smax(auVar144,ZEXT216(0),4);
        auVar146 = NEON_sshl(auVar237,auVar146,4);
        auVar96 = NEON_sshl(auVar237,auVar96,4);
        auVar115 = NEON_sshl(auVar237,auVar144,4);
        auVar31[1] = uVar162;
        auVar31[0] = uVar161;
        auVar31[2] = uVar163;
        auVar31[3] = uVar164;
        auVar31[4] = uVar169;
        auVar31[5] = uVar170;
        auVar31[6] = uVar171;
        auVar31[7] = uVar172;
        auVar31[8] = uVar220;
        auVar31[9] = uVar221;
        auVar31[10] = uVar222;
        auVar31[11] = uVar223;
        auVar31[12] = uVar224;
        auVar31[13] = uVar225;
        auVar31[14] = uVar226;
        auVar31[15] = uVar227;
        auVar144 = NEON_fmin(auVar31,auVar234,4);
        auVar60[0] = auVar115[0] & ~(auVar96[0] | auVar146[0]);
        auVar60[1] = auVar115[1] & ~(auVar96[1] | auVar146[1]);
        auVar60[2] = auVar115[2] & ~(auVar96[2] | auVar146[2]);
        auVar60[3] = auVar115[3] & ~(auVar96[3] | auVar146[3]);
        auVar60[4] = auVar115[4] & ~(auVar96[4] | auVar146[4]);
        auVar60[5] = auVar115[5] & ~(auVar96[5] | auVar146[5]);
        auVar60[6] = auVar115[6] & ~(auVar96[6] | auVar146[6]);
        auVar60[7] = auVar115[7] & ~(auVar96[7] | auVar146[7]);
        auVar60[8] = auVar115[8] & ~(auVar96[8] | auVar146[8]);
        auVar60[9] = auVar115[9] & ~(auVar96[9] | auVar146[9]);
        auVar60[10] = auVar115[10] & ~(auVar96[10] | auVar146[10]);
        auVar60[11] = auVar115[11] & ~(auVar96[11] | auVar146[11]);
        auVar60[12] = auVar115[12] & ~(auVar96[12] | auVar146[12]);
        auVar60[13] = auVar115[13] & ~(auVar96[13] | auVar146[13]);
        auVar60[14] = auVar115[14] & ~(auVar96[14] | auVar146[14]);
        auVar60[15] = auVar115[15] & ~(auVar96[15] | auVar146[15]);
        auVar146 = NEON_fcmge(auVar144,auVar143,4);
        auVar143 = a64_TBL(ZEXT816(0),auVar60,auVar45);
        auVar143 = NEON_cmeq(auVar143,0,2);
        if (CONCAT17(auVar146[15] & ~auVar143[15] | auVar146[7] & ~auVar143[7],
                     CONCAT16(auVar146[14] & ~auVar143[14] | auVar146[6] & ~auVar143[6],
                              CONCAT15(auVar146[13] & ~auVar143[13] | auVar146[5] & ~auVar143[5],
                                       CONCAT14(auVar146[12] & ~auVar143[12] |
                                                auVar146[4] & ~auVar143[4],
                                                CONCAT13(auVar146[11] & ~auVar143[11] |
                                                         auVar146[3] & ~auVar143[3],
                                                         CONCAT12(auVar146[10] & ~auVar143[10] |
                                                                  auVar146[2] & ~auVar143[2],
                                                                  CONCAT11(auVar146[9] &
                                                                           ~auVar143[9] |
                                                                           auVar146[1] &
                                                                           ~auVar143[1],
                                                                           auVar146[8] &
                                                                           ~auVar143[8] |
                                                                           auVar146[0] &
                                                                           ~auVar143[0]))))))) != 0)
        {
          return 0;
        }
      }
      if (iVar141 + param_3 <= lVar48) break;
      auVar40[8] = 0x20;
      auVar40._0_8_ = 0x2000000020;
      auVar40._9_3_ = 0;
      auVar40[12] = 0x20;
      auVar40._13_3_ = 0;
      auVar89 = NEON_uqsub(auVar89,auVar40,2);
      auVar41[8] = 0x20;
      auVar41._0_8_ = 0x2000000020;
      auVar41._9_3_ = 0;
      auVar41[12] = 0x20;
      auVar41._13_3_ = 0;
      auVar106 = NEON_uqsub(auVar106,auVar41,2);
      pauVar50 = pauVar50 + 3;
      fVar70 = param_12 + (float)CONCAT13(uVar164,CONCAT12(uVar163,CONCAT11(uVar162,uVar161)));
      uVar161 = SUB41(fVar70,0);
      uVar162 = (undefined)((uint)fVar70 >> 8);
      uVar163 = (undefined)((uint)fVar70 >> 0x10);
      uVar164 = (undefined)((uint)fVar70 >> 0x18);
      fVar70 = param_12 + (float)CONCAT13(uVar172,CONCAT12(uVar171,CONCAT11(uVar170,uVar169)));
      uVar169 = SUB41(fVar70,0);
      uVar170 = (undefined)((uint)fVar70 >> 8);
      uVar171 = (undefined)((uint)fVar70 >> 0x10);
      uVar172 = (undefined)((uint)fVar70 >> 0x18);
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
      auVar42[8] = 0x20;
      auVar42._0_8_ = 0x2000000020;
      auVar42._9_3_ = 0;
      auVar42[12] = 0x20;
      auVar42._13_3_ = 0;
      auVar113 = NEON_uqsub(auVar113,auVar42,2);
    }
    param_3 = *(int *)(this + 300) + param_3;
    uVar10 = uVar1;
  }
  if (param_3 < param_5) {
    iVar158 = (int)(CONCAT17(uVar135,CONCAT16(uVar134,CONCAT15(uVar133,CONCAT14((char)iVar119,
                                                                                iVar119)))) >> 0x20)
    ;
    iVar153 = (int)(CONCAT17(uVar135,CONCAT16(uVar134,CONCAT15(uVar133,CONCAT14((char)iVar119,
                                                                                iVar119)))) >> 0x20)
    ;
    auVar143 = *(undefined (*) [16])param_11;
    auVar116._0_4_ = iVar177 - iVar16;
    auVar116._4_4_ = iVar182 - iVar16;
    auVar116._8_4_ = iVar183 - iVar16;
    auVar116._12_4_ = iVar121 - iVar16;
    auVar61._0_4_ = iVar150 - iVar120;
    auVar61._4_4_ =
         (int)(CONCAT17(uVar168,CONCAT16(uVar167,CONCAT15(uVar166,CONCAT14(uVar165,iVar150)))) >>
              0x20) - iVar120;
    auVar61._8_4_ = iVar151 - iVar120;
    auVar61._12_4_ =
         (int)(CONCAT17(uVar176,CONCAT16(uVar175,CONCAT15(uVar174,CONCAT14(uVar173,iVar151)))) >>
              0x20) - iVar120;
    auVar23[8] = 0xe1;
    auVar23._0_8_ = 0xffffffe1ffffffe1;
    auVar23[9] = 0xff;
    auVar23[10] = 0xff;
    auVar23[11] = 0xff;
    auVar23[12] = 0xe1;
    auVar23[13] = 0xff;
    auVar23[14] = 0xff;
    auVar23[15] = 0xff;
    auVar89 = NEON_sshl(auVar116,auVar23,4);
    auVar24[8] = 0xe1;
    auVar24._0_8_ = 0xffffffe1ffffffe1;
    auVar24[9] = 0xff;
    auVar24[10] = 0xff;
    auVar24[11] = 0xff;
    auVar24[12] = 0xe1;
    auVar24[13] = 0xff;
    auVar24[14] = 0xff;
    auVar24[15] = 0xff;
    auVar234 = NEON_sshl(auVar61,auVar24,4);
    fVar129 = auVar143._0_4_;
    fVar130 = auVar143._4_4_;
    fVar70 = auVar143._8_4_;
    fVar79 = auVar143._12_4_;
    auVar199._8_4_ = 0x20;
    auVar199._0_8_ = 0x2000000020;
    auVar199._12_4_ = 0x20;
    iVar84 = CONCAT13(bVar73 & auVar234[3],
                      CONCAT12(bVar72 & auVar234[2],
                               CONCAT11(bVar71 & auVar234[1],bVar69 & auVar234[0])));
    auVar88._0_8_ =
         CONCAT17(bVar73 & auVar234[7],
                  CONCAT16(bVar72 & auVar234[6],
                           CONCAT15(bVar71 & auVar234[5],CONCAT14(bVar69 & auVar234[4],iVar84))));
    auVar88[8] = bVar69 & auVar234[8];
    auVar88[9] = bVar71 & auVar234[9];
    auVar88[10] = bVar72 & auVar234[10];
    auVar88[11] = bVar73 & auVar234[11];
    auVar97[12] = bVar69 & auVar234[12];
    auVar97._0_12_ = auVar88;
    auVar97[13] = bVar71 & auVar234[13];
    auVar97[14] = bVar72 & auVar234[14];
    auVar97[15] = bVar73 & auVar234[15];
    iVar177 = CONCAT13(bVar77 & auVar234[3],
                       CONCAT12(bVar76 & auVar234[2],
                                CONCAT11(bVar75 & auVar234[1],bVar74 & auVar234[0])));
    auVar154._0_8_ =
         CONCAT17(bVar77 & auVar234[7],
                  CONCAT16(bVar76 & auVar234[6],
                           CONCAT15(bVar75 & auVar234[5],CONCAT14(bVar74 & auVar234[4],iVar177))));
    auVar154[8] = bVar74 & auVar234[8];
    auVar154[9] = bVar75 & auVar234[9];
    auVar154[10] = bVar76 & auVar234[10];
    auVar154[11] = bVar77 & auVar234[11];
    auVar155[12] = bVar74 & auVar234[12];
    auVar155._0_12_ = auVar154;
    auVar155[13] = bVar75 & auVar234[13];
    auVar155[14] = bVar76 & auVar234[14];
    auVar155[15] = bVar77 & auVar234[15];
    iVar182 = CONCAT13(bVar125 & auVar89[3],
                       CONCAT12(bVar124 & auVar89[2],
                                CONCAT11(bVar123 & auVar89[1],bVar122 & auVar89[0])));
    auVar187._0_8_ =
         CONCAT17(bVar125 & auVar89[7],
                  CONCAT16(bVar124 & auVar89[6],
                           CONCAT15(bVar123 & auVar89[5],CONCAT14(bVar122 & auVar89[4],iVar182))));
    auVar187[8] = bVar122 & auVar89[8];
    auVar187[9] = bVar123 & auVar89[9];
    auVar187[10] = bVar124 & auVar89[10];
    auVar187[11] = bVar125 & auVar89[11];
    auVar190[12] = bVar122 & auVar89[12];
    auVar190._0_12_ = auVar187;
    auVar190[13] = bVar123 & auVar89[13];
    auVar190[14] = bVar124 & auVar89[14];
    auVar190[15] = bVar125 & auVar89[15];
    iVar141 = CONCAT13(bVar82 & auVar89[3],
                       CONCAT12(bVar81 & auVar89[2],
                                CONCAT11(bVar80 & auVar89[1],bVar78 & auVar89[0]))) + auVar116._0_4_
    ;
    uVar133 = (undefined)iVar141;
    uVar134 = (undefined)((uint)iVar141 >> 8);
    uVar135 = (undefined)((uint)iVar141 >> 0x10);
    uVar161 = (undefined)((uint)iVar141 >> 0x18);
    iVar141 = CONCAT13(bVar82 & auVar89[7],
                       CONCAT12(bVar81 & auVar89[6],
                                CONCAT11(bVar80 & auVar89[5],bVar78 & auVar89[4]))) + auVar116._4_4_
    ;
    uVar162 = (undefined)iVar141;
    uVar163 = (undefined)((uint)iVar141 >> 8);
    uVar164 = (undefined)((uint)iVar141 >> 0x10);
    uVar165 = (undefined)((uint)iVar141 >> 0x18);
    iVar141 = CONCAT13(bVar82 & auVar89[11],
                       CONCAT12(bVar81 & auVar89[10],
                                CONCAT11(bVar80 & auVar89[9],bVar78 & auVar89[8]))) + auVar116._8_4_
    ;
    uVar166 = (undefined)iVar141;
    uVar167 = (undefined)((uint)iVar141 >> 8);
    uVar168 = (undefined)((uint)iVar141 >> 0x10);
    uVar169 = (undefined)((uint)iVar141 >> 0x18);
    iVar141 = CONCAT13(bVar82 & auVar89[15],
                       CONCAT12(bVar81 & auVar89[14],
                                CONCAT11(bVar80 & auVar89[13],bVar78 & auVar89[12]))) +
              auVar116._12_4_;
    uVar170 = (undefined)iVar141;
    uVar171 = (undefined)((uint)iVar141 >> 8);
    uVar172 = (undefined)((uint)iVar141 >> 0x10);
    uVar173 = (undefined)((uint)iVar141 >> 0x18);
    iVar84 = iVar84 + auVar61._0_4_;
    uVar174 = (undefined)iVar84;
    uVar175 = (undefined)((uint)iVar84 >> 8);
    uVar176 = (undefined)((uint)iVar84 >> 0x10);
    uVar220 = (undefined)((uint)iVar84 >> 0x18);
    iVar141 = (int)((ulong)auVar88._0_8_ >> 0x20) + auVar61._4_4_;
    uVar221 = (undefined)iVar141;
    uVar222 = (undefined)((uint)iVar141 >> 8);
    uVar223 = (undefined)((uint)iVar141 >> 0x10);
    uVar224 = (undefined)((uint)iVar141 >> 0x18);
    iVar141 = auVar88._8_4_ + auVar61._8_4_;
    uVar225 = (undefined)iVar141;
    uVar226 = (undefined)((uint)iVar141 >> 8);
    uVar227 = (undefined)((uint)iVar141 >> 0x10);
    uVar228 = (undefined)((uint)iVar141 >> 0x18);
    iVar141 = auVar97._12_4_ + auVar61._12_4_;
    uVar229 = (undefined)iVar141;
    uVar230 = (undefined)((uint)iVar141 >> 8);
    uVar231 = (undefined)((uint)iVar141 >> 0x10);
    uVar232 = (undefined)((uint)iVar141 >> 0x18);
    auVar156._0_4_ = iVar119 + auVar64._0_4_ + iVar177;
    auVar156._4_4_ = iVar153 + auVar64._4_4_ + (int)((ulong)auVar154._0_8_ >> 0x20);
    auVar156._8_4_ = iVar119 + auVar64._8_4_ + auVar154._8_4_;
    auVar156._12_4_ = iVar158 + auVar64._12_4_ + auVar155._12_4_;
    auVar180._0_4_ = iVar102 + auVar66._0_4_ + iVar182;
    auVar180._4_4_ = iVar102 + auVar66._4_4_ + (int)((ulong)auVar187._0_8_ >> 0x20);
    auVar180._8_4_ = iVar102 + auVar66._8_4_ + auVar187._8_4_;
    auVar180._12_4_ = iVar102 + auVar66._12_4_ + auVar190._12_4_;
    auVar191._8_4_ = 0xfffffff8;
    auVar191._0_8_ = 0xfffffff8fffffff8;
    auVar191._12_4_ = 0xfffffff8;
    auVar203._8_8_ = 0xffffffffffffffff;
    auVar203._0_8_ = 0xffffffffffffffff;
    while( true ) {
      fVar130 = param_13 + fVar130;
      fVar129 = param_13 + fVar129;
      fVar79 = param_13 + fVar79;
      fVar70 = param_13 + fVar70;
      *(float *)(param_11 + 0x10) = fVar70;
      *(float *)(param_11 + 0x14) = fVar79;
      *(float *)param_11 = fVar129;
      *(float *)(param_11 + 4) = fVar130;
      uVar1 = uVar12;
      if (iVar49 >> 0xd <= (int)uVar12) {
        uVar1 = iVar49 >> 0xd;
      }
      auVar143 = NEON_sshl(auVar156,auVar191,4);
      iVar141 = param_2;
      if (iVar160 >> 0xd <= param_2) {
        iVar141 = iVar160 >> 0xd;
      }
      uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      iVar49 = iVar49 + uVar15;
      auVar234 = NEON_sshl(auVar180,auVar191,4);
      iVar160 = iVar160 + uVar10;
      lVar48 = (long)(int)(uVar1 + param_3);
      uVar184 = *(undefined8 *)(param_10 + 8);
      auVar62._0_4_ = auVar143._0_4_ + uVar1 * -0x20;
      auVar62._4_4_ = auVar143._4_4_ + uVar1 * -0x20;
      auVar62._8_4_ = auVar143._8_4_ + uVar1 * -0x20;
      auVar62._12_4_ = auVar143._12_4_ + uVar1 * -0x20;
      fVar137 = (float)uVar1 * param_12;
      pauVar50 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)(int)(uVar1 + param_3) * 0x30)
      ;
      auVar117._0_4_ = auVar234._0_4_ + uVar1 * -0x20;
      auVar117._4_4_ = auVar234._4_4_ + uVar1 * -0x20;
      auVar117._8_4_ = auVar234._8_4_ + uVar1 * -0x20;
      auVar117._12_4_ = auVar234._12_4_ + uVar1 * -0x20;
      auVar234 = NEON_smax(auVar62,ZEXT216(0),4);
      auVar143 = NEON_smax(auVar117,ZEXT216(0),4);
      auVar127._0_4_ = fVar137 + fVar129;
      auVar127._4_4_ = fVar137 + fVar130;
      auVar127._8_4_ = fVar137 + fVar70;
      auVar127._12_4_ = fVar137 + fVar79;
      while( true ) {
        lVar48 = lVar48 + 1;
        auVar66 = *pauVar50;
        auVar63._0_4_ = (float)*(undefined8 *)param_10 - auVar66._0_4_;
        auVar63._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar66._4_4_;
        auVar63._8_4_ = (float)uVar184 - auVar66._8_4_;
        auVar63._12_4_ = (float)((ulong)uVar184 >> 0x20) - auVar66._12_4_;
        auVar64 = NEON_cmlt(auVar63,0,4);
        auVar65[0] = auVar64[0] & auVar149[0];
        auVar65[1] = auVar64[1] & auVar149[1];
        auVar65[2] = auVar64[2] & auVar149[2];
        auVar65[3] = auVar64[3] & auVar149[3];
        auVar65[4] = auVar64[4] & auVar149[4];
        auVar65[5] = auVar64[5] & auVar149[5];
        auVar65[6] = auVar64[6] & auVar149[6];
        auVar65[7] = auVar64[7] & auVar149[7];
        auVar65[8] = auVar64[8] & auVar149[8];
        auVar65[9] = auVar64[9] & auVar149[9];
        auVar65[10] = auVar64[10] & auVar149[10];
        auVar65[11] = auVar64[11] & auVar149[11];
        auVar65[12] = auVar64[12] & auVar149[12];
        auVar65[13] = auVar64[13] & auVar149[13];
        auVar65[14] = auVar64[14] & auVar149[14];
        auVar65[15] = auVar64[15] & auVar149[15];
        auVar64 = NEON_ext(auVar65,auVar65,8,1);
        if (CONCAT13(auVar64[3] | auVar65[3] | auVar64[7] | auVar65[7],
                     CONCAT12(auVar64[2] | auVar65[2] | auVar64[6] | auVar65[6],
                              CONCAT11(auVar64[1] | auVar65[1] | auVar64[5] | auVar65[5],
                                       auVar64[0] | auVar65[0] | auVar64[4] | auVar65[4]))) != 0xf)
        {
          auVar64 = NEON_smin(auVar143,auVar199,4);
          auVar89 = NEON_smin(auVar234,auVar199,4);
          auVar43[9] = (char)((ulong)uVar184 >> 8);
          auVar43._0_9_ = *(unkbyte9 *)param_10;
          auVar43[10] = (char)((ulong)uVar184 >> 0x10);
          auVar43[11] = (char)((ulong)uVar184 >> 0x18);
          auVar43[12] = (char)((ulong)uVar184 >> 0x20);
          auVar43[13] = (char)((ulong)uVar184 >> 0x28);
          auVar43[14] = (char)((ulong)uVar184 >> 0x30);
          auVar43[15] = (char)((ulong)uVar184 >> 0x38);
          auVar113 = NEON_fmin(auVar127,auVar43,4);
          auVar64 = NEON_smax(auVar64,ZEXT216(0),4);
          auVar106 = NEON_smax(auVar89,ZEXT216(0),4);
          auVar89 = NEON_fcmge(auVar113,auVar66,4);
          auVar66 = NEON_sshl(auVar203,auVar64,4);
          auVar64 = NEON_sshl(auVar203,auVar106,4);
          auVar67[0] = auVar66[0] & ~auVar64[0];
          auVar67[1] = auVar66[1] & ~auVar64[1];
          auVar67[2] = auVar66[2] & ~auVar64[2];
          auVar67[3] = auVar66[3] & ~auVar64[3];
          auVar67[4] = auVar66[4] & ~auVar64[4];
          auVar67[5] = auVar66[5] & ~auVar64[5];
          auVar67[6] = auVar66[6] & ~auVar64[6];
          auVar67[7] = auVar66[7] & ~auVar64[7];
          auVar67[8] = auVar66[8] & ~auVar64[8];
          auVar67[9] = auVar66[9] & ~auVar64[9];
          auVar67[10] = auVar66[10] & ~auVar64[10];
          auVar67[11] = auVar66[11] & ~auVar64[11];
          auVar67[12] = auVar66[12] & ~auVar64[12];
          auVar67[13] = auVar66[13] & ~auVar64[13];
          auVar67[14] = auVar66[14] & ~auVar64[14];
          auVar67[15] = auVar66[15] & ~auVar64[15];
          auVar46._9_7_ = _UNK_004c5139;
          auVar46._0_9_ = _DAT_004c5130;
          auVar66 = a64_TBL(ZEXT816(0),auVar67,auVar46);
          auVar66 = NEON_cmeq(auVar66,0,2);
          if (CONCAT17(auVar89[15] & ~auVar66[15] | auVar89[7] & ~auVar66[7],
                       CONCAT16(auVar89[14] & ~auVar66[14] | auVar89[6] & ~auVar66[6],
                                CONCAT15(auVar89[13] & ~auVar66[13] | auVar89[5] & ~auVar66[5],
                                         CONCAT14(auVar89[12] & ~auVar66[12] |
                                                  auVar89[4] & ~auVar66[4],
                                                  CONCAT13(auVar89[11] & ~auVar66[11] |
                                                           auVar89[3] & ~auVar66[3],
                                                           CONCAT12(auVar89[10] & ~auVar66[10] |
                                                                    auVar89[2] & ~auVar66[2],
                                                                    CONCAT11(auVar89[9] &
                                                                             ~auVar66[9] |
                                                                             auVar89[1] &
                                                                             ~auVar66[1],
                                                                             auVar89[8] &
                                                                             ~auVar66[8] |
                                                                             auVar89[0] &
                                                                             ~auVar66[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (iVar141 + param_3 <= lVar48) break;
        auVar128._0_4_ = param_12 + auVar127._0_4_;
        auVar128._4_4_ = param_12 + auVar127._4_4_;
        auVar128._8_4_ = param_12 + auVar127._8_4_;
        auVar128._12_4_ = param_12 + auVar127._12_4_;
        auVar234 = NEON_uqsub(auVar234,auVar199,2);
        pauVar50 = pauVar50 + 3;
        auVar143 = NEON_uqsub(auVar143,auVar199,2);
        auVar127 = auVar128;
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar68._0_4_ = CONCAT13(uVar220,CONCAT12(uVar176,CONCAT11(uVar175,uVar174))) - iVar120;
      auVar68._4_4_ = CONCAT13(uVar224,CONCAT12(uVar223,CONCAT11(uVar222,uVar221))) - iVar120;
      auVar68._8_4_ = CONCAT13(uVar228,CONCAT12(uVar227,CONCAT11(uVar226,uVar225))) - iVar120;
      auVar68._12_4_ = CONCAT13(uVar232,CONCAT12(uVar231,CONCAT11(uVar230,uVar229))) - iVar120;
      auVar98._0_4_ = CONCAT13(uVar161,CONCAT12(uVar135,CONCAT11(uVar134,uVar133))) - iVar16;
      auVar98._4_4_ = CONCAT13(uVar165,CONCAT12(uVar164,CONCAT11(uVar163,uVar162))) - iVar16;
      auVar98._8_4_ = CONCAT13(uVar169,CONCAT12(uVar168,CONCAT11(uVar167,uVar166))) - iVar16;
      auVar98._12_4_ = CONCAT13(uVar173,CONCAT12(uVar172,CONCAT11(uVar171,uVar170))) - iVar16;
      auVar25[8] = 0xe1;
      auVar25._0_8_ = 0xffffffe1ffffffe1;
      auVar25[9] = 0xff;
      auVar25[10] = 0xff;
      auVar25[11] = 0xff;
      auVar25[12] = 0xe1;
      auVar25[13] = 0xff;
      auVar25[14] = 0xff;
      auVar25[15] = 0xff;
      auVar143 = NEON_sshl(auVar68,auVar25,4);
      auVar26[8] = 0xe1;
      auVar26._0_8_ = 0xffffffe1ffffffe1;
      auVar26[9] = 0xff;
      auVar26[10] = 0xff;
      auVar26[11] = 0xff;
      auVar26[12] = 0xe1;
      auVar26[13] = 0xff;
      auVar26[14] = 0xff;
      auVar26[15] = 0xff;
      auVar234 = NEON_sshl(auVar98,auVar26,4);
      iVar177 = CONCAT13(auVar143[3] & bVar77,
                         CONCAT12(auVar143[2] & bVar76,
                                  CONCAT11(auVar143[1] & bVar75,auVar143[0] & bVar74)));
      auVar104._0_8_ =
           CONCAT17(auVar143[7] & bVar77,
                    CONCAT16(auVar143[6] & bVar76,
                             CONCAT15(auVar143[5] & bVar75,CONCAT14(auVar143[4] & bVar74,iVar177))))
      ;
      auVar104[8] = auVar143[8] & bVar74;
      auVar104[9] = auVar143[9] & bVar75;
      auVar104[10] = auVar143[10] & bVar76;
      auVar104[11] = auVar143[11] & bVar77;
      auVar118[12] = auVar143[12] & bVar74;
      auVar118._0_12_ = auVar104;
      auVar118[13] = auVar143[13] & bVar75;
      auVar118[14] = auVar143[14] & bVar76;
      auVar118[15] = auVar143[15] & bVar77;
      iVar141 = CONCAT13(auVar234[3] & bVar82,
                         CONCAT12(auVar234[2] & bVar81,
                                  CONCAT11(auVar234[1] & bVar80,auVar234[0] & bVar78)));
      auVar142._0_8_ =
           CONCAT17(auVar234[7] & bVar82,
                    CONCAT16(auVar234[6] & bVar81,
                             CONCAT15(auVar234[5] & bVar80,CONCAT14(auVar234[4] & bVar78,iVar141))))
      ;
      auVar142[8] = auVar234[8] & bVar78;
      auVar142[9] = auVar234[9] & bVar80;
      auVar142[10] = auVar234[10] & bVar81;
      auVar142[11] = auVar234[11] & bVar82;
      auVar147[12] = auVar234[12] & bVar78;
      auVar147._0_12_ = auVar142;
      auVar147[13] = auVar234[13] & bVar80;
      auVar147[14] = auVar234[14] & bVar81;
      auVar147[15] = auVar234[15] & bVar82;
      iVar84 = CONCAT13(auVar143[3] & bVar73,
                        CONCAT12(auVar143[2] & bVar72,
                                 CONCAT11(auVar143[1] & bVar71,auVar143[0] & bVar69))) +
               auVar68._0_4_;
      uVar174 = (undefined)iVar84;
      uVar175 = (undefined)((uint)iVar84 >> 8);
      uVar176 = (undefined)((uint)iVar84 >> 0x10);
      uVar220 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(auVar143[7] & bVar73,
                        CONCAT12(auVar143[6] & bVar72,
                                 CONCAT11(auVar143[5] & bVar71,auVar143[4] & bVar69))) +
               auVar68._4_4_;
      uVar221 = (undefined)iVar84;
      uVar222 = (undefined)((uint)iVar84 >> 8);
      uVar223 = (undefined)((uint)iVar84 >> 0x10);
      uVar224 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(auVar143[11] & bVar73,
                        CONCAT12(auVar143[10] & bVar72,
                                 CONCAT11(auVar143[9] & bVar71,auVar143[8] & bVar69))) +
               auVar68._8_4_;
      uVar225 = (undefined)iVar84;
      uVar226 = (undefined)((uint)iVar84 >> 8);
      uVar227 = (undefined)((uint)iVar84 >> 0x10);
      uVar228 = (undefined)((uint)iVar84 >> 0x18);
      iVar84 = CONCAT13(auVar143[15] & bVar73,
                        CONCAT12(auVar143[14] & bVar72,
                                 CONCAT11(auVar143[13] & bVar71,auVar143[12] & bVar69))) +
               auVar68._12_4_;
      uVar229 = (undefined)iVar84;
      uVar230 = (undefined)((uint)iVar84 >> 8);
      uVar231 = (undefined)((uint)iVar84 >> 0x10);
      uVar232 = (undefined)((uint)iVar84 >> 0x18);
      iVar141 = iVar141 + auVar98._0_4_;
      uVar133 = (undefined)iVar141;
      uVar134 = (undefined)((uint)iVar141 >> 8);
      uVar135 = (undefined)((uint)iVar141 >> 0x10);
      uVar161 = (undefined)((uint)iVar141 >> 0x18);
      iVar141 = (int)((ulong)auVar142._0_8_ >> 0x20) + auVar98._4_4_;
      uVar162 = (undefined)iVar141;
      uVar163 = (undefined)((uint)iVar141 >> 8);
      uVar164 = (undefined)((uint)iVar141 >> 0x10);
      uVar165 = (undefined)((uint)iVar141 >> 0x18);
      iVar141 = auVar142._8_4_ + auVar98._8_4_;
      uVar166 = (undefined)iVar141;
      uVar167 = (undefined)((uint)iVar141 >> 8);
      uVar168 = (undefined)((uint)iVar141 >> 0x10);
      uVar169 = (undefined)((uint)iVar141 >> 0x18);
      iVar141 = auVar147._12_4_ + auVar98._12_4_;
      uVar170 = (undefined)iVar141;
      uVar171 = (undefined)((uint)iVar141 >> 8);
      uVar172 = (undefined)((uint)iVar141 >> 0x10);
      uVar173 = (undefined)((uint)iVar141 >> 0x18);
      auVar157._0_4_ = iVar177 + iVar119 + auVar156._0_4_;
      auVar157._4_4_ = (int)((ulong)auVar104._0_8_ >> 0x20) + iVar153 + auVar156._4_4_;
      auVar157._8_4_ = auVar104._8_4_ + iVar119 + auVar156._8_4_;
      auVar157._12_4_ = auVar118._12_4_ + iVar158 + auVar156._12_4_;
      auVar181._0_4_ =
           CONCAT13(auVar234[3] & bVar125,
                    CONCAT12(auVar234[2] & bVar124,
                             CONCAT11(auVar234[1] & bVar123,auVar234[0] & bVar122))) + iVar102 +
           auVar180._0_4_;
      auVar181._4_4_ =
           CONCAT13(auVar234[7] & bVar125,
                    CONCAT12(auVar234[6] & bVar124,
                             CONCAT11(auVar234[5] & bVar123,auVar234[4] & bVar122))) + iVar102 +
           auVar180._4_4_;
      auVar181._8_4_ =
           CONCAT13(auVar234[11] & bVar125,
                    CONCAT12(auVar234[10] & bVar124,
                             CONCAT11(auVar234[9] & bVar123,auVar234[8] & bVar122))) + iVar102 +
           auVar180._8_4_;
      auVar181._12_4_ =
           CONCAT13(auVar234[15] & bVar125,
                    CONCAT12(auVar234[14] & bVar124,
                             CONCAT11(auVar234[13] & bVar123,auVar234[12] & bVar122))) + iVar102 +
           auVar180._12_4_;
      auVar156 = auVar157;
      auVar180 = auVar181;
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


