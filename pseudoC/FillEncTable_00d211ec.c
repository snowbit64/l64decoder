// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillEncTable
// Entry Point: 00d211ec
// Size: 492 bytes
// Signature: undefined FillEncTable(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Rijndael::Base::FillEncTable() */

void CryptoPP::Rijndael::Base::FillEncTable(void)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  long lVar26;
  undefined4 *puVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined auVar28 [16];
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined auVar37 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined auVar46 [16];
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined auVar55 [16];
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  int iVar81;
  byte bVar82;
  int iVar83;
  byte bVar84;
  int iVar85;
  byte bVar86;
  int iVar87;
  byte bVar88;
  int iVar89;
  byte bVar90;
  int iVar91;
  byte bVar92;
  int iVar93;
  byte bVar94;
  int iVar95;
  byte bVar96;
  int iVar97;
  byte bVar98;
  int iVar99;
  byte bVar100;
  int iVar101;
  byte bVar102;
  int iVar103;
  byte bVar104;
  int iVar105;
  byte bVar106;
  int iVar107;
  byte bVar108;
  int iVar109;
  byte bVar110;
  int iVar111;
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
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  
  auVar25 = _DAT_004c4f40;
  auVar24 = _DAT_004c4d70;
  auVar23 = _DAT_004c4a50;
  auVar22 = _DAT_004c37b0;
  lVar26 = 0;
  puVar27 = &DAT_02120a30;
  do {
    pauVar1 = (undefined (*) [16])(Se + lVar26);
    lVar26 = lVar26 + 0x10;
    auVar28 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar23);
    auVar37 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar22);
    auVar46 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar24);
    auVar55 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),auVar25);
    iVar2 = auVar28._0_4_ << 1;
    iVar3 = auVar28._4_4_ << 1;
    iVar4 = auVar28._8_4_ << 1;
    iVar5 = auVar28._12_4_ << 1;
    iVar6 = auVar37._0_4_ << 1;
    iVar7 = auVar37._4_4_ << 1;
    iVar8 = auVar37._8_4_ << 1;
    iVar9 = auVar37._12_4_ << 1;
    iVar10 = auVar46._0_4_ << 1;
    iVar11 = auVar46._4_4_ << 1;
    iVar12 = auVar46._8_4_ << 1;
    iVar13 = auVar46._12_4_ << 1;
    iVar14 = auVar55._0_4_ << 1;
    iVar15 = auVar55._4_4_ << 1;
    iVar16 = auVar55._8_4_ << 1;
    iVar17 = auVar55._12_4_ << 1;
    iVar81 = (auVar28._0_4_ >> 7) * 0x11b;
    iVar83 = (auVar28._4_4_ >> 7) * 0x11b;
    iVar85 = (auVar28._8_4_ >> 7) * 0x11b;
    iVar87 = (auVar28._12_4_ >> 7) * 0x11b;
    iVar89 = (auVar37._0_4_ >> 7) * 0x11b;
    iVar91 = (auVar37._4_4_ >> 7) * 0x11b;
    iVar93 = (auVar37._8_4_ >> 7) * 0x11b;
    iVar95 = (auVar37._12_4_ >> 7) * 0x11b;
    iVar97 = (auVar46._0_4_ >> 7) * 0x11b;
    iVar99 = (auVar46._4_4_ >> 7) * 0x11b;
    iVar101 = (auVar46._8_4_ >> 7) * 0x11b;
    iVar103 = (auVar46._12_4_ >> 7) * 0x11b;
    iVar105 = (auVar55._0_4_ >> 7) * 0x11b;
    iVar107 = (auVar55._4_4_ >> 7) * 0x11b;
    iVar109 = (auVar55._8_4_ >> 7) * 0x11b;
    iVar111 = (auVar55._12_4_ >> 7) * 0x11b;
    bVar64 = (byte)iVar81 ^ (byte)iVar2;
    bVar65 = (byte)iVar83 ^ (byte)iVar3;
    bVar66 = (byte)iVar85 ^ (byte)iVar4;
    bVar67 = (byte)iVar87 ^ (byte)iVar5;
    bVar68 = (byte)iVar89 ^ (byte)iVar6;
    bVar69 = (byte)iVar91 ^ (byte)iVar7;
    bVar70 = (byte)iVar93 ^ (byte)iVar8;
    bVar71 = (byte)iVar95 ^ (byte)iVar9;
    bVar72 = (byte)iVar97 ^ (byte)iVar10;
    bVar73 = (byte)iVar99 ^ (byte)iVar11;
    bVar74 = (byte)iVar101 ^ (byte)iVar12;
    bVar75 = (byte)iVar103 ^ (byte)iVar13;
    bVar76 = (byte)iVar105 ^ (byte)iVar14;
    bVar77 = (byte)iVar107 ^ (byte)iVar15;
    bVar78 = (byte)iVar109 ^ (byte)iVar16;
    bVar79 = (byte)iVar111 ^ (byte)iVar17;
    bVar30 = auVar28[0];
    bVar80 = bVar64 ^ bVar30;
    bVar29 = auVar28[1];
    bVar32 = auVar28[4];
    bVar82 = bVar65 ^ bVar32;
    bVar31 = auVar28[5];
    bVar34 = auVar28[8];
    bVar84 = bVar66 ^ bVar34;
    bVar33 = auVar28[9];
    bVar36 = auVar28[12];
    bVar86 = bVar67 ^ bVar36;
    bVar35 = auVar28[13];
    bVar39 = auVar37[0];
    bVar88 = bVar68 ^ bVar39;
    bVar38 = auVar37[1];
    bVar41 = auVar37[4];
    bVar90 = bVar69 ^ bVar41;
    bVar40 = auVar37[5];
    bVar43 = auVar37[8];
    bVar92 = bVar70 ^ bVar43;
    bVar42 = auVar37[9];
    bVar45 = auVar37[12];
    bVar94 = bVar71 ^ bVar45;
    bVar44 = auVar37[13];
    bVar48 = auVar46[0];
    bVar96 = bVar72 ^ bVar48;
    bVar47 = auVar46[1];
    bVar50 = auVar46[4];
    bVar98 = bVar73 ^ bVar50;
    bVar49 = auVar46[5];
    bVar52 = auVar46[8];
    bVar100 = bVar74 ^ bVar52;
    bVar51 = auVar46[9];
    bVar54 = auVar46[12];
    bVar102 = bVar75 ^ bVar54;
    bVar53 = auVar46[13];
    bVar57 = auVar55[0];
    bVar104 = bVar76 ^ bVar57;
    bVar56 = auVar55[1];
    bVar59 = auVar55[4];
    bVar106 = bVar77 ^ bVar59;
    bVar58 = auVar55[5];
    bVar61 = auVar55[8];
    bVar108 = bVar78 ^ bVar61;
    bVar60 = auVar55[9];
    bVar63 = auVar55[12];
    bVar110 = bVar79 ^ bVar63;
    bVar62 = auVar55[13];
    bVar112 = bVar57 | (byte)((uint)iVar105 >> 8) ^ (byte)((uint)iVar14 >> 8) ^ bVar56;
    bVar113 = bVar59 | (byte)((uint)iVar107 >> 8) ^ (byte)((uint)iVar15 >> 8) ^ bVar58;
    bVar114 = bVar61 | (byte)((uint)iVar109 >> 8) ^ (byte)((uint)iVar16 >> 8) ^ bVar60;
    bVar115 = bVar63 | (byte)((uint)iVar111 >> 8) ^ (byte)((uint)iVar17 >> 8) ^ bVar62;
    bVar116 = bVar48 | (byte)((uint)iVar97 >> 8) ^ (byte)((uint)iVar10 >> 8) ^ bVar47;
    bVar117 = bVar50 | (byte)((uint)iVar99 >> 8) ^ (byte)((uint)iVar11 >> 8) ^ bVar49;
    bVar118 = bVar52 | (byte)((uint)iVar101 >> 8) ^ (byte)((uint)iVar12 >> 8) ^ bVar51;
    bVar119 = bVar54 | (byte)((uint)iVar103 >> 8) ^ (byte)((uint)iVar13 >> 8) ^ bVar53;
    bVar120 = bVar39 | (byte)((uint)iVar89 >> 8) ^ (byte)((uint)iVar6 >> 8) ^ bVar38;
    bVar121 = bVar41 | (byte)((uint)iVar91 >> 8) ^ (byte)((uint)iVar7 >> 8) ^ bVar40;
    bVar122 = bVar43 | (byte)((uint)iVar93 >> 8) ^ (byte)((uint)iVar8 >> 8) ^ bVar42;
    bVar123 = bVar45 | (byte)((uint)iVar95 >> 8) ^ (byte)((uint)iVar9 >> 8) ^ bVar44;
    bVar124 = bVar30 | (byte)((uint)iVar81 >> 8) ^ (byte)((uint)iVar2 >> 8) ^ bVar29;
    bVar125 = bVar32 | (byte)((uint)iVar83 >> 8) ^ (byte)((uint)iVar3 >> 8) ^ bVar31;
    bVar126 = bVar34 | (byte)((uint)iVar85 >> 8) ^ (byte)((uint)iVar4 >> 8) ^ bVar33;
    bVar127 = bVar36 | (byte)((uint)iVar87 >> 8) ^ (byte)((uint)iVar5 >> 8) ^ bVar35;
    bVar30 = bVar29 | (byte)((uint)iVar81 >> 0x10) ^ (byte)((uint)iVar2 >> 0x10) ^ auVar28[2] |
             bVar30;
    bVar32 = bVar31 | (byte)((uint)iVar83 >> 0x10) ^ (byte)((uint)iVar3 >> 0x10) ^ auVar28[6] |
             bVar32;
    bVar34 = bVar33 | (byte)((uint)iVar85 >> 0x10) ^ (byte)((uint)iVar4 >> 0x10) ^ auVar28[10] |
             bVar34;
    bVar36 = bVar35 | (byte)((uint)iVar87 >> 0x10) ^ (byte)((uint)iVar5 >> 0x10) ^ auVar28[14] |
             bVar36;
    bVar39 = bVar38 | (byte)((uint)iVar89 >> 0x10) ^ (byte)((uint)iVar6 >> 0x10) ^ auVar37[2] |
             bVar39;
    bVar41 = bVar40 | (byte)((uint)iVar91 >> 0x10) ^ (byte)((uint)iVar7 >> 0x10) ^ auVar37[6] |
             bVar41;
    bVar43 = bVar42 | (byte)((uint)iVar93 >> 0x10) ^ (byte)((uint)iVar8 >> 0x10) ^ auVar37[10] |
             bVar43;
    bVar45 = bVar44 | (byte)((uint)iVar95 >> 0x10) ^ (byte)((uint)iVar9 >> 0x10) ^ auVar37[14] |
             bVar45;
    bVar48 = bVar47 | (byte)((uint)iVar97 >> 0x10) ^ (byte)((uint)iVar10 >> 0x10) ^ auVar46[2] |
             bVar48;
    bVar50 = bVar49 | (byte)((uint)iVar99 >> 0x10) ^ (byte)((uint)iVar11 >> 0x10) ^ auVar46[6] |
             bVar50;
    bVar52 = bVar51 | (byte)((uint)iVar101 >> 0x10) ^ (byte)((uint)iVar12 >> 0x10) ^ auVar46[10] |
             bVar52;
    bVar54 = bVar53 | (byte)((uint)iVar103 >> 0x10) ^ (byte)((uint)iVar13 >> 0x10) ^ auVar46[14] |
             bVar54;
    bVar57 = bVar56 | (byte)((uint)iVar105 >> 0x10) ^ (byte)((uint)iVar14 >> 0x10) ^ auVar55[2] |
             bVar57;
    bVar59 = bVar58 | (byte)((uint)iVar107 >> 0x10) ^ (byte)((uint)iVar15 >> 0x10) ^ auVar55[6] |
             bVar59;
    bVar61 = bVar60 | (byte)((uint)iVar109 >> 0x10) ^ (byte)((uint)iVar16 >> 0x10) ^ auVar55[10] |
             bVar61;
    bVar63 = bVar62 | (byte)((uint)iVar111 >> 0x10) ^ (byte)((uint)iVar17 >> 0x10) ^ auVar55[14] |
             bVar63;
    bVar64 = auVar28[2] | (byte)((uint)iVar81 >> 0x18) ^ (byte)((uint)iVar2 >> 0x18) ^ auVar28[3] |
             bVar29 | bVar64;
    bVar65 = auVar28[6] | (byte)((uint)iVar83 >> 0x18) ^ (byte)((uint)iVar3 >> 0x18) ^ auVar28[7] |
             bVar31 | bVar65;
    bVar66 = auVar28[10] | (byte)((uint)iVar85 >> 0x18) ^ (byte)((uint)iVar4 >> 0x18) ^ auVar28[11]
             | bVar33 | bVar66;
    bVar67 = auVar28[14] | (byte)((uint)iVar87 >> 0x18) ^ (byte)((uint)iVar5 >> 0x18) ^ auVar28[15]
             | bVar35 | bVar67;
    bVar68 = auVar37[2] | (byte)((uint)iVar89 >> 0x18) ^ (byte)((uint)iVar6 >> 0x18) ^ auVar37[3] |
             bVar38 | bVar68;
    bVar69 = auVar37[6] | (byte)((uint)iVar91 >> 0x18) ^ (byte)((uint)iVar7 >> 0x18) ^ auVar37[7] |
             bVar40 | bVar69;
    bVar70 = auVar37[10] | (byte)((uint)iVar93 >> 0x18) ^ (byte)((uint)iVar8 >> 0x18) ^ auVar37[11]
             | bVar42 | bVar70;
    bVar71 = auVar37[14] | (byte)((uint)iVar95 >> 0x18) ^ (byte)((uint)iVar9 >> 0x18) ^ auVar37[15]
             | bVar44 | bVar71;
    bVar72 = auVar46[2] | (byte)((uint)iVar97 >> 0x18) ^ (byte)((uint)iVar10 >> 0x18) ^ auVar46[3] |
             bVar47 | bVar72;
    bVar73 = auVar46[6] | (byte)((uint)iVar99 >> 0x18) ^ (byte)((uint)iVar11 >> 0x18) ^ auVar46[7] |
             bVar49 | bVar73;
    bVar74 = auVar46[10] |
             (byte)((uint)iVar101 >> 0x18) ^ (byte)((uint)iVar12 >> 0x18) ^ auVar46[11] | bVar51 |
             bVar74;
    bVar75 = auVar46[14] |
             (byte)((uint)iVar103 >> 0x18) ^ (byte)((uint)iVar13 >> 0x18) ^ auVar46[15] | bVar53 |
             bVar75;
    bVar76 = auVar55[2] | (byte)((uint)iVar105 >> 0x18) ^ (byte)((uint)iVar14 >> 0x18) ^ auVar55[3]
             | bVar56 | bVar76;
    bVar77 = auVar55[6] | (byte)((uint)iVar107 >> 0x18) ^ (byte)((uint)iVar15 >> 0x18) ^ auVar55[7]
             | bVar58 | bVar77;
    bVar78 = auVar55[10] |
             (byte)((uint)iVar109 >> 0x18) ^ (byte)((uint)iVar16 >> 0x18) ^ auVar55[11] | bVar60 |
             bVar78;
    bVar79 = auVar55[14] |
             (byte)((uint)iVar111 >> 0x18) ^ (byte)((uint)iVar17 >> 0x18) ^ auVar55[15] | bVar62 |
             bVar79;
    *(byte *)(puVar27 + 0xc) = bVar92;
    *(byte *)((long)puVar27 + 0x31) = bVar122;
    *(byte *)((long)puVar27 + 0x32) = bVar43;
    *(byte *)((long)puVar27 + 0x33) = bVar70;
    *(byte *)(puVar27 + 0xd) = bVar94;
    *(byte *)((long)puVar27 + 0x35) = bVar123;
    *(byte *)((long)puVar27 + 0x36) = bVar45;
    *(byte *)((long)puVar27 + 0x37) = bVar71;
    *(byte *)(puVar27 + 8) = bVar88;
    *(byte *)((long)puVar27 + 0x21) = bVar120;
    *(byte *)((long)puVar27 + 0x22) = bVar39;
    *(byte *)((long)puVar27 + 0x23) = bVar68;
    *(byte *)(puVar27 + 9) = bVar90;
    *(byte *)((long)puVar27 + 0x25) = bVar121;
    *(byte *)((long)puVar27 + 0x26) = bVar41;
    *(byte *)((long)puVar27 + 0x27) = bVar69;
    *(byte *)(puVar27 + 0x10) = bVar84;
    *(byte *)((long)puVar27 + 0x41) = bVar126;
    *(byte *)((long)puVar27 + 0x42) = bVar34;
    *(byte *)((long)puVar27 + 0x43) = bVar66;
    *(byte *)(puVar27 + 0x11) = bVar86;
    *(byte *)((long)puVar27 + 0x45) = bVar127;
    *(byte *)((long)puVar27 + 0x46) = bVar36;
    *(byte *)((long)puVar27 + 0x47) = bVar67;
    *(byte *)(puVar27 + 0xc) = bVar80;
    *(byte *)((long)puVar27 + 0x31) = bVar124;
    *(byte *)((long)puVar27 + 0x32) = bVar30;
    *(byte *)((long)puVar27 + 0x33) = bVar64;
    *(byte *)(puVar27 + 0xd) = bVar82;
    *(byte *)((long)puVar27 + 0x35) = bVar125;
    *(byte *)((long)puVar27 + 0x36) = bVar32;
    *(byte *)((long)puVar27 + 0x37) = bVar65;
    *(byte *)(puVar27 + 4) = bVar108;
    *(byte *)((long)puVar27 + 0x11) = bVar114;
    *(byte *)((long)puVar27 + 0x12) = bVar61;
    *(byte *)((long)puVar27 + 0x13) = bVar78;
    *(byte *)(puVar27 + 5) = bVar110;
    *(byte *)((long)puVar27 + 0x15) = bVar115;
    *(byte *)((long)puVar27 + 0x16) = bVar63;
    *(byte *)((long)puVar27 + 0x17) = bVar79;
    *(byte *)puVar27 = bVar104;
    *(byte *)((long)puVar27 + 1) = bVar112;
    *(byte *)((long)puVar27 + 2) = bVar57;
    *(byte *)((long)puVar27 + 3) = bVar76;
    *(byte *)(puVar27 + 1) = bVar106;
    *(byte *)((long)puVar27 + 5) = bVar113;
    *(byte *)((long)puVar27 + 6) = bVar59;
    *(byte *)((long)puVar27 + 7) = bVar77;
    *(byte *)(puVar27 + 8) = bVar100;
    *(byte *)((long)puVar27 + 0x21) = bVar118;
    *(byte *)((long)puVar27 + 0x22) = bVar52;
    *(byte *)((long)puVar27 + 0x23) = bVar74;
    *(byte *)(puVar27 + 9) = bVar102;
    *(byte *)((long)puVar27 + 0x25) = bVar119;
    *(byte *)((long)puVar27 + 0x26) = bVar54;
    *(byte *)((long)puVar27 + 0x27) = bVar75;
    *(byte *)(puVar27 + 4) = bVar96;
    *(byte *)((long)puVar27 + 0x11) = bVar116;
    *(byte *)((long)puVar27 + 0x12) = bVar48;
    *(byte *)((long)puVar27 + 0x13) = bVar72;
    *(byte *)(puVar27 + 5) = bVar98;
    *(byte *)((long)puVar27 + 0x15) = bVar117;
    *(byte *)((long)puVar27 + 0x16) = bVar50;
    *(byte *)((long)puVar27 + 0x17) = bVar73;
    uVar18 = CONCAT17(bVar82,CONCAT16(bVar65,CONCAT15(bVar32,CONCAT14(bVar125,CONCAT13(bVar80,
                                                  CONCAT12(bVar64,CONCAT11(bVar30,bVar124)))))));
    auVar28[8] = bVar126;
    auVar28._0_8_ = uVar18;
    auVar28[9] = bVar34;
    auVar28[10] = bVar66;
    auVar28[11] = bVar84;
    auVar28[12] = bVar127;
    auVar28[13] = bVar36;
    auVar28[14] = bVar67;
    auVar28[15] = bVar86;
    uVar19 = CONCAT17(bVar90,CONCAT16(bVar69,CONCAT15(bVar41,CONCAT14(bVar121,CONCAT13(bVar88,
                                                  CONCAT12(bVar68,CONCAT11(bVar39,bVar120)))))));
    auVar37[8] = bVar122;
    auVar37._0_8_ = uVar19;
    auVar37[9] = bVar43;
    auVar37[10] = bVar70;
    auVar37[11] = bVar92;
    auVar37[12] = bVar123;
    auVar37[13] = bVar45;
    auVar37[14] = bVar71;
    auVar37[15] = bVar94;
    uVar20 = CONCAT17(bVar98,CONCAT16(bVar73,CONCAT15(bVar50,CONCAT14(bVar117,CONCAT13(bVar96,
                                                  CONCAT12(bVar72,CONCAT11(bVar48,bVar116)))))));
    auVar46[8] = bVar118;
    auVar46._0_8_ = uVar20;
    auVar46[9] = bVar52;
    auVar46[10] = bVar74;
    auVar46[11] = bVar100;
    auVar46[12] = bVar119;
    auVar46[13] = bVar54;
    auVar46[14] = bVar75;
    auVar46[15] = bVar102;
    uVar21 = CONCAT17(bVar106,CONCAT16(bVar77,CONCAT15(bVar59,CONCAT14(bVar113,CONCAT13(bVar104,
                                                  CONCAT12(bVar76,CONCAT11(bVar57,bVar112)))))));
    auVar55[8] = bVar114;
    auVar55._0_8_ = uVar21;
    auVar55[9] = bVar61;
    auVar55[10] = bVar78;
    auVar55[11] = bVar108;
    auVar55[12] = bVar115;
    auVar55[13] = bVar63;
    auVar55[14] = bVar79;
    auVar55[15] = bVar110;
    *(long *)(puVar27 + 0x10e) = auVar28._8_8_;
    *(undefined8 *)(puVar27 + 0x10c) = uVar18;
    *(long *)(puVar27 + 0x10a) = auVar37._8_8_;
    *(undefined8 *)(puVar27 + 0x108) = uVar19;
    *(long *)(puVar27 + 0x106) = auVar46._8_8_;
    *(undefined8 *)(puVar27 + 0x104) = uVar20;
    *(long *)(puVar27 + 0x102) = auVar55._8_8_;
    *(undefined8 *)(puVar27 + 0x100) = uVar21;
    *(ulong *)(puVar27 + 0x20e) =
         CONCAT17(bVar127,CONCAT16(bVar86,CONCAT15(bVar67,CONCAT14(bVar36,CONCAT13(bVar126,CONCAT12(
                                                  bVar84,CONCAT11(bVar66,bVar34)))))));
    *(ulong *)(puVar27 + 0x20c) =
         CONCAT17(bVar125,CONCAT16(bVar82,CONCAT15(bVar65,CONCAT14(bVar32,CONCAT13(bVar124,CONCAT12(
                                                  bVar80,CONCAT11(bVar64,bVar30)))))));
    *(ulong *)(puVar27 + 0x20a) =
         CONCAT17(bVar123,CONCAT16(bVar94,CONCAT15(bVar71,CONCAT14(bVar45,CONCAT13(bVar122,CONCAT12(
                                                  bVar92,CONCAT11(bVar70,bVar43)))))));
    *(ulong *)(puVar27 + 0x208) =
         CONCAT17(bVar121,CONCAT16(bVar90,CONCAT15(bVar69,CONCAT14(bVar41,CONCAT13(bVar120,CONCAT12(
                                                  bVar88,CONCAT11(bVar68,bVar39)))))));
    *(ulong *)(puVar27 + 0x206) =
         CONCAT17(bVar119,CONCAT16(bVar102,CONCAT15(bVar75,CONCAT14(bVar54,CONCAT13(bVar118,CONCAT12
                                                  (bVar100,CONCAT11(bVar74,bVar52)))))));
    *(ulong *)(puVar27 + 0x204) =
         CONCAT17(bVar117,CONCAT16(bVar98,CONCAT15(bVar73,CONCAT14(bVar50,CONCAT13(bVar116,CONCAT12(
                                                  bVar96,CONCAT11(bVar72,bVar48)))))));
    *(ulong *)(puVar27 + 0x202) =
         CONCAT17(bVar115,CONCAT16(bVar110,CONCAT15(bVar79,CONCAT14(bVar63,CONCAT13(bVar114,CONCAT12
                                                  (bVar108,CONCAT11(bVar78,bVar61)))))));
    *(ulong *)(puVar27 + 0x200) =
         CONCAT17(bVar113,CONCAT16(bVar106,CONCAT15(bVar77,CONCAT14(bVar59,CONCAT13(bVar112,CONCAT12
                                                  (bVar104,CONCAT11(bVar76,bVar57)))))));
    *(byte *)(puVar27 + 0x310) = bVar66;
    *(byte *)((long)puVar27 + 0xc41) = bVar84;
    *(byte *)((long)puVar27 + 0xc42) = bVar126;
    *(byte *)((long)puVar27 + 0xc43) = bVar34;
    *(byte *)(puVar27 + 0x311) = bVar67;
    *(byte *)((long)puVar27 + 0xc45) = bVar86;
    *(byte *)((long)puVar27 + 0xc46) = bVar127;
    *(byte *)((long)puVar27 + 0xc47) = bVar36;
    *(byte *)(puVar27 + 0x30c) = bVar64;
    *(byte *)((long)puVar27 + 0xc31) = bVar80;
    *(byte *)((long)puVar27 + 0xc32) = bVar124;
    *(byte *)((long)puVar27 + 0xc33) = bVar30;
    *(byte *)(puVar27 + 0x30d) = bVar65;
    *(byte *)((long)puVar27 + 0xc35) = bVar82;
    *(byte *)((long)puVar27 + 0xc36) = bVar125;
    *(byte *)((long)puVar27 + 0xc37) = bVar32;
    *(byte *)(puVar27 + 0x30c) = bVar70;
    *(byte *)((long)puVar27 + 0xc31) = bVar92;
    *(byte *)((long)puVar27 + 0xc32) = bVar122;
    *(byte *)((long)puVar27 + 0xc33) = bVar43;
    *(byte *)(puVar27 + 0x30d) = bVar71;
    *(byte *)((long)puVar27 + 0xc35) = bVar94;
    *(byte *)((long)puVar27 + 0xc36) = bVar123;
    *(byte *)((long)puVar27 + 0xc37) = bVar45;
    *(byte *)(puVar27 + 0x308) = bVar68;
    *(byte *)((long)puVar27 + 0xc21) = bVar88;
    *(byte *)((long)puVar27 + 0xc22) = bVar120;
    *(byte *)((long)puVar27 + 0xc23) = bVar39;
    *(byte *)(puVar27 + 0x309) = bVar69;
    *(byte *)((long)puVar27 + 0xc25) = bVar90;
    *(byte *)((long)puVar27 + 0xc26) = bVar121;
    *(byte *)((long)puVar27 + 0xc27) = bVar41;
    *(byte *)(puVar27 + 0x308) = bVar74;
    *(byte *)((long)puVar27 + 0xc21) = bVar100;
    *(byte *)((long)puVar27 + 0xc22) = bVar118;
    *(byte *)((long)puVar27 + 0xc23) = bVar52;
    *(byte *)(puVar27 + 0x309) = bVar75;
    *(byte *)((long)puVar27 + 0xc25) = bVar102;
    *(byte *)((long)puVar27 + 0xc26) = bVar119;
    *(byte *)((long)puVar27 + 0xc27) = bVar54;
    *(byte *)(puVar27 + 0x304) = bVar72;
    *(byte *)((long)puVar27 + 0xc11) = bVar96;
    *(byte *)((long)puVar27 + 0xc12) = bVar116;
    *(byte *)((long)puVar27 + 0xc13) = bVar48;
    *(byte *)(puVar27 + 0x305) = bVar73;
    *(byte *)((long)puVar27 + 0xc15) = bVar98;
    *(byte *)((long)puVar27 + 0xc16) = bVar117;
    *(byte *)((long)puVar27 + 0xc17) = bVar50;
    *(byte *)(puVar27 + 0x304) = bVar78;
    *(byte *)((long)puVar27 + 0xc11) = bVar108;
    *(byte *)((long)puVar27 + 0xc12) = bVar114;
    *(byte *)((long)puVar27 + 0xc13) = bVar61;
    *(byte *)(puVar27 + 0x305) = bVar79;
    *(byte *)((long)puVar27 + 0xc15) = bVar110;
    *(byte *)((long)puVar27 + 0xc16) = bVar115;
    *(byte *)((long)puVar27 + 0xc17) = bVar63;
    *(byte *)(puVar27 + 0x300) = bVar76;
    *(byte *)((long)puVar27 + 0xc01) = bVar104;
    *(byte *)((long)puVar27 + 0xc02) = bVar112;
    *(byte *)((long)puVar27 + 0xc03) = bVar57;
    *(byte *)(puVar27 + 0x301) = bVar77;
    *(byte *)((long)puVar27 + 0xc05) = bVar106;
    *(byte *)((long)puVar27 + 0xc06) = bVar113;
    *(byte *)((long)puVar27 + 0xc07) = bVar59;
    puVar27 = puVar27 + 0x10;
  } while (lVar26 != 0x100);
  DAT_02122a30 = 1;
  return;
}


