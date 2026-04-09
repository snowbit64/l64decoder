// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangle<1,0,1>
// Entry Point: 00da6e44
// Size: 1872 bytes
// Signature: int __thiscall RasterizeTriangle<1,0,1>(MaskedOcclusionCullingPrivate * this, uint param_1, int param_2, int param_3, int param_4, int param_5, __Int32x4_t * param_6, __Float32x4_t * param_7, __Int32x4_t * param_8, __Float32x4_t * param_9, __Float32x4_t * param_10, __Float32x4_t * param_11, float param_12, float param_13, __Int32x4_t * param_14, __Int32x4_t * param_15, __Int32x4_t * param_16, __Int32x4_t * param_17, __Int32x4_t * param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1, 0,
   1>(unsigned int, int, int, int, int, __Int32x4_t const*, __Float32x4_t const*, __Int32x4_t
   const*, __Float32x4_t const&, __Float32x4_t const&, __Float32x4_t&, float, float, __Int32x4_t
   const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*, __Int32x4_t const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangle<1,0,1>
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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
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
  float fVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  unkbyte9 Var42;
  long lVar43;
  undefined (*pauVar44) [16];
  byte bVar45;
  undefined auVar48 [16];
  int iVar46;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  byte bVar61;
  byte bVar63;
  byte bVar64;
  float fVar62;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  float fVar74;
  int iVar75;
  int iVar76;
  undefined auVar77 [12];
  int iVar91;
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar78 [12];
  int iVar92;
  undefined auVar79 [12];
  undefined auVar81 [12];
  int iVar93;
  undefined auVar90 [16];
  int iVar94;
  undefined auVar95 [12];
  undefined auVar96 [12];
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined auVar119 [16];
  undefined auVar120 [16];
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  undefined uVar125;
  undefined uVar126;
  undefined uVar127;
  undefined uVar128;
  undefined uVar129;
  undefined uVar130;
  undefined uVar131;
  undefined uVar132;
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
  undefined auVar144 [12];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  int iVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  int iVar153;
  float fVar154;
  undefined auVar155 [12];
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
  int iVar177;
  int iVar178;
  undefined auVar175 [16];
  int iVar179;
  undefined auVar176 [16];
  undefined8 uVar180;
  undefined8 uVar181;
  undefined auVar182 [12];
  undefined auVar183 [16];
  undefined auVar184 [16];
  undefined auVar185 [16];
  undefined auVar187 [16];
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  undefined auVar196 [12];
  byte bVar210;
  byte bVar211;
  byte bVar212;
  byte bVar213;
  undefined auVar198 [16];
  float fVar214;
  undefined auVar215 [12];
  undefined auVar216 [12];
  undefined auVar217 [16];
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
  undefined auVar235 [12];
  undefined auVar236 [16];
  undefined auVar237 [16];
  undefined auVar239 [16];
  undefined auVar240 [16];
  undefined8 uStack_48;
  undefined auVar53 [16];
  undefined auVar47 [12];
  undefined auVar49 [16];
  undefined auVar80 [12];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar102 [16];
  undefined auVar108 [16];
  undefined auVar148 [16];
  undefined auVar156 [16];
  undefined auVar186 [16];
  undefined auVar197 [16];
  undefined auVar218 [16];
  undefined auVar238 [16];
  
  Var42 = _DAT_004c5130;
  lVar43 = (ulong)param_1 * 4;
  pfVar1 = (float *)(param_7 + lVar43);
  auVar84._8_4_ = 0xffffffe1;
  auVar84._0_8_ = 0xffffffe1ffffffe1;
  auVar84._12_4_ = 0xffffffe1;
  fVar62 = pfVar1[4];
  piVar2 = (int *)(param_15 + lVar43);
  piVar3 = (int *)(param_17 + lVar43);
  piVar4 = (int *)(param_14 + lVar43);
  puVar5 = (undefined4 *)(param_16 + lVar43);
  fVar74 = pfVar1[8];
  iVar9 = piVar2[4];
  iVar149 = piVar3[4];
  iVar10 = piVar4[4];
  piVar6 = (int *)(param_8 + lVar43);
  piVar7 = (int *)(param_18 + lVar43);
  iVar11 = piVar2[8];
  iVar94 = MP_INT_ABS((int)(fVar62 * 128.0));
  iVar109 = MP_INT_ABS((int)(fVar62 * 384.0));
  iVar111 = MP_INT_ABS((int)(fVar62 * 640.0));
  iVar113 = MP_INT_ABS((int)(fVar62 * 896.0));
  iVar121 = SUB164(_DAT_004c4990,0);
  iVar122 = SUB164(_DAT_004c4990,4);
  iVar123 = SUB164(_DAT_004c4990,8);
  iVar124 = SUB164(_DAT_004c4990,0xc);
  iVar153 = piVar3[8];
  uVar12 = puVar5[4];
  piVar8 = (int *)(param_6 + lVar43);
  auVar97._0_4_ = iVar149 + iVar9 * iVar121 + iVar94 * iVar10;
  auVar97._4_4_ = iVar149 + iVar9 * iVar122 + iVar109 * iVar10;
  auVar97._8_4_ = iVar149 + iVar9 * iVar123 + iVar111 * iVar10;
  auVar97._12_4_ = iVar149 + iVar9 * iVar124 + iVar113 * iVar10;
  iVar9 = piVar6[4];
  iVar149 = piVar4[8];
  iVar113 = MP_INT_ABS((int)(fVar74 * 128.0));
  iVar110 = MP_INT_ABS((int)(fVar74 * 384.0));
  iVar112 = MP_INT_ABS((int)(fVar74 * 640.0));
  iVar114 = MP_INT_ABS((int)(fVar74 * 896.0));
  iVar94 = piVar7[4];
  uVar126 = (undefined)((uint)iVar94 >> 8);
  uVar128 = (undefined)((uint)iVar94 >> 0x10);
  uVar130 = (undefined)((uint)iVar94 >> 0x18);
  iVar109 = piVar8[4];
  auVar82 = NEON_sshl(auVar97,auVar84,4);
  iVar111 = piVar8[8];
  iVar113 = iVar153 + iVar11 * iVar121 + iVar113 * iVar149;
  iVar110 = iVar153 + iVar11 * iVar122 + iVar110 * iVar149;
  iVar112 = iVar153 + iVar11 * iVar123 + iVar112 * iVar149;
  iVar153 = iVar153 + iVar11 * iVar124 + iVar114 * iVar149;
  uVar13 = puVar5[8];
  bVar61 = (byte)iVar10;
  bVar63 = (byte)((uint)iVar10 >> 8);
  bVar64 = (byte)((uint)iVar10 >> 0x10);
  bVar65 = (byte)((uint)iVar10 >> 0x18);
  bVar66 = (byte)uVar12;
  bVar67 = (byte)((uint)uVar12 >> 8);
  bVar68 = (byte)((uint)uVar12 >> 0x10);
  bVar69 = (byte)((uint)uVar12 >> 0x18);
  iVar114 = CONCAT13(auVar82[3] & bVar69,
                     CONCAT12(auVar82[2] & bVar68,CONCAT11(auVar82[1] & bVar67,auVar82[0] & bVar66))
                    );
  auVar77._0_8_ =
       CONCAT17(auVar82[7] & bVar69,
                CONCAT16(auVar82[6] & bVar68,
                         CONCAT15(auVar82[5] & bVar67,CONCAT14(auVar82[4] & bVar66,iVar114))));
  auVar77[8] = auVar82[8] & bVar66;
  auVar77[9] = auVar82[9] & bVar67;
  auVar77[10] = auVar82[10] & bVar68;
  auVar77[11] = auVar82[11] & bVar69;
  auVar83[12] = auVar82[12] & bVar66;
  auVar83._0_12_ = auVar77;
  auVar83[13] = auVar82[13] & bVar67;
  auVar83[14] = auVar82[14] & bVar68;
  auVar83[15] = auVar82[15] & bVar69;
  iVar10 = piVar6[8];
  auVar175._4_4_ = iVar110;
  auVar175._0_4_ = iVar113;
  auVar175._8_4_ = iVar112;
  auVar175._12_4_ = iVar153;
  auVar175 = NEON_sshl(auVar175,auVar84,4);
  iVar11 = piVar7[8];
  auVar58._0_4_ = iVar109 + (int)(fVar62 * 128.0) + iVar114;
  auVar58._4_4_ = iVar109 + (int)(fVar62 * 384.0) + (int)((ulong)auVar77._0_8_ >> 0x20);
  auVar58._8_4_ = iVar109 + (int)(fVar62 * 640.0) + auVar77._8_4_;
  auVar58._12_4_ = iVar109 + (int)(fVar62 * 896.0) + auVar83._12_4_;
  bVar70 = (byte)iVar149;
  bVar71 = (byte)((uint)iVar149 >> 8);
  bVar72 = (byte)((uint)iVar149 >> 0x10);
  bVar73 = (byte)((uint)iVar149 >> 0x18);
  bVar115 = (byte)uVar13;
  bVar116 = (byte)((uint)uVar13 >> 8);
  bVar117 = (byte)((uint)uVar13 >> 0x10);
  bVar118 = (byte)((uint)uVar13 >> 0x18);
  iVar149 = CONCAT13(auVar175[3] & bVar118,
                     CONCAT12(auVar175[2] & bVar117,
                              CONCAT11(auVar175[1] & bVar116,auVar175[0] & bVar115)));
  auVar215._0_8_ =
       CONCAT17(auVar175[7] & bVar118,
                CONCAT16(auVar175[6] & bVar117,
                         CONCAT15(auVar175[5] & bVar116,CONCAT14(auVar175[4] & bVar115,iVar149))));
  auVar215[8] = auVar175[8] & bVar115;
  auVar215[9] = auVar175[9] & bVar116;
  auVar215[10] = auVar175[10] & bVar117;
  auVar215[11] = auVar175[11] & bVar118;
  auVar99[12] = auVar175[12] & bVar115;
  auVar99._0_12_ = auVar215;
  auVar99[13] = auVar175[13] & bVar116;
  auVar99[14] = auVar175[14] & bVar117;
  auVar99[15] = auVar175[15] & bVar118;
  iVar114 = auVar97._0_4_ +
            CONCAT13(auVar82[3] & bVar65,
                     CONCAT12(auVar82[2] & bVar64,CONCAT11(auVar82[1] & bVar63,auVar82[0] & bVar61))
                    );
  iVar177 = auVar97._4_4_ +
            CONCAT13(auVar82[7] & bVar65,
                     CONCAT12(auVar82[6] & bVar64,CONCAT11(auVar82[5] & bVar63,auVar82[4] & bVar61))
                    );
  iVar178 = auVar97._8_4_ +
            CONCAT13(auVar82[11] & bVar65,
                     CONCAT12(auVar82[10] & bVar64,CONCAT11(auVar82[9] & bVar63,auVar82[8] & bVar61)
                             ));
  iVar179 = auVar97._12_4_ +
            CONCAT13(auVar82[15] & bVar65,
                     CONCAT12(auVar82[14] & bVar64,
                              CONCAT11(auVar82[13] & bVar63,auVar82[12] & bVar61)));
  iVar113 = iVar113 + CONCAT13(auVar175[3] & bVar73,
                               CONCAT12(auVar175[2] & bVar72,
                                        CONCAT11(auVar175[1] & bVar71,auVar175[0] & bVar70)));
  uVar159 = (undefined)iVar113;
  uVar160 = (undefined)((uint)iVar113 >> 8);
  uVar161 = (undefined)((uint)iVar113 >> 0x10);
  uVar162 = (undefined)((uint)iVar113 >> 0x18);
  iVar110 = iVar110 + CONCAT13(auVar175[7] & bVar73,
                               CONCAT12(auVar175[6] & bVar72,
                                        CONCAT11(auVar175[5] & bVar71,auVar175[4] & bVar70)));
  uVar163 = (undefined)iVar110;
  uVar164 = (undefined)((uint)iVar110 >> 8);
  uVar165 = (undefined)((uint)iVar110 >> 0x10);
  uVar166 = (undefined)((uint)iVar110 >> 0x18);
  iVar112 = iVar112 + CONCAT13(auVar175[11] & bVar73,
                               CONCAT12(auVar175[10] & bVar72,
                                        CONCAT11(auVar175[9] & bVar71,auVar175[8] & bVar70)));
  uVar167 = (undefined)iVar112;
  uVar168 = (undefined)((uint)iVar112 >> 8);
  uVar169 = (undefined)((uint)iVar112 >> 0x10);
  uVar170 = (undefined)((uint)iVar112 >> 0x18);
  iVar153 = iVar153 + CONCAT13(auVar175[15] & bVar73,
                               CONCAT12(auVar175[14] & bVar72,
                                        CONCAT11(auVar175[13] & bVar71,auVar175[12] & bVar70)));
  uVar171 = (undefined)iVar153;
  uVar172 = (undefined)((uint)iVar153 >> 8);
  uVar173 = (undefined)((uint)iVar153 >> 0x10);
  uVar174 = (undefined)((uint)iVar153 >> 0x18);
  iVar149 = iVar111 + (int)(fVar74 * 128.0) + iVar149;
  iVar153 = iVar111 + (int)(fVar74 * 384.0) + (int)((ulong)auVar215._0_8_ >> 0x20);
  iVar109 = iVar111 + (int)(fVar74 * 640.0) + auVar215._8_4_;
  iVar111 = iVar111 + (int)(fVar74 * 896.0) + auVar99._12_4_;
  bVar45 = SUB161(_DAT_004c4480,0);
  bVar199 = SUB161(_DAT_004c4480,1);
  bVar200 = SUB161(_DAT_004c4480,2);
  bVar201 = SUB161(_DAT_004c4480,3);
  bVar202 = SUB161(_DAT_004c4480,4);
  bVar203 = SUB161(_DAT_004c4480,5);
  bVar204 = SUB161(_DAT_004c4480,6);
  bVar205 = SUB161(_DAT_004c4480,7);
  bVar206 = SUB161(_DAT_004c4480,8);
  bVar207 = SUB161(_DAT_004c4480,9);
  bVar208 = SUB161(_DAT_004c4480,10);
  bVar209 = SUB161(_DAT_004c4480,0xb);
  bVar210 = SUB161(_DAT_004c4480,0xc);
  bVar211 = SUB161(_DAT_004c4480,0xd);
  bVar212 = SUB161(_DAT_004c4480,0xe);
  bVar213 = SUB161(_DAT_004c4480,0xf);
  if (param_4 < param_3) {
    if (param_5 <= param_3) {
      _UNK_004c5139 = 0xf0b07030e0a06;
      return 1;
    }
    auVar82._8_4_ = 0xfffffff8;
    auVar82._0_8_ = 0xfffffff8fffffff8;
    auVar82._12_4_ = 0xfffffff8;
    uVar181 = *(undefined8 *)(param_11 + 8);
    uVar180 = *(undefined8 *)param_11;
    fVar62 = param_12 * 0.0;
    auVar147._8_4_ = 0xffffffe1;
    auVar147._0_8_ = 0xffffffe1ffffffe1;
    auVar147._12_4_ = 0xffffffe1;
    auVar106._8_8_ = 0xffffffffffffffff;
    auVar106._0_8_ = 0xffffffffffffffff;
    while( true ) {
      auVar83 = NEON_sshl(auVar58,auVar82,4);
      auVar145._4_4_ = iVar153;
      auVar145._0_4_ = iVar149;
      auVar145._8_4_ = iVar109;
      auVar145._12_4_ = iVar111;
      auVar97 = NEON_sshl(auVar145,auVar82,4);
      auVar236._0_4_ = fVar62 + (float)uVar180;
      fVar74 = (float)((ulong)uVar180 >> 0x20);
      auVar236._4_4_ = fVar62 + fVar74;
      auVar236._8_4_ = fVar62 + (float)uVar181;
      fVar214 = (float)((ulong)uVar181 >> 0x20);
      auVar236._12_4_ = fVar62 + fVar214;
      lVar43 = (long)param_3;
      pauVar44 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      auVar175 = *(undefined (*) [16])param_10;
      auVar83 = NEON_smax(auVar83,ZEXT216(0),4);
      auVar97 = NEON_smax(auVar97,ZEXT216(0),4);
      while( true ) {
        lVar43 = lVar43 + 1;
        auVar84 = *pauVar44;
        auVar98._0_4_ = auVar175._0_4_ - auVar84._0_4_;
        auVar98._4_4_ = auVar175._4_4_ - auVar84._4_4_;
        auVar98._8_4_ = auVar175._8_4_ - auVar84._8_4_;
        auVar98._12_4_ = auVar175._12_4_ - auVar84._12_4_;
        auVar99 = NEON_cmlt(auVar98,0,4);
        auVar100[0] = auVar99[0] & bVar45;
        auVar100[1] = auVar99[1] & bVar199;
        auVar100[2] = auVar99[2] & bVar200;
        auVar100[3] = auVar99[3] & bVar201;
        auVar100[4] = auVar99[4] & bVar202;
        auVar100[5] = auVar99[5] & bVar203;
        auVar100[6] = auVar99[6] & bVar204;
        auVar100[7] = auVar99[7] & bVar205;
        auVar100[8] = auVar99[8] & bVar206;
        auVar100[9] = auVar99[9] & bVar207;
        auVar100[10] = auVar99[10] & bVar208;
        auVar100[11] = auVar99[11] & bVar209;
        auVar100[12] = auVar99[12] & bVar210;
        auVar100[13] = auVar99[13] & bVar211;
        auVar100[14] = auVar99[14] & bVar212;
        auVar100[15] = auVar99[15] & bVar213;
        auVar99 = NEON_ext(auVar100,auVar100,8,1);
        if (CONCAT13(auVar99[3] | auVar100[3] | auVar99[7] | auVar100[7],
                     CONCAT12(auVar99[2] | auVar100[2] | auVar99[6] | auVar100[6],
                              CONCAT11(auVar99[1] | auVar100[1] | auVar99[5] | auVar100[5],
                                       auVar99[0] | auVar100[0] | auVar99[4] | auVar100[4]))) != 0xf
           ) {
          auVar21[8] = 0x20;
          auVar21._0_8_ = 0x2000000020;
          auVar21._9_3_ = 0;
          auVar21[12] = 0x20;
          auVar21._13_3_ = 0;
          auVar99 = NEON_smin(auVar97,auVar21,4);
          auVar22[8] = 0x20;
          auVar22._0_8_ = 0x2000000020;
          auVar22._9_3_ = 0;
          auVar22[12] = 0x20;
          auVar22._13_3_ = 0;
          auVar145 = NEON_smin(auVar83,auVar22,4);
          auVar99 = NEON_smax(auVar99,ZEXT216(0),4);
          auVar145 = NEON_smax(auVar145,ZEXT216(0),4);
          auVar99 = NEON_sshl(auVar106,auVar99,4);
          auVar145 = NEON_sshl(auVar106,auVar145,4);
          auVar101[0] = auVar99[0] & ~auVar145[0];
          auVar101[1] = auVar99[1] & ~auVar145[1];
          auVar101[2] = auVar99[2] & ~auVar145[2];
          auVar101[3] = auVar99[3] & ~auVar145[3];
          auVar101[4] = auVar99[4] & ~auVar145[4];
          auVar101[5] = auVar99[5] & ~auVar145[5];
          auVar101[6] = auVar99[6] & ~auVar145[6];
          auVar101[7] = auVar99[7] & ~auVar145[7];
          auVar101[8] = auVar99[8] & ~auVar145[8];
          auVar101[9] = auVar99[9] & ~auVar145[9];
          auVar101[10] = auVar99[10] & ~auVar145[10];
          auVar101[11] = auVar99[11] & ~auVar145[11];
          auVar101[12] = auVar99[12] & ~auVar145[12];
          auVar101[13] = auVar99[13] & ~auVar145[13];
          auVar101[14] = auVar99[14] & ~auVar145[14];
          auVar101[15] = auVar99[15] & ~auVar145[15];
          auVar145 = NEON_fmin(auVar236,auVar175,4);
          auVar30[9] = 6;
          auVar30._0_9_ = Var42;
          auVar30[10] = 10;
          auVar30[11] = 0xe;
          auVar30[12] = 3;
          auVar30[13] = 7;
          auVar30[14] = 0xb;
          auVar30[15] = 0xf;
          auVar99 = a64_TBL(ZEXT816(0),auVar101,auVar30);
          auVar84 = NEON_fcmge(auVar145,auVar84,4);
          auVar99 = NEON_cmeq(auVar99,0,2);
          if (CONCAT17(auVar84[15] & ~auVar99[15] | auVar84[7] & ~auVar99[7],
                       CONCAT16(auVar84[14] & ~auVar99[14] | auVar84[6] & ~auVar99[6],
                                CONCAT15(auVar84[13] & ~auVar99[13] | auVar84[5] & ~auVar99[5],
                                         CONCAT14(auVar84[12] & ~auVar99[12] |
                                                  auVar84[4] & ~auVar99[4],
                                                  CONCAT13(auVar84[11] & ~auVar99[11] |
                                                           auVar84[3] & ~auVar99[3],
                                                           CONCAT12(auVar84[10] & ~auVar99[10] |
                                                                    auVar84[2] & ~auVar99[2],
                                                                    CONCAT11(auVar84[9] &
                                                                             ~auVar99[9] |
                                                                             auVar84[1] &
                                                                             ~auVar99[1],
                                                                             auVar84[8] &
                                                                             ~auVar99[8] |
                                                                             auVar84[0] &
                                                                             ~auVar99[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar43) break;
        auVar237._0_4_ = param_12 + auVar236._0_4_;
        auVar237._4_4_ = param_12 + auVar236._4_4_;
        auVar237._8_4_ = param_12 + auVar236._8_4_;
        auVar237._12_4_ = param_12 + auVar236._12_4_;
        auVar23[8] = 0x20;
        auVar23._0_8_ = 0x2000000020;
        auVar23._9_3_ = 0;
        auVar23[12] = 0x20;
        auVar23._13_3_ = 0;
        auVar83 = NEON_uqsub(auVar83,auVar23,2);
        pauVar44 = pauVar44 + 3;
        auVar24[8] = 0x20;
        auVar24._0_8_ = 0x2000000020;
        auVar24._9_3_ = 0;
        auVar24[12] = 0x20;
        auVar24._13_3_ = 0;
        auVar97 = NEON_uqsub(auVar97,auVar24,2);
        auVar236 = auVar237;
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar85._0_4_ = iVar114 - iVar94;
      auVar85._4_4_ = iVar177 - iVar94;
      auVar85._8_4_ = iVar178 - iVar94;
      auVar85._12_4_ = iVar179 - iVar94;
      auVar146._0_4_ = CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) - iVar11;
      auVar146._4_4_ = CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) - iVar11;
      auVar146._8_4_ = CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) - iVar11;
      auVar146._12_4_ = CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) - iVar11;
      iVar112 = auVar58._4_4_;
      iVar121 = auVar58._8_4_;
      iVar122 = auVar58._12_4_;
      auVar175 = NEON_sshl(auVar85,auVar147,4);
      auVar83 = NEON_sshl(auVar146,auVar147,4);
      uVar180 = CONCAT44(param_13 + fVar74,param_13 + (float)uVar180);
      uVar181 = CONCAT44(param_13 + fVar214,param_13 + (float)uVar181);
      iVar110 = CONCAT13(bVar69 & auVar175[3],
                         CONCAT12(bVar68 & auVar175[2],
                                  CONCAT11(bVar67 & auVar175[1],bVar66 & auVar175[0])));
      auVar95._0_8_ =
           CONCAT17(bVar69 & auVar175[7],
                    CONCAT16(bVar68 & auVar175[6],
                             CONCAT15(bVar67 & auVar175[5],CONCAT14(bVar66 & auVar175[4],iVar110))))
      ;
      auVar95[8] = bVar66 & auVar175[8];
      auVar95[9] = bVar67 & auVar175[9];
      auVar95[10] = bVar68 & auVar175[10];
      auVar95[11] = bVar69 & auVar175[11];
      auVar102[12] = bVar66 & auVar175[12];
      auVar102._0_12_ = auVar95;
      auVar102[13] = bVar67 & auVar175[13];
      auVar102[14] = bVar68 & auVar175[14];
      auVar102[15] = bVar69 & auVar175[15];
      *(undefined8 *)(param_11 + 8) = uVar181;
      *(undefined8 *)param_11 = uVar180;
      iVar114 = CONCAT13(bVar65 & auVar175[3],
                         CONCAT12(bVar64 & auVar175[2],
                                  CONCAT11(bVar63 & auVar175[1],bVar61 & auVar175[0]))) +
                auVar85._0_4_;
      iVar177 = CONCAT13(bVar65 & auVar175[7],
                         CONCAT12(bVar64 & auVar175[6],
                                  CONCAT11(bVar63 & auVar175[5],bVar61 & auVar175[4]))) +
                auVar85._4_4_;
      iVar178 = CONCAT13(bVar65 & auVar175[11],
                         CONCAT12(bVar64 & auVar175[10],
                                  CONCAT11(bVar63 & auVar175[9],bVar61 & auVar175[8]))) +
                auVar85._8_4_;
      iVar179 = CONCAT13(bVar65 & auVar175[15],
                         CONCAT12(bVar64 & auVar175[14],
                                  CONCAT11(bVar63 & auVar175[13],bVar61 & auVar175[12]))) +
                auVar85._12_4_;
      iVar113 = CONCAT13(bVar73 & auVar83[3],
                         CONCAT12(bVar72 & auVar83[2],
                                  CONCAT11(bVar71 & auVar83[1],bVar70 & auVar83[0])));
      auVar78._0_8_ =
           CONCAT17(bVar73 & auVar83[7],
                    CONCAT16(bVar72 & auVar83[6],
                             CONCAT15(bVar71 & auVar83[5],CONCAT14(bVar70 & auVar83[4],iVar113))));
      auVar78[8] = bVar70 & auVar83[8];
      auVar78[9] = bVar71 & auVar83[9];
      auVar78[10] = bVar72 & auVar83[10];
      auVar78[11] = bVar73 & auVar83[11];
      auVar86[12] = bVar70 & auVar83[12];
      auVar86._0_12_ = auVar78;
      auVar86[13] = bVar71 & auVar83[13];
      auVar86[14] = bVar72 & auVar83[14];
      auVar86[15] = bVar73 & auVar83[15];
      iVar123 = CONCAT13(bVar118 & auVar83[3],
                         CONCAT12(bVar117 & auVar83[2],
                                  CONCAT11(bVar116 & auVar83[1],bVar115 & auVar83[0])));
      auVar235._0_8_ =
           CONCAT17(bVar118 & auVar83[7],
                    CONCAT16(bVar117 & auVar83[6],
                             CONCAT15(bVar116 & auVar83[5],CONCAT14(bVar115 & auVar83[4],iVar123))))
      ;
      auVar235[8] = bVar115 & auVar83[8];
      auVar235[9] = bVar116 & auVar83[9];
      auVar235[10] = bVar117 & auVar83[10];
      auVar235[11] = bVar118 & auVar83[11];
      auVar238[12] = bVar115 & auVar83[12];
      auVar238._0_12_ = auVar235;
      auVar238[13] = bVar116 & auVar83[13];
      auVar238[14] = bVar117 & auVar83[14];
      auVar238[15] = bVar118 & auVar83[15];
      auVar58._0_4_ = iVar9 + auVar58._0_4_ + iVar110;
      auVar58._4_4_ = iVar9 + iVar112 + (int)((ulong)auVar95._0_8_ >> 0x20);
      auVar58._8_4_ = iVar9 + iVar121 + auVar95._8_4_;
      auVar58._12_4_ = iVar9 + iVar122 + auVar102._12_4_;
      iVar113 = iVar113 + auVar146._0_4_;
      uVar159 = (undefined)iVar113;
      uVar160 = (undefined)((uint)iVar113 >> 8);
      uVar161 = (undefined)((uint)iVar113 >> 0x10);
      uVar162 = (undefined)((uint)iVar113 >> 0x18);
      iVar113 = (int)((ulong)auVar78._0_8_ >> 0x20) + auVar146._4_4_;
      uVar163 = (undefined)iVar113;
      uVar164 = (undefined)((uint)iVar113 >> 8);
      uVar165 = (undefined)((uint)iVar113 >> 0x10);
      uVar166 = (undefined)((uint)iVar113 >> 0x18);
      iVar113 = auVar78._8_4_ + auVar146._8_4_;
      uVar167 = (undefined)iVar113;
      uVar168 = (undefined)((uint)iVar113 >> 8);
      uVar169 = (undefined)((uint)iVar113 >> 0x10);
      uVar170 = (undefined)((uint)iVar113 >> 0x18);
      iVar113 = auVar86._12_4_ + auVar146._12_4_;
      uVar171 = (undefined)iVar113;
      uVar172 = (undefined)((uint)iVar113 >> 8);
      uVar173 = (undefined)((uint)iVar113 >> 0x10);
      uVar174 = (undefined)((uint)iVar113 >> 0x18);
      iVar149 = iVar10 + iVar149 + iVar123;
      iVar153 = iVar10 + iVar153 + (int)((ulong)auVar235._0_8_ >> 0x20);
      iVar109 = iVar10 + iVar109 + auVar235._8_4_;
      iVar111 = iVar10 + iVar111 + auVar238._12_4_;
    }
    return 1;
  }
  fVar62 = *pfVar1;
  iVar110 = *piVar3;
  iVar112 = *piVar4;
  bVar188 = (byte)iVar112;
  bVar189 = (byte)((uint)iVar112 >> 8);
  bVar190 = (byte)((uint)iVar112 >> 0x10);
  bVar191 = (byte)((uint)iVar112 >> 0x18);
  iVar113 = param_5;
  if (param_4 <= param_5) {
    iVar113 = param_4;
  }
  iVar46 = *piVar2;
  uVar12 = *puVar5;
  bVar192 = (byte)uVar12;
  bVar193 = (byte)((uint)uVar12 >> 8);
  bVar194 = (byte)((uint)uVar12 >> 0x10);
  bVar195 = (byte)((uint)uVar12 >> 0x18);
  iVar76 = *piVar8;
  iVar75 = MP_INT_ABS((int)(fVar62 * 128.0));
  iVar91 = MP_INT_ABS((int)(fVar62 * 384.0));
  iVar92 = MP_INT_ABS((int)(fVar62 * 640.0));
  iVar93 = MP_INT_ABS((int)(fVar62 * 896.0));
  fVar214 = param_12 * 0.0;
  auVar119._0_4_ = iVar110 + iVar46 * iVar121 + iVar75 * iVar112;
  auVar119._4_4_ = iVar110 + iVar46 * iVar122 + iVar91 * iVar112;
  auVar119._8_4_ = iVar110 + iVar46 * iVar123 + iVar92 * iVar112;
  auVar119._12_4_ = iVar110 + iVar46 * iVar124 + iVar93 * iVar112;
  auVar175 = NEON_sshl(auVar119,auVar84,4);
  iVar110 = CONCAT13(auVar175[3] & bVar195,
                     CONCAT12(auVar175[2] & bVar194,
                              CONCAT11(auVar175[1] & bVar193,auVar175[0] & bVar192)));
  auVar196._0_8_ =
       CONCAT17(auVar175[7] & bVar195,
                CONCAT16(auVar175[6] & bVar194,
                         CONCAT15(auVar175[5] & bVar193,CONCAT14(auVar175[4] & bVar192,iVar110))));
  auVar196[8] = auVar175[8] & bVar192;
  auVar196[9] = auVar175[9] & bVar193;
  auVar196[10] = auVar175[10] & bVar194;
  auVar196[11] = auVar175[11] & bVar195;
  auVar197[12] = auVar175[12] & bVar192;
  auVar197._0_12_ = auVar196;
  auVar197[13] = auVar175[13] & bVar193;
  auVar197[14] = auVar175[14] & bVar194;
  auVar197[15] = auVar175[15] & bVar195;
  auVar183._0_4_ = iVar76 + (int)(fVar62 * 128.0) + iVar110;
  auVar183._4_4_ = iVar76 + (int)(fVar62 * 384.0) + (int)((ulong)auVar196._0_8_ >> 0x20);
  auVar183._8_4_ = iVar76 + (int)(fVar62 * 640.0) + auVar196._8_4_;
  auVar183._12_4_ = iVar76 + (int)(fVar62 * 896.0) + auVar197._12_4_;
  fVar62 = (float)uStack_48;
  fVar74 = (float)((ulong)uStack_48 >> 0x20);
  if (param_3 < iVar113) {
    iVar121 = CONCAT13(auVar175[3] & bVar191,
                       CONCAT12(auVar175[2] & bVar190,
                                CONCAT11(auVar175[1] & bVar189,auVar175[0] & bVar188)));
    auVar79._0_8_ =
         CONCAT17(auVar175[7] & bVar191,
                  CONCAT16(auVar175[6] & bVar190,
                           CONCAT15(auVar175[5] & bVar189,CONCAT14(auVar175[4] & bVar188,iVar121))))
    ;
    auVar79[8] = auVar175[8] & bVar188;
    auVar79[9] = auVar175[9] & bVar189;
    auVar79[10] = auVar175[10] & bVar190;
    auVar79[11] = auVar175[11] & bVar191;
    auVar87[12] = auVar175[12] & bVar188;
    auVar87._0_12_ = auVar79;
    auVar87[13] = auVar175[13] & bVar189;
    auVar87[14] = auVar175[14] & bVar190;
    auVar87[15] = auVar175[15] & bVar191;
    iVar110 = *piVar6;
    iVar112 = *piVar7;
    auVar217._8_4_ = 0xfffffff8;
    auVar217._0_8_ = 0xfffffff8fffffff8;
    auVar217._12_4_ = 0xfffffff8;
    uVar180 = *(undefined8 *)(param_11 + 8);
    uVar227 = (undefined)uVar180;
    uVar228 = (undefined)((ulong)uVar180 >> 8);
    uVar229 = (undefined)((ulong)uVar180 >> 0x10);
    uVar230 = (undefined)((ulong)uVar180 >> 0x18);
    uVar231 = (undefined)((ulong)uVar180 >> 0x20);
    uVar232 = (undefined)((ulong)uVar180 >> 0x28);
    uVar233 = (undefined)((ulong)uVar180 >> 0x30);
    uVar234 = (undefined)((ulong)uVar180 >> 0x38);
    uVar180 = *(undefined8 *)param_11;
    uVar219 = (undefined)uVar180;
    uVar220 = (undefined)((ulong)uVar180 >> 8);
    uVar221 = (undefined)((ulong)uVar180 >> 0x10);
    uVar222 = (undefined)((ulong)uVar180 >> 0x18);
    uVar223 = (undefined)((ulong)uVar180 >> 0x20);
    uVar224 = (undefined)((ulong)uVar180 >> 0x28);
    uVar225 = (undefined)((ulong)uVar180 >> 0x30);
    uVar226 = (undefined)((ulong)uVar180 >> 0x38);
    auVar239._8_4_ = 0x20;
    auVar239._0_8_ = 0x2000000020;
    auVar239._12_4_ = 0x20;
    iVar121 = auVar119._0_4_ + iVar121;
    iVar122 = auVar119._4_4_ + (int)((ulong)auVar79._0_8_ >> 0x20);
    iVar123 = auVar119._8_4_ + auVar79._8_4_;
    iVar124 = auVar119._12_4_ + auVar87._12_4_;
    auVar120._8_8_ = 0xffffffffffffffff;
    auVar120._0_8_ = 0xffffffffffffffff;
    do {
      auVar175 = NEON_sshl(auVar183,auVar217,4);
      auVar18._4_4_ = iVar153;
      auVar18._0_4_ = iVar149;
      auVar18._8_4_ = iVar109;
      auVar18._12_4_ = iVar111;
      auVar82 = NEON_sshl(auVar18,auVar217,4);
      lVar43 = (long)param_3;
      pauVar44 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      fVar150 = fVar214 + (float)CONCAT13(uVar222,CONCAT12(uVar221,CONCAT11(uVar220,uVar219)));
      uVar125 = SUB41(fVar150,0);
      uVar127 = (undefined)((uint)fVar150 >> 8);
      uVar129 = (undefined)((uint)fVar150 >> 0x10);
      uVar131 = (undefined)((uint)fVar150 >> 0x18);
      fVar150 = fVar214 + (float)CONCAT13(uVar226,CONCAT12(uVar225,CONCAT11(uVar224,uVar223)));
      uVar132 = SUB41(fVar150,0);
      uVar133 = (undefined)((uint)fVar150 >> 8);
      uVar134 = (undefined)((uint)fVar150 >> 0x10);
      uVar135 = (undefined)((uint)fVar150 >> 0x18);
      fVar150 = fVar62 + (float)CONCAT13(uVar230,CONCAT12(uVar229,CONCAT11(uVar228,uVar227)));
      uVar136 = SUB41(fVar150,0);
      uVar137 = (undefined)((uint)fVar150 >> 8);
      uVar138 = (undefined)((uint)fVar150 >> 0x10);
      uVar139 = (undefined)((uint)fVar150 >> 0x18);
      fVar150 = fVar74 + (float)CONCAT13(uVar234,CONCAT12(uVar233,CONCAT11(uVar232,uVar231)));
      uVar140 = SUB41(fVar150,0);
      uVar141 = (undefined)((uint)fVar150 >> 8);
      uVar142 = (undefined)((uint)fVar150 >> 0x10);
      uVar143 = (undefined)((uint)fVar150 >> 0x18);
      fVar150 = (float)((ulong)*(undefined8 *)(param_10 + 8) >> 0x20);
      auVar175 = NEON_smax(auVar175,ZEXT216(0),4);
      auVar82 = NEON_smax(auVar82,ZEXT216(0),4);
      while( true ) {
        lVar43 = lVar43 + 1;
        auVar83 = *pauVar44;
        auVar104._0_4_ = (float)*(undefined8 *)param_10 - auVar83._0_4_;
        auVar104._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar83._4_4_;
        auVar104._8_4_ = (float)*(undefined8 *)(param_10 + 8) - auVar83._8_4_;
        auVar104._12_4_ = fVar150 - auVar83._12_4_;
        auVar97 = NEON_cmlt(auVar104,0,4);
        auVar105[0] = auVar97[0] & bVar45;
        auVar105[1] = auVar97[1] & bVar199;
        auVar105[2] = auVar97[2] & bVar200;
        auVar105[3] = auVar97[3] & bVar201;
        auVar105[4] = auVar97[4] & bVar202;
        auVar105[5] = auVar97[5] & bVar203;
        auVar105[6] = auVar97[6] & bVar204;
        auVar105[7] = auVar97[7] & bVar205;
        auVar105[8] = auVar97[8] & bVar206;
        auVar105[9] = auVar97[9] & bVar207;
        auVar105[10] = auVar97[10] & bVar208;
        auVar105[11] = auVar97[11] & bVar209;
        auVar105[12] = auVar97[12] & bVar210;
        auVar105[13] = auVar97[13] & bVar211;
        auVar105[14] = auVar97[14] & bVar212;
        auVar105[15] = auVar97[15] & bVar213;
        auVar97 = NEON_ext(auVar105,auVar105,8,1);
        if (CONCAT13(auVar97[3] | auVar105[3] | auVar97[7] | auVar105[7],
                     CONCAT12(auVar97[2] | auVar105[2] | auVar97[6] | auVar105[6],
                              CONCAT11(auVar97[1] | auVar105[1] | auVar97[5] | auVar105[5],
                                       auVar97[0] | auVar105[0] | auVar97[4] | auVar105[4]))) != 0xf
           ) {
          auVar97 = NEON_smin(auVar82,auVar239,4);
          auVar84 = NEON_smin(auVar175,auVar239,4);
          auVar16[1] = uVar127;
          auVar16[0] = uVar125;
          auVar16[2] = uVar129;
          auVar16[3] = uVar131;
          auVar16[4] = uVar132;
          auVar16[5] = uVar133;
          auVar16[6] = uVar134;
          auVar16[7] = uVar135;
          auVar16[8] = uVar136;
          auVar16[9] = uVar137;
          auVar16[10] = uVar138;
          auVar16[11] = uVar139;
          auVar16[12] = uVar140;
          auVar16[13] = uVar141;
          auVar16[14] = uVar142;
          auVar16[15] = uVar143;
          auVar17._12_4_ = fVar150;
          auVar17._0_12_ = *(undefined (*) [12])param_10;
          auVar147 = NEON_fmin(auVar16,auVar17,4);
          auVar97 = NEON_smax(auVar97,ZEXT216(0),4);
          auVar99 = NEON_smax(auVar84,ZEXT216(0),4);
          auVar84 = NEON_fcmge(auVar147,auVar83,4);
          auVar83 = NEON_sshl(auVar120,auVar97,4);
          auVar97 = NEON_sshl(auVar120,auVar99,4);
          auVar50[0] = auVar83[0] & ~auVar97[0];
          auVar50[1] = auVar83[1] & ~auVar97[1];
          auVar50[2] = auVar83[2] & ~auVar97[2];
          auVar50[3] = auVar83[3] & ~auVar97[3];
          auVar50[4] = auVar83[4] & ~auVar97[4];
          auVar50[5] = auVar83[5] & ~auVar97[5];
          auVar50[6] = auVar83[6] & ~auVar97[6];
          auVar50[7] = auVar83[7] & ~auVar97[7];
          auVar50[8] = auVar83[8] & ~auVar97[8];
          auVar50[9] = auVar83[9] & ~auVar97[9];
          auVar50[10] = auVar83[10] & ~auVar97[10];
          auVar50[11] = auVar83[11] & ~auVar97[11];
          auVar50[12] = auVar83[12] & ~auVar97[12];
          auVar50[13] = auVar83[13] & ~auVar97[13];
          auVar50[14] = auVar83[14] & ~auVar97[14];
          auVar50[15] = auVar83[15] & ~auVar97[15];
          auVar39._9_7_ = _UNK_004c5139;
          auVar39._0_9_ = _DAT_004c5130;
          auVar83 = a64_TBL(ZEXT816(0),auVar50,auVar39);
          auVar83 = NEON_cmeq(auVar83,0,2);
          if (CONCAT17(auVar84[15] & ~auVar83[15] | auVar84[7] & ~auVar83[7],
                       CONCAT16(auVar84[14] & ~auVar83[14] | auVar84[6] & ~auVar83[6],
                                CONCAT15(auVar84[13] & ~auVar83[13] | auVar84[5] & ~auVar83[5],
                                         CONCAT14(auVar84[12] & ~auVar83[12] |
                                                  auVar84[4] & ~auVar83[4],
                                                  CONCAT13(auVar84[11] & ~auVar83[11] |
                                                           auVar84[3] & ~auVar83[3],
                                                           CONCAT12(auVar84[10] & ~auVar83[10] |
                                                                    auVar84[2] & ~auVar83[2],
                                                                    CONCAT11(auVar84[9] &
                                                                             ~auVar83[9] |
                                                                             auVar84[1] &
                                                                             ~auVar83[1],
                                                                             auVar84[8] &
                                                                             ~auVar83[8] |
                                                                             auVar84[0] &
                                                                             ~auVar83[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar43) break;
        fVar151 = param_12 + (float)CONCAT13(uVar131,CONCAT12(uVar129,CONCAT11(uVar127,uVar125)));
        uVar125 = SUB41(fVar151,0);
        uVar127 = (undefined)((uint)fVar151 >> 8);
        uVar129 = (undefined)((uint)fVar151 >> 0x10);
        uVar131 = (undefined)((uint)fVar151 >> 0x18);
        fVar151 = param_12 + (float)CONCAT13(uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)));
        uVar132 = SUB41(fVar151,0);
        uVar133 = (undefined)((uint)fVar151 >> 8);
        uVar134 = (undefined)((uint)fVar151 >> 0x10);
        uVar135 = (undefined)((uint)fVar151 >> 0x18);
        fVar151 = param_12 + (float)CONCAT13(uVar139,CONCAT12(uVar138,CONCAT11(uVar137,uVar136)));
        uVar136 = SUB41(fVar151,0);
        uVar137 = (undefined)((uint)fVar151 >> 8);
        uVar138 = (undefined)((uint)fVar151 >> 0x10);
        uVar139 = (undefined)((uint)fVar151 >> 0x18);
        fVar151 = param_12 + (float)CONCAT13(uVar143,CONCAT12(uVar142,CONCAT11(uVar141,uVar140)));
        uVar140 = SUB41(fVar151,0);
        uVar141 = (undefined)((uint)fVar151 >> 8);
        uVar142 = (undefined)((uint)fVar151 >> 0x10);
        uVar143 = (undefined)((uint)fVar151 >> 0x18);
        auVar175 = NEON_uqsub(auVar175,auVar239,2);
        pauVar44 = pauVar44 + 3;
        auVar82 = NEON_uqsub(auVar82,auVar239,2);
      }
      auVar48._0_4_ = iVar121 - iVar112;
      auVar48._4_4_ = iVar122 - iVar112;
      auVar48._8_4_ = iVar123 - iVar112;
      auVar48._12_4_ = iVar124 - iVar112;
      auVar103._0_4_ = CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) - iVar11;
      auVar103._4_4_ = CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) - iVar11;
      auVar103._8_4_ = CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) - iVar11;
      auVar103._12_4_ = CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) - iVar11;
      iVar75 = auVar183._4_4_;
      iVar91 = auVar183._8_4_;
      iVar92 = auVar183._12_4_;
      param_3 = *(int *)(this + 300) + param_3;
      auVar14._8_4_ = 0xffffffe1;
      auVar14._0_8_ = 0xffffffe1ffffffe1;
      auVar14._12_4_ = 0xffffffe1;
      auVar175 = NEON_sshl(auVar48,auVar14,4);
      auVar15._8_4_ = 0xffffffe1;
      auVar15._0_8_ = 0xffffffe1ffffffe1;
      auVar15._12_4_ = 0xffffffe1;
      auVar82 = NEON_sshl(auVar103,auVar15,4);
      iVar76 = CONCAT13(bVar195 & auVar175[3],
                        CONCAT12(bVar194 & auVar175[2],
                                 CONCAT11(bVar193 & auVar175[1],bVar192 & auVar175[0])));
      auVar80._0_8_ =
           CONCAT17(bVar195 & auVar175[7],
                    CONCAT16(bVar194 & auVar175[6],
                             CONCAT15(bVar193 & auVar175[5],CONCAT14(bVar192 & auVar175[4],iVar76)))
                   );
      auVar80[8] = bVar192 & auVar175[8];
      auVar80[9] = bVar193 & auVar175[9];
      auVar80[10] = bVar194 & auVar175[10];
      auVar80[11] = bVar195 & auVar175[11];
      auVar88[12] = bVar192 & auVar175[12];
      auVar88._0_12_ = auVar80;
      auVar88[13] = bVar193 & auVar175[13];
      auVar88[14] = bVar194 & auVar175[14];
      auVar88[15] = bVar195 & auVar175[15];
      iVar121 = CONCAT13(bVar191 & auVar175[3],
                         CONCAT12(bVar190 & auVar175[2],
                                  CONCAT11(bVar189 & auVar175[1],bVar188 & auVar175[0]))) +
                auVar48._0_4_;
      iVar122 = CONCAT13(bVar191 & auVar175[7],
                         CONCAT12(bVar190 & auVar175[6],
                                  CONCAT11(bVar189 & auVar175[5],bVar188 & auVar175[4]))) +
                auVar48._4_4_;
      iVar123 = CONCAT13(bVar191 & auVar175[11],
                         CONCAT12(bVar190 & auVar175[10],
                                  CONCAT11(bVar189 & auVar175[9],bVar188 & auVar175[8]))) +
                auVar48._8_4_;
      iVar124 = CONCAT13(bVar191 & auVar175[15],
                         CONCAT12(bVar190 & auVar175[14],
                                  CONCAT11(bVar189 & auVar175[13],bVar188 & auVar175[12]))) +
                auVar48._12_4_;
      iVar46 = CONCAT13(bVar73 & auVar82[3],
                        CONCAT12(bVar72 & auVar82[2],
                                 CONCAT11(bVar71 & auVar82[1],bVar70 & auVar82[0])));
      auVar47._0_8_ =
           CONCAT17(bVar73 & auVar82[7],
                    CONCAT16(bVar72 & auVar82[6],
                             CONCAT15(bVar71 & auVar82[5],CONCAT14(bVar70 & auVar82[4],iVar46))));
      auVar47[8] = bVar70 & auVar82[8];
      auVar47[9] = bVar71 & auVar82[9];
      auVar47[10] = bVar72 & auVar82[10];
      auVar47[11] = bVar73 & auVar82[11];
      auVar49[12] = bVar70 & auVar82[12];
      auVar49._0_12_ = auVar47;
      auVar49[13] = bVar71 & auVar82[13];
      auVar49[14] = bVar72 & auVar82[14];
      auVar49[15] = bVar73 & auVar82[15];
      auVar183._0_4_ = iVar110 + auVar183._0_4_ + iVar76;
      auVar183._4_4_ = iVar110 + iVar75 + (int)((ulong)auVar80._0_8_ >> 0x20);
      auVar183._8_4_ = iVar110 + iVar91 + auVar80._8_4_;
      auVar183._12_4_ = iVar110 + iVar92 + auVar88._12_4_;
      fVar150 = param_13 + (float)CONCAT13(uVar222,CONCAT12(uVar221,CONCAT11(uVar220,uVar219)));
      uVar219 = SUB41(fVar150,0);
      uVar220 = (undefined)((uint)fVar150 >> 8);
      uVar221 = (undefined)((uint)fVar150 >> 0x10);
      uVar222 = (undefined)((uint)fVar150 >> 0x18);
      fVar151 = param_13 + (float)CONCAT13(uVar226,CONCAT12(uVar225,CONCAT11(uVar224,uVar223)));
      uVar223 = SUB41(fVar151,0);
      uVar224 = (undefined)((uint)fVar151 >> 8);
      uVar225 = (undefined)((uint)fVar151 >> 0x10);
      uVar226 = (undefined)((uint)fVar151 >> 0x18);
      fVar151 = param_13 + (float)CONCAT13(uVar230,CONCAT12(uVar229,CONCAT11(uVar228,uVar227)));
      uVar227 = SUB41(fVar151,0);
      uVar228 = (undefined)((uint)fVar151 >> 8);
      uVar229 = (undefined)((uint)fVar151 >> 0x10);
      uVar230 = (undefined)((uint)fVar151 >> 0x18);
      fVar152 = param_13 + (float)CONCAT13(uVar234,CONCAT12(uVar233,CONCAT11(uVar232,uVar231)));
      uVar231 = SUB41(fVar152,0);
      uVar232 = (undefined)((uint)fVar152 >> 8);
      uVar233 = (undefined)((uint)fVar152 >> 0x10);
      uVar234 = (undefined)((uint)fVar152 >> 0x18);
      iVar149 = iVar10 + iVar149 +
                CONCAT13(bVar118 & auVar82[3],
                         CONCAT12(bVar117 & auVar82[2],
                                  CONCAT11(bVar116 & auVar82[1],bVar115 & auVar82[0])));
      iVar153 = iVar10 + iVar153 +
                CONCAT13(bVar118 & auVar82[7],
                         CONCAT12(bVar117 & auVar82[6],
                                  CONCAT11(bVar116 & auVar82[5],bVar115 & auVar82[4])));
      iVar109 = iVar10 + iVar109 +
                CONCAT13(bVar118 & auVar82[11],
                         CONCAT12(bVar117 & auVar82[10],
                                  CONCAT11(bVar116 & auVar82[9],bVar115 & auVar82[8])));
      iVar111 = iVar10 + iVar111 +
                CONCAT13(bVar118 & auVar82[15],
                         CONCAT12(bVar117 & auVar82[14],
                                  CONCAT11(bVar116 & auVar82[13],bVar115 & auVar82[12])));
      iVar46 = iVar46 + auVar103._0_4_;
      uVar159 = (undefined)iVar46;
      uVar160 = (undefined)((uint)iVar46 >> 8);
      uVar161 = (undefined)((uint)iVar46 >> 0x10);
      uVar162 = (undefined)((uint)iVar46 >> 0x18);
      iVar46 = (int)((ulong)auVar47._0_8_ >> 0x20) + auVar103._4_4_;
      uVar163 = (undefined)iVar46;
      uVar164 = (undefined)((uint)iVar46 >> 8);
      uVar165 = (undefined)((uint)iVar46 >> 0x10);
      uVar166 = (undefined)((uint)iVar46 >> 0x18);
      iVar46 = auVar47._8_4_ + auVar103._8_4_;
      uVar167 = (undefined)iVar46;
      uVar168 = (undefined)((uint)iVar46 >> 8);
      uVar169 = (undefined)((uint)iVar46 >> 0x10);
      uVar170 = (undefined)((uint)iVar46 >> 0x18);
      iVar46 = auVar49._12_4_ + auVar103._12_4_;
      uVar171 = (undefined)iVar46;
      uVar172 = (undefined)((uint)iVar46 >> 8);
      uVar173 = (undefined)((uint)iVar46 >> 0x10);
      uVar174 = (undefined)((uint)iVar46 >> 0x18);
      *(ulong *)(param_11 + 8) =
           CONCAT17(uVar234,CONCAT16(uVar233,CONCAT15(uVar232,CONCAT14(uVar231,fVar151))));
      *(ulong *)param_11 =
           CONCAT17(uVar226,CONCAT16(uVar225,CONCAT15(uVar224,CONCAT14(uVar223,fVar150))));
    } while (param_3 < iVar113);
  }
  auVar175 = _DAT_004c4480;
  if (param_3 < param_5) {
    auVar51._8_4_ = 0xfffffff8;
    auVar51._0_8_ = 0xfffffff8fffffff8;
    auVar51._12_4_ = 0xfffffff8;
    auVar82 = *(undefined (*) [16])param_11;
    pauVar44 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
    auVar97 = NEON_sshl(auVar183,auVar51,4);
    auVar84 = NEON_sshl(auVar58,auVar51,4);
    lVar43 = (long)param_3;
    auVar19._4_4_ = iVar153;
    auVar19._0_4_ = iVar149;
    auVar19._8_4_ = iVar109;
    auVar19._12_4_ = iVar111;
    auVar83 = NEON_sshl(auVar19,auVar51,4);
    auVar184._0_4_ = fVar214 + auVar82._0_4_;
    auVar184._4_4_ = fVar214 + auVar82._4_4_;
    auVar184._8_4_ = fVar62 + auVar82._8_4_;
    auVar184._12_4_ = fVar74 + auVar82._12_4_;
    uVar180 = *(undefined8 *)(param_10 + 8);
    auVar82 = NEON_smax(auVar97,ZEXT216(0),4);
    auVar97 = NEON_smax(auVar84,ZEXT216(0),4);
    auVar40._9_7_ = _UNK_004c5139;
    auVar40._0_9_ = _DAT_004c5130;
    auVar83 = NEON_smax(auVar83,ZEXT216(0),4);
    auVar240._8_8_ = 0xffffffffffffffff;
    auVar240._0_8_ = 0xffffffffffffffff;
    while( true ) {
      lVar43 = lVar43 + 1;
      auVar84 = *pauVar44;
      auVar52._0_4_ = (float)*(undefined8 *)param_10 - auVar84._0_4_;
      auVar52._4_4_ = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - auVar84._4_4_;
      auVar52._8_4_ = (float)uVar180 - auVar84._8_4_;
      auVar52._12_4_ = (float)((ulong)uVar180 >> 0x20) - auVar84._12_4_;
      auVar99 = NEON_cmlt(auVar52,0,4);
      bVar45 = auVar99[0] & 1;
      auVar53._0_5_ = CONCAT14(auVar99[4],(uint)bVar45) & 0x2ffffffff;
      auVar53._5_3_ = 0;
      auVar53[8] = auVar99[8] & 4;
      auVar53._9_3_ = 0;
      auVar53[12] = auVar99[12] & 8;
      auVar53._13_3_ = 0;
      auVar147 = NEON_ext(auVar53,auVar53,8,1);
      if (CONCAT13(auVar147[3] | auVar147[7],
                   CONCAT12(auVar147[2] | auVar147[6],
                            CONCAT11(auVar147[1] | auVar147[5],
                                     auVar147[0] | bVar45 | auVar147[4] | auVar99[4] & 2))) != 0xf)
      {
        auVar31[8] = 0x20;
        auVar31._0_8_ = 0x2000000020;
        auVar31._9_3_ = 0;
        auVar31[12] = 0x20;
        auVar31._13_3_ = 0;
        auVar99 = NEON_smin(auVar82,auVar31,4);
        auVar32[8] = 0x20;
        auVar32._0_8_ = 0x2000000020;
        auVar32._9_3_ = 0;
        auVar32[12] = 0x20;
        auVar32._13_3_ = 0;
        auVar147 = NEON_smin(auVar97,auVar32,4);
        auVar33[8] = 0x20;
        auVar33._0_8_ = 0x2000000020;
        auVar33._9_3_ = 0;
        auVar33[12] = 0x20;
        auVar33._13_3_ = 0;
        auVar106 = NEON_smin(auVar83,auVar33,4);
        auVar99 = NEON_smax(auVar99,ZEXT216(0),4);
        auVar147 = NEON_smax(auVar147,ZEXT216(0),4);
        auVar106 = NEON_smax(auVar106,ZEXT216(0),4);
        auVar99 = NEON_sshl(auVar240,auVar99,4);
        auVar147 = NEON_sshl(auVar240,auVar147,4);
        auVar145 = NEON_sshl(auVar240,auVar106,4);
        auVar25[9] = (char)((ulong)uVar180 >> 8);
        auVar25._0_9_ = *(unkbyte9 *)param_10;
        auVar25[10] = (char)((ulong)uVar180 >> 0x10);
        auVar25[11] = (char)((ulong)uVar180 >> 0x18);
        auVar25[12] = (char)((ulong)uVar180 >> 0x20);
        auVar25[13] = (char)((ulong)uVar180 >> 0x28);
        auVar25[14] = (char)((ulong)uVar180 >> 0x30);
        auVar25[15] = (char)((ulong)uVar180 >> 0x38);
        auVar106 = NEON_fmin(auVar184,auVar25,4);
        auVar54[0] = auVar145[0] & ~(auVar147[0] | auVar99[0]);
        auVar54[1] = auVar145[1] & ~(auVar147[1] | auVar99[1]);
        auVar54[2] = auVar145[2] & ~(auVar147[2] | auVar99[2]);
        auVar54[3] = auVar145[3] & ~(auVar147[3] | auVar99[3]);
        auVar54[4] = auVar145[4] & ~(auVar147[4] | auVar99[4]);
        auVar54[5] = auVar145[5] & ~(auVar147[5] | auVar99[5]);
        auVar54[6] = auVar145[6] & ~(auVar147[6] | auVar99[6]);
        auVar54[7] = auVar145[7] & ~(auVar147[7] | auVar99[7]);
        auVar54[8] = auVar145[8] & ~(auVar147[8] | auVar99[8]);
        auVar54[9] = auVar145[9] & ~(auVar147[9] | auVar99[9]);
        auVar54[10] = auVar145[10] & ~(auVar147[10] | auVar99[10]);
        auVar54[11] = auVar145[11] & ~(auVar147[11] | auVar99[11]);
        auVar54[12] = auVar145[12] & ~(auVar147[12] | auVar99[12]);
        auVar54[13] = auVar145[13] & ~(auVar147[13] | auVar99[13]);
        auVar54[14] = auVar145[14] & ~(auVar147[14] | auVar99[14]);
        auVar54[15] = auVar145[15] & ~(auVar147[15] | auVar99[15]);
        auVar99 = NEON_fcmge(auVar106,auVar84,4);
        auVar84 = a64_TBL(ZEXT816(0),auVar54,auVar40);
        auVar84 = NEON_cmeq(auVar84,0,2);
        if (CONCAT17(auVar99[15] & ~auVar84[15] | auVar99[7] & ~auVar84[7],
                     CONCAT16(auVar99[14] & ~auVar84[14] | auVar99[6] & ~auVar84[6],
                              CONCAT15(auVar99[13] & ~auVar84[13] | auVar99[5] & ~auVar84[5],
                                       CONCAT14(auVar99[12] & ~auVar84[12] |
                                                auVar99[4] & ~auVar84[4],
                                                CONCAT13(auVar99[11] & ~auVar84[11] |
                                                         auVar99[3] & ~auVar84[3],
                                                         CONCAT12(auVar99[10] & ~auVar84[10] |
                                                                  auVar99[2] & ~auVar84[2],
                                                                  CONCAT11(auVar99[9] & ~auVar84[9]
                                                                           | auVar99[1] &
                                                                             ~auVar84[1],
                                                                           auVar99[8] & ~auVar84[8]
                                                                           | auVar99[0] &
                                                                             ~auVar84[0]))))))) != 0
           ) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
          return 0;
        }
      }
      if (param_3 + param_2 <= lVar43) break;
      auVar34[8] = 0x20;
      auVar34._0_8_ = 0x2000000020;
      auVar34._9_3_ = 0;
      auVar34[12] = 0x20;
      auVar34._13_3_ = 0;
      auVar82 = NEON_uqsub(auVar82,auVar34,2);
      auVar35[8] = 0x20;
      auVar35._0_8_ = 0x2000000020;
      auVar35._9_3_ = 0;
      auVar35[12] = 0x20;
      auVar35._13_3_ = 0;
      auVar97 = NEON_uqsub(auVar97,auVar35,2);
      pauVar44 = pauVar44 + 3;
      auVar185._0_4_ = param_12 + auVar184._0_4_;
      auVar185._4_4_ = param_12 + auVar184._4_4_;
      auVar185._8_4_ = param_12 + auVar184._8_4_;
      auVar185._12_4_ = param_12 + auVar184._12_4_;
      auVar36[8] = 0x20;
      auVar36._0_8_ = 0x2000000020;
      auVar36._9_3_ = 0;
      auVar36[12] = 0x20;
      auVar36._13_3_ = 0;
      auVar83 = NEON_uqsub(auVar83,auVar36,2);
      auVar184 = auVar185;
    }
    param_3 = *(int *)(this + 300) + param_3;
  }
  if (param_3 < param_5) {
    iVar121 = (int)(CONCAT17(uVar130,CONCAT16(uVar128,CONCAT15(uVar126,CONCAT14((char)iVar94,iVar94)
                                                              ))) >> 0x20);
    iVar112 = (int)(CONCAT17(uVar130,CONCAT16(uVar128,CONCAT15(uVar126,CONCAT14((char)iVar94,iVar94)
                                                              ))) >> 0x20);
    auVar55._0_4_ = iVar114 - iVar94;
    auVar55._4_4_ = iVar177 - iVar112;
    auVar55._8_4_ = iVar178 - iVar94;
    auVar55._12_4_ = iVar179 - iVar121;
    auVar82 = *(undefined (*) [16])param_11;
    auVar176._8_4_ = 0xffffffe1;
    auVar176._0_8_ = 0xffffffe1ffffffe1;
    auVar176._12_4_ = 0xffffffe1;
    auVar107._0_4_ = CONCAT13(uVar162,CONCAT12(uVar161,CONCAT11(uVar160,uVar159))) - iVar11;
    auVar107._4_4_ = CONCAT13(uVar166,CONCAT12(uVar165,CONCAT11(uVar164,uVar163))) - iVar11;
    auVar107._8_4_ = CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) - iVar11;
    auVar107._12_4_ = CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) - iVar11;
    auVar83 = NEON_sshl(auVar55,auVar176,4);
    auVar97 = NEON_sshl(auVar107,auVar176,4);
    fVar150 = auVar82._0_4_;
    fVar151 = auVar82._4_4_;
    fVar152 = auVar82._8_4_;
    fVar154 = auVar82._12_4_;
    iVar110 = CONCAT13(bVar65 & auVar83[3],
                       CONCAT12(bVar64 & auVar83[2],
                                CONCAT11(bVar63 & auVar83[1],bVar61 & auVar83[0])));
    auVar81._0_8_ =
         CONCAT17(bVar65 & auVar83[7],
                  CONCAT16(bVar64 & auVar83[6],
                           CONCAT15(bVar63 & auVar83[5],CONCAT14(bVar61 & auVar83[4],iVar110))));
    auVar81[8] = bVar61 & auVar83[8];
    auVar81[9] = bVar63 & auVar83[9];
    auVar81[10] = bVar64 & auVar83[10];
    auVar81[11] = bVar65 & auVar83[11];
    auVar89[12] = bVar61 & auVar83[12];
    auVar89._0_12_ = auVar81;
    auVar89[13] = bVar63 & auVar83[13];
    auVar89[14] = bVar64 & auVar83[14];
    auVar89[15] = bVar65 & auVar83[15];
    iVar114 = CONCAT13(bVar69 & auVar83[3],
                       CONCAT12(bVar68 & auVar83[2],
                                CONCAT11(bVar67 & auVar83[1],bVar66 & auVar83[0])));
    auVar155._0_8_ =
         CONCAT17(bVar69 & auVar83[7],
                  CONCAT16(bVar68 & auVar83[6],
                           CONCAT15(bVar67 & auVar83[5],CONCAT14(bVar66 & auVar83[4],iVar114))));
    auVar155[8] = bVar66 & auVar83[8];
    auVar155[9] = bVar67 & auVar83[9];
    auVar155[10] = bVar68 & auVar83[10];
    auVar155[11] = bVar69 & auVar83[11];
    auVar156[12] = bVar66 & auVar83[12];
    auVar156._0_12_ = auVar155;
    auVar156[13] = bVar67 & auVar83[13];
    auVar156[14] = bVar68 & auVar83[14];
    auVar156[15] = bVar69 & auVar83[15];
    iVar113 = CONCAT13(bVar118 & auVar97[3],
                       CONCAT12(bVar117 & auVar97[2],
                                CONCAT11(bVar116 & auVar97[1],bVar115 & auVar97[0])));
    auVar182._0_8_ =
         CONCAT17(bVar118 & auVar97[7],
                  CONCAT16(bVar117 & auVar97[6],
                           CONCAT15(bVar116 & auVar97[5],CONCAT14(bVar115 & auVar97[4],iVar113))));
    auVar182[8] = bVar115 & auVar97[8];
    auVar182[9] = bVar116 & auVar97[9];
    auVar182[10] = bVar117 & auVar97[10];
    auVar182[11] = bVar118 & auVar97[11];
    auVar186[12] = bVar115 & auVar97[12];
    auVar186._0_12_ = auVar182;
    auVar186[13] = bVar116 & auVar97[13];
    auVar186[14] = bVar117 & auVar97[14];
    auVar186[15] = bVar118 & auVar97[15];
    iVar110 = iVar110 + auVar55._0_4_;
    uVar172 = (undefined)iVar110;
    uVar173 = (undefined)((uint)iVar110 >> 8);
    uVar174 = (undefined)((uint)iVar110 >> 0x10);
    uVar219 = (undefined)((uint)iVar110 >> 0x18);
    iVar110 = (int)((ulong)auVar81._0_8_ >> 0x20) + auVar55._4_4_;
    uVar220 = (undefined)iVar110;
    uVar221 = (undefined)((uint)iVar110 >> 8);
    uVar222 = (undefined)((uint)iVar110 >> 0x10);
    uVar223 = (undefined)((uint)iVar110 >> 0x18);
    iVar110 = auVar81._8_4_ + auVar55._8_4_;
    uVar224 = (undefined)iVar110;
    uVar225 = (undefined)((uint)iVar110 >> 8);
    uVar226 = (undefined)((uint)iVar110 >> 0x10);
    uVar227 = (undefined)((uint)iVar110 >> 0x18);
    iVar110 = auVar89._12_4_ + auVar55._12_4_;
    uVar228 = (undefined)iVar110;
    uVar229 = (undefined)((uint)iVar110 >> 8);
    uVar230 = (undefined)((uint)iVar110 >> 0x10);
    uVar231 = (undefined)((uint)iVar110 >> 0x18);
    auVar157._0_4_ = iVar9 + auVar58._0_4_ + iVar114;
    auVar157._4_4_ = iVar9 + auVar58._4_4_ + (int)((ulong)auVar155._0_8_ >> 0x20);
    auVar157._8_4_ = iVar9 + auVar58._8_4_ + auVar155._8_4_;
    auVar157._12_4_ = iVar9 + auVar58._12_4_ + auVar156._12_4_;
    iVar110 = CONCAT13(bVar73 & auVar97[3],
                       CONCAT12(bVar72 & auVar97[2],
                                CONCAT11(bVar71 & auVar97[1],bVar70 & auVar97[0]))) + auVar107._0_4_
    ;
    iVar114 = CONCAT13(bVar73 & auVar97[7],
                       CONCAT12(bVar72 & auVar97[6],
                                CONCAT11(bVar71 & auVar97[5],bVar70 & auVar97[4]))) + auVar107._4_4_
    ;
    iVar177 = CONCAT13(bVar73 & auVar97[11],
                       CONCAT12(bVar72 & auVar97[10],
                                CONCAT11(bVar71 & auVar97[9],bVar70 & auVar97[8]))) + auVar107._8_4_
    ;
    iVar178 = CONCAT13(bVar73 & auVar97[15],
                       CONCAT12(bVar72 & auVar97[14],
                                CONCAT11(bVar71 & auVar97[13],bVar70 & auVar97[12]))) +
              auVar107._12_4_;
    iVar113 = iVar10 + iVar149 + iVar113;
    uVar126 = (undefined)iVar113;
    uVar128 = (undefined)((uint)iVar113 >> 8);
    uVar130 = (undefined)((uint)iVar113 >> 0x10);
    uVar159 = (undefined)((uint)iVar113 >> 0x18);
    iVar149 = iVar10 + iVar153 + (int)((ulong)auVar182._0_8_ >> 0x20);
    uVar160 = (undefined)iVar149;
    uVar161 = (undefined)((uint)iVar149 >> 8);
    uVar162 = (undefined)((uint)iVar149 >> 0x10);
    uVar163 = (undefined)((uint)iVar149 >> 0x18);
    iVar149 = iVar10 + iVar109 + auVar182._8_4_;
    uVar164 = (undefined)iVar149;
    uVar165 = (undefined)((uint)iVar149 >> 8);
    uVar166 = (undefined)((uint)iVar149 >> 0x10);
    uVar167 = (undefined)((uint)iVar149 >> 0x18);
    iVar149 = iVar10 + iVar111 + auVar186._12_4_;
    uVar168 = (undefined)iVar149;
    uVar169 = (undefined)((uint)iVar149 >> 8);
    uVar170 = (undefined)((uint)iVar149 >> 0x10);
    uVar171 = (undefined)((uint)iVar149 >> 0x18);
    auVar187._8_4_ = 0xfffffff8;
    auVar187._0_8_ = 0xfffffff8fffffff8;
    auVar187._12_4_ = 0xfffffff8;
    auVar198._8_8_ = 0xffffffffffffffff;
    auVar198._0_8_ = 0xffffffffffffffff;
    while( true ) {
      fVar154 = param_13 + fVar154;
      fVar152 = param_13 + fVar152;
      fVar151 = param_13 + fVar151;
      fVar150 = param_13 + fVar150;
      *(ulong *)(param_11 + 8) = CONCAT44(fVar154,fVar152);
      *(ulong *)param_11 = CONCAT44(fVar151,fVar150);
      auVar82 = NEON_sshl(auVar157,auVar187,4);
      auVar20[1] = uVar128;
      auVar20[0] = uVar126;
      auVar20[2] = uVar130;
      auVar20[3] = uVar159;
      auVar20[4] = uVar160;
      auVar20[5] = uVar161;
      auVar20[6] = uVar162;
      auVar20[7] = uVar163;
      auVar20[8] = uVar164;
      auVar20[9] = uVar165;
      auVar20[10] = uVar166;
      auVar20[11] = uVar167;
      auVar20[12] = uVar168;
      auVar20[13] = uVar169;
      auVar20[14] = uVar170;
      auVar20[15] = uVar171;
      auVar83 = NEON_sshl(auVar20,auVar187,4);
      fVar38 = fVar214 + fVar150;
      uVar232 = SUB41(fVar38,0);
      uVar233 = (undefined)((uint)fVar38 >> 8);
      uVar234 = (undefined)((uint)fVar38 >> 0x10);
      uVar125 = (undefined)((uint)fVar38 >> 0x18);
      fVar38 = fVar214 + fVar151;
      uVar127 = SUB41(fVar38,0);
      uVar129 = (undefined)((uint)fVar38 >> 8);
      uVar131 = (undefined)((uint)fVar38 >> 0x10);
      uVar132 = (undefined)((uint)fVar38 >> 0x18);
      fVar38 = fVar62 + fVar152;
      uVar133 = SUB41(fVar38,0);
      uVar134 = (undefined)((uint)fVar38 >> 8);
      uVar135 = (undefined)((uint)fVar38 >> 0x10);
      uVar136 = (undefined)((uint)fVar38 >> 0x18);
      fVar38 = fVar74 + fVar154;
      uVar137 = SUB41(fVar38,0);
      uVar138 = (undefined)((uint)fVar38 >> 8);
      uVar139 = (undefined)((uint)fVar38 >> 0x10);
      uVar140 = (undefined)((uint)fVar38 >> 0x18);
      lVar43 = (long)param_3;
      pauVar44 = (undefined (*) [16])(*(long *)(this + 0x138) + (long)param_3 * 0x30);
      auVar97 = *(undefined (*) [16])param_10;
      auVar82 = NEON_smax(auVar82,ZEXT216(0),4);
      auVar83 = NEON_smax(auVar83,ZEXT216(0),4);
      while( true ) {
        lVar43 = lVar43 + 1;
        auVar58 = *pauVar44;
        auVar56._0_4_ = auVar97._0_4_ - auVar58._0_4_;
        auVar56._4_4_ = auVar97._4_4_ - auVar58._4_4_;
        auVar56._8_4_ = auVar97._8_4_ - auVar58._8_4_;
        auVar56._12_4_ = auVar97._12_4_ - auVar58._12_4_;
        auVar84 = NEON_cmlt(auVar56,0,4);
        auVar57[0] = auVar84[0] & auVar175[0];
        auVar57[1] = auVar84[1] & auVar175[1];
        auVar57[2] = auVar84[2] & auVar175[2];
        auVar57[3] = auVar84[3] & auVar175[3];
        auVar57[4] = auVar84[4] & auVar175[4];
        auVar57[5] = auVar84[5] & auVar175[5];
        auVar57[6] = auVar84[6] & auVar175[6];
        auVar57[7] = auVar84[7] & auVar175[7];
        auVar57[8] = auVar84[8] & auVar175[8];
        auVar57[9] = auVar84[9] & auVar175[9];
        auVar57[10] = auVar84[10] & auVar175[10];
        auVar57[11] = auVar84[11] & auVar175[11];
        auVar57[12] = auVar84[12] & auVar175[12];
        auVar57[13] = auVar84[13] & auVar175[13];
        auVar57[14] = auVar84[14] & auVar175[14];
        auVar57[15] = auVar84[15] & auVar175[15];
        auVar84 = NEON_ext(auVar57,auVar57,8,1);
        if (CONCAT13(auVar84[3] | auVar57[3] | auVar84[7] | auVar57[7],
                     CONCAT12(auVar84[2] | auVar57[2] | auVar84[6] | auVar57[6],
                              CONCAT11(auVar84[1] | auVar57[1] | auVar84[5] | auVar57[5],
                                       auVar84[0] | auVar57[0] | auVar84[4] | auVar57[4]))) != 0xf)
        {
          auVar26[8] = 0x20;
          auVar26._0_8_ = 0x2000000020;
          auVar26._9_3_ = 0;
          auVar26[12] = 0x20;
          auVar26._13_3_ = 0;
          auVar84 = NEON_smin(auVar83,auVar26,4);
          auVar27[8] = 0x20;
          auVar27._0_8_ = 0x2000000020;
          auVar27._9_3_ = 0;
          auVar27[12] = 0x20;
          auVar27._13_3_ = 0;
          auVar99 = NEON_smin(auVar82,auVar27,4);
          auVar37[1] = uVar233;
          auVar37[0] = uVar232;
          auVar37[2] = uVar234;
          auVar37[3] = uVar125;
          auVar37[4] = uVar127;
          auVar37[5] = uVar129;
          auVar37[6] = uVar131;
          auVar37[7] = uVar132;
          auVar37[8] = uVar133;
          auVar37[9] = uVar134;
          auVar37[10] = uVar135;
          auVar37[11] = uVar136;
          auVar37[12] = uVar137;
          auVar37[13] = uVar138;
          auVar37[14] = uVar139;
          auVar37[15] = uVar140;
          auVar106 = NEON_fmin(auVar37,auVar97,4);
          auVar84 = NEON_smax(auVar84,ZEXT216(0),4);
          auVar147 = NEON_smax(auVar99,ZEXT216(0),4);
          auVar99 = NEON_fcmge(auVar106,auVar58,4);
          auVar58 = NEON_sshl(auVar198,auVar84,4);
          auVar84 = NEON_sshl(auVar198,auVar147,4);
          auVar59[0] = auVar58[0] & ~auVar84[0];
          auVar59[1] = auVar58[1] & ~auVar84[1];
          auVar59[2] = auVar58[2] & ~auVar84[2];
          auVar59[3] = auVar58[3] & ~auVar84[3];
          auVar59[4] = auVar58[4] & ~auVar84[4];
          auVar59[5] = auVar58[5] & ~auVar84[5];
          auVar59[6] = auVar58[6] & ~auVar84[6];
          auVar59[7] = auVar58[7] & ~auVar84[7];
          auVar59[8] = auVar58[8] & ~auVar84[8];
          auVar59[9] = auVar58[9] & ~auVar84[9];
          auVar59[10] = auVar58[10] & ~auVar84[10];
          auVar59[11] = auVar58[11] & ~auVar84[11];
          auVar59[12] = auVar58[12] & ~auVar84[12];
          auVar59[13] = auVar58[13] & ~auVar84[13];
          auVar59[14] = auVar58[14] & ~auVar84[14];
          auVar59[15] = auVar58[15] & ~auVar84[15];
          auVar41._9_7_ = _UNK_004c5139;
          auVar41._0_9_ = _DAT_004c5130;
          auVar58 = a64_TBL(ZEXT816(0),auVar59,auVar41);
          auVar58 = NEON_cmeq(auVar58,0,2);
          if (CONCAT17(auVar99[15] & ~auVar58[15] | auVar99[7] & ~auVar58[7],
                       CONCAT16(auVar99[14] & ~auVar58[14] | auVar99[6] & ~auVar58[6],
                                CONCAT15(auVar99[13] & ~auVar58[13] | auVar99[5] & ~auVar58[5],
                                         CONCAT14(auVar99[12] & ~auVar58[12] |
                                                  auVar99[4] & ~auVar58[4],
                                                  CONCAT13(auVar99[11] & ~auVar58[11] |
                                                           auVar99[3] & ~auVar58[3],
                                                           CONCAT12(auVar99[10] & ~auVar58[10] |
                                                                    auVar99[2] & ~auVar58[2],
                                                                    CONCAT11(auVar99[9] &
                                                                             ~auVar58[9] |
                                                                             auVar99[1] &
                                                                             ~auVar58[1],
                                                                             auVar99[8] &
                                                                             ~auVar58[8] |
                                                                             auVar99[0] &
                                                                             ~auVar58[0]))))))) != 0
             ) {
            return 0;
          }
        }
        if (param_3 + param_2 <= lVar43) break;
        fVar38 = param_12 + (float)CONCAT13(uVar125,CONCAT12(uVar234,CONCAT11(uVar233,uVar232)));
        uVar232 = SUB41(fVar38,0);
        uVar233 = (undefined)((uint)fVar38 >> 8);
        uVar234 = (undefined)((uint)fVar38 >> 0x10);
        uVar125 = (undefined)((uint)fVar38 >> 0x18);
        fVar38 = param_12 + (float)CONCAT13(uVar132,CONCAT12(uVar131,CONCAT11(uVar129,uVar127)));
        uVar127 = SUB41(fVar38,0);
        uVar129 = (undefined)((uint)fVar38 >> 8);
        uVar131 = (undefined)((uint)fVar38 >> 0x10);
        uVar132 = (undefined)((uint)fVar38 >> 0x18);
        fVar38 = param_12 + (float)CONCAT13(uVar136,CONCAT12(uVar135,CONCAT11(uVar134,uVar133)));
        uVar133 = SUB41(fVar38,0);
        uVar134 = (undefined)((uint)fVar38 >> 8);
        uVar135 = (undefined)((uint)fVar38 >> 0x10);
        uVar136 = (undefined)((uint)fVar38 >> 0x18);
        fVar38 = param_12 + (float)CONCAT13(uVar140,CONCAT12(uVar139,CONCAT11(uVar138,uVar137)));
        uVar137 = SUB41(fVar38,0);
        uVar138 = (undefined)((uint)fVar38 >> 8);
        uVar139 = (undefined)((uint)fVar38 >> 0x10);
        uVar140 = (undefined)((uint)fVar38 >> 0x18);
        auVar28[8] = 0x20;
        auVar28._0_8_ = 0x2000000020;
        auVar28._9_3_ = 0;
        auVar28[12] = 0x20;
        auVar28._13_3_ = 0;
        auVar82 = NEON_uqsub(auVar82,auVar28,2);
        pauVar44 = pauVar44 + 3;
        auVar29[8] = 0x20;
        auVar29._0_8_ = 0x2000000020;
        auVar29._9_3_ = 0;
        auVar29[12] = 0x20;
        auVar29._13_3_ = 0;
        auVar83 = NEON_uqsub(auVar83,auVar29,2);
      }
      param_3 = *(int *)(this + 300) + param_3;
      if (param_5 <= param_3) break;
      auVar60._0_4_ = CONCAT13(uVar219,CONCAT12(uVar174,CONCAT11(uVar173,uVar172))) - iVar94;
      auVar60._4_4_ = CONCAT13(uVar223,CONCAT12(uVar222,CONCAT11(uVar221,uVar220))) - iVar112;
      auVar60._8_4_ = CONCAT13(uVar227,CONCAT12(uVar226,CONCAT11(uVar225,uVar224))) - iVar94;
      auVar60._12_4_ = CONCAT13(uVar231,CONCAT12(uVar230,CONCAT11(uVar229,uVar228))) - iVar121;
      auVar90._0_4_ = iVar110 - iVar11;
      auVar90._4_4_ = iVar114 - iVar11;
      auVar90._8_4_ = iVar177 - iVar11;
      auVar90._12_4_ = iVar178 - iVar11;
      auVar82 = NEON_sshl(auVar60,auVar176,4);
      auVar83 = NEON_sshl(auVar90,auVar176,4);
      iVar149 = CONCAT13(auVar82[3] & bVar65,
                         CONCAT12(auVar82[2] & bVar64,
                                  CONCAT11(auVar82[1] & bVar63,auVar82[0] & bVar61)));
      auVar216._0_8_ =
           CONCAT17(auVar82[7] & bVar65,
                    CONCAT16(auVar82[6] & bVar64,
                             CONCAT15(auVar82[5] & bVar63,CONCAT14(auVar82[4] & bVar61,iVar149))));
      auVar216[8] = auVar82[8] & bVar61;
      auVar216[9] = auVar82[9] & bVar63;
      auVar216[10] = auVar82[10] & bVar64;
      auVar216[11] = auVar82[11] & bVar65;
      auVar218[12] = auVar82[12] & bVar61;
      auVar218._0_12_ = auVar216;
      auVar218[13] = auVar82[13] & bVar63;
      auVar218[14] = auVar82[14] & bVar64;
      auVar218[15] = auVar82[15] & bVar65;
      iVar153 = CONCAT13(auVar82[3] & bVar69,
                         CONCAT12(auVar82[2] & bVar68,
                                  CONCAT11(auVar82[1] & bVar67,auVar82[0] & bVar66)));
      auVar96._0_8_ =
           CONCAT17(auVar82[7] & bVar69,
                    CONCAT16(auVar82[6] & bVar68,
                             CONCAT15(auVar82[5] & bVar67,CONCAT14(auVar82[4] & bVar66,iVar153))));
      auVar96[8] = auVar82[8] & bVar66;
      auVar96[9] = auVar82[9] & bVar67;
      auVar96[10] = auVar82[10] & bVar68;
      auVar96[11] = auVar82[11] & bVar69;
      auVar108[12] = auVar82[12] & bVar66;
      auVar108._0_12_ = auVar96;
      auVar108[13] = auVar82[13] & bVar67;
      auVar108[14] = auVar82[14] & bVar68;
      auVar108[15] = auVar82[15] & bVar69;
      iVar110 = CONCAT13(auVar83[3] & bVar73,
                         CONCAT12(auVar83[2] & bVar72,
                                  CONCAT11(auVar83[1] & bVar71,auVar83[0] & bVar70)));
      auVar144._0_8_ =
           CONCAT17(auVar83[7] & bVar73,
                    CONCAT16(auVar83[6] & bVar72,
                             CONCAT15(auVar83[5] & bVar71,CONCAT14(auVar83[4] & bVar70,iVar110))));
      auVar144[8] = auVar83[8] & bVar70;
      auVar144[9] = auVar83[9] & bVar71;
      auVar144[10] = auVar83[10] & bVar72;
      auVar144[11] = auVar83[11] & bVar73;
      auVar148[12] = auVar83[12] & bVar70;
      auVar148._0_12_ = auVar144;
      auVar148[13] = auVar83[13] & bVar71;
      auVar148[14] = auVar83[14] & bVar72;
      auVar148[15] = auVar83[15] & bVar73;
      iVar149 = iVar149 + auVar60._0_4_;
      uVar172 = (undefined)iVar149;
      uVar173 = (undefined)((uint)iVar149 >> 8);
      uVar174 = (undefined)((uint)iVar149 >> 0x10);
      uVar219 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = (int)((ulong)auVar216._0_8_ >> 0x20) + auVar60._4_4_;
      uVar220 = (undefined)iVar149;
      uVar221 = (undefined)((uint)iVar149 >> 8);
      uVar222 = (undefined)((uint)iVar149 >> 0x10);
      uVar223 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = auVar216._8_4_ + auVar60._8_4_;
      uVar224 = (undefined)iVar149;
      uVar225 = (undefined)((uint)iVar149 >> 8);
      uVar226 = (undefined)((uint)iVar149 >> 0x10);
      uVar227 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = auVar218._12_4_ + auVar60._12_4_;
      uVar228 = (undefined)iVar149;
      uVar229 = (undefined)((uint)iVar149 >> 8);
      uVar230 = (undefined)((uint)iVar149 >> 0x10);
      uVar231 = (undefined)((uint)iVar149 >> 0x18);
      iVar110 = iVar110 + auVar90._0_4_;
      iVar114 = (int)((ulong)auVar144._0_8_ >> 0x20) + auVar90._4_4_;
      iVar177 = auVar144._8_4_ + auVar90._8_4_;
      iVar178 = auVar148._12_4_ + auVar90._12_4_;
      auVar158._0_4_ = iVar153 + iVar9 + auVar157._0_4_;
      auVar158._4_4_ = (int)((ulong)auVar96._0_8_ >> 0x20) + iVar9 + auVar157._4_4_;
      auVar158._8_4_ = auVar96._8_4_ + iVar9 + auVar157._8_4_;
      auVar158._12_4_ = auVar108._12_4_ + iVar9 + auVar157._12_4_;
      iVar149 = CONCAT13(auVar83[3] & bVar118,
                         CONCAT12(auVar83[2] & bVar117,
                                  CONCAT11(auVar83[1] & bVar116,auVar83[0] & bVar115))) + iVar10 +
                CONCAT13(uVar159,CONCAT12(uVar130,CONCAT11(uVar128,uVar126)));
      uVar126 = (undefined)iVar149;
      uVar128 = (undefined)((uint)iVar149 >> 8);
      uVar130 = (undefined)((uint)iVar149 >> 0x10);
      uVar159 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = CONCAT13(auVar83[7] & bVar118,
                         CONCAT12(auVar83[6] & bVar117,
                                  CONCAT11(auVar83[5] & bVar116,auVar83[4] & bVar115))) + iVar10 +
                CONCAT13(uVar163,CONCAT12(uVar162,CONCAT11(uVar161,uVar160)));
      uVar160 = (undefined)iVar149;
      uVar161 = (undefined)((uint)iVar149 >> 8);
      uVar162 = (undefined)((uint)iVar149 >> 0x10);
      uVar163 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = CONCAT13(auVar83[11] & bVar118,
                         CONCAT12(auVar83[10] & bVar117,
                                  CONCAT11(auVar83[9] & bVar116,auVar83[8] & bVar115))) + iVar10 +
                CONCAT13(uVar167,CONCAT12(uVar166,CONCAT11(uVar165,uVar164)));
      uVar164 = (undefined)iVar149;
      uVar165 = (undefined)((uint)iVar149 >> 8);
      uVar166 = (undefined)((uint)iVar149 >> 0x10);
      uVar167 = (undefined)((uint)iVar149 >> 0x18);
      iVar149 = CONCAT13(auVar83[15] & bVar118,
                         CONCAT12(auVar83[14] & bVar117,
                                  CONCAT11(auVar83[13] & bVar116,auVar83[12] & bVar115))) + iVar10 +
                CONCAT13(uVar171,CONCAT12(uVar170,CONCAT11(uVar169,uVar168)));
      uVar168 = (undefined)iVar149;
      uVar169 = (undefined)((uint)iVar149 >> 8);
      uVar170 = (undefined)((uint)iVar149 >> 0x10);
      uVar171 = (undefined)((uint)iVar149 >> 0x18);
      auVar157 = auVar158;
    }
  }
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
                    /* WARNING: Read-only address (ram,0x004c4990) is written */
                    /* WARNING: Read-only address (ram,0x004c5130) is written */
                    /* WARNING: Read-only address (ram,0x004c5139) is written */
  return 1;
}


