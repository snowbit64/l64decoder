// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_page_packets
// Entry Point: 00e2352c
// Size: 1260 bytes
// Signature: undefined ogg_page_packets(void)


int ogg_page_packets(long *param_1)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint3 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  int iVar31;
  int iVar34;
  undefined8 uVar33;
  uint uVar35;
  int iVar36;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint5 uVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  uint5 uVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  ulong uVar24;
  ulong uVar32;
  ulong uVar37;
  
  lVar7 = *param_1;
  bVar1 = *(byte *)(lVar7 + 0x1a);
  uVar5 = (ulong)bVar1;
  if (bVar1 == 0) {
    return 0;
  }
  if (bVar1 < 8) {
    uVar9 = 0;
    iVar13 = 0;
  }
  else {
    if (bVar1 < 0x20) {
      iVar13 = 0;
      uVar10 = 0;
    }
    else {
      auVar52._8_8_ = 0xffffffffffffffff;
      auVar52._0_8_ = 0xffffffffffffffff;
      uVar9 = uVar5 & 0xe0;
      auVar14 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x1b),auVar52,1);
      auVar17 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x2b),auVar52,1);
      uVar4 = CONCAT12(~auVar14[9],
                       (short)(CONCAT12(~auVar14[9],CONCAT11(~auVar14[8],~auVar14[7])) >> 8)) &
              0xff00ff;
      uVar12 = (uint)(~auVar14[12] & 1);
      auVar56._0_5_ = CONCAT14(~auVar14[13],uVar12) & 0x1ffffffff;
      auVar56._5_3_ = 0;
      auVar56[8] = ~auVar14[14] & 1;
      auVar56._9_3_ = 0;
      auVar56[12] = ~auVar14[15] & 1;
      auVar56._13_3_ = 0;
      auVar58._0_5_ = CONCAT14((char)(uVar4 >> 0x10),(uint)((byte)uVar4 & 1)) & 0x1ffffffff;
      auVar58._5_3_ = 0;
      auVar58[8] = ~auVar14[10] & 1;
      auVar58._9_3_ = 0;
      auVar58[12] = ~auVar14[11] & 1;
      auVar58._13_3_ = 0;
      uVar39 = (uint)(~auVar14[4] & 1);
      uVar40 = (uint)(~auVar14[5] & 1);
      uVar41 = (uint)((byte)~auVar14[6] & 0xff01);
      uVar42 = (uint)(~auVar14[7] & 1);
      bVar26 = ~auVar14[0] & 1;
      bVar27 = ~auVar14[1] & 1;
      bVar28 = ~auVar14[2] & 1;
      bVar29 = ~auVar14[3] & 1;
      uVar20 = (uint)(~auVar17[12] & 1);
      uVar10 = (ulong)(CONCAT14(~auVar17[13],uVar20) & 0x1ffffffff);
      uVar22 = (uint)(~auVar17[14] & 1);
      uVar24 = (ulong)(CONCAT14(~auVar17[15],uVar22) & 0x1ffffffff);
      uVar30 = (uint)(~auVar17[8] & 1);
      uVar32 = (ulong)(CONCAT14(~auVar17[9],uVar30) & 0x1ffffffff);
      uVar35 = (uint)(~auVar17[10] & 1);
      uVar37 = (ulong)(CONCAT14(~auVar17[11],uVar35) & 0x1ffffffff);
      uVar47 = (uint)(~auVar17[4] & 1);
      uVar48 = (uint)(~auVar17[5] & 1);
      uVar49 = (uint)((byte)~auVar17[6] & 0xff01);
      uVar50 = (uint)(~auVar17[7] & 1);
      uVar43 = (uint)(~auVar17[0] & 1);
      uVar44 = (uint)(~auVar17[1] & 1);
      uVar45 = (uint)(~auVar17[2] & 1);
      uVar46 = (uint)(~auVar17[3] & 1);
      auVar14 = auVar56;
      auVar18 = auVar58;
      if (uVar9 != 0x20) {
        uVar33 = *(undefined8 *)(lVar7 + 0x53);
        auVar57 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x3b),auVar52,1);
        auVar2[9] = (char)((ulong)uVar33 >> 8);
        auVar2._0_9_ = *(unkbyte9 *)(lVar7 + 0x4b);
        auVar2[10] = (char)((ulong)uVar33 >> 0x10);
        auVar2[11] = (char)((ulong)uVar33 >> 0x18);
        auVar2[12] = (char)((ulong)uVar33 >> 0x20);
        auVar2[13] = (char)((ulong)uVar33 >> 0x28);
        auVar2[14] = (char)((ulong)uVar33 >> 0x30);
        auVar2[15] = (char)((ulong)uVar33 >> 0x38);
        auVar52 = NEON_cmeq(auVar2,auVar52,1);
        uVar55 = CONCAT14(~auVar57[9],(uint)(~auVar57[8] & 1)) & 0x100ffffff;
        uVar51 = CONCAT14(~auVar52[13],(uint)(~auVar52[12] & 1)) & 0x100ffffff;
        auVar14._0_4_ = uVar12 + (~auVar57[12] & 1);
        auVar14._4_4_ = (uint)(byte)(auVar56._0_5_ >> 0x20) + (uint)(~auVar57[13] & 1);
        auVar14._8_4_ = (uint)auVar56[8] + (uint)((byte)~auVar57[14] & 0xff01);
        auVar14._12_4_ = (uint)auVar56[12] + (uint)(~auVar57[15] & 1);
        auVar18._0_4_ = (int)auVar58._0_5_ + (int)uVar55;
        auVar18._4_4_ = (uint)(byte)(auVar58._0_5_ >> 0x20) + (uint)(byte)(uVar55 >> 0x20);
        auVar18._8_4_ = (uint)auVar58[8] + (uint)(~auVar57[10] & 1);
        auVar18._12_4_ = (uint)auVar58[12] + (uint)(~auVar57[11] & 1);
        uVar39 = uVar39 + (~auVar57[4] & 1);
        uVar40 = uVar40 + (~auVar57[5] & 1);
        uVar41 = uVar41 + (~auVar57[6] & 1);
        uVar42 = uVar42 + (~auVar57[7] & 1);
        bVar26 = bVar26 + (~auVar57[0] & 1);
        bVar27 = bVar27 + (~auVar57[1] & 1);
        bVar28 = bVar28 + (~auVar57[2] & 1);
        bVar29 = bVar29 + (~auVar57[3] & 1);
        iVar13 = uVar20 + (int)uVar51;
        iVar21 = (uint)(~auVar17[13] & 1) + (uint)(byte)(uVar51 >> 0x20);
        uVar10 = CONCAT44(iVar21,iVar13);
        iVar23 = uVar22 + (~auVar52[14] & 1);
        iVar25 = (uint)(~auVar17[15] & 1) + (uint)(~auVar52[15] & 1);
        uVar24 = CONCAT44(iVar25,iVar23);
        iVar31 = uVar30 + (~auVar52[8] & 1);
        iVar34 = (uint)(~auVar17[9] & 1) + (uint)(~auVar52[9] & 1);
        uVar32 = CONCAT44(iVar34,iVar31);
        iVar36 = uVar35 + ((byte)~auVar52[10] & 1);
        iVar38 = (uint)(~auVar17[11] & 1) + (uint)(~auVar52[11] & 1);
        uVar37 = CONCAT44(iVar38,iVar36);
        uVar47 = uVar47 + (~auVar52[4] & 1);
        uVar48 = uVar48 + (~auVar52[5] & 1);
        uVar49 = uVar49 + (~auVar52[6] & 1);
        uVar50 = uVar50 + (~auVar52[7] & 1);
        uVar43 = uVar43 + (~auVar52[0] & 1);
        uVar44 = uVar44 + (~auVar52[1] & 1);
        uVar45 = uVar45 + (~auVar52[2] & 1);
        uVar46 = uVar46 + (~auVar52[3] & 1);
        if (uVar9 != 0x40) {
          auVar17._8_8_ = 0xffffffffffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar56 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x5b),auVar17,1);
          auVar58 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x6b),auVar17,1);
          uVar51 = CONCAT14(~auVar58[13],(uint)(~auVar58[12] & 1)) & 0x100ffffff;
          auVar14._0_4_ = auVar14._0_4_ + (uint)(~auVar56[12] & 1);
          auVar14._4_4_ = auVar14._4_4_ + (uint)(~auVar56[13] & 1);
          auVar14._8_4_ = auVar14._8_4_ + (uint)(~auVar56[14] & 1);
          auVar14._12_4_ = auVar14._12_4_ + (uint)(~auVar56[15] & 1);
          auVar18._0_4_ = auVar18._0_4_ + (uint)(~auVar56[8] & 1);
          auVar18._4_4_ = auVar18._4_4_ + (uint)(~auVar56[9] & 1);
          auVar18._8_4_ = auVar18._8_4_ + (uint)(~auVar56[10] & 1);
          auVar18._12_4_ = auVar18._12_4_ + (uint)(~auVar56[11] & 1);
          uVar39 = uVar39 + (~auVar56[4] & 1);
          uVar40 = uVar40 + (~auVar56[5] & 1);
          uVar41 = uVar41 + (~auVar56[6] & 1);
          uVar42 = uVar42 + (~auVar56[7] & 1);
          bVar26 = bVar26 + (~auVar56[0] & 1);
          bVar27 = bVar27 + (~auVar56[1] & 1);
          bVar28 = bVar28 + (~auVar56[2] & 1);
          bVar29 = bVar29 + (~auVar56[3] & 1);
          iVar13 = iVar13 + (int)uVar51;
          iVar21 = iVar21 + (uint)(byte)(uVar51 >> 0x20);
          uVar10 = CONCAT44(iVar21,iVar13);
          iVar23 = iVar23 + (uint)(~auVar58[14] & 1);
          iVar25 = iVar25 + (uint)(~auVar58[15] & 1);
          uVar24 = CONCAT44(iVar25,iVar23);
          iVar31 = iVar31 + (uint)(~auVar58[8] & 1);
          iVar34 = iVar34 + (uint)(~auVar58[9] & 1);
          uVar32 = CONCAT44(iVar34,iVar31);
          iVar36 = iVar36 + (uint)((byte)~auVar58[10] & 1);
          iVar38 = iVar38 + (uint)(~auVar58[11] & 1);
          uVar37 = CONCAT44(iVar38,iVar36);
          uVar47 = uVar47 + (~auVar58[4] & 1);
          uVar48 = uVar48 + (~auVar58[5] & 1);
          uVar49 = uVar49 + (~auVar58[6] & 1);
          uVar50 = uVar50 + (~auVar58[7] & 1);
          uVar43 = uVar43 + (~auVar58[0] & 1);
          uVar44 = uVar44 + (~auVar58[1] & 1);
          uVar45 = uVar45 + (~auVar58[2] & 1);
          uVar46 = uVar46 + (~auVar58[3] & 1);
          if (uVar9 != 0x60) {
            uVar33 = *(undefined8 *)(lVar7 + 0x93);
            auVar58 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x7b),auVar17,1);
            auVar57[9] = (char)((ulong)uVar33 >> 8);
            auVar57._0_9_ = *(unkbyte9 *)(lVar7 + 0x8b);
            auVar57[10] = (char)((ulong)uVar33 >> 0x10);
            auVar57[11] = (char)((ulong)uVar33 >> 0x18);
            auVar57[12] = (char)((ulong)uVar33 >> 0x20);
            auVar57[13] = (char)((ulong)uVar33 >> 0x28);
            auVar57[14] = (char)((ulong)uVar33 >> 0x30);
            auVar57[15] = (char)((ulong)uVar33 >> 0x38);
            auVar56 = NEON_cmeq(auVar57,auVar17,1);
            uVar55 = CONCAT14(~auVar58[9],(uint)(~auVar58[8] & 1)) & 0x100ffffff;
            uVar51 = CONCAT14(~auVar56[13],(uint)(~auVar56[12] & 1)) & 0x100ffffff;
            auVar14._0_4_ = auVar14._0_4_ + (uint)(~auVar58[12] & 1);
            auVar14._4_4_ = auVar14._4_4_ + (uint)(~auVar58[13] & 1);
            auVar14._8_4_ = auVar14._8_4_ + (uint)((byte)~auVar58[14] & 0xff01);
            auVar14._12_4_ = auVar14._12_4_ + (uint)(~auVar58[15] & 1);
            auVar18._0_4_ = auVar18._0_4_ + (int)uVar55;
            auVar18._4_4_ = auVar18._4_4_ + (uint)(byte)(uVar55 >> 0x20);
            auVar18._8_4_ = auVar18._8_4_ + (uint)(~auVar58[10] & 1);
            auVar18._12_4_ = auVar18._12_4_ + (uint)(~auVar58[11] & 1);
            uVar39 = uVar39 + (~auVar58[4] & 1);
            uVar40 = uVar40 + (~auVar58[5] & 1);
            uVar41 = uVar41 + (~auVar58[6] & 1);
            uVar42 = uVar42 + (~auVar58[7] & 1);
            bVar26 = bVar26 + (~auVar58[0] & 1);
            bVar27 = bVar27 + (~auVar58[1] & 1);
            bVar28 = bVar28 + (~auVar58[2] & 1);
            bVar29 = bVar29 + (~auVar58[3] & 1);
            iVar13 = iVar13 + (int)uVar51;
            iVar21 = iVar21 + (uint)(byte)(uVar51 >> 0x20);
            uVar10 = CONCAT44(iVar21,iVar13);
            iVar23 = iVar23 + (uint)(~auVar56[14] & 1);
            iVar25 = iVar25 + (uint)(~auVar56[15] & 1);
            uVar24 = CONCAT44(iVar25,iVar23);
            iVar31 = iVar31 + (uint)(~auVar56[8] & 1);
            iVar34 = iVar34 + (uint)(~auVar56[9] & 1);
            uVar32 = CONCAT44(iVar34,iVar31);
            iVar36 = iVar36 + (uint)((byte)~auVar56[10] & 1);
            iVar38 = iVar38 + (uint)(~auVar56[11] & 1);
            uVar37 = CONCAT44(iVar38,iVar36);
            uVar47 = uVar47 + (~auVar56[4] & 1);
            uVar48 = uVar48 + (~auVar56[5] & 1);
            uVar49 = uVar49 + (~auVar56[6] & 1);
            uVar50 = uVar50 + (~auVar56[7] & 1);
            uVar43 = uVar43 + (~auVar56[0] & 1);
            uVar44 = uVar44 + (~auVar56[1] & 1);
            uVar45 = uVar45 + (~auVar56[2] & 1);
            uVar46 = uVar46 + (~auVar56[3] & 1);
            if (uVar9 != 0x80) {
              auVar53._8_8_ = 0xffffffffffffffff;
              auVar53._0_8_ = 0xffffffffffffffff;
              auVar56 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0x9b),auVar53,1);
              auVar17 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0xab),auVar53,1);
              uVar51 = CONCAT14(~auVar17[13],(uint)(~auVar17[12] & 1)) & 0x100ffffff;
              auVar14._0_4_ = auVar14._0_4_ + (uint)(~auVar56[12] & 1);
              auVar14._4_4_ = auVar14._4_4_ + (uint)(~auVar56[13] & 1);
              auVar14._8_4_ = auVar14._8_4_ + (uint)(~auVar56[14] & 1);
              auVar14._12_4_ = auVar14._12_4_ + (uint)(~auVar56[15] & 1);
              auVar18._0_4_ = auVar18._0_4_ + (uint)(~auVar56[8] & 1);
              auVar18._4_4_ = auVar18._4_4_ + (uint)(~auVar56[9] & 1);
              auVar18._8_4_ = auVar18._8_4_ + (uint)(~auVar56[10] & 1);
              auVar18._12_4_ = auVar18._12_4_ + (uint)(~auVar56[11] & 1);
              uVar39 = uVar39 + (~auVar56[4] & 1);
              uVar40 = uVar40 + (~auVar56[5] & 1);
              uVar41 = uVar41 + (~auVar56[6] & 1);
              uVar42 = uVar42 + (~auVar56[7] & 1);
              bVar26 = bVar26 + (~auVar56[0] & 1);
              bVar27 = bVar27 + (~auVar56[1] & 1);
              bVar28 = bVar28 + (~auVar56[2] & 1);
              bVar29 = bVar29 + (~auVar56[3] & 1);
              iVar13 = iVar13 + (int)uVar51;
              iVar21 = iVar21 + (uint)(byte)(uVar51 >> 0x20);
              uVar10 = CONCAT44(iVar21,iVar13);
              iVar23 = iVar23 + (uint)(~auVar17[14] & 1);
              iVar25 = iVar25 + (uint)(~auVar17[15] & 1);
              uVar24 = CONCAT44(iVar25,iVar23);
              iVar31 = iVar31 + (uint)(~auVar17[8] & 1);
              iVar34 = iVar34 + (uint)(~auVar17[9] & 1);
              uVar32 = CONCAT44(iVar34,iVar31);
              iVar36 = iVar36 + (uint)((byte)~auVar17[10] & 1);
              iVar38 = iVar38 + (uint)(~auVar17[11] & 1);
              uVar37 = CONCAT44(iVar38,iVar36);
              uVar47 = uVar47 + (~auVar17[4] & 1);
              uVar48 = uVar48 + (~auVar17[5] & 1);
              uVar49 = uVar49 + (~auVar17[6] & 1);
              uVar50 = uVar50 + (~auVar17[7] & 1);
              uVar43 = uVar43 + (~auVar17[0] & 1);
              uVar44 = uVar44 + (~auVar17[1] & 1);
              uVar45 = uVar45 + (~auVar17[2] & 1);
              uVar46 = uVar46 + (~auVar17[3] & 1);
              if (uVar9 != 0xa0) {
                uVar33 = *(undefined8 *)(lVar7 + 0xd3);
                auVar17 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0xbb),auVar53,1);
                auVar3[9] = (char)((ulong)uVar33 >> 8);
                auVar3._0_9_ = *(unkbyte9 *)(lVar7 + 0xcb);
                auVar3[10] = (char)((ulong)uVar33 >> 0x10);
                auVar3[11] = (char)((ulong)uVar33 >> 0x18);
                auVar3[12] = (char)((ulong)uVar33 >> 0x20);
                auVar3[13] = (char)((ulong)uVar33 >> 0x28);
                auVar3[14] = (char)((ulong)uVar33 >> 0x30);
                auVar3[15] = (char)((ulong)uVar33 >> 0x38);
                auVar56 = NEON_cmeq(auVar3,auVar53,1);
                uVar55 = CONCAT14(~auVar17[9],(uint)(~auVar17[8] & 1)) & 0x100ffffff;
                uVar51 = CONCAT14(~auVar56[13],(uint)(~auVar56[12] & 1)) & 0x100ffffff;
                auVar14._0_4_ = auVar14._0_4_ + (uint)(~auVar17[12] & 1);
                auVar14._4_4_ = auVar14._4_4_ + (uint)(~auVar17[13] & 1);
                auVar14._8_4_ = auVar14._8_4_ + (uint)((byte)~auVar17[14] & 0xff01);
                auVar14._12_4_ = auVar14._12_4_ + (uint)(~auVar17[15] & 1);
                auVar18._0_4_ = auVar18._0_4_ + (int)uVar55;
                auVar18._4_4_ = auVar18._4_4_ + (uint)(byte)(uVar55 >> 0x20);
                auVar18._8_4_ = auVar18._8_4_ + (uint)(~auVar17[10] & 1);
                auVar18._12_4_ = auVar18._12_4_ + (uint)(~auVar17[11] & 1);
                uVar39 = uVar39 + (~auVar17[4] & 1);
                uVar40 = uVar40 + (~auVar17[5] & 1);
                uVar41 = uVar41 + (~auVar17[6] & 1);
                uVar42 = uVar42 + (~auVar17[7] & 1);
                bVar26 = bVar26 + (~auVar17[0] & 1);
                bVar27 = bVar27 + (~auVar17[1] & 1);
                bVar28 = bVar28 + (~auVar17[2] & 1);
                bVar29 = bVar29 + (~auVar17[3] & 1);
                iVar13 = iVar13 + (int)uVar51;
                iVar21 = iVar21 + (uint)(byte)(uVar51 >> 0x20);
                uVar10 = CONCAT44(iVar21,iVar13);
                iVar23 = iVar23 + (uint)(~auVar56[14] & 1);
                iVar25 = iVar25 + (uint)(~auVar56[15] & 1);
                uVar24 = CONCAT44(iVar25,iVar23);
                iVar31 = iVar31 + (uint)(~auVar56[8] & 1);
                iVar34 = iVar34 + (uint)(~auVar56[9] & 1);
                uVar32 = CONCAT44(iVar34,iVar31);
                iVar36 = iVar36 + (uint)((byte)~auVar56[10] & 1);
                iVar38 = iVar38 + (uint)(~auVar56[11] & 1);
                uVar37 = CONCAT44(iVar38,iVar36);
                uVar47 = uVar47 + (~auVar56[4] & 1);
                uVar48 = uVar48 + (~auVar56[5] & 1);
                uVar49 = uVar49 + (~auVar56[6] & 1);
                uVar50 = uVar50 + (~auVar56[7] & 1);
                uVar43 = uVar43 + (~auVar56[0] & 1);
                uVar44 = uVar44 + (~auVar56[1] & 1);
                uVar45 = uVar45 + (~auVar56[2] & 1);
                uVar46 = uVar46 + (~auVar56[3] & 1);
                if (uVar9 != 0xc0) {
                  auVar54._8_8_ = 0xffffffffffffffff;
                  auVar54._0_8_ = 0xffffffffffffffff;
                  auVar17 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0xdb),auVar54,1);
                  auVar56 = NEON_cmeq(*(undefined (*) [16])(lVar7 + 0xeb),auVar54,1);
                  uVar55 = CONCAT14(~auVar17[9],(uint)(~auVar17[8] & 1)) & 0x100ffffff;
                  uVar51 = CONCAT14(~auVar56[13],(uint)(~auVar56[12] & 1)) & 0x100ffffff;
                  auVar14._0_4_ = auVar14._0_4_ + (uint)(~auVar17[12] & 1);
                  auVar14._4_4_ = auVar14._4_4_ + (uint)(~auVar17[13] & 1);
                  auVar14._8_4_ = auVar14._8_4_ + (uint)((byte)~auVar17[14] & 0xff01);
                  auVar14._12_4_ = auVar14._12_4_ + (uint)(~auVar17[15] & 1);
                  auVar18._0_4_ = auVar18._0_4_ + (int)uVar55;
                  auVar18._4_4_ = auVar18._4_4_ + (uint)(byte)(uVar55 >> 0x20);
                  auVar18._8_4_ = auVar18._8_4_ + (uint)(~auVar17[10] & 1);
                  auVar18._12_4_ = auVar18._12_4_ + (uint)(~auVar17[11] & 1);
                  uVar39 = uVar39 + (~auVar17[4] & 1);
                  uVar40 = uVar40 + (~auVar17[5] & 1);
                  uVar41 = uVar41 + (~auVar17[6] & 1);
                  uVar42 = uVar42 + (~auVar17[7] & 1);
                  bVar26 = bVar26 + (~auVar17[0] & 1);
                  bVar27 = bVar27 + (~auVar17[1] & 1);
                  bVar28 = bVar28 + (~auVar17[2] & 1);
                  bVar29 = bVar29 + (~auVar17[3] & 1);
                  uVar10 = CONCAT44(iVar21 + (uint)(byte)(uVar51 >> 0x20),iVar13 + (int)uVar51);
                  uVar24 = CONCAT44(iVar25 + (uint)(~auVar56[15] & 1),
                                    iVar23 + (uint)(~auVar56[14] & 1));
                  uVar32 = CONCAT44(iVar34 + (uint)(~auVar56[9] & 1),
                                    iVar31 + (uint)(~auVar56[8] & 1));
                  uVar37 = CONCAT44(iVar38 + (uint)(~auVar56[11] & 1),
                                    iVar36 + (uint)((byte)~auVar56[10] & 1));
                  uVar47 = uVar47 + (~auVar56[4] & 1);
                  uVar48 = uVar48 + (~auVar56[5] & 1);
                  uVar49 = uVar49 + (~auVar56[6] & 1);
                  uVar50 = uVar50 + (~auVar56[7] & 1);
                  uVar43 = uVar43 + (~auVar56[0] & 1);
                  uVar44 = uVar44 + (~auVar56[1] & 1);
                  uVar45 = uVar45 + (~auVar56[2] & 1);
                  uVar46 = uVar46 + (~auVar56[3] & 1);
                }
              }
            }
          }
        }
      }
      iVar13 = uVar43 + bVar26 + (int)uVar32 + auVar18._0_4_ +
               uVar47 + uVar39 + (int)uVar10 + auVar14._0_4_ +
               uVar44 + bVar27 + (int)(uVar32 >> 0x20) + auVar18._4_4_ +
               uVar48 + uVar40 + (int)(uVar10 >> 0x20) + auVar14._4_4_ +
               uVar45 + bVar28 + (int)uVar37 + auVar18._8_4_ +
               uVar49 + uVar41 + (int)uVar24 + auVar14._8_4_ +
               uVar46 + bVar29 + (int)(uVar37 >> 0x20) + auVar18._12_4_ +
               uVar50 + uVar42 + (int)(uVar24 >> 0x20) + auVar14._12_4_;
      if (uVar9 == uVar5) {
        return iVar13;
      }
      uVar10 = uVar9;
      if ((bVar1 & 0x18) == 0) goto LAB_00e239f4;
    }
    uVar9 = uVar5 & 0xf8;
    lVar6 = uVar10 - uVar9;
    auVar15._4_12_ = SUB1612(ZEXT816(0),4);
    auVar15._0_4_ = iVar13;
    puVar11 = (undefined8 *)(uVar10 + lVar7 + 0x1b);
    auVar14 = ZEXT816(0);
    do {
      lVar6 = lVar6 + 8;
      uVar33 = NEON_cmeq(*puVar11,0xffffffffffffffff,1);
      auVar19._0_4_ = auVar14._0_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x20) & 1);
      auVar19._4_4_ = auVar14._4_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x28) & 1);
      auVar19._8_4_ = auVar14._8_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x30) & 1);
      auVar19._12_4_ = auVar14._12_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x38) & 1);
      auVar16._0_4_ = auVar15._0_4_ + (uint)(~(byte)uVar33 & 1);
      auVar16._4_4_ = auVar15._4_4_ + (uint)(~(byte)((ulong)uVar33 >> 8) & 1);
      auVar16._8_4_ = auVar15._8_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x10) & 1);
      auVar16._12_4_ = auVar15._12_4_ + (uint)(~(byte)((ulong)uVar33 >> 0x18) & 1);
      puVar11 = puVar11 + 1;
      auVar15 = auVar16;
      auVar14 = auVar19;
    } while (lVar6 != 0);
    iVar13 = auVar16._0_4_ + auVar19._0_4_ + auVar16._4_4_ + auVar19._4_4_ +
             auVar16._8_4_ + auVar19._8_4_ + auVar16._12_4_ + auVar19._12_4_;
    if (uVar9 == uVar5) {
      return iVar13;
    }
  }
LAB_00e239f4:
  lVar6 = uVar5 - uVar9;
  pcVar8 = (char *)(uVar9 + lVar7 + 0x1b);
  do {
    if (*pcVar8 != -1) {
      iVar13 = iVar13 + 1;
    }
    lVar6 = lVar6 + -1;
    pcVar8 = pcVar8 + 1;
  } while (lVar6 != 0);
  return iVar13;
}


