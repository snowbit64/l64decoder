// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillDecTable
// Entry Point: 00d213d8
// Size: 928 bytes
// Signature: undefined FillDecTable(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Rijndael::Base::FillDecTable() */

void CryptoPP::Rijndael::Base::FillDecTable(void)

{
  undefined (*pauVar1) [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  long lVar14;
  undefined4 *puVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  byte bVar42;
  byte bVar43;
  uint uVar44;
  byte bVar45;
  byte bVar46;
  uint uVar47;
  byte bVar48;
  byte bVar49;
  undefined auVar41 [16];
  uint uVar50;
  byte bVar51;
  uint uVar52;
  uint uVar54;
  byte bVar55;
  uint uVar56;
  undefined auVar53 [16];
  uint uVar57;
  byte bVar58;
  uint uVar59;
  uint uVar61;
  uint uVar62;
  byte bVar64;
  byte bVar65;
  undefined auVar60 [16];
  uint uVar63;
  uint uVar66;
  byte bVar68;
  byte bVar69;
  uint uVar70;
  byte bVar71;
  byte bVar72;
  uint uVar73;
  byte bVar74;
  byte bVar75;
  byte bVar77;
  byte bVar78;
  undefined auVar67 [16];
  uint uVar76;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  int iVar101;
  byte bVar105;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  int iVar106;
  byte bVar110;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  int iVar111;
  byte bVar115;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  int iVar116;
  byte bVar120;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  int iVar121;
  byte bVar125;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  int iVar126;
  byte bVar130;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  int iVar131;
  byte bVar135;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  int iVar136;
  byte bVar140;
  byte bVar142;
  byte bVar143;
  int iVar141;
  byte bVar144;
  byte bVar146;
  byte bVar147;
  int iVar145;
  byte bVar148;
  byte bVar150;
  byte bVar151;
  int iVar149;
  byte bVar152;
  byte bVar154;
  byte bVar155;
  int iVar153;
  byte bVar156;
  byte bVar158;
  byte bVar159;
  int iVar157;
  byte bVar160;
  byte bVar162;
  byte bVar163;
  int iVar161;
  byte bVar164;
  byte bVar166;
  byte bVar167;
  int iVar165;
  byte bVar168;
  byte bVar170;
  byte bVar171;
  int iVar169;
  byte bVar172;
  byte bVar173;
  int iVar174;
  int iVar175;
  byte bVar176;
  byte bVar177;
  int iVar178;
  int iVar179;
  byte bVar180;
  byte bVar181;
  int iVar182;
  int iVar183;
  byte bVar184;
  byte bVar185;
  int iVar186;
  int iVar187;
  byte bVar188;
  byte bVar189;
  int iVar190;
  int iVar191;
  byte bVar192;
  byte bVar193;
  int iVar194;
  int iVar195;
  byte bVar196;
  byte bVar197;
  int iVar198;
  int iVar199;
  byte bVar200;
  byte bVar201;
  int iVar202;
  int iVar203;
  byte bVar204;
  int iVar205;
  int iVar206;
  int iVar207;
  int iVar208;
  int iVar209;
  byte bVar210;
  int iVar211;
  int iVar212;
  int iVar213;
  int iVar214;
  int iVar215;
  byte bVar216;
  int iVar217;
  int iVar218;
  int iVar219;
  int iVar220;
  int iVar221;
  byte bVar222;
  int iVar223;
  int iVar224;
  int iVar225;
  int iVar226;
  int iVar227;
  byte bVar228;
  int iVar229;
  int iVar230;
  int iVar231;
  int iVar232;
  int iVar233;
  byte bVar234;
  int iVar235;
  int iVar236;
  int iVar237;
  int iVar238;
  int iVar239;
  byte bVar240;
  int iVar241;
  int iVar242;
  int iVar243;
  int iVar244;
  int iVar245;
  byte bVar246;
  int iVar247;
  int iVar248;
  int iVar249;
  int iVar250;
  int iVar251;
  
  auVar13 = _DAT_004c4f40;
  auVar12 = _DAT_004c4d70;
  lVar14 = 0;
  puVar15 = &DAT_02121a30;
  do {
    pauVar1 = (undefined (*) [16])((long)&Sd + lVar14);
    lVar14 = lVar14 + 0x10;
    auVar41[8] = 10;
    auVar41._0_8_ = 0x1010100910101008;
    auVar41[9] = 0x10;
    auVar41[10] = 0x10;
    auVar41[11] = 0x10;
    auVar41[12] = 0xb;
    auVar41[13] = 0x10;
    auVar41[14] = 0x10;
    auVar41[15] = 0x10;
    auVar60 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar41);
    auVar67[8] = 0xe;
    auVar67._0_8_ = 0x1010100d1010100c;
    auVar41 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar13);
    auVar53 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar12);
    auVar67[9] = 0x10;
    auVar67[10] = 0x10;
    auVar67[11] = 0x10;
    auVar67[12] = 0xf;
    auVar67[13] = 0x10;
    auVar67[14] = 0x10;
    auVar67[15] = 0x10;
    auVar67 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar67);
    uVar59 = auVar60._0_4_;
    uVar61 = auVar60._4_4_;
    uVar62 = auVar60._8_4_;
    uVar63 = auVar60._12_4_;
    uVar40 = auVar41._0_4_;
    uVar44 = auVar41._4_4_;
    uVar47 = auVar41._8_4_;
    uVar50 = auVar41._12_4_;
    uVar52 = auVar53._0_4_;
    uVar54 = auVar53._4_4_;
    uVar56 = auVar53._8_4_;
    uVar57 = auVar53._12_4_;
    uVar66 = auVar67._0_4_;
    uVar70 = auVar67._4_4_;
    uVar73 = auVar67._8_4_;
    uVar76 = auVar67._12_4_;
    bVar20 = (byte)(uVar59 >> 5);
    bVar21 = (byte)(uVar61 >> 5);
    bVar22 = (byte)(uVar62 >> 5);
    bVar23 = (byte)(uVar63 >> 5);
    bVar46 = (byte)(uVar40 >> 5);
    bVar108 = (byte)(uVar44 >> 5);
    bVar48 = (byte)(uVar47 >> 5);
    bVar49 = (byte)(uVar50 >> 5);
    bVar42 = (byte)(uVar52 >> 5);
    bVar43 = (byte)(uVar54 >> 5);
    bVar103 = (byte)(uVar56 >> 5);
    bVar45 = (byte)(uVar57 >> 5);
    bVar16 = (byte)(uVar66 >> 5);
    bVar17 = (byte)(uVar70 >> 5);
    bVar18 = (byte)(uVar73 >> 5);
    bVar19 = (byte)(uVar76 >> 5);
    iVar2 = uVar40 << 3;
    bVar51 = (byte)((uint)iVar2 >> 0x10);
    iVar3 = uVar44 << 3;
    bVar83 = (byte)((uint)iVar3 >> 0x10);
    iVar4 = uVar47 << 3;
    bVar86 = (byte)((uint)iVar4 >> 0x10);
    iVar5 = uVar50 << 3;
    bVar89 = (byte)((uint)iVar5 >> 0x10);
    iVar6 = uVar52 << 3;
    bVar55 = (byte)((uint)iVar6 >> 0x10);
    iVar7 = uVar54 << 3;
    bVar58 = (byte)((uint)iVar7 >> 0x10);
    iVar8 = uVar56 << 3;
    bVar96 = (byte)((uint)iVar8 >> 0x10);
    iVar9 = uVar57 << 3;
    bVar99 = (byte)((uint)iVar9 >> 0x10);
    iVar101 = uVar59 << 3;
    iVar106 = uVar61 << 3;
    iVar111 = uVar62 << 3;
    iVar116 = uVar63 << 3;
    iVar121 = uVar66 << 3;
    iVar126 = uVar70 << 3;
    iVar131 = uVar73 << 3;
    iVar136 = uVar76 << 3;
    iVar205 = (uint)(bVar16 & 1) * 0x11b;
    iVar211 = (uint)(bVar17 & 1) * 0x11b;
    iVar217 = (uint)(bVar18 & 1) * 0x11b;
    iVar223 = (uint)(bVar19 & 1) * 0x11b;
    iVar229 = (uint)(bVar20 & 1) * 0x11b;
    iVar235 = (uint)(bVar21 & 1) * 0x11b;
    iVar241 = (uint)(bVar22 & 1) * 0x11b;
    iVar247 = (uint)(bVar23 & 1) * 0x11b;
    iVar24 = (uint)(bVar42 & 1) * 0x11b;
    iVar26 = (uint)(bVar43 & 1) * 0x11b;
    iVar28 = (uint)(bVar103 & 1) * 0x11b;
    iVar30 = (uint)(bVar45 & 1) * 0x11b;
    iVar32 = (uint)(bVar46 & 1) * 0x11b;
    iVar34 = (uint)(bVar108 & 1) * 0x11b;
    iVar36 = (uint)(bVar48 & 1) * 0x11b;
    iVar38 = (uint)(bVar49 & 1) * 0x11b;
    bVar124 = (byte)((uint)iVar121 >> 0x10);
    bVar129 = (byte)((uint)iVar126 >> 0x10);
    bVar134 = (byte)((uint)iVar131 >> 0x10);
    bVar139 = (byte)((uint)iVar136 >> 0x10);
    bVar104 = (byte)((uint)iVar101 >> 0x10);
    bVar109 = (byte)((uint)iVar106 >> 0x10);
    bVar114 = (byte)((uint)iVar111 >> 0x10);
    bVar119 = (byte)((uint)iVar116 >> 0x10);
    iVar206 = (uint)(bVar46 & 2) * 0x11b;
    iVar212 = (uint)(bVar108 & 2) * 0x11b;
    iVar218 = (uint)(bVar48 & 2) * 0x11b;
    iVar224 = (uint)(bVar49 & 2) * 0x11b;
    iVar230 = (uint)(bVar42 & 2) * 0x11b;
    iVar236 = (uint)(bVar43 & 2) * 0x11b;
    iVar242 = (uint)(bVar103 & 2) * 0x11b;
    iVar248 = (uint)(bVar45 & 2) * 0x11b;
    iVar25 = (uint)(bVar20 & 2) * 0x11b;
    iVar27 = (uint)(bVar21 & 2) * 0x11b;
    iVar29 = (uint)(bVar22 & 2) * 0x11b;
    iVar31 = (uint)(bVar23 & 2) * 0x11b;
    iVar33 = (uint)(bVar16 & 2) * 0x11b;
    iVar35 = (uint)(bVar17 & 2) * 0x11b;
    iVar37 = (uint)(bVar18 & 2) * 0x11b;
    iVar39 = (uint)(bVar19 & 2) * 0x11b;
    iVar141 = (uint)(bVar16 & 4) * 0x11b;
    iVar145 = (uint)(bVar17 & 4) * 0x11b;
    iVar149 = (uint)(bVar18 & 4) * 0x11b;
    iVar153 = (uint)(bVar19 & 4) * 0x11b;
    iVar157 = (uint)(bVar20 & 4) * 0x11b;
    iVar161 = (uint)(bVar21 & 4) * 0x11b;
    iVar165 = (uint)(bVar22 & 4) * 0x11b;
    iVar169 = (uint)(bVar23 & 4) * 0x11b;
    iVar174 = (uint)(bVar42 & 4) * 0x11b;
    iVar178 = (uint)(bVar43 & 4) * 0x11b;
    iVar182 = (uint)(bVar103 & 4) * 0x11b;
    iVar186 = (uint)(bVar45 & 4) * 0x11b;
    iVar190 = (uint)(bVar46 & 4) * 0x11b;
    iVar194 = (uint)(bVar108 & 4) * 0x11b;
    iVar198 = (uint)(bVar48 & 4) * 0x11b;
    iVar202 = (uint)(bVar49 & 4) * 0x11b;
    bVar120 = (byte)iVar205 ^ (byte)iVar121 ^ (byte)iVar33 ^ (byte)iVar141;
    bVar122 = (byte)((uint)iVar205 >> 8) ^ (byte)((uint)iVar121 >> 8) ^ (byte)((uint)iVar33 >> 8) ^
              (byte)((uint)iVar141 >> 8);
    bVar125 = (byte)iVar211 ^ (byte)iVar126 ^ (byte)iVar35 ^ (byte)iVar145;
    bVar127 = (byte)((uint)iVar211 >> 8) ^ (byte)((uint)iVar126 >> 8) ^ (byte)((uint)iVar35 >> 8) ^
              (byte)((uint)iVar145 >> 8);
    bVar130 = (byte)iVar217 ^ (byte)iVar131 ^ (byte)iVar37 ^ (byte)iVar149;
    bVar132 = (byte)((uint)iVar217 >> 8) ^ (byte)((uint)iVar131 >> 8) ^ (byte)((uint)iVar37 >> 8) ^
              (byte)((uint)iVar149 >> 8);
    bVar135 = (byte)iVar223 ^ (byte)iVar136 ^ (byte)iVar39 ^ (byte)iVar153;
    bVar137 = (byte)((uint)iVar223 >> 8) ^ (byte)((uint)iVar136 >> 8) ^ (byte)((uint)iVar39 >> 8) ^
              (byte)((uint)iVar153 >> 8);
    bVar100 = (byte)iVar229 ^ (byte)iVar101 ^ (byte)iVar25 ^ (byte)iVar157;
    bVar102 = (byte)((uint)iVar229 >> 8) ^ (byte)((uint)iVar101 >> 8) ^ (byte)((uint)iVar25 >> 8) ^
              (byte)((uint)iVar157 >> 8);
    bVar105 = (byte)iVar235 ^ (byte)iVar106 ^ (byte)iVar27 ^ (byte)iVar161;
    bVar107 = (byte)((uint)iVar235 >> 8) ^ (byte)((uint)iVar106 >> 8) ^ (byte)((uint)iVar27 >> 8) ^
              (byte)((uint)iVar161 >> 8);
    bVar110 = (byte)iVar241 ^ (byte)iVar111 ^ (byte)iVar29 ^ (byte)iVar165;
    bVar112 = (byte)((uint)iVar241 >> 8) ^ (byte)((uint)iVar111 >> 8) ^ (byte)((uint)iVar29 >> 8) ^
              (byte)((uint)iVar165 >> 8);
    bVar115 = (byte)iVar247 ^ (byte)iVar116 ^ (byte)iVar31 ^ (byte)iVar169;
    bVar117 = (byte)((uint)iVar247 >> 8) ^ (byte)((uint)iVar116 >> 8) ^ (byte)((uint)iVar31 >> 8) ^
              (byte)((uint)iVar169 >> 8);
    bVar140 = (byte)iVar24 ^ (byte)iVar6 ^ (byte)iVar230 ^ (byte)iVar174;
    bVar142 = (byte)((uint)iVar24 >> 8) ^ (byte)((uint)iVar6 >> 8) ^ (byte)((uint)iVar230 >> 8) ^
              (byte)((uint)iVar174 >> 8);
    bVar144 = (byte)iVar26 ^ (byte)iVar7 ^ (byte)iVar236 ^ (byte)iVar178;
    bVar146 = (byte)((uint)iVar26 >> 8) ^ (byte)((uint)iVar7 >> 8) ^ (byte)((uint)iVar236 >> 8) ^
              (byte)((uint)iVar178 >> 8);
    bVar148 = (byte)iVar28 ^ (byte)iVar8 ^ (byte)iVar242 ^ (byte)iVar182;
    bVar150 = (byte)((uint)iVar28 >> 8) ^ (byte)((uint)iVar8 >> 8) ^ (byte)((uint)iVar242 >> 8) ^
              (byte)((uint)iVar182 >> 8);
    bVar152 = (byte)iVar30 ^ (byte)iVar9 ^ (byte)iVar248 ^ (byte)iVar186;
    bVar154 = (byte)((uint)iVar30 >> 8) ^ (byte)((uint)iVar9 >> 8) ^ (byte)((uint)iVar248 >> 8) ^
              (byte)((uint)iVar186 >> 8);
    bVar156 = (byte)iVar32 ^ (byte)iVar2 ^ (byte)iVar206 ^ (byte)iVar190;
    bVar158 = (byte)((uint)iVar32 >> 8) ^ (byte)((uint)iVar2 >> 8) ^ (byte)((uint)iVar206 >> 8) ^
              (byte)((uint)iVar190 >> 8);
    bVar160 = (byte)iVar34 ^ (byte)iVar3 ^ (byte)iVar212 ^ (byte)iVar194;
    bVar162 = (byte)((uint)iVar34 >> 8) ^ (byte)((uint)iVar3 >> 8) ^ (byte)((uint)iVar212 >> 8) ^
              (byte)((uint)iVar194 >> 8);
    bVar164 = (byte)iVar36 ^ (byte)iVar4 ^ (byte)iVar218 ^ (byte)iVar198;
    bVar166 = (byte)((uint)iVar36 >> 8) ^ (byte)((uint)iVar4 >> 8) ^ (byte)((uint)iVar218 >> 8) ^
              (byte)((uint)iVar198 >> 8);
    bVar168 = (byte)iVar38 ^ (byte)iVar5 ^ (byte)iVar224 ^ (byte)iVar202;
    bVar170 = (byte)((uint)iVar38 >> 8) ^ (byte)((uint)iVar5 >> 8) ^ (byte)((uint)iVar224 >> 8) ^
              (byte)((uint)iVar202 >> 8);
    iVar36 = uVar52 << 1;
    iVar37 = uVar54 << 1;
    iVar38 = uVar56 << 1;
    iVar39 = uVar57 << 1;
    iVar32 = uVar40 << 1;
    iVar33 = uVar44 << 1;
    iVar34 = uVar47 << 1;
    iVar35 = uVar50 << 1;
    iVar207 = (uVar40 >> 7) * 0x11b;
    iVar213 = (uVar44 >> 7) * 0x11b;
    iVar219 = (uVar47 >> 7) * 0x11b;
    iVar225 = (uVar50 >> 7) * 0x11b;
    iVar231 = (uVar52 >> 7) * 0x11b;
    iVar237 = (uVar54 >> 7) * 0x11b;
    iVar243 = (uVar56 >> 7) * 0x11b;
    iVar249 = (uVar57 >> 7) * 0x11b;
    bVar42 = (byte)(uVar59 >> 6);
    bVar43 = (byte)(uVar61 >> 6);
    bVar103 = (byte)(uVar62 >> 6);
    bVar45 = (byte)(uVar63 >> 6);
    bVar46 = (byte)(uVar66 >> 6);
    bVar108 = (byte)(uVar70 >> 6);
    bVar48 = (byte)(uVar73 >> 6);
    bVar49 = (byte)(uVar76 >> 6);
    iVar175 = uVar66 << 1;
    iVar179 = uVar70 << 1;
    iVar183 = uVar73 << 1;
    iVar187 = uVar76 << 1;
    iVar191 = uVar59 << 1;
    iVar195 = uVar61 << 1;
    iVar199 = uVar62 << 1;
    iVar203 = uVar63 << 1;
    iVar141 = (uVar59 >> 7) * 0x11b;
    iVar149 = (uVar61 >> 7) * 0x11b;
    iVar157 = (uVar62 >> 7) * 0x11b;
    iVar165 = (uVar63 >> 7) * 0x11b;
    iVar174 = (uVar66 >> 7) * 0x11b;
    iVar182 = (uVar70 >> 7) * 0x11b;
    iVar190 = (uVar73 >> 7) * 0x11b;
    iVar198 = (uVar76 >> 7) * 0x11b;
    bVar79 = (byte)iVar207 ^ (byte)iVar32;
    bVar81 = (byte)iVar213 ^ (byte)iVar33;
    bVar84 = (byte)iVar219 ^ (byte)iVar34;
    bVar87 = (byte)iVar225 ^ (byte)iVar35;
    bVar90 = (byte)iVar231 ^ (byte)iVar36;
    bVar92 = (byte)iVar237 ^ (byte)iVar37;
    bVar94 = (byte)iVar243 ^ (byte)iVar38;
    bVar97 = (byte)iVar249 ^ (byte)iVar39;
    iVar208 = uVar66 << 2;
    iVar214 = uVar70 << 2;
    iVar220 = uVar73 << 2;
    iVar226 = uVar76 << 2;
    iVar232 = uVar59 << 2;
    iVar238 = uVar61 << 2;
    iVar244 = uVar62 << 2;
    iVar250 = uVar63 << 2;
    bVar16 = (byte)(uVar40 >> 6);
    bVar17 = (byte)(uVar44 >> 6);
    bVar18 = (byte)(uVar47 >> 6);
    bVar19 = (byte)(uVar50 >> 6);
    bVar20 = (byte)(uVar52 >> 6);
    bVar21 = (byte)(uVar54 >> 6);
    bVar22 = (byte)(uVar56 >> 6);
    bVar23 = (byte)(uVar57 >> 6);
    iVar24 = (uint)(bVar42 & 1) * 0x11b;
    iVar25 = (uint)(bVar43 & 1) * 0x11b;
    iVar26 = (uint)(bVar103 & 1) * 0x11b;
    iVar27 = (uint)(bVar45 & 1) * 0x11b;
    iVar28 = (uint)(bVar46 & 1) * 0x11b;
    iVar29 = (uint)(bVar108 & 1) * 0x11b;
    iVar30 = (uint)(bVar48 & 1) * 0x11b;
    iVar31 = (uint)(bVar49 & 1) * 0x11b;
    bVar188 = (byte)iVar141 ^ (byte)iVar191;
    bVar192 = (byte)iVar149 ^ (byte)iVar195;
    bVar196 = (byte)iVar157 ^ (byte)iVar199;
    bVar200 = (byte)iVar165 ^ (byte)iVar203;
    bVar172 = (byte)iVar174 ^ (byte)iVar175;
    bVar176 = (byte)iVar182 ^ (byte)iVar179;
    bVar180 = (byte)iVar190 ^ (byte)iVar183;
    bVar184 = (byte)iVar198 ^ (byte)iVar187;
    iVar145 = uVar52 << 2;
    iVar153 = uVar54 << 2;
    iVar161 = uVar56 << 2;
    iVar169 = uVar57 << 2;
    iVar178 = uVar40 << 2;
    iVar186 = uVar44 << 2;
    iVar194 = uVar47 << 2;
    iVar202 = uVar50 << 2;
    iVar229 = (uint)(bVar16 & 1) * 0x11b;
    iVar230 = (uint)(bVar17 & 1) * 0x11b;
    iVar235 = (uint)(bVar18 & 1) * 0x11b;
    iVar236 = (uint)(bVar19 & 1) * 0x11b;
    iVar241 = (uint)(bVar20 & 1) * 0x11b;
    iVar242 = (uint)(bVar21 & 1) * 0x11b;
    iVar247 = (uint)(bVar22 & 1) * 0x11b;
    iVar248 = (uint)(bVar23 & 1) * 0x11b;
    iVar209 = (uint)(bVar16 & 2) * 0x11b;
    iVar215 = (uint)(bVar17 & 2) * 0x11b;
    iVar221 = (uint)(bVar18 & 2) * 0x11b;
    iVar227 = (uint)(bVar19 & 2) * 0x11b;
    iVar233 = (uint)(bVar46 & 2) * 0x11b;
    iVar239 = (uint)(bVar108 & 2) * 0x11b;
    iVar245 = (uint)(bVar48 & 2) * 0x11b;
    iVar251 = (uint)(bVar49 & 2) * 0x11b;
    iVar205 = (uint)(bVar20 & 2) * 0x11b;
    iVar206 = (uint)(bVar21 & 2) * 0x11b;
    iVar211 = (uint)(bVar22 & 2) * 0x11b;
    iVar212 = (uint)(bVar23 & 2) * 0x11b;
    iVar217 = (uint)(bVar42 & 2) * 0x11b;
    iVar218 = (uint)(bVar43 & 2) * 0x11b;
    iVar223 = (uint)(bVar103 & 2) * 0x11b;
    iVar224 = (uint)(bVar45 & 2) * 0x11b;
    bVar204 = (byte)iVar229 ^ (byte)iVar178 ^ (byte)iVar209 ^ bVar156;
    bVar210 = (byte)iVar230 ^ (byte)iVar186 ^ (byte)iVar215 ^ bVar160;
    bVar216 = (byte)iVar235 ^ (byte)iVar194 ^ (byte)iVar221 ^ bVar164;
    bVar222 = (byte)iVar236 ^ (byte)iVar202 ^ (byte)iVar227 ^ bVar168;
    bVar156 = bVar156 ^ auVar41[0];
    bVar159 = bVar158 ^ auVar41[1];
    bVar160 = bVar160 ^ auVar41[4];
    bVar163 = bVar162 ^ auVar41[5];
    bVar164 = bVar164 ^ auVar41[8];
    bVar167 = bVar166 ^ auVar41[9];
    bVar168 = bVar168 ^ auVar41[12];
    bVar171 = bVar170 ^ auVar41[13];
    bVar228 = (byte)iVar241 ^ (byte)iVar145 ^ (byte)iVar205 ^ bVar140;
    bVar234 = (byte)iVar242 ^ (byte)iVar153 ^ (byte)iVar206 ^ bVar144;
    bVar240 = (byte)iVar247 ^ (byte)iVar161 ^ (byte)iVar211 ^ bVar148;
    bVar246 = (byte)iVar248 ^ (byte)iVar169 ^ (byte)iVar212 ^ bVar152;
    bVar140 = bVar140 ^ auVar53[0];
    bVar143 = bVar142 ^ auVar53[1];
    bVar144 = bVar144 ^ auVar53[4];
    bVar147 = bVar146 ^ auVar53[5];
    bVar148 = bVar148 ^ auVar53[8];
    bVar151 = bVar150 ^ auVar53[9];
    bVar152 = bVar152 ^ auVar53[12];
    bVar155 = bVar154 ^ auVar53[13];
    bVar20 = (byte)iVar28 ^ (byte)iVar208 ^ (byte)iVar233 ^ bVar120;
    bVar21 = (byte)iVar29 ^ (byte)iVar214 ^ (byte)iVar239 ^ bVar125;
    bVar22 = (byte)iVar30 ^ (byte)iVar220 ^ (byte)iVar245 ^ bVar130;
    bVar23 = (byte)iVar31 ^ (byte)iVar226 ^ (byte)iVar251 ^ bVar135;
    bVar120 = bVar120 ^ auVar67[0];
    bVar123 = bVar122 ^ auVar67[1];
    bVar125 = bVar125 ^ auVar67[4];
    bVar128 = bVar127 ^ auVar67[5];
    bVar130 = bVar130 ^ auVar67[8];
    bVar133 = bVar132 ^ auVar67[9];
    bVar135 = bVar135 ^ auVar67[12];
    bVar138 = bVar137 ^ auVar67[13];
    bVar16 = (byte)iVar24 ^ (byte)iVar232 ^ (byte)iVar217 ^ bVar100;
    bVar17 = (byte)iVar25 ^ (byte)iVar238 ^ (byte)iVar218 ^ bVar105;
    bVar18 = (byte)iVar26 ^ (byte)iVar244 ^ (byte)iVar223 ^ bVar110;
    bVar19 = (byte)iVar27 ^ (byte)iVar250 ^ (byte)iVar224 ^ bVar115;
    bVar100 = bVar100 ^ auVar60[0];
    bVar103 = bVar102 ^ auVar60[1];
    bVar105 = bVar105 ^ auVar60[4];
    bVar108 = bVar107 ^ auVar60[5];
    bVar110 = bVar110 ^ auVar60[8];
    bVar113 = bVar112 ^ auVar60[9];
    bVar115 = bVar115 ^ auVar60[12];
    bVar118 = bVar117 ^ auVar60[13];
    bVar173 = bVar120 ^ bVar172;
    bVar177 = bVar125 ^ bVar176;
    bVar181 = bVar130 ^ bVar180;
    bVar185 = bVar135 ^ bVar184;
    bVar189 = bVar100 ^ bVar188;
    bVar193 = bVar105 ^ bVar192;
    bVar197 = bVar110 ^ bVar196;
    bVar201 = bVar115 ^ bVar200;
    bVar91 = bVar140 ^ bVar90;
    bVar93 = bVar144 ^ bVar92;
    bVar95 = bVar148 ^ bVar94;
    bVar98 = bVar152 ^ bVar97;
    bVar80 = bVar156 ^ bVar79;
    bVar82 = bVar160 ^ bVar81;
    bVar85 = bVar164 ^ bVar84;
    bVar88 = bVar168 ^ bVar87;
    bVar68 = bVar123 ^ (byte)((uint)iVar174 >> 8) ^ (byte)((uint)iVar175 >> 8) | bVar20 ^ auVar67[0]
    ;
    bVar69 = bVar120 | bVar124 ^ auVar67[2] ^
                       (byte)((uint)iVar174 >> 0x10) ^ (byte)((uint)iVar175 >> 0x10) |
             (byte)((uint)iVar28 >> 8) ^ (byte)((uint)iVar208 >> 8) ^ (byte)((uint)iVar233 >> 8) ^
             bVar122 ^ auVar67[1];
    bVar71 = bVar128 ^ (byte)((uint)iVar182 >> 8) ^ (byte)((uint)iVar179 >> 8) | bVar21 ^ auVar67[4]
    ;
    bVar72 = bVar125 | bVar129 ^ auVar67[6] ^
                       (byte)((uint)iVar182 >> 0x10) ^ (byte)((uint)iVar179 >> 0x10) |
             (byte)((uint)iVar29 >> 8) ^ (byte)((uint)iVar214 >> 8) ^ (byte)((uint)iVar239 >> 8) ^
             bVar127 ^ auVar67[5];
    bVar74 = bVar133 ^ (byte)((uint)iVar190 >> 8) ^ (byte)((uint)iVar183 >> 8) | bVar22 ^ auVar67[8]
    ;
    bVar75 = bVar130 | bVar134 ^ auVar67[10] ^
                       (byte)((uint)iVar190 >> 0x10) ^ (byte)((uint)iVar183 >> 0x10) |
             (byte)((uint)iVar30 >> 8) ^ (byte)((uint)iVar220 >> 8) ^ (byte)((uint)iVar245 >> 8) ^
             bVar132 ^ auVar67[9];
    bVar77 = bVar138 ^ (byte)((uint)iVar198 >> 8) ^ (byte)((uint)iVar187 >> 8) |
             bVar23 ^ auVar67[12];
    bVar78 = bVar135 | bVar139 ^ auVar67[14] ^
                       (byte)((uint)iVar198 >> 0x10) ^ (byte)((uint)iVar187 >> 0x10) |
             (byte)((uint)iVar31 >> 8) ^ (byte)((uint)iVar226 >> 8) ^ (byte)((uint)iVar251 >> 8) ^
             bVar137 ^ auVar67[13];
    bVar125 = bVar103 ^ (byte)((uint)iVar141 >> 8) ^ (byte)((uint)iVar191 >> 8) |
              bVar16 ^ auVar60[0];
    bVar127 = bVar100 | bVar104 ^ auVar60[2] ^
                        (byte)((uint)iVar141 >> 0x10) ^ (byte)((uint)iVar191 >> 0x10) |
              (byte)((uint)iVar24 >> 8) ^ (byte)((uint)iVar232 >> 8) ^ (byte)((uint)iVar217 >> 8) ^
              bVar102 ^ auVar60[1];
    bVar130 = bVar108 ^ (byte)((uint)iVar149 >> 8) ^ (byte)((uint)iVar195 >> 8) |
              bVar17 ^ auVar60[4];
    bVar132 = bVar105 | bVar109 ^ auVar60[6] ^
                        (byte)((uint)iVar149 >> 0x10) ^ (byte)((uint)iVar195 >> 0x10) |
              (byte)((uint)iVar25 >> 8) ^ (byte)((uint)iVar238 >> 8) ^ (byte)((uint)iVar218 >> 8) ^
              bVar107 ^ auVar60[5];
    bVar135 = bVar113 ^ (byte)((uint)iVar157 >> 8) ^ (byte)((uint)iVar199 >> 8) |
              bVar18 ^ auVar60[8];
    bVar137 = bVar110 | bVar114 ^ auVar60[10] ^
                        (byte)((uint)iVar157 >> 0x10) ^ (byte)((uint)iVar199 >> 0x10) |
              (byte)((uint)iVar26 >> 8) ^ (byte)((uint)iVar244 >> 8) ^ (byte)((uint)iVar223 >> 8) ^
              bVar112 ^ auVar60[9];
    bVar64 = bVar118 ^ (byte)((uint)iVar165 >> 8) ^ (byte)((uint)iVar203 >> 8) |
             bVar19 ^ auVar60[12];
    bVar65 = bVar115 | bVar119 ^ auVar60[14] ^
                       (byte)((uint)iVar165 >> 0x10) ^ (byte)((uint)iVar203 >> 0x10) |
             (byte)((uint)iVar27 >> 8) ^ (byte)((uint)iVar250 >> 8) ^ (byte)((uint)iVar224 >> 8) ^
             bVar117 ^ auVar60[13];
    bVar105 = bVar143 ^ (byte)((uint)iVar231 >> 8) ^ (byte)((uint)iVar36 >> 8) |
              bVar228 ^ auVar53[0];
    bVar107 = bVar140 | bVar55 ^ auVar53[2] ^
                        (byte)((uint)iVar231 >> 0x10) ^ (byte)((uint)iVar36 >> 0x10) |
              (byte)((uint)iVar241 >> 8) ^ (byte)((uint)iVar145 >> 8) ^ (byte)((uint)iVar205 >> 8) ^
              bVar142 ^ auVar53[1];
    bVar110 = bVar147 ^ (byte)((uint)iVar237 >> 8) ^ (byte)((uint)iVar37 >> 8) |
              bVar234 ^ auVar53[4];
    bVar112 = bVar144 | bVar58 ^ auVar53[6] ^
                        (byte)((uint)iVar237 >> 0x10) ^ (byte)((uint)iVar37 >> 0x10) |
              (byte)((uint)iVar242 >> 8) ^ (byte)((uint)iVar153 >> 8) ^ (byte)((uint)iVar206 >> 8) ^
              bVar146 ^ auVar53[5];
    bVar115 = bVar151 ^ (byte)((uint)iVar243 >> 8) ^ (byte)((uint)iVar38 >> 8) |
              bVar240 ^ auVar53[8];
    bVar117 = bVar148 | bVar96 ^ auVar53[10] ^
                        (byte)((uint)iVar243 >> 0x10) ^ (byte)((uint)iVar38 >> 0x10) |
              (byte)((uint)iVar247 >> 8) ^ (byte)((uint)iVar161 >> 8) ^ (byte)((uint)iVar211 >> 8) ^
              bVar150 ^ auVar53[9];
    bVar120 = bVar155 ^ (byte)((uint)iVar249 >> 8) ^ (byte)((uint)iVar39 >> 8) |
              bVar246 ^ auVar53[12];
    bVar122 = bVar152 | bVar99 ^ auVar53[14] ^
                        (byte)((uint)iVar249 >> 0x10) ^ (byte)((uint)iVar39 >> 0x10) |
              (byte)((uint)iVar248 >> 8) ^ (byte)((uint)iVar169 >> 8) ^ (byte)((uint)iVar212 >> 8) ^
              bVar154 ^ auVar53[13];
    bVar42 = bVar159 ^ (byte)((uint)iVar207 >> 8) ^ (byte)((uint)iVar32 >> 8) | bVar204 ^ auVar41[0]
    ;
    bVar43 = bVar156 | bVar51 ^ auVar41[2] ^
                       (byte)((uint)iVar207 >> 0x10) ^ (byte)((uint)iVar32 >> 0x10) |
             (byte)((uint)iVar229 >> 8) ^ (byte)((uint)iVar178 >> 8) ^ (byte)((uint)iVar209 >> 8) ^
             bVar158 ^ auVar41[1];
    bVar45 = bVar163 ^ (byte)((uint)iVar213 >> 8) ^ (byte)((uint)iVar33 >> 8) | bVar210 ^ auVar41[4]
    ;
    bVar46 = bVar160 | bVar83 ^ auVar41[6] ^
                       (byte)((uint)iVar213 >> 0x10) ^ (byte)((uint)iVar33 >> 0x10) |
             (byte)((uint)iVar230 >> 8) ^ (byte)((uint)iVar186 >> 8) ^ (byte)((uint)iVar215 >> 8) ^
             bVar162 ^ auVar41[5];
    bVar48 = bVar167 ^ (byte)((uint)iVar219 >> 8) ^ (byte)((uint)iVar34 >> 8) | bVar216 ^ auVar41[8]
    ;
    bVar49 = bVar164 | bVar86 ^ auVar41[10] ^
                       (byte)((uint)iVar219 >> 0x10) ^ (byte)((uint)iVar34 >> 0x10) |
             (byte)((uint)iVar235 >> 8) ^ (byte)((uint)iVar194 >> 8) ^ (byte)((uint)iVar221 >> 8) ^
             bVar166 ^ auVar41[9];
    bVar100 = bVar171 ^ (byte)((uint)iVar225 >> 8) ^ (byte)((uint)iVar35 >> 8) |
              bVar222 ^ auVar41[12];
    bVar102 = bVar168 | bVar89 ^ auVar41[14] ^
                        (byte)((uint)iVar225 >> 0x10) ^ (byte)((uint)iVar35 >> 0x10) |
              (byte)((uint)iVar236 >> 8) ^ (byte)((uint)iVar202 >> 8) ^ (byte)((uint)iVar227 >> 8) ^
              bVar170 ^ auVar41[13];
    bVar20 = bVar123 | (byte)((uint)iVar121 >> 0x18) ^ auVar67[3] ^
                       (byte)((uint)iVar174 >> 0x18) ^ (byte)((uint)iVar175 >> 0x18) |
             (byte)((uint)iVar208 >> 0x10) ^ bVar124 ^ auVar67[2] | bVar20 ^ bVar172;
    bVar21 = bVar128 | (byte)((uint)iVar126 >> 0x18) ^ auVar67[7] ^
                       (byte)((uint)iVar182 >> 0x18) ^ (byte)((uint)iVar179 >> 0x18) |
             (byte)((uint)iVar214 >> 0x10) ^ bVar129 ^ auVar67[6] | bVar21 ^ bVar176;
    bVar22 = bVar133 | (byte)((uint)iVar131 >> 0x18) ^ auVar67[11] ^
                       (byte)((uint)iVar190 >> 0x18) ^ (byte)((uint)iVar183 >> 0x18) |
             (byte)((uint)iVar220 >> 0x10) ^ bVar134 ^ auVar67[10] | bVar22 ^ bVar180;
    bVar23 = bVar138 | (byte)((uint)iVar136 >> 0x18) ^ auVar67[15] ^
                       (byte)((uint)iVar198 >> 0x18) ^ (byte)((uint)iVar187 >> 0x18) |
             (byte)((uint)iVar226 >> 0x10) ^ bVar139 ^ auVar67[14] | bVar23 ^ bVar184;
    bVar16 = bVar103 | (byte)((uint)iVar101 >> 0x18) ^ auVar60[3] ^
                       (byte)((uint)iVar141 >> 0x18) ^ (byte)((uint)iVar191 >> 0x18) |
             (byte)((uint)iVar232 >> 0x10) ^ bVar104 ^ auVar60[2] | bVar16 ^ bVar188;
    bVar17 = bVar108 | (byte)((uint)iVar106 >> 0x18) ^ auVar60[7] ^
                       (byte)((uint)iVar149 >> 0x18) ^ (byte)((uint)iVar195 >> 0x18) |
             (byte)((uint)iVar238 >> 0x10) ^ bVar109 ^ auVar60[6] | bVar17 ^ bVar192;
    bVar18 = bVar113 | (byte)((uint)iVar111 >> 0x18) ^ auVar60[11] ^
                       (byte)((uint)iVar157 >> 0x18) ^ (byte)((uint)iVar199 >> 0x18) |
             (byte)((uint)iVar244 >> 0x10) ^ bVar114 ^ auVar60[10] | bVar18 ^ bVar196;
    bVar19 = bVar118 | (byte)((uint)iVar116 >> 0x18) ^ auVar60[15] ^
                       (byte)((uint)iVar165 >> 0x18) ^ (byte)((uint)iVar203 >> 0x18) |
             (byte)((uint)iVar250 >> 0x10) ^ bVar119 ^ auVar60[14] | bVar19 ^ bVar200;
    bVar90 = bVar143 | (byte)((uint)iVar6 >> 0x18) ^ auVar53[3] ^
                       (byte)((uint)iVar231 >> 0x18) ^ (byte)((uint)iVar36 >> 0x18) |
             (byte)((uint)iVar145 >> 0x10) ^ bVar55 ^ auVar53[2] | bVar228 ^ bVar90;
    bVar55 = bVar147 | (byte)((uint)iVar7 >> 0x18) ^ auVar53[7] ^
                       (byte)((uint)iVar237 >> 0x18) ^ (byte)((uint)iVar37 >> 0x18) |
             (byte)((uint)iVar153 >> 0x10) ^ bVar58 ^ auVar53[6] | bVar234 ^ bVar92;
    bVar92 = bVar151 | (byte)((uint)iVar8 >> 0x18) ^ auVar53[11] ^
                       (byte)((uint)iVar243 >> 0x18) ^ (byte)((uint)iVar38 >> 0x18) |
             (byte)((uint)iVar161 >> 0x10) ^ bVar96 ^ auVar53[10] | bVar240 ^ bVar94;
    bVar58 = bVar155 | (byte)((uint)iVar9 >> 0x18) ^ auVar53[15] ^
                       (byte)((uint)iVar249 >> 0x18) ^ (byte)((uint)iVar39 >> 0x18) |
             (byte)((uint)iVar169 >> 0x10) ^ bVar99 ^ auVar53[14] | bVar246 ^ bVar97;
    bVar103 = bVar159 | (byte)((uint)iVar2 >> 0x18) ^ auVar41[3] ^
                        (byte)((uint)iVar207 >> 0x18) ^ (byte)((uint)iVar32 >> 0x18) |
              (byte)((uint)iVar178 >> 0x10) ^ bVar51 ^ auVar41[2] | bVar204 ^ bVar79;
    bVar108 = bVar163 | (byte)((uint)iVar3 >> 0x18) ^ auVar41[7] ^
                        (byte)((uint)iVar213 >> 0x18) ^ (byte)((uint)iVar33 >> 0x18) |
              (byte)((uint)iVar186 >> 0x10) ^ bVar83 ^ auVar41[6] | bVar210 ^ bVar81;
    bVar79 = bVar167 | (byte)((uint)iVar4 >> 0x18) ^ auVar41[11] ^
                       (byte)((uint)iVar219 >> 0x18) ^ (byte)((uint)iVar34 >> 0x18) |
             (byte)((uint)iVar194 >> 0x10) ^ bVar86 ^ auVar41[10] | bVar216 ^ bVar84;
    bVar51 = bVar171 | (byte)((uint)iVar5 >> 0x18) ^ auVar41[15] ^
                       (byte)((uint)iVar225 >> 0x18) ^ (byte)((uint)iVar35 >> 0x18) |
             (byte)((uint)iVar202 >> 0x10) ^ bVar89 ^ auVar41[14] | bVar222 ^ bVar87;
    *(ulong *)(puVar15 + 10) =
         CONCAT17(bVar19,CONCAT16(bVar65,CONCAT15(bVar64,CONCAT14(bVar201,CONCAT13(bVar18,CONCAT12(
                                                  bVar137,CONCAT11(bVar135,bVar197)))))));
    *(ulong *)(puVar15 + 8) =
         CONCAT17(bVar17,CONCAT16(bVar132,CONCAT15(bVar130,CONCAT14(bVar193,CONCAT13(bVar16,CONCAT12
                                                  (bVar127,CONCAT11(bVar125,bVar189)))))));
    *(ulong *)(puVar15 + 0xe) =
         CONCAT17(bVar23,CONCAT16(bVar78,CONCAT15(bVar77,CONCAT14(bVar185,CONCAT13(bVar22,CONCAT12(
                                                  bVar75,CONCAT11(bVar74,bVar181)))))));
    *(ulong *)(puVar15 + 0xc) =
         CONCAT17(bVar21,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar177,CONCAT13(bVar20,CONCAT12(
                                                  bVar69,CONCAT11(bVar68,bVar173)))))));
    *(byte *)(puVar15 + 4) = bVar85;
    *(byte *)((long)puVar15 + 0x11) = bVar48;
    *(byte *)((long)puVar15 + 0x12) = bVar49;
    *(byte *)((long)puVar15 + 0x13) = bVar79;
    *(byte *)(puVar15 + 5) = bVar88;
    *(byte *)((long)puVar15 + 0x15) = bVar100;
    *(byte *)((long)puVar15 + 0x16) = bVar102;
    *(byte *)((long)puVar15 + 0x17) = bVar51;
    *(byte *)puVar15 = bVar80;
    *(byte *)((long)puVar15 + 1) = bVar42;
    *(byte *)((long)puVar15 + 2) = bVar43;
    *(byte *)((long)puVar15 + 3) = bVar103;
    *(byte *)(puVar15 + 1) = bVar82;
    *(byte *)((long)puVar15 + 5) = bVar45;
    *(byte *)((long)puVar15 + 6) = bVar46;
    *(byte *)((long)puVar15 + 7) = bVar108;
    *(byte *)(puVar15 + 8) = bVar95;
    *(byte *)((long)puVar15 + 0x21) = bVar115;
    *(byte *)((long)puVar15 + 0x22) = bVar117;
    *(byte *)((long)puVar15 + 0x23) = bVar92;
    *(byte *)(puVar15 + 9) = bVar98;
    *(byte *)((long)puVar15 + 0x25) = bVar120;
    *(byte *)((long)puVar15 + 0x26) = bVar122;
    *(byte *)((long)puVar15 + 0x27) = bVar58;
    *(byte *)(puVar15 + 4) = bVar91;
    *(byte *)((long)puVar15 + 0x11) = bVar105;
    *(byte *)((long)puVar15 + 0x12) = bVar107;
    *(byte *)((long)puVar15 + 0x13) = bVar90;
    *(byte *)(puVar15 + 5) = bVar93;
    *(byte *)((long)puVar15 + 0x15) = bVar110;
    *(byte *)((long)puVar15 + 0x16) = bVar112;
    *(byte *)((long)puVar15 + 0x17) = bVar55;
    uVar10 = CONCAT17(bVar82,CONCAT16(bVar108,CONCAT15(bVar46,CONCAT14(bVar45,CONCAT13(bVar80,
                                                  CONCAT12(bVar103,CONCAT11(bVar43,bVar42)))))));
    auVar53[8] = bVar48;
    auVar53._0_8_ = uVar10;
    auVar53[9] = bVar49;
    auVar53[10] = bVar79;
    auVar53[11] = bVar85;
    auVar53[12] = bVar100;
    auVar53[13] = bVar102;
    auVar53[14] = bVar51;
    auVar53[15] = bVar88;
    uVar11 = CONCAT17(bVar93,CONCAT16(bVar55,CONCAT15(bVar112,CONCAT14(bVar110,CONCAT13(bVar91,
                                                  CONCAT12(bVar90,CONCAT11(bVar107,bVar105)))))));
    auVar60[8] = bVar115;
    auVar60._0_8_ = uVar11;
    auVar60[9] = bVar117;
    auVar60[10] = bVar92;
    auVar60[11] = bVar95;
    auVar60[12] = bVar120;
    auVar60[13] = bVar122;
    auVar60[14] = bVar58;
    auVar60[15] = bVar98;
    *(long *)(puVar15 + 0x102) = auVar53._8_8_;
    *(undefined8 *)(puVar15 + 0x100) = uVar10;
    *(long *)(puVar15 + 0x106) = auVar60._8_8_;
    *(undefined8 *)(puVar15 + 0x104) = uVar11;
    *(ulong *)(puVar15 + 0x10a) =
         CONCAT17(bVar201,CONCAT16(bVar19,CONCAT15(bVar65,CONCAT14(bVar64,CONCAT13(bVar197,CONCAT12(
                                                  bVar18,CONCAT11(bVar137,bVar135)))))));
    *(ulong *)(puVar15 + 0x108) =
         CONCAT17(bVar193,CONCAT16(bVar17,CONCAT15(bVar132,CONCAT14(bVar130,CONCAT13(bVar189,
                                                  CONCAT12(bVar16,CONCAT11(bVar127,bVar125)))))));
    *(ulong *)(puVar15 + 0x10e) =
         CONCAT17(bVar185,CONCAT16(bVar23,CONCAT15(bVar78,CONCAT14(bVar77,CONCAT13(bVar181,CONCAT12(
                                                  bVar22,CONCAT11(bVar75,bVar74)))))));
    *(ulong *)(puVar15 + 0x10c) =
         CONCAT17(bVar177,CONCAT16(bVar21,CONCAT15(bVar72,CONCAT14(bVar71,CONCAT13(bVar173,CONCAT12(
                                                  bVar20,CONCAT11(bVar69,bVar68)))))));
    *(ulong *)(puVar15 + 0x20e) =
         CONCAT17(bVar77,CONCAT16(bVar185,CONCAT15(bVar23,CONCAT14(bVar78,CONCAT13(bVar74,CONCAT12(
                                                  bVar181,CONCAT11(bVar22,bVar75)))))));
    *(ulong *)(puVar15 + 0x20c) =
         CONCAT17(bVar71,CONCAT16(bVar177,CONCAT15(bVar21,CONCAT14(bVar72,CONCAT13(bVar68,CONCAT12(
                                                  bVar173,CONCAT11(bVar20,bVar69)))))));
    *(ulong *)(puVar15 + 0x20a) =
         CONCAT17(bVar64,CONCAT16(bVar201,CONCAT15(bVar19,CONCAT14(bVar65,CONCAT13(bVar135,CONCAT12(
                                                  bVar197,CONCAT11(bVar18,bVar137)))))));
    *(ulong *)(puVar15 + 0x208) =
         CONCAT17(bVar130,CONCAT16(bVar193,CONCAT15(bVar17,CONCAT14(bVar132,CONCAT13(bVar125,
                                                  CONCAT12(bVar189,CONCAT11(bVar16,bVar127)))))));
    *(byte *)(puVar15 + 0x208) = bVar117;
    *(byte *)((long)puVar15 + 0x821) = bVar92;
    *(byte *)((long)puVar15 + 0x822) = bVar95;
    *(byte *)((long)puVar15 + 0x823) = bVar115;
    *(byte *)(puVar15 + 0x209) = bVar122;
    *(byte *)((long)puVar15 + 0x825) = bVar58;
    *(byte *)((long)puVar15 + 0x826) = bVar98;
    *(byte *)((long)puVar15 + 0x827) = bVar120;
    *(byte *)(puVar15 + 0x204) = bVar107;
    *(byte *)((long)puVar15 + 0x811) = bVar90;
    *(byte *)((long)puVar15 + 0x812) = bVar91;
    *(byte *)((long)puVar15 + 0x813) = bVar105;
    *(byte *)(puVar15 + 0x205) = bVar112;
    *(byte *)((long)puVar15 + 0x815) = bVar55;
    *(byte *)((long)puVar15 + 0x816) = bVar93;
    *(byte *)((long)puVar15 + 0x817) = bVar110;
    *(byte *)(puVar15 + 0x204) = bVar49;
    *(byte *)((long)puVar15 + 0x811) = bVar79;
    *(byte *)((long)puVar15 + 0x812) = bVar85;
    *(byte *)((long)puVar15 + 0x813) = bVar48;
    *(byte *)(puVar15 + 0x205) = bVar102;
    *(byte *)((long)puVar15 + 0x815) = bVar51;
    *(byte *)((long)puVar15 + 0x816) = bVar88;
    *(byte *)((long)puVar15 + 0x817) = bVar100;
    *(byte *)(puVar15 + 0x200) = bVar43;
    *(byte *)((long)puVar15 + 0x801) = bVar103;
    *(byte *)((long)puVar15 + 0x802) = bVar80;
    *(byte *)((long)puVar15 + 0x803) = bVar42;
    *(byte *)(puVar15 + 0x201) = bVar46;
    *(byte *)((long)puVar15 + 0x805) = bVar108;
    *(byte *)((long)puVar15 + 0x806) = bVar82;
    *(byte *)((long)puVar15 + 0x807) = bVar45;
    *(ulong *)(puVar15 + 0x30e) =
         CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar185,CONCAT14(bVar23,CONCAT13(bVar75,CONCAT12(
                                                  bVar74,CONCAT11(bVar181,bVar22)))))));
    *(ulong *)(puVar15 + 0x30c) =
         CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar177,CONCAT14(bVar21,CONCAT13(bVar69,CONCAT12(
                                                  bVar68,CONCAT11(bVar173,bVar20)))))));
    *(ulong *)(puVar15 + 0x30a) =
         CONCAT17(bVar65,CONCAT16(bVar64,CONCAT15(bVar201,CONCAT14(bVar19,CONCAT13(bVar137,CONCAT12(
                                                  bVar135,CONCAT11(bVar197,bVar18)))))));
    *(ulong *)(puVar15 + 0x308) =
         CONCAT17(bVar132,CONCAT16(bVar130,CONCAT15(bVar193,CONCAT14(bVar17,CONCAT13(bVar127,
                                                  CONCAT12(bVar125,CONCAT11(bVar189,bVar16)))))));
    *(byte *)(puVar15 + 0x308) = bVar92;
    *(byte *)((long)puVar15 + 0xc21) = bVar95;
    *(byte *)((long)puVar15 + 0xc22) = bVar115;
    *(byte *)((long)puVar15 + 0xc23) = bVar117;
    *(byte *)(puVar15 + 0x309) = bVar58;
    *(byte *)((long)puVar15 + 0xc25) = bVar98;
    *(byte *)((long)puVar15 + 0xc26) = bVar120;
    *(byte *)((long)puVar15 + 0xc27) = bVar122;
    *(byte *)(puVar15 + 0x304) = bVar90;
    *(byte *)((long)puVar15 + 0xc11) = bVar91;
    *(byte *)((long)puVar15 + 0xc12) = bVar105;
    *(byte *)((long)puVar15 + 0xc13) = bVar107;
    *(byte *)(puVar15 + 0x305) = bVar55;
    *(byte *)((long)puVar15 + 0xc15) = bVar93;
    *(byte *)((long)puVar15 + 0xc16) = bVar110;
    *(byte *)((long)puVar15 + 0xc17) = bVar112;
    *(byte *)(puVar15 + 0x304) = bVar79;
    *(byte *)((long)puVar15 + 0xc11) = bVar85;
    *(byte *)((long)puVar15 + 0xc12) = bVar48;
    *(byte *)((long)puVar15 + 0xc13) = bVar49;
    *(byte *)(puVar15 + 0x305) = bVar51;
    *(byte *)((long)puVar15 + 0xc15) = bVar88;
    *(byte *)((long)puVar15 + 0xc16) = bVar100;
    *(byte *)((long)puVar15 + 0xc17) = bVar102;
    *(byte *)(puVar15 + 0x300) = bVar103;
    *(byte *)((long)puVar15 + 0xc01) = bVar80;
    *(byte *)((long)puVar15 + 0xc02) = bVar42;
    *(byte *)((long)puVar15 + 0xc03) = bVar43;
    *(byte *)(puVar15 + 0x301) = bVar108;
    *(byte *)((long)puVar15 + 0xc05) = bVar82;
    *(byte *)((long)puVar15 + 0xc06) = bVar45;
    *(byte *)((long)puVar15 + 0xc07) = bVar46;
    puVar15 = puVar15 + 0x10;
  } while (lVar14 != 0x100);
  DAT_02122a34 = 1;
  return;
}


