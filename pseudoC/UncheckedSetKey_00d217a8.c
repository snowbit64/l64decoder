// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00d217a8
// Size: 3276 bytes
// Signature: undefined __cdecl UncheckedSetKey(uchar * param_1, uint param_2, NameValuePairs * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::Rijndael::Base::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void CryptoPP::Rijndael::Base::UncheckedSetKey(uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined (*pauVar3) [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  unkbyte9 Var12;
  unkbyte9 Var13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined auVar30 [16];
  undefined auVar31 [16];
  int iVar36;
  int iVar37;
  uint5 uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint5 uVar43;
  int iVar44;
  int iVar45;
  uint5 uVar46;
  uint5 uVar47;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined auVar48 [16];
  undefined auVar49 [16];
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined auVar54 [16];
  undefined auVar55 [16];
  uint uVar60;
  byte bVar63;
  byte bVar64;
  uint uVar65;
  byte bVar66;
  byte bVar68;
  undefined auVar61 [16];
  undefined auVar62 [16];
  uint uVar67;
  byte bVar69;
  byte bVar70;
  int iVar71;
  uint uVar72;
  byte bVar73;
  int iVar74;
  uint uVar75;
  byte bVar76;
  byte bVar77;
  int iVar78;
  uint uVar79;
  byte bVar80;
  int iVar81;
  uint uVar82;
  byte bVar83;
  byte bVar84;
  int iVar85;
  uint uVar86;
  byte bVar87;
  int iVar88;
  uint uVar89;
  byte bVar90;
  int iVar91;
  uint uVar92;
  byte bVar93;
  int iVar94;
  uint uVar95;
  byte bVar96;
  byte bVar99;
  int iVar97;
  uint uVar98;
  byte bVar100;
  byte bVar103;
  int iVar101;
  uint uVar102;
  byte bVar104;
  int iVar105;
  uint uVar106;
  byte bVar107;
  byte bVar110;
  int iVar108;
  uint uVar109;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar125;
  int iVar123;
  int iVar124;
  byte bVar126;
  byte bVar129;
  int iVar127;
  int iVar128;
  byte bVar130;
  int iVar131;
  int iVar132;
  byte bVar133;
  int iVar134;
  int iVar135;
  byte bVar136;
  int iVar137;
  int iVar138;
  byte bVar139;
  int iVar140;
  int iVar141;
  byte bVar142;
  byte bVar143;
  int iVar144;
  int iVar145;
  byte bVar146;
  byte bVar149;
  int iVar147;
  int iVar148;
  byte bVar150;
  byte bVar151;
  byte bVar153;
  byte bVar154;
  int iVar152;
  byte bVar155;
  byte bVar156;
  byte bVar158;
  byte bVar159;
  int iVar157;
  byte bVar160;
  byte bVar161;
  byte bVar163;
  byte bVar164;
  int iVar162;
  byte bVar165;
  byte bVar166;
  byte bVar168;
  byte bVar169;
  int iVar167;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar190;
  int iVar188;
  int iVar189;
  byte bVar191;
  byte bVar192;
  byte bVar195;
  int iVar193;
  int iVar194;
  byte bVar196;
  byte bVar197;
  byte bVar200;
  int iVar198;
  int iVar199;
  byte bVar201;
  byte bVar202;
  byte bVar205;
  int iVar203;
  int iVar204;
  byte bVar206;
  byte bVar207;
  byte bVar210;
  int iVar208;
  int iVar209;
  byte bVar211;
  byte bVar212;
  byte bVar215;
  int iVar213;
  int iVar214;
  byte bVar216;
  byte bVar217;
  byte bVar220;
  int iVar218;
  int iVar219;
  byte bVar221;
  byte bVar222;
  byte bVar225;
  int iVar223;
  int iVar224;
  byte bVar226;
  byte bVar232;
  int iVar227;
  int iVar228;
  int iVar229;
  int iVar230;
  int iVar231;
  byte bVar233;
  byte bVar239;
  int iVar234;
  int iVar235;
  int iVar236;
  int iVar237;
  int iVar238;
  byte bVar240;
  byte bVar246;
  int iVar241;
  int iVar242;
  int iVar243;
  int iVar244;
  int iVar245;
  byte bVar247;
  byte bVar253;
  int iVar248;
  int iVar249;
  int iVar250;
  int iVar251;
  int iVar252;
  byte bVar254;
  int iVar255;
  int iVar256;
  int iVar257;
  int iVar258;
  int iVar259;
  byte bVar260;
  int iVar261;
  int iVar262;
  int iVar263;
  int iVar264;
  int iVar265;
  byte bVar266;
  int iVar267;
  int iVar268;
  int iVar269;
  int iVar270;
  int iVar271;
  byte bVar272;
  int iVar273;
  int iVar274;
  int iVar275;
  int iVar276;
  int iVar277;
  
  uVar15 = *(ulong *)(param_1 + 0x28);
  puVar14 = *(uint **)(param_1 + 0x30);
  uVar25 = (ulong)param_3 >> 2 & 0x3fffffff;
  iVar36 = (int)param_3;
  uVar60 = iVar36 + 0x1cU & 0xfffffffc;
  uVar26 = (ulong)uVar60;
  *(int *)(param_1 + 0x10) = (int)uVar25 + 6;
  if (uVar15 != uVar26) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      puVar14[uVar15 - 1] = 0;
    }
    UnalignedDeallocate(puVar14);
    AllocatorBase<unsigned_int>::CheckSize(uVar26);
    if (uVar60 == 0) {
      puVar14 = (uint *)0x0;
    }
    else {
      puVar14 = (uint *)UnalignedAllocate(uVar26 << 2);
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar26;
  *(uint **)(param_1 + 0x30) = puVar14;
  *(undefined8 *)(param_1 + 0x20) = 0x3fffffffffffffff;
  GetUserKey<unsigned_int>(1,puVar14,uVar25,(uchar *)(ulong)param_2,(ulong)param_3 & 0xffffffff);
  lVar18 = *(long *)(param_1 + 0x28);
  puVar2 = *(uint **)(param_1 + 0x30);
  puVar17 = &rcon;
  do {
    uVar60 = puVar14[(int)uVar25 - 1];
    uVar60 = *puVar17 ^ *puVar14 ^
             ((uint)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] << 0x18 |
              (uint)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] << 0x10 |
              (uint)(byte)Se[(ulong)uVar60 & 0xff] << 8 | (uint)(byte)Se[uVar60 >> 0x18]);
    puVar1 = puVar14 + uVar25;
    *puVar1 = uVar60;
    uVar60 = uVar60 ^ puVar14[1];
    puVar1[1] = uVar60;
    uVar60 = puVar14[2] ^ uVar60;
    puVar1[2] = uVar60;
    puVar1[3] = puVar14[3] ^ uVar60;
    if (puVar1 + 4 == puVar2 + lVar18) {
      uVar15 = (**(code **)(*(long *)(param_1 + 8) + 0x48))();
      Var13 = _DAT_004c4f40;
      Var12 = _DAT_004c4d70;
      auVar11 = _DAT_004c4a50;
      auVar10 = _DAT_004c37b0;
      if ((uVar15 & 1) == 0) {
        if (DAT_02122a34 == '\0') {
          lVar18 = 0;
          auVar10._9_7_ = _UNK_004c4d79;
          auVar10._0_9_ = _DAT_004c4d70;
          auVar11._9_7_ = _UNK_004c4f49;
          auVar11._0_9_ = _DAT_004c4f40;
          puVar19 = &DAT_02121a30;
          do {
            pauVar3 = (undefined (*) [16])((long)&Sd + lVar18);
            lVar18 = lVar18 + 0x10;
            auVar30[8] = 10;
            auVar30._0_8_ = 0x1010100910101008;
            auVar30[9] = 0x10;
            auVar30[10] = 0x10;
            auVar30[11] = 0x10;
            auVar30[12] = 0xb;
            auVar30[13] = 0x10;
            auVar30[14] = 0x10;
            auVar30[15] = 0x10;
            auVar61 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar30);
            auVar48[8] = 0xe;
            auVar48._0_8_ = 0x1010100d1010100c;
            auVar30 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar11);
            auVar54 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar10);
            auVar48[9] = 0x10;
            auVar48[10] = 0x10;
            auVar48[11] = 0x10;
            auVar48[12] = 0xf;
            auVar48[13] = 0x10;
            auVar48[14] = 0x10;
            auVar48[15] = 0x10;
            auVar48 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar48);
            uVar86 = auVar61._0_4_;
            uVar89 = auVar61._4_4_;
            uVar92 = auVar61._8_4_;
            uVar95 = auVar61._12_4_;
            uVar60 = auVar30._0_4_;
            uVar16 = auVar30._4_4_;
            uVar65 = auVar30._8_4_;
            uVar67 = auVar30._12_4_;
            uVar72 = auVar54._0_4_;
            uVar75 = auVar54._4_4_;
            uVar79 = auVar54._8_4_;
            uVar82 = auVar54._12_4_;
            uVar98 = auVar48._0_4_;
            uVar102 = auVar48._4_4_;
            uVar106 = auVar48._8_4_;
            uVar109 = auVar48._12_4_;
            bVar28 = (byte)(uVar86 >> 5);
            bVar73 = (byte)(uVar89 >> 5);
            bVar34 = (byte)(uVar92 >> 5);
            bVar29 = (byte)(uVar95 >> 5);
            bVar50 = (byte)(uVar60 >> 5);
            bVar129 = (byte)(uVar16 >> 5);
            bVar84 = (byte)(uVar65 >> 5);
            bVar51 = (byte)(uVar67 >> 5);
            bVar77 = (byte)(uVar72 >> 5);
            bVar35 = (byte)(uVar75 >> 5);
            bVar125 = (byte)(uVar79 >> 5);
            bVar80 = (byte)(uVar82 >> 5);
            bVar32 = (byte)(uVar98 >> 5);
            bVar27 = (byte)(uVar102 >> 5);
            bVar70 = (byte)(uVar106 >> 5);
            bVar33 = (byte)(uVar109 >> 5);
            iVar71 = uVar60 << 3;
            bVar69 = (byte)((uint)iVar71 >> 0x10);
            iVar78 = uVar16 << 3;
            bVar121 = (byte)((uint)iVar78 >> 0x10);
            iVar85 = uVar65 << 3;
            bVar130 = (byte)((uint)iVar85 >> 0x10);
            iVar91 = uVar67 << 3;
            bVar139 = (byte)((uint)iVar91 >> 0x10);
            iVar97 = uVar72 << 3;
            bVar76 = (byte)((uint)iVar97 >> 0x10);
            iVar105 = uVar75 << 3;
            bVar83 = (byte)((uint)iVar105 >> 0x10);
            iVar123 = uVar79 << 3;
            bVar160 = (byte)((uint)iVar123 >> 0x10);
            iVar131 = uVar82 << 3;
            bVar175 = (byte)((uint)iVar131 >> 0x10);
            iVar124 = uVar86 << 3;
            iVar128 = uVar89 << 3;
            iVar132 = uVar92 << 3;
            iVar135 = uVar95 << 3;
            iVar138 = uVar98 << 3;
            iVar141 = uVar102 << 3;
            iVar145 = uVar106 << 3;
            iVar148 = uVar109 << 3;
            iVar227 = (uint)(bVar32 & 1) * 0x11b;
            iVar234 = (uint)(bVar27 & 1) * 0x11b;
            iVar241 = (uint)(bVar70 & 1) * 0x11b;
            iVar248 = (uint)(bVar33 & 1) * 0x11b;
            iVar255 = (uint)(bVar28 & 1) * 0x11b;
            iVar261 = (uint)(bVar73 & 1) * 0x11b;
            iVar267 = (uint)(bVar34 & 1) * 0x11b;
            iVar273 = (uint)(bVar29 & 1) * 0x11b;
            iVar36 = (uint)(bVar77 & 1) * 0x11b;
            iVar39 = (uint)(bVar35 & 1) * 0x11b;
            iVar41 = (uint)(bVar125 & 1) * 0x11b;
            iVar44 = (uint)(bVar80 & 1) * 0x11b;
            iVar74 = (uint)(bVar50 & 1) * 0x11b;
            iVar88 = (uint)(bVar129 & 1) * 0x11b;
            iVar101 = (uint)(bVar84 & 1) * 0x11b;
            iVar127 = (uint)(bVar51 & 1) * 0x11b;
            bVar215 = (byte)((uint)iVar138 >> 0x10);
            bVar225 = (byte)((uint)iVar141 >> 0x10);
            bVar239 = (byte)((uint)iVar145 >> 0x10);
            bVar253 = (byte)((uint)iVar148 >> 0x10);
            bVar179 = (byte)((uint)iVar124 >> 0x10);
            bVar183 = (byte)((uint)iVar128 >> 0x10);
            bVar195 = (byte)((uint)iVar132 >> 0x10);
            bVar205 = (byte)((uint)iVar135 >> 0x10);
            uVar38 = CONCAT14(bVar73,(uint)(bVar28 & 2)) & 0x200ffffff;
            uVar43 = CONCAT14(bVar29,(uint)(bVar34 & 2)) & 0x200ffffff;
            uVar46 = CONCAT14(bVar27,(uint)(bVar32 & 2)) & 0x200ffffff;
            uVar47 = CONCAT14(bVar33,(uint)(bVar70 & 2)) & 0x200ffffff;
            iVar228 = (uint)(bVar50 & 2) * 0x11b;
            iVar235 = (uint)(bVar129 & 2) * 0x11b;
            iVar242 = (uint)(bVar84 & 2) * 0x11b;
            iVar249 = (uint)(bVar51 & 2) * 0x11b;
            iVar256 = (uint)(bVar77 & 2) * 0x11b;
            iVar262 = (uint)(bVar35 & 2) * 0x11b;
            iVar268 = (uint)(bVar125 & 2) * 0x11b;
            iVar274 = (uint)(bVar80 & 2) * 0x11b;
            iVar37 = (int)uVar38 * 0x11b;
            iVar40 = (uint)(byte)(uVar38 >> 0x20) * 0x11b;
            iVar42 = (int)uVar43 * 0x11b;
            iVar45 = (uint)(byte)(uVar43 >> 0x20) * 0x11b;
            iVar81 = (int)uVar46 * 0x11b;
            iVar94 = (uint)(byte)(uVar46 >> 0x20) * 0x11b;
            iVar108 = (int)uVar47 * 0x11b;
            iVar134 = (uint)(byte)(uVar47 >> 0x20) * 0x11b;
            iVar137 = (uint)(bVar32 & 4) * 0x11b;
            iVar140 = (uint)(bVar27 & 4) * 0x11b;
            iVar144 = (uint)(bVar70 & 4) * 0x11b;
            iVar147 = (uint)(bVar33 & 4) * 0x11b;
            iVar152 = (uint)(bVar28 & 4) * 0x11b;
            iVar157 = (uint)(bVar73 & 4) * 0x11b;
            iVar162 = (uint)(bVar34 & 4) * 0x11b;
            iVar167 = (uint)(bVar29 & 4) * 0x11b;
            iVar188 = (uint)(bVar77 & 4) * 0x11b;
            iVar193 = (uint)(bVar35 & 4) * 0x11b;
            iVar198 = (uint)(bVar125 & 4) * 0x11b;
            iVar203 = (uint)(bVar80 & 4) * 0x11b;
            iVar208 = (uint)(bVar50 & 4) * 0x11b;
            iVar213 = (uint)(bVar129 & 4) * 0x11b;
            iVar218 = (uint)(bVar84 & 4) * 0x11b;
            iVar223 = (uint)(bVar51 & 4) * 0x11b;
            bVar100 = (byte)iVar227 ^ (byte)iVar138 ^ (byte)iVar81 ^ (byte)iVar137;
            bVar58 = (byte)((uint)iVar227 >> 8) ^ (byte)((uint)iVar138 >> 8) ^
                     (byte)((uint)iVar81 >> 8) ^ (byte)((uint)iVar137 >> 8);
            bVar104 = (byte)iVar234 ^ (byte)iVar141 ^ (byte)iVar94 ^ (byte)iVar140;
            bVar59 = (byte)((uint)iVar234 >> 8) ^ (byte)((uint)iVar141 >> 8) ^
                     (byte)((uint)iVar94 >> 8) ^ (byte)((uint)iVar140 >> 8);
            bVar143 = (byte)iVar241 ^ (byte)iVar145 ^ (byte)iVar108 ^ (byte)iVar144;
            bVar107 = (byte)((uint)iVar241 >> 8) ^ (byte)((uint)iVar145 >> 8) ^
                      (byte)((uint)iVar108 >> 8) ^ (byte)((uint)iVar144 >> 8);
            bVar63 = (byte)iVar248 ^ (byte)iVar148 ^ (byte)iVar134 ^ (byte)iVar147;
            bVar149 = (byte)((uint)iVar248 >> 8) ^ (byte)((uint)iVar148 >> 8) ^
                      (byte)((uint)iVar134 >> 8) ^ (byte)((uint)iVar147 >> 8);
            bVar87 = (byte)iVar255 ^ (byte)iVar124 ^ (byte)iVar37 ^ (byte)iVar152;
            bVar52 = (byte)((uint)iVar255 >> 8) ^ (byte)((uint)iVar124 >> 8) ^
                     (byte)((uint)iVar37 >> 8) ^ (byte)((uint)iVar152 >> 8);
            bVar90 = (byte)iVar261 ^ (byte)iVar128 ^ (byte)iVar40 ^ (byte)iVar157;
            bVar53 = (byte)((uint)iVar261 >> 8) ^ (byte)((uint)iVar128 >> 8) ^
                     (byte)((uint)iVar40 >> 8) ^ (byte)((uint)iVar157 >> 8);
            bVar93 = (byte)iVar267 ^ (byte)iVar132 ^ (byte)iVar42 ^ (byte)iVar162;
            bVar56 = (byte)((uint)iVar267 >> 8) ^ (byte)((uint)iVar132 >> 8) ^
                     (byte)((uint)iVar42 >> 8) ^ (byte)((uint)iVar162 >> 8);
            bVar96 = (byte)iVar273 ^ (byte)iVar135 ^ (byte)iVar45 ^ (byte)iVar167;
            bVar57 = (byte)((uint)iVar273 >> 8) ^ (byte)((uint)iVar135 >> 8) ^
                     (byte)((uint)iVar45 >> 8) ^ (byte)((uint)iVar167 >> 8);
            bVar151 = (byte)iVar36 ^ (byte)iVar97 ^ (byte)iVar256 ^ (byte)iVar188;
            bVar153 = (byte)((uint)iVar36 >> 8) ^ (byte)((uint)iVar97 >> 8) ^
                      (byte)((uint)iVar256 >> 8) ^ (byte)((uint)iVar188 >> 8);
            bVar156 = (byte)iVar39 ^ (byte)iVar105 ^ (byte)iVar262 ^ (byte)iVar193;
            bVar158 = (byte)((uint)iVar39 >> 8) ^ (byte)((uint)iVar105 >> 8) ^
                      (byte)((uint)iVar262 >> 8) ^ (byte)((uint)iVar193 >> 8);
            bVar161 = (byte)iVar41 ^ (byte)iVar123 ^ (byte)iVar268 ^ (byte)iVar198;
            bVar163 = (byte)((uint)iVar41 >> 8) ^ (byte)((uint)iVar123 >> 8) ^
                      (byte)((uint)iVar268 >> 8) ^ (byte)((uint)iVar198 >> 8);
            bVar166 = (byte)iVar44 ^ (byte)iVar131 ^ (byte)iVar274 ^ (byte)iVar203;
            bVar168 = (byte)((uint)iVar44 >> 8) ^ (byte)((uint)iVar131 >> 8) ^
                      (byte)((uint)iVar274 >> 8) ^ (byte)((uint)iVar203 >> 8);
            bVar170 = (byte)iVar74 ^ (byte)iVar71 ^ (byte)iVar228 ^ (byte)iVar208;
            bVar172 = (byte)((uint)iVar74 >> 8) ^ (byte)((uint)iVar71 >> 8) ^
                      (byte)((uint)iVar228 >> 8) ^ (byte)((uint)iVar208 >> 8);
            bVar174 = (byte)iVar88 ^ (byte)iVar78 ^ (byte)iVar235 ^ (byte)iVar213;
            bVar176 = (byte)((uint)iVar88 >> 8) ^ (byte)((uint)iVar78 >> 8) ^
                      (byte)((uint)iVar235 >> 8) ^ (byte)((uint)iVar213 >> 8);
            bVar178 = (byte)iVar101 ^ (byte)iVar85 ^ (byte)iVar242 ^ (byte)iVar218;
            bVar180 = (byte)((uint)iVar101 >> 8) ^ (byte)((uint)iVar85 >> 8) ^
                      (byte)((uint)iVar242 >> 8) ^ (byte)((uint)iVar218 >> 8);
            bVar182 = (byte)iVar127 ^ (byte)iVar91 ^ (byte)iVar249 ^ (byte)iVar223;
            bVar184 = (byte)((uint)iVar127 >> 8) ^ (byte)((uint)iVar91 >> 8) ^
                      (byte)((uint)iVar249 >> 8) ^ (byte)((uint)iVar223 >> 8);
            iVar101 = uVar72 << 1;
            iVar108 = uVar75 << 1;
            iVar127 = uVar79 << 1;
            iVar134 = uVar82 << 1;
            iVar74 = uVar60 << 1;
            iVar81 = uVar16 << 1;
            iVar88 = uVar65 << 1;
            iVar94 = uVar67 << 1;
            iVar229 = (uVar60 >> 7) * 0x11b;
            iVar236 = (uVar16 >> 7) * 0x11b;
            iVar243 = (uVar65 >> 7) * 0x11b;
            iVar250 = (uVar67 >> 7) * 0x11b;
            iVar257 = (uVar72 >> 7) * 0x11b;
            iVar263 = (uVar75 >> 7) * 0x11b;
            iVar269 = (uVar79 >> 7) * 0x11b;
            iVar275 = (uVar82 >> 7) * 0x11b;
            bVar77 = (byte)(uVar86 >> 6);
            bVar35 = (byte)(uVar89 >> 6);
            bVar125 = (byte)(uVar92 >> 6);
            bVar80 = (byte)(uVar95 >> 6);
            bVar50 = (byte)(uVar98 >> 6);
            bVar129 = (byte)(uVar102 >> 6);
            bVar84 = (byte)(uVar106 >> 6);
            bVar51 = (byte)(uVar109 >> 6);
            iVar189 = uVar98 << 1;
            iVar194 = uVar102 << 1;
            iVar199 = uVar106 << 1;
            iVar204 = uVar109 << 1;
            iVar209 = uVar86 << 1;
            iVar214 = uVar89 << 1;
            iVar219 = uVar92 << 1;
            iVar224 = uVar95 << 1;
            iVar137 = (uVar86 >> 7) * 0x11b;
            iVar144 = (uVar89 >> 7) * 0x11b;
            iVar152 = (uVar92 >> 7) * 0x11b;
            iVar162 = (uVar95 >> 7) * 0x11b;
            iVar188 = (uVar98 >> 7) * 0x11b;
            iVar198 = (uVar102 >> 7) * 0x11b;
            iVar208 = (uVar106 >> 7) * 0x11b;
            iVar218 = (uVar109 >> 7) * 0x11b;
            bVar112 = (byte)iVar229 ^ (byte)iVar74;
            bVar118 = (byte)iVar236 ^ (byte)iVar81;
            bVar122 = (byte)iVar243 ^ (byte)iVar88;
            bVar133 = (byte)iVar250 ^ (byte)iVar94;
            bVar117 = (byte)iVar257 ^ (byte)iVar101;
            bVar119 = (byte)iVar263 ^ (byte)iVar108;
            bVar150 = (byte)iVar269 ^ (byte)iVar127;
            bVar165 = (byte)iVar275 ^ (byte)iVar134;
            iVar230 = uVar98 << 2;
            iVar237 = uVar102 << 2;
            iVar244 = uVar106 << 2;
            iVar251 = uVar109 << 2;
            iVar258 = uVar86 << 2;
            iVar264 = uVar89 << 2;
            iVar270 = uVar92 << 2;
            iVar276 = uVar95 << 2;
            bVar32 = (byte)(uVar60 >> 6);
            bVar27 = (byte)(uVar16 >> 6);
            bVar70 = (byte)(uVar65 >> 6);
            bVar33 = (byte)(uVar67 >> 6);
            bVar28 = (byte)(uVar72 >> 6);
            bVar73 = (byte)(uVar75 >> 6);
            bVar34 = (byte)(uVar79 >> 6);
            bVar29 = (byte)(uVar82 >> 6);
            iVar36 = (uint)(bVar77 & 1) * 0x11b;
            iVar37 = (uint)(bVar35 & 1) * 0x11b;
            iVar39 = (uint)(bVar125 & 1) * 0x11b;
            iVar40 = (uint)(bVar80 & 1) * 0x11b;
            iVar41 = (uint)(bVar50 & 1) * 0x11b;
            iVar42 = (uint)(bVar129 & 1) * 0x11b;
            iVar44 = (uint)(bVar84 & 1) * 0x11b;
            iVar45 = (uint)(bVar51 & 1) * 0x11b;
            bVar206 = (byte)iVar137 ^ (byte)iVar209;
            bVar211 = (byte)iVar144 ^ (byte)iVar214;
            bVar216 = (byte)iVar152 ^ (byte)iVar219;
            bVar221 = (byte)iVar162 ^ (byte)iVar224;
            bVar186 = (byte)iVar188 ^ (byte)iVar189;
            bVar191 = (byte)iVar198 ^ (byte)iVar194;
            bVar196 = (byte)iVar208 ^ (byte)iVar199;
            bVar201 = (byte)iVar218 ^ (byte)iVar204;
            iVar140 = uVar72 << 2;
            iVar147 = uVar75 << 2;
            iVar157 = uVar79 << 2;
            iVar167 = uVar82 << 2;
            iVar193 = uVar60 << 2;
            iVar203 = uVar16 << 2;
            iVar213 = uVar65 << 2;
            iVar223 = uVar67 << 2;
            iVar255 = (uint)(bVar32 & 1) * 0x11b;
            iVar256 = (uint)(bVar27 & 1) * 0x11b;
            iVar261 = (uint)(bVar70 & 1) * 0x11b;
            iVar262 = (uint)(bVar33 & 1) * 0x11b;
            iVar267 = (uint)(bVar28 & 1) * 0x11b;
            iVar268 = (uint)(bVar73 & 1) * 0x11b;
            iVar273 = (uint)(bVar34 & 1) * 0x11b;
            iVar274 = (uint)(bVar29 & 1) * 0x11b;
            uVar38 = CONCAT14(bVar73,(uint)(bVar28 & 2)) & 0x200ffffff;
            uVar43 = CONCAT14(bVar29,(uint)(bVar34 & 2)) & 0x200ffffff;
            uVar46 = CONCAT14(bVar35,(uint)(bVar77 & 2)) & 0x200ffffff;
            uVar47 = CONCAT14(bVar80,(uint)(bVar125 & 2)) & 0x200ffffff;
            iVar231 = (uint)(bVar32 & 2) * 0x11b;
            iVar238 = (uint)(bVar27 & 2) * 0x11b;
            iVar245 = (uint)(bVar70 & 2) * 0x11b;
            iVar252 = (uint)(bVar33 & 2) * 0x11b;
            iVar259 = (uint)(bVar50 & 2) * 0x11b;
            iVar265 = (uint)(bVar129 & 2) * 0x11b;
            iVar271 = (uint)(bVar84 & 2) * 0x11b;
            iVar277 = (uint)(bVar51 & 2) * 0x11b;
            iVar227 = (int)uVar38 * 0x11b;
            iVar228 = (uint)(byte)(uVar38 >> 0x20) * 0x11b;
            iVar234 = (int)uVar43 * 0x11b;
            iVar235 = (uint)(byte)(uVar43 >> 0x20) * 0x11b;
            iVar241 = (int)uVar46 * 0x11b;
            iVar242 = (uint)(byte)(uVar46 >> 0x20) * 0x11b;
            iVar248 = (int)uVar47 * 0x11b;
            iVar249 = (uint)(byte)(uVar47 >> 0x20) * 0x11b;
            bVar226 = (byte)iVar255 ^ (byte)iVar193 ^ (byte)iVar231 ^ bVar170;
            bVar233 = (byte)iVar256 ^ (byte)iVar203 ^ (byte)iVar238 ^ bVar174;
            bVar240 = (byte)iVar261 ^ (byte)iVar213 ^ (byte)iVar245 ^ bVar178;
            bVar247 = (byte)iVar262 ^ (byte)iVar223 ^ (byte)iVar252 ^ bVar182;
            bVar170 = bVar170 ^ auVar30[0];
            bVar173 = bVar172 ^ auVar30[1];
            bVar174 = bVar174 ^ auVar30[4];
            bVar177 = bVar176 ^ auVar30[5];
            bVar178 = bVar178 ^ auVar30[8];
            bVar181 = bVar180 ^ auVar30[9];
            bVar182 = bVar182 ^ auVar30[12];
            bVar185 = bVar184 ^ auVar30[13];
            bVar254 = (byte)iVar267 ^ (byte)iVar140 ^ (byte)iVar227 ^ bVar151;
            bVar260 = (byte)iVar268 ^ (byte)iVar147 ^ (byte)iVar228 ^ bVar156;
            bVar266 = (byte)iVar273 ^ (byte)iVar157 ^ (byte)iVar234 ^ bVar161;
            bVar272 = (byte)iVar274 ^ (byte)iVar167 ^ (byte)iVar235 ^ bVar166;
            bVar151 = bVar151 ^ auVar54[0];
            bVar154 = bVar153 ^ auVar54[1];
            bVar156 = bVar156 ^ auVar54[4];
            bVar159 = bVar158 ^ auVar54[5];
            bVar161 = bVar161 ^ auVar54[8];
            bVar164 = bVar163 ^ auVar54[9];
            bVar166 = bVar166 ^ auVar54[12];
            bVar169 = bVar168 ^ auVar54[13];
            bVar28 = (byte)iVar41 ^ (byte)iVar230 ^ (byte)iVar259 ^ bVar100;
            bVar73 = (byte)iVar42 ^ (byte)iVar237 ^ (byte)iVar265 ^ bVar104;
            bVar34 = (byte)iVar44 ^ (byte)iVar244 ^ (byte)iVar271 ^ bVar143;
            bVar29 = (byte)iVar45 ^ (byte)iVar251 ^ (byte)iVar277 ^ bVar63;
            bVar100 = bVar100 ^ auVar48[0];
            bVar210 = bVar58 ^ auVar48[1];
            bVar104 = bVar104 ^ auVar48[4];
            bVar220 = bVar59 ^ auVar48[5];
            bVar143 = bVar143 ^ auVar48[8];
            bVar232 = bVar107 ^ auVar48[9];
            bVar63 = bVar63 ^ auVar48[12];
            bVar246 = bVar149 ^ auVar48[13];
            bVar32 = (byte)iVar36 ^ (byte)iVar258 ^ (byte)iVar241 ^ bVar87;
            bVar27 = (byte)iVar37 ^ (byte)iVar264 ^ (byte)iVar242 ^ bVar90;
            bVar70 = (byte)iVar39 ^ (byte)iVar270 ^ (byte)iVar248 ^ bVar93;
            bVar33 = (byte)iVar40 ^ (byte)iVar276 ^ (byte)iVar249 ^ bVar96;
            bVar87 = bVar87 ^ auVar61[0];
            bVar125 = bVar52 ^ auVar61[1];
            bVar90 = bVar90 ^ auVar61[4];
            bVar129 = bVar53 ^ auVar61[5];
            bVar93 = bVar93 ^ auVar61[8];
            bVar190 = bVar56 ^ auVar61[9];
            bVar96 = bVar96 ^ auVar61[12];
            bVar200 = bVar57 ^ auVar61[13];
            bVar187 = bVar100 ^ bVar186;
            bVar192 = bVar104 ^ bVar191;
            bVar197 = bVar143 ^ bVar196;
            bVar202 = bVar63 ^ bVar201;
            bVar207 = bVar87 ^ bVar206;
            bVar212 = bVar90 ^ bVar211;
            bVar217 = bVar93 ^ bVar216;
            bVar222 = bVar96 ^ bVar221;
            bVar142 = bVar151 ^ bVar117;
            bVar146 = bVar156 ^ bVar119;
            bVar155 = bVar161 ^ bVar150;
            bVar171 = bVar166 ^ bVar165;
            bVar116 = bVar170 ^ bVar112;
            bVar120 = bVar174 ^ bVar118;
            bVar126 = bVar178 ^ bVar122;
            bVar136 = bVar182 ^ bVar133;
            bVar99 = bVar210 ^ (byte)((uint)iVar188 >> 8) ^ (byte)((uint)iVar189 >> 8) |
                     bVar28 ^ auVar48[0];
            bVar113 = bVar100 | bVar215 ^ auVar48[2] ^
                                (byte)((uint)iVar188 >> 0x10) ^ (byte)((uint)iVar189 >> 0x10) |
                      (byte)((uint)iVar41 >> 8) ^ (byte)((uint)iVar230 >> 8) ^
                      (byte)((uint)iVar259 >> 8) ^ bVar58 ^ auVar48[1];
            bVar66 = bVar220 ^ (byte)((uint)iVar198 >> 8) ^ (byte)((uint)iVar194 >> 8) |
                     bVar73 ^ auVar48[4];
            bVar103 = bVar104 | bVar225 ^ auVar48[6] ^
                                (byte)((uint)iVar198 >> 0x10) ^ (byte)((uint)iVar194 >> 0x10) |
                      (byte)((uint)iVar42 >> 8) ^ (byte)((uint)iVar237 >> 8) ^
                      (byte)((uint)iVar265 >> 8) ^ bVar59 ^ auVar48[5];
            bVar114 = bVar232 ^ (byte)((uint)iVar208 >> 8) ^ (byte)((uint)iVar199 >> 8) |
                      bVar34 ^ auVar48[8];
            bVar68 = bVar143 | bVar239 ^ auVar48[10] ^
                               (byte)((uint)iVar208 >> 0x10) ^ (byte)((uint)iVar199 >> 0x10) |
                     (byte)((uint)iVar44 >> 8) ^ (byte)((uint)iVar244 >> 8) ^
                     (byte)((uint)iVar271 >> 8) ^ bVar107 ^ auVar48[9];
            bVar110 = bVar246 ^ (byte)((uint)iVar218 >> 8) ^ (byte)((uint)iVar204 >> 8) |
                      bVar29 ^ auVar48[12];
            bVar115 = bVar63 | bVar253 ^ auVar48[14] ^
                               (byte)((uint)iVar218 >> 0x10) ^ (byte)((uint)iVar204 >> 0x10) |
                      (byte)((uint)iVar45 >> 8) ^ (byte)((uint)iVar251 >> 8) ^
                      (byte)((uint)iVar277 >> 8) ^ bVar149 ^ auVar48[13];
            bVar104 = bVar125 ^ (byte)((uint)iVar137 >> 8) ^ (byte)((uint)iVar209 >> 8) |
                      bVar32 ^ auVar61[0];
            bVar59 = bVar87 | bVar179 ^ auVar61[2] ^
                              (byte)((uint)iVar137 >> 0x10) ^ (byte)((uint)iVar209 >> 0x10) |
                     (byte)((uint)iVar36 >> 8) ^ (byte)((uint)iVar258 >> 8) ^
                     (byte)((uint)iVar241 >> 8) ^ bVar52 ^ auVar61[1];
            bVar143 = bVar129 ^ (byte)((uint)iVar144 >> 8) ^ (byte)((uint)iVar214 >> 8) |
                      bVar27 ^ auVar61[4];
            bVar107 = bVar90 | bVar183 ^ auVar61[6] ^
                               (byte)((uint)iVar144 >> 0x10) ^ (byte)((uint)iVar214 >> 0x10) |
                      (byte)((uint)iVar37 >> 8) ^ (byte)((uint)iVar264 >> 8) ^
                      (byte)((uint)iVar242 >> 8) ^ bVar53 ^ auVar61[5];
            bVar63 = bVar190 ^ (byte)((uint)iVar152 >> 8) ^ (byte)((uint)iVar219 >> 8) |
                     bVar70 ^ auVar61[8];
            bVar149 = bVar93 | bVar195 ^ auVar61[10] ^
                               (byte)((uint)iVar152 >> 0x10) ^ (byte)((uint)iVar219 >> 0x10) |
                      (byte)((uint)iVar39 >> 8) ^ (byte)((uint)iVar270 >> 8) ^
                      (byte)((uint)iVar248 >> 8) ^ bVar56 ^ auVar61[9];
            bVar111 = bVar200 ^ (byte)((uint)iVar162 >> 8) ^ (byte)((uint)iVar224 >> 8) |
                      bVar33 ^ auVar61[12];
            bVar64 = bVar96 | bVar205 ^ auVar61[14] ^
                              (byte)((uint)iVar162 >> 0x10) ^ (byte)((uint)iVar224 >> 0x10) |
                     (byte)((uint)iVar40 >> 8) ^ (byte)((uint)iVar276 >> 8) ^
                     (byte)((uint)iVar249 >> 8) ^ bVar57 ^ auVar61[13];
            bVar90 = bVar154 ^ (byte)((uint)iVar257 >> 8) ^ (byte)((uint)iVar101 >> 8) |
                     bVar254 ^ auVar54[0];
            bVar53 = bVar151 | bVar76 ^ auVar54[2] ^
                               (byte)((uint)iVar257 >> 0x10) ^ (byte)((uint)iVar101 >> 0x10) |
                     (byte)((uint)iVar267 >> 8) ^ (byte)((uint)iVar140 >> 8) ^
                     (byte)((uint)iVar227 >> 8) ^ bVar153 ^ auVar54[1];
            bVar93 = bVar159 ^ (byte)((uint)iVar263 >> 8) ^ (byte)((uint)iVar108 >> 8) |
                     bVar260 ^ auVar54[4];
            bVar56 = bVar156 | bVar83 ^ auVar54[6] ^
                               (byte)((uint)iVar263 >> 0x10) ^ (byte)((uint)iVar108 >> 0x10) |
                     (byte)((uint)iVar268 >> 8) ^ (byte)((uint)iVar147 >> 8) ^
                     (byte)((uint)iVar228 >> 8) ^ bVar158 ^ auVar54[5];
            bVar96 = bVar164 ^ (byte)((uint)iVar269 >> 8) ^ (byte)((uint)iVar127 >> 8) |
                     bVar266 ^ auVar54[8];
            bVar57 = bVar161 | bVar160 ^ auVar54[10] ^
                               (byte)((uint)iVar269 >> 0x10) ^ (byte)((uint)iVar127 >> 0x10) |
                     (byte)((uint)iVar273 >> 8) ^ (byte)((uint)iVar157 >> 8) ^
                     (byte)((uint)iVar234 >> 8) ^ bVar163 ^ auVar54[9];
            bVar100 = bVar169 ^ (byte)((uint)iVar275 >> 8) ^ (byte)((uint)iVar134 >> 8) |
                      bVar272 ^ auVar54[12];
            bVar58 = bVar166 | bVar175 ^ auVar54[14] ^
                               (byte)((uint)iVar275 >> 0x10) ^ (byte)((uint)iVar134 >> 0x10) |
                     (byte)((uint)iVar274 >> 8) ^ (byte)((uint)iVar167 >> 8) ^
                     (byte)((uint)iVar235 >> 8) ^ bVar168 ^ auVar54[13];
            bVar77 = bVar173 ^ (byte)((uint)iVar229 >> 8) ^ (byte)((uint)iVar74 >> 8) |
                     bVar226 ^ auVar30[0];
            bVar35 = bVar170 | bVar69 ^ auVar30[2] ^
                               (byte)((uint)iVar229 >> 0x10) ^ (byte)((uint)iVar74 >> 0x10) |
                     (byte)((uint)iVar255 >> 8) ^ (byte)((uint)iVar193 >> 8) ^
                     (byte)((uint)iVar231 >> 8) ^ bVar172 ^ auVar30[1];
            bVar80 = bVar177 ^ (byte)((uint)iVar236 >> 8) ^ (byte)((uint)iVar81 >> 8) |
                     bVar233 ^ auVar30[4];
            bVar50 = bVar174 | bVar121 ^ auVar30[6] ^
                               (byte)((uint)iVar236 >> 0x10) ^ (byte)((uint)iVar81 >> 0x10) |
                     (byte)((uint)iVar256 >> 8) ^ (byte)((uint)iVar203 >> 8) ^
                     (byte)((uint)iVar238 >> 8) ^ bVar176 ^ auVar30[5];
            bVar84 = bVar181 ^ (byte)((uint)iVar243 >> 8) ^ (byte)((uint)iVar88 >> 8) |
                     bVar240 ^ auVar30[8];
            bVar51 = bVar178 | bVar130 ^ auVar30[10] ^
                               (byte)((uint)iVar243 >> 0x10) ^ (byte)((uint)iVar88 >> 0x10) |
                     (byte)((uint)iVar261 >> 8) ^ (byte)((uint)iVar213 >> 8) ^
                     (byte)((uint)iVar245 >> 8) ^ bVar180 ^ auVar30[9];
            bVar87 = bVar185 ^ (byte)((uint)iVar250 >> 8) ^ (byte)((uint)iVar94 >> 8) |
                     bVar247 ^ auVar30[12];
            bVar52 = bVar182 | bVar139 ^ auVar30[14] ^
                               (byte)((uint)iVar250 >> 0x10) ^ (byte)((uint)iVar94 >> 0x10) |
                     (byte)((uint)iVar262 >> 8) ^ (byte)((uint)iVar223 >> 8) ^
                     (byte)((uint)iVar252 >> 8) ^ bVar184 ^ auVar30[13];
            bVar28 = bVar210 | (byte)((uint)iVar138 >> 0x18) ^ auVar48[3] ^
                               (byte)((uint)iVar188 >> 0x18) ^ (byte)((uint)iVar189 >> 0x18) |
                     (byte)((uint)iVar230 >> 0x10) ^ bVar215 ^ auVar48[2] | bVar28 ^ bVar186;
            bVar73 = bVar220 | (byte)((uint)iVar141 >> 0x18) ^ auVar48[7] ^
                               (byte)((uint)iVar198 >> 0x18) ^ (byte)((uint)iVar194 >> 0x18) |
                     (byte)((uint)iVar237 >> 0x10) ^ bVar225 ^ auVar48[6] | bVar73 ^ bVar191;
            bVar34 = bVar232 | (byte)((uint)iVar145 >> 0x18) ^ auVar48[11] ^
                               (byte)((uint)iVar208 >> 0x18) ^ (byte)((uint)iVar199 >> 0x18) |
                     (byte)((uint)iVar244 >> 0x10) ^ bVar239 ^ auVar48[10] | bVar34 ^ bVar196;
            bVar29 = bVar246 | (byte)((uint)iVar148 >> 0x18) ^ auVar48[15] ^
                               (byte)((uint)iVar218 >> 0x18) ^ (byte)((uint)iVar204 >> 0x18) |
                     (byte)((uint)iVar251 >> 0x10) ^ bVar253 ^ auVar48[14] | bVar29 ^ bVar201;
            bVar32 = bVar125 | (byte)((uint)iVar124 >> 0x18) ^ auVar61[3] ^
                               (byte)((uint)iVar137 >> 0x18) ^ (byte)((uint)iVar209 >> 0x18) |
                     (byte)((uint)iVar258 >> 0x10) ^ bVar179 ^ auVar61[2] | bVar32 ^ bVar206;
            bVar27 = bVar129 | (byte)((uint)iVar128 >> 0x18) ^ auVar61[7] ^
                               (byte)((uint)iVar144 >> 0x18) ^ (byte)((uint)iVar214 >> 0x18) |
                     (byte)((uint)iVar264 >> 0x10) ^ bVar183 ^ auVar61[6] | bVar27 ^ bVar211;
            bVar70 = bVar190 | (byte)((uint)iVar132 >> 0x18) ^ auVar61[11] ^
                               (byte)((uint)iVar152 >> 0x18) ^ (byte)((uint)iVar219 >> 0x18) |
                     (byte)((uint)iVar270 >> 0x10) ^ bVar195 ^ auVar61[10] | bVar70 ^ bVar216;
            bVar33 = bVar200 | (byte)((uint)iVar135 >> 0x18) ^ auVar61[15] ^
                               (byte)((uint)iVar162 >> 0x18) ^ (byte)((uint)iVar224 >> 0x18) |
                     (byte)((uint)iVar276 >> 0x10) ^ bVar205 ^ auVar61[14] | bVar33 ^ bVar221;
            bVar117 = bVar154 | (byte)((uint)iVar97 >> 0x18) ^ auVar54[3] ^
                                (byte)((uint)iVar257 >> 0x18) ^ (byte)((uint)iVar101 >> 0x18) |
                      (byte)((uint)iVar140 >> 0x10) ^ bVar76 ^ auVar54[2] | bVar254 ^ bVar117;
            bVar76 = bVar159 | (byte)((uint)iVar105 >> 0x18) ^ auVar54[7] ^
                               (byte)((uint)iVar263 >> 0x18) ^ (byte)((uint)iVar108 >> 0x18) |
                     (byte)((uint)iVar147 >> 0x10) ^ bVar83 ^ auVar54[6] | bVar260 ^ bVar119;
            bVar119 = bVar164 | (byte)((uint)iVar123 >> 0x18) ^ auVar54[11] ^
                                (byte)((uint)iVar269 >> 0x18) ^ (byte)((uint)iVar127 >> 0x18) |
                      (byte)((uint)iVar157 >> 0x10) ^ bVar160 ^ auVar54[10] | bVar266 ^ bVar150;
            bVar83 = bVar169 | (byte)((uint)iVar131 >> 0x18) ^ auVar54[15] ^
                               (byte)((uint)iVar275 >> 0x18) ^ (byte)((uint)iVar134 >> 0x18) |
                     (byte)((uint)iVar167 >> 0x10) ^ bVar175 ^ auVar54[14] | bVar272 ^ bVar165;
            bVar125 = bVar173 | (byte)((uint)iVar71 >> 0x18) ^ auVar30[3] ^
                                (byte)((uint)iVar229 >> 0x18) ^ (byte)((uint)iVar74 >> 0x18) |
                      (byte)((uint)iVar193 >> 0x10) ^ bVar69 ^ auVar30[2] | bVar226 ^ bVar112;
            bVar129 = bVar177 | (byte)((uint)iVar78 >> 0x18) ^ auVar30[7] ^
                                (byte)((uint)iVar236 >> 0x18) ^ (byte)((uint)iVar81 >> 0x18) |
                      (byte)((uint)iVar203 >> 0x10) ^ bVar121 ^ auVar30[6] | bVar233 ^ bVar118;
            bVar112 = bVar181 | (byte)((uint)iVar85 >> 0x18) ^ auVar30[11] ^
                                (byte)((uint)iVar243 >> 0x18) ^ (byte)((uint)iVar88 >> 0x18) |
                      (byte)((uint)iVar213 >> 0x10) ^ bVar130 ^ auVar30[10] | bVar240 ^ bVar122;
            bVar69 = bVar185 | (byte)((uint)iVar91 >> 0x18) ^ auVar30[15] ^
                               (byte)((uint)iVar250 >> 0x18) ^ (byte)((uint)iVar94 >> 0x18) |
                     (byte)((uint)iVar223 >> 0x10) ^ bVar139 ^ auVar30[14] | bVar247 ^ bVar133;
            *(ulong *)(puVar19 + 10) =
                 CONCAT17(bVar33,CONCAT16(bVar64,CONCAT15(bVar111,CONCAT14(bVar222,CONCAT13(bVar70,
                                                  CONCAT12(bVar149,CONCAT11(bVar63,bVar217)))))));
            *(ulong *)(puVar19 + 8) =
                 CONCAT17(bVar27,CONCAT16(bVar107,CONCAT15(bVar143,CONCAT14(bVar212,CONCAT13(bVar32,
                                                  CONCAT12(bVar59,CONCAT11(bVar104,bVar207)))))));
            *(ulong *)(puVar19 + 0xe) =
                 CONCAT17(bVar29,CONCAT16(bVar115,CONCAT15(bVar110,CONCAT14(bVar202,CONCAT13(bVar34,
                                                  CONCAT12(bVar68,CONCAT11(bVar114,bVar197)))))));
            *(ulong *)(puVar19 + 0xc) =
                 CONCAT17(bVar73,CONCAT16(bVar103,CONCAT15(bVar66,CONCAT14(bVar192,CONCAT13(bVar28,
                                                  CONCAT12(bVar113,CONCAT11(bVar99,bVar187)))))));
            *(byte *)(puVar19 + 4) = bVar126;
            *(byte *)((long)puVar19 + 0x11) = bVar84;
            *(byte *)((long)puVar19 + 0x12) = bVar51;
            *(byte *)((long)puVar19 + 0x13) = bVar112;
            *(byte *)(puVar19 + 5) = bVar136;
            *(byte *)((long)puVar19 + 0x15) = bVar87;
            *(byte *)((long)puVar19 + 0x16) = bVar52;
            *(byte *)((long)puVar19 + 0x17) = bVar69;
            *(byte *)puVar19 = bVar116;
            *(byte *)((long)puVar19 + 1) = bVar77;
            *(byte *)((long)puVar19 + 2) = bVar35;
            *(byte *)((long)puVar19 + 3) = bVar125;
            *(byte *)(puVar19 + 1) = bVar120;
            *(byte *)((long)puVar19 + 5) = bVar80;
            *(byte *)((long)puVar19 + 6) = bVar50;
            *(byte *)((long)puVar19 + 7) = bVar129;
            *(byte *)(puVar19 + 8) = bVar155;
            *(byte *)((long)puVar19 + 0x21) = bVar96;
            *(byte *)((long)puVar19 + 0x22) = bVar57;
            *(byte *)((long)puVar19 + 0x23) = bVar119;
            *(byte *)(puVar19 + 9) = bVar171;
            *(byte *)((long)puVar19 + 0x25) = bVar100;
            *(byte *)((long)puVar19 + 0x26) = bVar58;
            *(byte *)((long)puVar19 + 0x27) = bVar83;
            *(byte *)(puVar19 + 4) = bVar142;
            *(byte *)((long)puVar19 + 0x11) = bVar90;
            *(byte *)((long)puVar19 + 0x12) = bVar53;
            *(byte *)((long)puVar19 + 0x13) = bVar117;
            *(byte *)(puVar19 + 5) = bVar146;
            *(byte *)((long)puVar19 + 0x15) = bVar93;
            *(byte *)((long)puVar19 + 0x16) = bVar56;
            *(byte *)((long)puVar19 + 0x17) = bVar76;
            uVar6 = CONCAT17(bVar120,CONCAT16(bVar129,CONCAT15(bVar50,CONCAT14(bVar80,CONCAT13(
                                                  bVar116,CONCAT12(bVar125,CONCAT11(bVar35,bVar77)))
                                                  ))));
            auVar54[8] = bVar84;
            auVar54._0_8_ = uVar6;
            auVar54[9] = bVar51;
            auVar54[10] = bVar112;
            auVar54[11] = bVar126;
            auVar54[12] = bVar87;
            auVar54[13] = bVar52;
            auVar54[14] = bVar69;
            auVar54[15] = bVar136;
            uVar7 = CONCAT17(bVar146,CONCAT16(bVar76,CONCAT15(bVar56,CONCAT14(bVar93,CONCAT13(
                                                  bVar142,CONCAT12(bVar117,CONCAT11(bVar53,bVar90)))
                                                  ))));
            auVar61[8] = bVar96;
            auVar61._0_8_ = uVar7;
            auVar61[9] = bVar57;
            auVar61[10] = bVar119;
            auVar61[11] = bVar155;
            auVar61[12] = bVar100;
            auVar61[13] = bVar58;
            auVar61[14] = bVar83;
            auVar61[15] = bVar171;
            *(long *)(puVar19 + 0x102) = auVar54._8_8_;
            *(undefined8 *)(puVar19 + 0x100) = uVar6;
            *(long *)(puVar19 + 0x106) = auVar61._8_8_;
            *(undefined8 *)(puVar19 + 0x104) = uVar7;
            *(ulong *)(puVar19 + 0x10a) =
                 CONCAT17(bVar222,CONCAT16(bVar33,CONCAT15(bVar64,CONCAT14(bVar111,CONCAT13(bVar217,
                                                  CONCAT12(bVar70,CONCAT11(bVar149,bVar63)))))));
            *(ulong *)(puVar19 + 0x108) =
                 CONCAT17(bVar212,CONCAT16(bVar27,CONCAT15(bVar107,CONCAT14(bVar143,CONCAT13(bVar207
                                                  ,CONCAT12(bVar32,CONCAT11(bVar59,bVar104)))))));
            *(ulong *)(puVar19 + 0x10e) =
                 CONCAT17(bVar202,CONCAT16(bVar29,CONCAT15(bVar115,CONCAT14(bVar110,CONCAT13(bVar197
                                                  ,CONCAT12(bVar34,CONCAT11(bVar68,bVar114)))))));
            *(ulong *)(puVar19 + 0x10c) =
                 CONCAT17(bVar192,CONCAT16(bVar73,CONCAT15(bVar103,CONCAT14(bVar66,CONCAT13(bVar187,
                                                  CONCAT12(bVar28,CONCAT11(bVar113,bVar99)))))));
            *(ulong *)(puVar19 + 0x20e) =
                 CONCAT17(bVar110,CONCAT16(bVar202,CONCAT15(bVar29,CONCAT14(bVar115,CONCAT13(bVar114
                                                  ,CONCAT12(bVar197,CONCAT11(bVar34,bVar68)))))));
            *(ulong *)(puVar19 + 0x20c) =
                 CONCAT17(bVar66,CONCAT16(bVar192,CONCAT15(bVar73,CONCAT14(bVar103,CONCAT13(bVar99,
                                                  CONCAT12(bVar187,CONCAT11(bVar28,bVar113)))))));
            *(ulong *)(puVar19 + 0x20a) =
                 CONCAT17(bVar111,CONCAT16(bVar222,CONCAT15(bVar33,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar217,CONCAT11(bVar70,bVar149)))))));
            *(ulong *)(puVar19 + 0x208) =
                 CONCAT17(bVar143,CONCAT16(bVar212,CONCAT15(bVar27,CONCAT14(bVar107,CONCAT13(bVar104
                                                  ,CONCAT12(bVar207,CONCAT11(bVar32,bVar59)))))));
            *(byte *)(puVar19 + 0x208) = bVar57;
            *(byte *)((long)puVar19 + 0x821) = bVar119;
            *(byte *)((long)puVar19 + 0x822) = bVar155;
            *(byte *)((long)puVar19 + 0x823) = bVar96;
            *(byte *)(puVar19 + 0x209) = bVar58;
            *(byte *)((long)puVar19 + 0x825) = bVar83;
            *(byte *)((long)puVar19 + 0x826) = bVar171;
            *(byte *)((long)puVar19 + 0x827) = bVar100;
            *(byte *)(puVar19 + 0x204) = bVar53;
            *(byte *)((long)puVar19 + 0x811) = bVar117;
            *(byte *)((long)puVar19 + 0x812) = bVar142;
            *(byte *)((long)puVar19 + 0x813) = bVar90;
            *(byte *)(puVar19 + 0x205) = bVar56;
            *(byte *)((long)puVar19 + 0x815) = bVar76;
            *(byte *)((long)puVar19 + 0x816) = bVar146;
            *(byte *)((long)puVar19 + 0x817) = bVar93;
            *(byte *)(puVar19 + 0x204) = bVar51;
            *(byte *)((long)puVar19 + 0x811) = bVar112;
            *(byte *)((long)puVar19 + 0x812) = bVar126;
            *(byte *)((long)puVar19 + 0x813) = bVar84;
            *(byte *)(puVar19 + 0x205) = bVar52;
            *(byte *)((long)puVar19 + 0x815) = bVar69;
            *(byte *)((long)puVar19 + 0x816) = bVar136;
            *(byte *)((long)puVar19 + 0x817) = bVar87;
            *(byte *)(puVar19 + 0x200) = bVar35;
            *(byte *)((long)puVar19 + 0x801) = bVar125;
            *(byte *)((long)puVar19 + 0x802) = bVar116;
            *(byte *)((long)puVar19 + 0x803) = bVar77;
            *(byte *)(puVar19 + 0x201) = bVar50;
            *(byte *)((long)puVar19 + 0x805) = bVar129;
            *(byte *)((long)puVar19 + 0x806) = bVar120;
            *(byte *)((long)puVar19 + 0x807) = bVar80;
            *(ulong *)(puVar19 + 0x30e) =
                 CONCAT17(bVar115,CONCAT16(bVar110,CONCAT15(bVar202,CONCAT14(bVar29,CONCAT13(bVar68,
                                                  CONCAT12(bVar114,CONCAT11(bVar197,bVar34)))))));
            *(ulong *)(puVar19 + 0x30c) =
                 CONCAT17(bVar103,CONCAT16(bVar66,CONCAT15(bVar192,CONCAT14(bVar73,CONCAT13(bVar113,
                                                  CONCAT12(bVar99,CONCAT11(bVar187,bVar28)))))));
            *(ulong *)(puVar19 + 0x30a) =
                 CONCAT17(bVar64,CONCAT16(bVar111,CONCAT15(bVar222,CONCAT14(bVar33,CONCAT13(bVar149,
                                                  CONCAT12(bVar63,CONCAT11(bVar217,bVar70)))))));
            *(ulong *)(puVar19 + 0x308) =
                 CONCAT17(bVar107,CONCAT16(bVar143,CONCAT15(bVar212,CONCAT14(bVar27,CONCAT13(bVar59,
                                                  CONCAT12(bVar104,CONCAT11(bVar207,bVar32)))))));
            *(byte *)(puVar19 + 0x308) = bVar119;
            *(byte *)((long)puVar19 + 0xc21) = bVar155;
            *(byte *)((long)puVar19 + 0xc22) = bVar96;
            *(byte *)((long)puVar19 + 0xc23) = bVar57;
            *(byte *)(puVar19 + 0x309) = bVar83;
            *(byte *)((long)puVar19 + 0xc25) = bVar171;
            *(byte *)((long)puVar19 + 0xc26) = bVar100;
            *(byte *)((long)puVar19 + 0xc27) = bVar58;
            *(byte *)(puVar19 + 0x304) = bVar117;
            *(byte *)((long)puVar19 + 0xc11) = bVar142;
            *(byte *)((long)puVar19 + 0xc12) = bVar90;
            *(byte *)((long)puVar19 + 0xc13) = bVar53;
            *(byte *)(puVar19 + 0x305) = bVar76;
            *(byte *)((long)puVar19 + 0xc15) = bVar146;
            *(byte *)((long)puVar19 + 0xc16) = bVar93;
            *(byte *)((long)puVar19 + 0xc17) = bVar56;
            *(byte *)(puVar19 + 0x304) = bVar112;
            *(byte *)((long)puVar19 + 0xc11) = bVar126;
            *(byte *)((long)puVar19 + 0xc12) = bVar84;
            *(byte *)((long)puVar19 + 0xc13) = bVar51;
            *(byte *)(puVar19 + 0x305) = bVar69;
            *(byte *)((long)puVar19 + 0xc15) = bVar136;
            *(byte *)((long)puVar19 + 0xc16) = bVar87;
            *(byte *)((long)puVar19 + 0xc17) = bVar52;
            *(byte *)(puVar19 + 0x300) = bVar125;
            *(byte *)((long)puVar19 + 0xc01) = bVar116;
            *(byte *)((long)puVar19 + 0xc02) = bVar77;
            *(byte *)((long)puVar19 + 0xc03) = bVar35;
            *(byte *)(puVar19 + 0x301) = bVar129;
            *(byte *)((long)puVar19 + 0xc05) = bVar120;
            *(byte *)((long)puVar19 + 0xc06) = bVar80;
            *(byte *)((long)puVar19 + 0xc07) = bVar50;
            puVar19 = puVar19 + 0x10;
          } while (lVar18 != 0x100);
          DAT_02122a34 = '\x01';
        }
        uVar60 = *(int *)(param_1 + 0x10) * 4 - 4;
        if (uVar60 < 5) {
          uVar15 = 4;
        }
        else {
          uVar15 = 4;
          uVar25 = (ulong)uVar60;
          puVar14 = puVar2 + 7;
          do {
            uVar65 = puVar14[-3];
            uVar15 = uVar15 + 4;
            uVar67 = puVar2[uVar25];
            uVar72 = (&DAT_02121a30)[(byte)Se[uVar65 >> 0x18]];
            uVar60 = *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar65 >> 0x10) & 0xff] * 4);
            uVar16 = *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar65 >> 8) & 0xff] * 4);
            uVar65 = *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar65 & 0xff] * 4);
            puVar14[-3] = *(uint *)(&DAT_02121e30 +
                                   (ulong)(byte)Se[(ulong)(uVar67 >> 0x10) & 0xff] * 4) ^
                          (&DAT_02121a30)[(byte)Se[uVar67 >> 0x18]] ^
                          *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar67 >> 8) & 0xff] * 4
                                   ) ^
                          *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar67 & 0xff] * 4);
            uVar22 = uVar25 & 0xfffffffc;
            uVar26 = uVar25 - 4;
            puVar2[uVar25] = uVar60 ^ uVar72 ^ uVar16 ^ uVar65;
            uVar67 = puVar14[-2];
            uVar60 = puVar2[uVar22 + 1];
            uVar72 = (&DAT_02121a30)[(byte)Se[uVar67 >> 0x18]];
            uVar16 = *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar67 >> 0x10) & 0xff] * 4);
            uVar65 = *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar67 >> 8) & 0xff] * 4);
            uVar67 = *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar67 & 0xff] * 4);
            puVar14[-2] = *(uint *)(&DAT_02121e30 +
                                   (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
                          (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
                          *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4
                                   ) ^
                          *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
            puVar2[uVar22 + 1] = uVar16 ^ uVar72 ^ uVar65 ^ uVar67;
            uVar60 = puVar2[uVar22 + 2];
            uVar67 = puVar14[-1];
            uVar72 = (&DAT_02121a30)[(byte)Se[uVar67 >> 0x18]];
            uVar16 = *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar67 >> 0x10) & 0xff] * 4);
            uVar65 = *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar67 >> 8) & 0xff] * 4);
            uVar67 = *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar67 & 0xff] * 4);
            puVar14[-1] = *(uint *)(&DAT_02121e30 +
                                   (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
                          (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
                          *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4
                                   ) ^
                          *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
            uVar60 = puVar2[uVar22 + 3];
            puVar2[uVar22 + 2] = uVar16 ^ uVar72 ^ uVar65 ^ uVar67;
            uVar16 = *puVar14;
            uVar72 = (&DAT_02121a30)[(byte)Se[uVar16 >> 0x18]];
            uVar65 = *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar16 >> 0x10) & 0xff] * 4);
            uVar67 = *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar16 >> 8) & 0xff] * 4);
            uVar16 = *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar16 & 0xff] * 4);
            *puVar14 = *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4
                                ) ^ (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
                       *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4) ^
                       *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
            puVar2[uVar22 + 3] = uVar65 ^ uVar72 ^ uVar67 ^ uVar16;
            uVar25 = uVar26;
            puVar14 = puVar14 + 4;
          } while (uVar15 < (uVar26 & 0xfffffffc));
        }
        uVar60 = puVar2[uVar15 & 0xffffffff];
        uVar16 = (uint)uVar15;
        puVar2[uVar15 & 0xffffffff] =
             *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
             (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
             *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4) ^
             *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
        uVar60 = puVar2[uVar16 | 1];
        puVar2[uVar16 | 1] =
             *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
             (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
             *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4) ^
             *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
        uVar60 = puVar2[uVar16 | 2];
        puVar2[uVar16 | 2] =
             *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
             (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
             *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4) ^
             *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
        uVar60 = puVar2[uVar16 | 3];
        puVar2[uVar16 | 3] =
             *(uint *)(&DAT_02121e30 + (ulong)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] * 4) ^
             (&DAT_02121a30)[(byte)Se[uVar60 >> 0x18]] ^
             *(uint *)(&DAT_02122230 + (ulong)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] * 4) ^
             *(uint *)(&DAT_02122630 + (ulong)(byte)Se[(ulong)uVar60 & 0xff] * 4);
        uVar60 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        uVar16 = (puVar2[(uint)(*(int *)(param_1 + 0x10) << 2)] & 0xff00ff00) >> 8 |
                 (puVar2[(uint)(*(int *)(param_1 + 0x10) << 2)] & 0xff00ff) << 8;
        *puVar2 = uVar16 >> 0x10 | uVar16 << 0x10;
        puVar2[(uint)(*(int *)(param_1 + 0x10) << 2)] = uVar60 >> 0x10 | uVar60 << 0x10;
        uVar60 = puVar2[1];
        uVar16 = (puVar2[*(int *)(param_1 + 0x10) << 2 | 1] & 0xff00ff00) >> 8 |
                 (puVar2[*(int *)(param_1 + 0x10) << 2 | 1] & 0xff00ff) << 8;
        puVar2[1] = uVar16 >> 0x10 | uVar16 << 0x10;
        uVar60 = (uVar60 & 0xff00ff00) >> 8 | (uVar60 & 0xff00ff) << 8;
        puVar2[*(int *)(param_1 + 0x10) << 2 | 1] = uVar60 >> 0x10 | uVar60 << 0x10;
        uVar60 = puVar2[2];
        uVar16 = (puVar2[*(int *)(param_1 + 0x10) << 2 | 2] & 0xff00ff00) >> 8 |
                 (puVar2[*(int *)(param_1 + 0x10) << 2 | 2] & 0xff00ff) << 8;
        puVar2[2] = uVar16 >> 0x10 | uVar16 << 0x10;
        uVar60 = (uVar60 & 0xff00ff00) >> 8 | (uVar60 & 0xff00ff) << 8;
        puVar2[*(int *)(param_1 + 0x10) << 2 | 2] = uVar60 >> 0x10 | uVar60 << 0x10;
        uVar60 = puVar2[3];
        uVar16 = (puVar2[*(int *)(param_1 + 0x10) << 2 | 3] & 0xff00ff00) >> 8 |
                 (puVar2[*(int *)(param_1 + 0x10) << 2 | 3] & 0xff00ff) << 8;
        puVar2[3] = uVar16 >> 0x10 | uVar16 << 0x10;
        uVar60 = (uVar60 & 0xff00ff00) >> 8 | (uVar60 & 0xff00ff) << 8;
        puVar2[*(int *)(param_1 + 0x10) << 2 | 3] = uVar60 >> 0x10 | uVar60 << 0x10;
      }
      else {
        if (DAT_02122a30 == '\0') {
          lVar18 = 0;
          puVar19 = &DAT_02120a30;
          do {
            pauVar3 = (undefined (*) [16])(Se + lVar18);
            lVar18 = lVar18 + 0x10;
            auVar30 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar11);
            auVar48 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar10);
            auVar5[9] = 0x10;
            auVar5._0_9_ = Var12;
            auVar5[10] = 0x10;
            auVar5[11] = 0x10;
            auVar5[12] = 7;
            auVar5[13] = 0x10;
            auVar5[14] = 0x10;
            auVar5[15] = 0x10;
            auVar54 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar5);
            auVar4[9] = 0x10;
            auVar4._0_9_ = Var13;
            auVar4[10] = 0x10;
            auVar4[11] = 0x10;
            auVar4[12] = 3;
            auVar4[13] = 0x10;
            auVar4[14] = 0x10;
            auVar4[15] = 0x10;
            auVar61 = a64_TBL(ZEXT816(0),*pauVar3,ZEXT816(0),auVar4);
            iVar71 = auVar30._0_4_ << 1;
            iVar74 = auVar30._4_4_ << 1;
            iVar78 = auVar30._8_4_ << 1;
            iVar81 = auVar30._12_4_ << 1;
            iVar85 = auVar48._0_4_ << 1;
            iVar88 = auVar48._4_4_ << 1;
            iVar91 = auVar48._8_4_ << 1;
            iVar94 = auVar48._12_4_ << 1;
            iVar97 = auVar54._0_4_ << 1;
            iVar101 = auVar54._4_4_ << 1;
            iVar105 = auVar54._8_4_ << 1;
            iVar108 = auVar54._12_4_ << 1;
            iVar36 = auVar61._0_4_ << 1;
            iVar37 = auVar61._4_4_ << 1;
            iVar39 = auVar61._8_4_ << 1;
            iVar40 = auVar61._12_4_ << 1;
            iVar41 = CONCAT13(auVar30[3] >> 7,(int3)(auVar30._0_4_ >> 7)) * 0x11b;
            iVar42 = CONCAT13(auVar30[7] >> 7,(int3)(auVar30._4_4_ >> 7)) * 0x11b;
            iVar44 = CONCAT13(auVar30[11] >> 7,(int3)(auVar30._8_4_ >> 7)) * 0x11b;
            iVar45 = CONCAT13(auVar30[15] >> 7,(int3)(auVar30._12_4_ >> 7)) * 0x11b;
            iVar123 = (auVar48._0_4_ >> 7) * 0x11b;
            iVar127 = (auVar48._4_4_ >> 7) * 0x11b;
            iVar131 = (auVar48._8_4_ >> 7) * 0x11b;
            iVar134 = (auVar48._12_4_ >> 7) * 0x11b;
            iVar137 = (auVar54._0_4_ >> 7) * 0x11b;
            iVar140 = (auVar54._4_4_ >> 7) * 0x11b;
            iVar144 = (auVar54._8_4_ >> 7) * 0x11b;
            iVar147 = (auVar54._12_4_ >> 7) * 0x11b;
            iVar152 = (auVar61._0_4_ >> 7) * 0x11b;
            iVar157 = (auVar61._4_4_ >> 7) * 0x11b;
            iVar162 = (auVar61._8_4_ >> 7) * 0x11b;
            iVar167 = (auVar61._12_4_ >> 7) * 0x11b;
            bVar70 = (byte)iVar41 ^ (byte)iVar71;
            bVar73 = (byte)iVar42 ^ (byte)iVar74;
            bVar77 = (byte)iVar44 ^ (byte)iVar78;
            bVar80 = (byte)iVar45 ^ (byte)iVar81;
            bVar84 = (byte)iVar123 ^ (byte)iVar85;
            bVar87 = (byte)iVar127 ^ (byte)iVar88;
            bVar90 = (byte)iVar131 ^ (byte)iVar91;
            bVar93 = (byte)iVar134 ^ (byte)iVar94;
            bVar96 = (byte)iVar137 ^ (byte)iVar97;
            bVar100 = (byte)iVar140 ^ (byte)iVar101;
            bVar104 = (byte)iVar144 ^ (byte)iVar105;
            bVar107 = (byte)iVar147 ^ (byte)iVar108;
            bVar111 = (byte)iVar152 ^ (byte)iVar36;
            bVar113 = (byte)iVar157 ^ (byte)iVar37;
            bVar114 = (byte)iVar162 ^ (byte)iVar39;
            bVar115 = (byte)iVar167 ^ (byte)iVar40;
            bVar32 = auVar30[0];
            bVar116 = bVar70 ^ bVar32;
            bVar27 = auVar30[1];
            bVar33 = auVar30[4];
            bVar118 = bVar73 ^ bVar33;
            bVar28 = auVar30[5];
            bVar34 = auVar30[8];
            bVar120 = bVar77 ^ bVar34;
            bVar29 = auVar30[9];
            bVar35 = auVar30[12];
            bVar121 = bVar80 ^ bVar35;
            bVar125 = auVar30[13];
            bVar50 = auVar48[0];
            bVar122 = bVar84 ^ bVar50;
            bVar129 = auVar48[1];
            bVar51 = auVar48[4];
            bVar126 = bVar87 ^ bVar51;
            bVar112 = auVar48[5];
            bVar52 = auVar48[8];
            bVar130 = bVar90 ^ bVar52;
            bVar69 = auVar48[9];
            bVar53 = auVar48[12];
            bVar133 = bVar93 ^ bVar53;
            bVar117 = auVar48[13];
            bVar56 = auVar54[0];
            bVar136 = bVar96 ^ bVar56;
            bVar76 = auVar54[1];
            bVar57 = auVar54[4];
            bVar139 = bVar100 ^ bVar57;
            bVar119 = auVar54[5];
            bVar58 = auVar54[8];
            bVar142 = bVar104 ^ bVar58;
            bVar83 = auVar54[9];
            bVar59 = auVar54[12];
            bVar146 = bVar107 ^ bVar59;
            bVar143 = auVar54[13];
            bVar63 = auVar61[0];
            bVar150 = bVar111 ^ bVar63;
            bVar149 = auVar61[1];
            bVar64 = auVar61[4];
            bVar155 = bVar113 ^ bVar64;
            bVar99 = auVar61[5];
            bVar66 = auVar61[8];
            bVar160 = bVar114 ^ bVar66;
            bVar103 = auVar61[9];
            bVar68 = auVar61[12];
            bVar165 = bVar115 ^ bVar68;
            bVar110 = auVar61[13];
            bVar171 = bVar63 | (byte)((uint)iVar152 >> 8) ^ (byte)((uint)iVar36 >> 8) ^ bVar149;
            bVar175 = bVar64 | (byte)((uint)iVar157 >> 8) ^ (byte)((uint)iVar37 >> 8) ^ bVar99;
            bVar179 = bVar66 | (byte)((uint)iVar162 >> 8) ^ (byte)((uint)iVar39 >> 8) ^ bVar103;
            bVar183 = bVar68 | (byte)((uint)iVar167 >> 8) ^ (byte)((uint)iVar40 >> 8) ^ bVar110;
            bVar190 = bVar56 | (byte)((uint)iVar137 >> 8) ^ (byte)((uint)iVar97 >> 8) ^ bVar76;
            bVar195 = bVar57 | (byte)((uint)iVar140 >> 8) ^ (byte)((uint)iVar101 >> 8) ^ bVar119;
            bVar200 = bVar58 | (byte)((uint)iVar144 >> 8) ^ (byte)((uint)iVar105 >> 8) ^ bVar83;
            bVar205 = bVar59 | (byte)((uint)iVar147 >> 8) ^ (byte)((uint)iVar108 >> 8) ^ bVar143;
            bVar210 = bVar50 | (byte)((uint)iVar123 >> 8) ^ (byte)((uint)iVar85 >> 8) ^ bVar129;
            bVar215 = bVar51 | (byte)((uint)iVar127 >> 8) ^ (byte)((uint)iVar88 >> 8) ^ bVar112;
            bVar220 = bVar52 | (byte)((uint)iVar131 >> 8) ^ (byte)((uint)iVar91 >> 8) ^ bVar69;
            bVar225 = bVar53 | (byte)((uint)iVar134 >> 8) ^ (byte)((uint)iVar94 >> 8) ^ bVar117;
            bVar232 = bVar32 | (byte)((uint)iVar41 >> 8) ^ (byte)((uint)iVar71 >> 8) ^ bVar27;
            bVar239 = bVar33 | (byte)((uint)iVar42 >> 8) ^ (byte)((uint)iVar74 >> 8) ^ bVar28;
            bVar246 = bVar34 | (byte)((uint)iVar44 >> 8) ^ (byte)((uint)iVar78 >> 8) ^ bVar29;
            bVar253 = bVar35 | (byte)((uint)iVar45 >> 8) ^ (byte)((uint)iVar81 >> 8) ^ bVar125;
            bVar32 = bVar27 | (byte)((uint)iVar41 >> 0x10) ^ (byte)((uint)iVar71 >> 0x10) ^
                              auVar30[2] | bVar32;
            bVar33 = bVar28 | (byte)((uint)iVar42 >> 0x10) ^ (byte)((uint)iVar74 >> 0x10) ^
                              auVar30[6] | bVar33;
            bVar34 = bVar29 | (byte)((uint)iVar44 >> 0x10) ^ (byte)((uint)iVar78 >> 0x10) ^
                              auVar30[10] | bVar34;
            bVar35 = bVar125 | (byte)((uint)iVar45 >> 0x10) ^ (byte)((uint)iVar81 >> 0x10) ^
                               auVar30[14] | bVar35;
            bVar50 = bVar129 | (byte)((uint)iVar123 >> 0x10) ^ (byte)((uint)iVar85 >> 0x10) ^
                               auVar48[2] | bVar50;
            bVar51 = bVar112 | (byte)((uint)iVar127 >> 0x10) ^ (byte)((uint)iVar88 >> 0x10) ^
                               auVar48[6] | bVar51;
            bVar52 = bVar69 | (byte)((uint)iVar131 >> 0x10) ^ (byte)((uint)iVar91 >> 0x10) ^
                              auVar48[10] | bVar52;
            bVar53 = bVar117 | (byte)((uint)iVar134 >> 0x10) ^ (byte)((uint)iVar94 >> 0x10) ^
                               auVar48[14] | bVar53;
            bVar56 = bVar76 | (byte)((uint)iVar137 >> 0x10) ^ (byte)((uint)iVar97 >> 0x10) ^
                              auVar54[2] | bVar56;
            bVar57 = bVar119 | (byte)((uint)iVar140 >> 0x10) ^ (byte)((uint)iVar101 >> 0x10) ^
                               auVar54[6] | bVar57;
            bVar58 = bVar83 | (byte)((uint)iVar144 >> 0x10) ^ (byte)((uint)iVar105 >> 0x10) ^
                              auVar54[10] | bVar58;
            bVar59 = bVar143 | (byte)((uint)iVar147 >> 0x10) ^ (byte)((uint)iVar108 >> 0x10) ^
                               auVar54[14] | bVar59;
            bVar63 = bVar149 | (byte)((uint)iVar152 >> 0x10) ^ (byte)((uint)iVar36 >> 0x10) ^
                               auVar61[2] | bVar63;
            bVar64 = bVar99 | (byte)((uint)iVar157 >> 0x10) ^ (byte)((uint)iVar37 >> 0x10) ^
                              auVar61[6] | bVar64;
            bVar66 = bVar103 | (byte)((uint)iVar162 >> 0x10) ^ (byte)((uint)iVar39 >> 0x10) ^
                               auVar61[10] | bVar66;
            bVar68 = bVar110 | (byte)((uint)iVar167 >> 0x10) ^ (byte)((uint)iVar40 >> 0x10) ^
                               auVar61[14] | bVar68;
            bVar70 = auVar30[2] |
                     (byte)((uint)iVar41 >> 0x18) ^ (byte)((uint)iVar71 >> 0x18) ^ auVar30[3] |
                     bVar27 | bVar70;
            bVar73 = auVar30[6] |
                     (byte)((uint)iVar42 >> 0x18) ^ (byte)((uint)iVar74 >> 0x18) ^ auVar30[7] |
                     bVar28 | bVar73;
            bVar77 = auVar30[10] |
                     (byte)((uint)iVar44 >> 0x18) ^ (byte)((uint)iVar78 >> 0x18) ^ auVar30[11] |
                     bVar29 | bVar77;
            bVar80 = auVar30[14] |
                     (byte)((uint)iVar45 >> 0x18) ^ (byte)((uint)iVar81 >> 0x18) ^ auVar30[15] |
                     bVar125 | bVar80;
            bVar84 = auVar48[2] |
                     (byte)((uint)iVar123 >> 0x18) ^ (byte)((uint)iVar85 >> 0x18) ^ auVar48[3] |
                     bVar129 | bVar84;
            bVar87 = auVar48[6] |
                     (byte)((uint)iVar127 >> 0x18) ^ (byte)((uint)iVar88 >> 0x18) ^ auVar48[7] |
                     bVar112 | bVar87;
            bVar90 = auVar48[10] |
                     (byte)((uint)iVar131 >> 0x18) ^ (byte)((uint)iVar91 >> 0x18) ^ auVar48[11] |
                     bVar69 | bVar90;
            bVar93 = auVar48[14] |
                     (byte)((uint)iVar134 >> 0x18) ^ (byte)((uint)iVar94 >> 0x18) ^ auVar48[15] |
                     bVar117 | bVar93;
            bVar96 = auVar54[2] |
                     (byte)((uint)iVar137 >> 0x18) ^ (byte)((uint)iVar97 >> 0x18) ^ auVar54[3] |
                     bVar76 | bVar96;
            bVar100 = auVar54[6] |
                      (byte)((uint)iVar140 >> 0x18) ^ (byte)((uint)iVar101 >> 0x18) ^ auVar54[7] |
                      bVar119 | bVar100;
            bVar104 = auVar54[10] |
                      (byte)((uint)iVar144 >> 0x18) ^ (byte)((uint)iVar105 >> 0x18) ^ auVar54[11] |
                      bVar83 | bVar104;
            bVar107 = auVar54[14] |
                      (byte)((uint)iVar147 >> 0x18) ^ (byte)((uint)iVar108 >> 0x18) ^ auVar54[15] |
                      bVar143 | bVar107;
            bVar111 = auVar61[2] |
                      (byte)((uint)iVar152 >> 0x18) ^ (byte)((uint)iVar36 >> 0x18) ^ auVar61[3] |
                      bVar149 | bVar111;
            bVar113 = auVar61[6] |
                      (byte)((uint)iVar157 >> 0x18) ^ (byte)((uint)iVar37 >> 0x18) ^ auVar61[7] |
                      bVar99 | bVar113;
            bVar114 = auVar61[10] |
                      (byte)((uint)iVar162 >> 0x18) ^ (byte)((uint)iVar39 >> 0x18) ^ auVar61[11] |
                      bVar103 | bVar114;
            bVar115 = auVar61[14] |
                      (byte)((uint)iVar167 >> 0x18) ^ (byte)((uint)iVar40 >> 0x18) ^ auVar61[15] |
                      bVar110 | bVar115;
            *(byte *)(puVar19 + 0xc) = bVar130;
            *(byte *)((long)puVar19 + 0x31) = bVar220;
            *(byte *)((long)puVar19 + 0x32) = bVar52;
            *(byte *)((long)puVar19 + 0x33) = bVar90;
            *(byte *)(puVar19 + 0xd) = bVar133;
            *(byte *)((long)puVar19 + 0x35) = bVar225;
            *(byte *)((long)puVar19 + 0x36) = bVar53;
            *(byte *)((long)puVar19 + 0x37) = bVar93;
            *(byte *)(puVar19 + 8) = bVar122;
            *(byte *)((long)puVar19 + 0x21) = bVar210;
            *(byte *)((long)puVar19 + 0x22) = bVar50;
            *(byte *)((long)puVar19 + 0x23) = bVar84;
            *(byte *)(puVar19 + 9) = bVar126;
            *(byte *)((long)puVar19 + 0x25) = bVar215;
            *(byte *)((long)puVar19 + 0x26) = bVar51;
            *(byte *)((long)puVar19 + 0x27) = bVar87;
            *(byte *)(puVar19 + 0x10) = bVar120;
            *(byte *)((long)puVar19 + 0x41) = bVar246;
            *(byte *)((long)puVar19 + 0x42) = bVar34;
            *(byte *)((long)puVar19 + 0x43) = bVar77;
            *(byte *)(puVar19 + 0x11) = bVar121;
            *(byte *)((long)puVar19 + 0x45) = bVar253;
            *(byte *)((long)puVar19 + 0x46) = bVar35;
            *(byte *)((long)puVar19 + 0x47) = bVar80;
            *(byte *)(puVar19 + 0xc) = bVar116;
            *(byte *)((long)puVar19 + 0x31) = bVar232;
            *(byte *)((long)puVar19 + 0x32) = bVar32;
            *(byte *)((long)puVar19 + 0x33) = bVar70;
            *(byte *)(puVar19 + 0xd) = bVar118;
            *(byte *)((long)puVar19 + 0x35) = bVar239;
            *(byte *)((long)puVar19 + 0x36) = bVar33;
            *(byte *)((long)puVar19 + 0x37) = bVar73;
            *(byte *)(puVar19 + 4) = bVar160;
            *(byte *)((long)puVar19 + 0x11) = bVar179;
            *(byte *)((long)puVar19 + 0x12) = bVar66;
            *(byte *)((long)puVar19 + 0x13) = bVar114;
            *(byte *)(puVar19 + 5) = bVar165;
            *(byte *)((long)puVar19 + 0x15) = bVar183;
            *(byte *)((long)puVar19 + 0x16) = bVar68;
            *(byte *)((long)puVar19 + 0x17) = bVar115;
            *(byte *)puVar19 = bVar150;
            *(byte *)((long)puVar19 + 1) = bVar171;
            *(byte *)((long)puVar19 + 2) = bVar63;
            *(byte *)((long)puVar19 + 3) = bVar111;
            *(byte *)(puVar19 + 1) = bVar155;
            *(byte *)((long)puVar19 + 5) = bVar175;
            *(byte *)((long)puVar19 + 6) = bVar64;
            *(byte *)((long)puVar19 + 7) = bVar113;
            *(byte *)(puVar19 + 8) = bVar142;
            *(byte *)((long)puVar19 + 0x21) = bVar200;
            *(byte *)((long)puVar19 + 0x22) = bVar58;
            *(byte *)((long)puVar19 + 0x23) = bVar104;
            *(byte *)(puVar19 + 9) = bVar146;
            *(byte *)((long)puVar19 + 0x25) = bVar205;
            *(byte *)((long)puVar19 + 0x26) = bVar59;
            *(byte *)((long)puVar19 + 0x27) = bVar107;
            *(byte *)(puVar19 + 4) = bVar136;
            *(byte *)((long)puVar19 + 0x11) = bVar190;
            *(byte *)((long)puVar19 + 0x12) = bVar56;
            *(byte *)((long)puVar19 + 0x13) = bVar96;
            *(byte *)(puVar19 + 5) = bVar139;
            *(byte *)((long)puVar19 + 0x15) = bVar195;
            *(byte *)((long)puVar19 + 0x16) = bVar57;
            *(byte *)((long)puVar19 + 0x17) = bVar100;
            uVar6 = CONCAT17(bVar118,CONCAT16(bVar73,CONCAT15(bVar33,CONCAT14(bVar239,CONCAT13(
                                                  bVar116,CONCAT12(bVar70,CONCAT11(bVar32,bVar232)))
                                                  ))));
            auVar31[8] = bVar246;
            auVar31._0_8_ = uVar6;
            auVar31[9] = bVar34;
            auVar31[10] = bVar77;
            auVar31[11] = bVar120;
            auVar31[12] = bVar253;
            auVar31[13] = bVar35;
            auVar31[14] = bVar80;
            auVar31[15] = bVar121;
            uVar7 = CONCAT17(bVar126,CONCAT16(bVar87,CONCAT15(bVar51,CONCAT14(bVar215,CONCAT13(
                                                  bVar122,CONCAT12(bVar84,CONCAT11(bVar50,bVar210)))
                                                  ))));
            auVar49[8] = bVar220;
            auVar49._0_8_ = uVar7;
            auVar49[9] = bVar52;
            auVar49[10] = bVar90;
            auVar49[11] = bVar130;
            auVar49[12] = bVar225;
            auVar49[13] = bVar53;
            auVar49[14] = bVar93;
            auVar49[15] = bVar133;
            uVar8 = CONCAT17(bVar139,CONCAT16(bVar100,CONCAT15(bVar57,CONCAT14(bVar195,CONCAT13(
                                                  bVar136,CONCAT12(bVar96,CONCAT11(bVar56,bVar190)))
                                                  ))));
            auVar55[8] = bVar200;
            auVar55._0_8_ = uVar8;
            auVar55[9] = bVar58;
            auVar55[10] = bVar104;
            auVar55[11] = bVar142;
            auVar55[12] = bVar205;
            auVar55[13] = bVar59;
            auVar55[14] = bVar107;
            auVar55[15] = bVar146;
            uVar9 = CONCAT17(bVar155,CONCAT16(bVar113,CONCAT15(bVar64,CONCAT14(bVar175,CONCAT13(
                                                  bVar150,CONCAT12(bVar111,CONCAT11(bVar63,bVar171))
                                                  )))));
            auVar62[8] = bVar179;
            auVar62._0_8_ = uVar9;
            auVar62[9] = bVar66;
            auVar62[10] = bVar114;
            auVar62[11] = bVar160;
            auVar62[12] = bVar183;
            auVar62[13] = bVar68;
            auVar62[14] = bVar115;
            auVar62[15] = bVar165;
            *(long *)(puVar19 + 0x10e) = auVar31._8_8_;
            *(undefined8 *)(puVar19 + 0x10c) = uVar6;
            *(long *)(puVar19 + 0x10a) = auVar49._8_8_;
            *(undefined8 *)(puVar19 + 0x108) = uVar7;
            *(long *)(puVar19 + 0x106) = auVar55._8_8_;
            *(undefined8 *)(puVar19 + 0x104) = uVar8;
            *(long *)(puVar19 + 0x102) = auVar62._8_8_;
            *(undefined8 *)(puVar19 + 0x100) = uVar9;
            *(ulong *)(puVar19 + 0x20e) =
                 CONCAT17(bVar253,CONCAT16(bVar121,CONCAT15(bVar80,CONCAT14(bVar35,CONCAT13(bVar246,
                                                  CONCAT12(bVar120,CONCAT11(bVar77,bVar34)))))));
            *(ulong *)(puVar19 + 0x20c) =
                 CONCAT17(bVar239,CONCAT16(bVar118,CONCAT15(bVar73,CONCAT14(bVar33,CONCAT13(bVar232,
                                                  CONCAT12(bVar116,CONCAT11(bVar70,bVar32)))))));
            *(byte *)(puVar19 + 0x20c) = bVar52;
            *(byte *)((long)puVar19 + 0x831) = bVar90;
            *(byte *)((long)puVar19 + 0x832) = bVar130;
            *(byte *)((long)puVar19 + 0x833) = bVar220;
            *(byte *)(puVar19 + 0x20d) = bVar53;
            *(byte *)((long)puVar19 + 0x835) = bVar93;
            *(byte *)((long)puVar19 + 0x836) = bVar133;
            *(byte *)((long)puVar19 + 0x837) = bVar225;
            *(byte *)(puVar19 + 0x208) = bVar50;
            *(byte *)((long)puVar19 + 0x821) = bVar84;
            *(byte *)((long)puVar19 + 0x822) = bVar122;
            *(byte *)((long)puVar19 + 0x823) = bVar210;
            *(byte *)(puVar19 + 0x209) = bVar51;
            *(byte *)((long)puVar19 + 0x825) = bVar87;
            *(byte *)((long)puVar19 + 0x826) = bVar126;
            *(byte *)((long)puVar19 + 0x827) = bVar215;
            *(byte *)(puVar19 + 0x208) = bVar58;
            *(byte *)((long)puVar19 + 0x821) = bVar104;
            *(byte *)((long)puVar19 + 0x822) = bVar142;
            *(byte *)((long)puVar19 + 0x823) = bVar200;
            *(byte *)(puVar19 + 0x209) = bVar59;
            *(byte *)((long)puVar19 + 0x825) = bVar107;
            *(byte *)((long)puVar19 + 0x826) = bVar146;
            *(byte *)((long)puVar19 + 0x827) = bVar205;
            *(byte *)(puVar19 + 0x204) = bVar56;
            *(byte *)((long)puVar19 + 0x811) = bVar96;
            *(byte *)((long)puVar19 + 0x812) = bVar136;
            *(byte *)((long)puVar19 + 0x813) = bVar190;
            *(byte *)(puVar19 + 0x205) = bVar57;
            *(byte *)((long)puVar19 + 0x815) = bVar100;
            *(byte *)((long)puVar19 + 0x816) = bVar139;
            *(byte *)((long)puVar19 + 0x817) = bVar195;
            *(byte *)(puVar19 + 0x204) = bVar66;
            *(byte *)((long)puVar19 + 0x811) = bVar114;
            *(byte *)((long)puVar19 + 0x812) = bVar160;
            *(byte *)((long)puVar19 + 0x813) = bVar179;
            *(byte *)(puVar19 + 0x205) = bVar68;
            *(byte *)((long)puVar19 + 0x815) = bVar115;
            *(byte *)((long)puVar19 + 0x816) = bVar165;
            *(byte *)((long)puVar19 + 0x817) = bVar183;
            *(byte *)(puVar19 + 0x200) = bVar63;
            *(byte *)((long)puVar19 + 0x801) = bVar111;
            *(byte *)((long)puVar19 + 0x802) = bVar150;
            *(byte *)((long)puVar19 + 0x803) = bVar171;
            *(byte *)(puVar19 + 0x201) = bVar64;
            *(byte *)((long)puVar19 + 0x805) = bVar113;
            *(byte *)((long)puVar19 + 0x806) = bVar155;
            *(byte *)((long)puVar19 + 0x807) = bVar175;
            *(byte *)(puVar19 + 0x310) = bVar77;
            *(byte *)((long)puVar19 + 0xc41) = bVar120;
            *(byte *)((long)puVar19 + 0xc42) = bVar246;
            *(byte *)((long)puVar19 + 0xc43) = bVar34;
            *(byte *)(puVar19 + 0x311) = bVar80;
            *(byte *)((long)puVar19 + 0xc45) = bVar121;
            *(byte *)((long)puVar19 + 0xc46) = bVar253;
            *(byte *)((long)puVar19 + 0xc47) = bVar35;
            *(byte *)(puVar19 + 0x30c) = bVar70;
            *(byte *)((long)puVar19 + 0xc31) = bVar116;
            *(byte *)((long)puVar19 + 0xc32) = bVar232;
            *(byte *)((long)puVar19 + 0xc33) = bVar32;
            *(byte *)(puVar19 + 0x30d) = bVar73;
            *(byte *)((long)puVar19 + 0xc35) = bVar118;
            *(byte *)((long)puVar19 + 0xc36) = bVar239;
            *(byte *)((long)puVar19 + 0xc37) = bVar33;
            *(byte *)(puVar19 + 0x30c) = bVar90;
            *(byte *)((long)puVar19 + 0xc31) = bVar130;
            *(byte *)((long)puVar19 + 0xc32) = bVar220;
            *(byte *)((long)puVar19 + 0xc33) = bVar52;
            *(byte *)(puVar19 + 0x30d) = bVar93;
            *(byte *)((long)puVar19 + 0xc35) = bVar133;
            *(byte *)((long)puVar19 + 0xc36) = bVar225;
            *(byte *)((long)puVar19 + 0xc37) = bVar53;
            *(byte *)(puVar19 + 0x308) = bVar84;
            *(byte *)((long)puVar19 + 0xc21) = bVar122;
            *(byte *)((long)puVar19 + 0xc22) = bVar210;
            *(byte *)((long)puVar19 + 0xc23) = bVar50;
            *(byte *)(puVar19 + 0x309) = bVar87;
            *(byte *)((long)puVar19 + 0xc25) = bVar126;
            *(byte *)((long)puVar19 + 0xc26) = bVar215;
            *(byte *)((long)puVar19 + 0xc27) = bVar51;
            *(byte *)(puVar19 + 0x308) = bVar104;
            *(byte *)((long)puVar19 + 0xc21) = bVar142;
            *(byte *)((long)puVar19 + 0xc22) = bVar200;
            *(byte *)((long)puVar19 + 0xc23) = bVar58;
            *(byte *)(puVar19 + 0x309) = bVar107;
            *(byte *)((long)puVar19 + 0xc25) = bVar146;
            *(byte *)((long)puVar19 + 0xc26) = bVar205;
            *(byte *)((long)puVar19 + 0xc27) = bVar59;
            *(byte *)(puVar19 + 0x304) = bVar96;
            *(byte *)((long)puVar19 + 0xc11) = bVar136;
            *(byte *)((long)puVar19 + 0xc12) = bVar190;
            *(byte *)((long)puVar19 + 0xc13) = bVar56;
            *(byte *)(puVar19 + 0x305) = bVar100;
            *(byte *)((long)puVar19 + 0xc15) = bVar139;
            *(byte *)((long)puVar19 + 0xc16) = bVar195;
            *(byte *)((long)puVar19 + 0xc17) = bVar57;
            *(byte *)(puVar19 + 0x304) = bVar114;
            *(byte *)((long)puVar19 + 0xc11) = bVar160;
            *(byte *)((long)puVar19 + 0xc12) = bVar179;
            *(byte *)((long)puVar19 + 0xc13) = bVar66;
            *(byte *)(puVar19 + 0x305) = bVar115;
            *(byte *)((long)puVar19 + 0xc15) = bVar165;
            *(byte *)((long)puVar19 + 0xc16) = bVar183;
            *(byte *)((long)puVar19 + 0xc17) = bVar68;
            *(byte *)(puVar19 + 0x300) = bVar111;
            *(byte *)((long)puVar19 + 0xc01) = bVar150;
            *(byte *)((long)puVar19 + 0xc02) = bVar171;
            *(byte *)((long)puVar19 + 0xc03) = bVar63;
            *(byte *)(puVar19 + 0x301) = bVar113;
            *(byte *)((long)puVar19 + 0xc05) = bVar155;
            *(byte *)((long)puVar19 + 0xc06) = bVar175;
            *(byte *)((long)puVar19 + 0xc07) = bVar64;
            puVar19 = puVar19 + 0x10;
          } while (lVar18 != 0x100);
          DAT_02122a30 = '\x01';
        }
        uVar60 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        uVar16 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
        uVar65 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
        uVar67 = (puVar2[3] & 0xff00ff00) >> 8 | (puVar2[3] & 0xff00ff) << 8;
        *puVar2 = uVar60 >> 0x10 | uVar60 << 0x10;
        puVar2[1] = uVar16 >> 0x10 | uVar16 << 0x10;
        puVar2[2] = uVar65 >> 0x10 | uVar65 << 0x10;
        puVar2[3] = uVar67 >> 0x10 | uVar67 << 0x10;
        puVar2 = puVar2 + (uint)(*(int *)(param_1 + 0x10) << 2);
        uVar60 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        uVar16 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
        uVar65 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
        uVar67 = (puVar2[3] & 0xff00ff00) >> 8 | (puVar2[3] & 0xff00ff) << 8;
        *puVar2 = uVar60 >> 0x10 | uVar60 << 0x10;
        puVar2[1] = uVar16 >> 0x10 | uVar16 << 0x10;
        puVar2[2] = uVar65 >> 0x10 | uVar65 << 0x10;
        puVar2[3] = uVar67 >> 0x10 | uVar67 << 0x10;
      }
      return;
    }
    if (iVar36 == 0x20) {
      uVar60 = puVar14[0xb];
      lVar24 = 0xf;
      lVar21 = 6;
      lVar23 = 7;
      uVar60 = puVar14[4] ^ (uint)(byte)Se[uVar60 >> 0x18] << 0x18 ^
               (uint)(byte)Se[(ulong)(uVar60 >> 0x10) & 0xff] << 0x10 ^
               (uint)(byte)Se[(ulong)(uVar60 >> 8) & 0xff] << 8 ^
               (uint)(byte)Se[(ulong)uVar60 & 0xff];
      lVar20 = 0xe;
      uVar16 = uVar60 ^ puVar14[5];
      puVar14[0xc] = uVar60;
      puVar14[0xd] = uVar16;
LAB_00d218dc:
      uVar60 = puVar14[lVar21];
      uVar65 = puVar14[lVar23];
      puVar14[lVar20] = uVar60 ^ uVar16;
      puVar14[lVar24] = uVar65 ^ uVar60 ^ uVar16;
    }
    else if (iVar36 == 0x18) {
      uVar16 = puVar14[4];
      lVar21 = 9;
      lVar20 = 10;
      lVar23 = 5;
      lVar24 = 0xb;
      goto LAB_00d218dc;
    }
    puVar14 = puVar14 + uVar25;
    puVar17 = puVar17 + 1;
  } while( true );
}


