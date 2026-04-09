// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TestRect
// Entry Point: 00d9ff24
// Size: 1108 bytes
// Signature: undefined __thiscall TestRect(MaskedOcclusionCullingPrivate * this, float param_1, float param_2, float param_3, float param_4, float param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::TestRect(float, float, float, float,
   float) const */

undefined8 __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::TestRect
          (MaskedOcclusionCullingPrivate *this,float param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined5 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined (*pauVar19) [16];
  long lVar20;
  undefined (*pauVar21) [16];
  long lVar22;
  int iVar23;
  int iVar25;
  int iVar26;
  undefined auVar24 [16];
  int iVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined4 uVar54;
  undefined auVar49 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined auVar61 [16];
  ulong uVar70;
  undefined auVar71 [16];
  
  if (((TestRect(float,float,float,float,float)::SIMD_TILE_PAD & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(&TestRect(float,float,float,float,float)::SIMD_TILE_PAD),
     iVar17 != 0)) {
    TestRect(float,float,float,float,float)::SIMD_TILE_PAD._8_8_ = SUB168(_DAT_004c3ae0,8);
    TestRect(float,float,float,float,float)::SIMD_TILE_PAD._0_8_ = SUB168(_DAT_004c3ae0,0);
    __cxa_guard_release(&TestRect(float,float,float,float,float)::SIMD_TILE_PAD);
  }
  if (((TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(&TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK),
     iVar17 != 0)) {
    TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_ = SUB168(_DAT_004c5120,8);
    TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_ = SUB168(_DAT_004c5120,0);
    __cxa_guard_release(&TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK);
  }
  if (((TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(&TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD),
     iVar17 != 0)) {
    TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._8_8_ = SUB168(_DAT_004c4150,8);
    TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._0_8_ = SUB168(_DAT_004c4150,0);
    __cxa_guard_release(&TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD);
  }
  if (((TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(&TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK)
     , iVar17 != 0)) {
    TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._8_8_ = SUB168(_DAT_004c4d00,8);
    TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_ = SUB168(_DAT_004c4d00,0);
    __cxa_guard_release(&TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK);
  }
  uVar18 = *(undefined8 *)(this + 0x118);
  auVar55._0_4_ =
       (int)(param_1 * (float)*(undefined8 *)(this + 0xf0) + (float)*(undefined8 *)(this + 0x100));
  auVar55._4_4_ =
       (int)(param_3 * (float)((ulong)*(undefined8 *)(this + 0xf0) >> 0x20) +
            (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20));
  auVar55._8_4_ =
       (int)(param_4 * (float)*(undefined8 *)(this + 0xf8) + (float)*(undefined8 *)(this + 0x108));
  auVar55._12_4_ =
       (int)(param_2 * (float)((ulong)*(undefined8 *)(this + 0xf8) >> 0x20) +
            (float)((ulong)*(undefined8 *)(this + 0x108) >> 0x20));
  auVar24[9] = (char)((ulong)uVar18 >> 8);
  auVar24._0_9_ = *(unkbyte9 *)(this + 0x110);
  auVar24[10] = (char)((ulong)uVar18 >> 0x10);
  auVar24[11] = (char)((ulong)uVar18 >> 0x18);
  auVar24[12] = (char)((ulong)uVar18 >> 0x20);
  auVar24[13] = (char)((ulong)uVar18 >> 0x28);
  auVar24[14] = (char)((ulong)uVar18 >> 0x30);
  auVar24[15] = (char)((ulong)uVar18 >> 0x38);
  auVar24 = NEON_smin(auVar24,auVar55,4);
  auVar24 = NEON_smax(auVar24,ZEXT216(0),4);
  iVar17 = (int)TestRect(float,float,float,float,float)::SIMD_TILE_PAD._0_8_ + auVar24._0_4_;
  iVar6 = SUB84(TestRect(float,float,float,float,float)::SIMD_TILE_PAD._0_8_,4) + auVar24._4_4_;
  iVar7 = (int)TestRect(float,float,float,float,float)::SIMD_TILE_PAD._8_8_ + auVar24._8_4_;
  iVar23 = SUB84(TestRect(float,float,float,float,float)::SIMD_TILE_PAD._8_8_,4) + auVar24._12_4_;
  bVar28 = (byte)TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_ & (byte)iVar17;
  bVar29 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_,1) &
           (byte)((uint)iVar17 >> 8);
  bVar30 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_,2) &
           (byte)((uint)iVar17 >> 0x10);
  bVar31 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_,3) &
           (byte)((uint)iVar17 >> 0x18);
  bVar32 = (byte)TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_ & (byte)iVar7;
  bVar34 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_,1) &
           (byte)((uint)iVar7 >> 8);
  bVar36 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_,2) &
           (byte)((uint)iVar7 >> 0x10);
  bVar38 = SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_,3) &
           (byte)((uint)iVar7 >> 0x18);
  uVar5 = CONCAT13(SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_,7) &
                   (byte)((uint)iVar6 >> 0x18),
                   CONCAT12(SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._0_8_,
                                  6) & (byte)((uint)iVar6 >> 0x10),
                            CONCAT11(SUB81(TestRect(float,float,float,float,float)::
                                           SIMD_TILE_PAD_MASK._0_8_,5) & (byte)((uint)iVar6 >> 8),
                                     SUB81(TestRect(float,float,float,float,float)::
                                           SIMD_TILE_PAD_MASK._0_8_,4) & (byte)iVar6)));
  iVar17 = CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar34,bVar32)));
  iVar6 = CONCAT13(SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_,7) &
                   (byte)((uint)iVar23 >> 0x18),
                   CONCAT12(SUB81(TestRect(float,float,float,float,float)::SIMD_TILE_PAD_MASK._8_8_,
                                  6) & (byte)((uint)iVar23 >> 0x10),
                            CONCAT11(SUB81(TestRect(float,float,float,float,float)::
                                           SIMD_TILE_PAD_MASK._8_8_,5) & (byte)((uint)iVar23 >> 8),
                                     SUB81(TestRect(float,float,float,float,float)::
                                           SIMD_TILE_PAD_MASK._8_8_,4) & (byte)iVar23)));
  uVar2 = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
  if (uVar2 == uVar5 || iVar17 == iVar6) {
    uVar18 = 3;
  }
  else {
    iVar47 = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
    lVar1 = (long)((ulong)uVar2 << 0x20) >> 0x25;
    iVar7 = *(int *)(this + 300);
    auVar11._4_4_ = param_5;
    auVar11._0_4_ = param_5;
    auVar11._8_4_ = param_5;
    auVar11._12_4_ = param_5;
    auVar55 = NEON_frecpe(auVar11,4);
    iVar23 = (int)TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._0_8_ + auVar24._0_4_;
    iVar25 = SUB84(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._0_8_,4) +
             auVar24._4_4_;
    iVar26 = (int)TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._8_8_ + auVar24._8_4_;
    iVar27 = SUB84(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD._8_8_,4) +
             auVar24._12_4_;
    lVar20 = (long)((iVar17 >> 2) * iVar7);
    iVar44 = iVar47 + SUB164(_DAT_004c5780,0);
    iVar45 = iVar47 + SUB164(_DAT_004c5780,4);
    iVar46 = iVar47 + SUB164(_DAT_004c5780,8);
    iVar47 = iVar47 + SUB164(_DAT_004c5780,0xc);
    iVar48 = CONCAT13(SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_,3)
                      & (byte)((uint)iVar23 >> 0x18),
                      CONCAT12(SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK
                                     ._0_8_,2) & (byte)((uint)iVar23 >> 0x10),
                               CONCAT11(SUB81(TestRect(float,float,float,float,float)::
                                              SIMD_SUB_TILE_PAD_MASK._0_8_,1) &
                                        (byte)((uint)iVar23 >> 8),
                                        (byte)TestRect(float,float,float,float,float)::
                                              SIMD_SUB_TILE_PAD_MASK._0_8_ & (byte)iVar23)));
    bVar50 = SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_,4) &
             (byte)iVar25;
    bVar51 = SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_,5) &
             (byte)((uint)iVar25 >> 8);
    bVar52 = SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_,6) &
             (byte)((uint)iVar25 >> 0x10);
    bVar53 = SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._0_8_,7) &
             (byte)((uint)iVar25 >> 0x18);
    uVar16 = CONCAT14(SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._8_8_,3)
                      & (byte)((uint)iVar26 >> 0x18),
                      CONCAT13(SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK
                                     ._8_8_,2) & (byte)((uint)iVar26 >> 0x10),
                               CONCAT12(SUB81(TestRect(float,float,float,float,float)::
                                              SIMD_SUB_TILE_PAD_MASK._8_8_,1) &
                                        (byte)((uint)iVar26 >> 8),
                                        CONCAT11((byte)TestRect(float,float,float,float,float)::
                                                       SIMD_SUB_TILE_PAD_MASK._8_8_ & (byte)iVar26,
                                                 bVar53))));
    uVar54 = (undefined4)
             (CONCAT18(SUB81(TestRect(float,float,float,float,float)::SIMD_SUB_TILE_PAD_MASK._8_8_,7
                            ) & (byte)((uint)iVar27 >> 0x18),
                       CONCAT17(SUB81(TestRect(float,float,float,float,float)::
                                      SIMD_SUB_TILE_PAD_MASK._8_8_,6) & (byte)((uint)iVar27 >> 0x10)
                                ,CONCAT16(SUB81(TestRect(float,float,float,float,float)::
                                                SIMD_SUB_TILE_PAD_MASK._8_8_,5) &
                                          (byte)((uint)iVar27 >> 8),
                                          CONCAT15(SUB81(TestRect(float,float,float,float,float)::
                                                         SIMD_SUB_TILE_PAD_MASK._8_8_,4) &
                                                   (byte)iVar27,uVar16)))) >> 0x28);
    auVar12._4_4_ = param_5;
    auVar12._0_4_ = param_5;
    auVar12._8_4_ = param_5;
    auVar12._12_4_ = param_5;
    auVar24 = NEON_frecps(auVar55,auVar12,4);
    iVar17 = iVar48 + -1;
    iVar23 = (int)((uint5)uVar16 >> 8) + -1;
    auVar49._0_4_ = auVar55._0_4_ * auVar24._0_4_;
    auVar49._4_4_ = auVar55._4_4_ * auVar24._4_4_;
    auVar49._8_4_ = auVar55._8_4_ * auVar24._8_4_;
    auVar49._12_4_ = auVar55._12_4_ * auVar24._12_4_;
    pauVar21 = (undefined (*) [16])(*(long *)(this + 0x138) + (lVar1 + lVar20) * 0x30 + 0x30);
    uVar8 = (undefined2)(CONCAT15(bVar51,CONCAT14(bVar50,iVar48)) >> 0x20);
    auVar56[2] = bVar52;
    auVar56._0_2_ = uVar8;
    auVar56[3] = bVar53;
    auVar56[4] = bVar50;
    auVar56[5] = bVar51;
    auVar56[6] = bVar52;
    auVar56[7] = bVar53;
    auVar56[8] = bVar50;
    auVar56[9] = bVar51;
    auVar56[10] = bVar52;
    auVar56[11] = bVar53;
    auVar56[12] = bVar50;
    auVar56[13] = bVar51;
    auVar56[14] = bVar52;
    auVar56[15] = bVar53;
    auVar57._4_4_ = iVar45;
    auVar57._0_4_ = iVar44;
    auVar57._8_4_ = iVar46;
    auVar57._12_4_ = iVar47;
    auVar24 = NEON_cmgt(auVar56,auVar57,4);
    auVar61._4_4_ = iVar45;
    auVar61._0_4_ = iVar44;
    auVar61._8_4_ = iVar46;
    auVar61._12_4_ = iVar47;
    auVar13._4_4_ = iVar17;
    auVar13._0_4_ = iVar17;
    auVar13._8_4_ = iVar17;
    auVar13._12_4_ = iVar17;
    auVar55 = NEON_cmgt(auVar61,auVar13,4);
    bVar28 = bVar32;
    bVar29 = bVar34;
    bVar30 = bVar36;
    bVar31 = bVar38;
    bVar33 = bVar32;
    bVar35 = bVar34;
    bVar37 = bVar36;
    bVar39 = bVar38;
    bVar40 = bVar32;
    bVar41 = bVar34;
    bVar42 = bVar36;
    bVar43 = bVar38;
    do {
      auVar3[1] = bVar34;
      auVar3[0] = bVar32;
      auVar3[2] = bVar36;
      auVar3[3] = bVar38;
      auVar3[4] = bVar28;
      auVar3[5] = bVar29;
      auVar3[6] = bVar30;
      auVar3[7] = bVar31;
      auVar3[8] = bVar33;
      auVar3[9] = bVar35;
      auVar3[10] = bVar37;
      auVar3[11] = bVar39;
      auVar3[12] = bVar40;
      auVar3[13] = bVar41;
      auVar3[14] = bVar42;
      auVar3[15] = bVar43;
      auVar15._4_4_ = iVar23;
      auVar15._0_4_ = iVar23;
      auVar15._8_4_ = iVar23;
      auVar15._12_4_ = iVar23;
      auVar56 = NEON_cmgt(auVar3,auVar15,4);
      auVar4[1] = bVar34;
      auVar4[0] = bVar32;
      auVar4[2] = bVar36;
      auVar4[3] = bVar38;
      auVar4[4] = bVar28;
      auVar4[5] = bVar29;
      auVar4[6] = bVar30;
      auVar4[7] = bVar31;
      auVar4[8] = bVar33;
      auVar4[9] = bVar35;
      auVar4[10] = bVar37;
      auVar4[11] = bVar39;
      auVar4[12] = bVar40;
      auVar4[13] = bVar41;
      auVar4[14] = bVar42;
      auVar4[15] = bVar43;
      auVar10._4_4_ = uVar54;
      auVar10._0_4_ = uVar54;
      auVar10._8_4_ = uVar54;
      auVar10._12_4_ = uVar54;
      auVar61 = NEON_cmgt(auVar10,auVar4,4);
      bVar60 = auVar56[0] & auVar61[0];
      bVar62 = auVar56[1] & auVar61[1];
      bVar63 = auVar56[4] & auVar61[4];
      bVar64 = auVar56[5] & auVar61[5];
      bVar65 = auVar56[7] & auVar61[7];
      bVar66 = auVar56[8] & auVar61[8];
      bVar67 = auVar56[9] & auVar61[9];
      bVar68 = auVar56[12] & auVar61[12];
      bVar69 = auVar56[13] & auVar61[13];
      auVar57 = NEON_fcmge(auVar49,*(undefined (*) [16])
                                    (*(long *)(this + 0x138) + (lVar20 + lVar1) * 0x30),4);
      if (CONCAT17(auVar56[15] & auVar61[15] & auVar24[15] & auVar55[15] & auVar57[15] |
                   bVar65 & auVar24[7] & auVar55[7] & auVar57[7],
                   CONCAT16(auVar56[14] & auVar61[14] & auVar24[14] & auVar55[14] & auVar57[14] |
                            auVar56[6] & auVar61[6] & auVar24[6] & auVar55[6] & auVar57[6],
                            CONCAT15(bVar69 & auVar24[13] & auVar55[13] & auVar57[13] |
                                     bVar64 & auVar24[5] & auVar55[5] & auVar57[5],
                                     CONCAT14(bVar68 & auVar24[12] & auVar55[12] & auVar57[12] |
                                              bVar63 & auVar24[4] & auVar55[4] & auVar57[4],
                                              CONCAT13(auVar56[11] & auVar61[11] & auVar24[11] &
                                                       auVar55[11] & auVar57[11] |
                                                       auVar56[3] & auVar61[3] & auVar24[3] &
                                                       auVar55[3] & auVar57[3],
                                                       CONCAT12(auVar56[10] & auVar61[10] &
                                                                auVar24[10] & auVar55[10] &
                                                                auVar57[10] |
                                                                auVar56[2] & auVar61[2] & auVar24[2]
                                                                & auVar55[2] & auVar57[2],
                                                                CONCAT11(bVar67 & auVar24[9] &
                                                                         auVar55[9] & auVar57[9] |
                                                                         bVar62 & auVar24[1] &
                                                                         auVar55[1] & auVar57[1],
                                                                         bVar66 & auVar24[8] &
                                                                         auVar55[8] & auVar57[8] |
                                                                         bVar60 & auVar24[0] &
                                                                         auVar55[0] & auVar57[0]))))
                                    ))) != 0) {
        return 0;
      }
      auVar58._12_4_ = iVar47;
      auVar58._8_4_ = iVar46;
      auVar58._4_4_ = iVar45;
      auVar58._0_4_ = iVar44;
      pauVar19 = pauVar21;
      lVar22 = lVar1;
      while (lVar22 = lVar22 + 1, lVar22 < (long)((ulong)uVar5 << 0x20) >> 0x25) {
        auVar59._0_4_ = auVar58._0_4_ + 0x20;
        auVar59._4_4_ = auVar58._4_4_ + 0x20;
        auVar59._8_4_ = auVar58._8_4_ + 0x20;
        auVar59._12_4_ = auVar58._12_4_ + 0x20;
        auVar9[2] = bVar52;
        auVar9._0_2_ = uVar8;
        auVar9[3] = bVar53;
        auVar9[4] = bVar50;
        auVar9[5] = bVar51;
        auVar9[6] = bVar52;
        auVar9[7] = bVar53;
        auVar9[8] = bVar50;
        auVar9[9] = bVar51;
        auVar9[10] = bVar52;
        auVar9[11] = bVar53;
        auVar9[12] = bVar50;
        auVar9[13] = bVar51;
        auVar9[14] = bVar52;
        auVar9[15] = bVar53;
        auVar56 = NEON_cmgt(auVar9,auVar59,4);
        auVar14._4_4_ = iVar17;
        auVar14._0_4_ = iVar17;
        auVar14._8_4_ = iVar17;
        auVar14._12_4_ = iVar17;
        auVar57 = NEON_cmgt(auVar59,auVar14,4);
        auVar61 = NEON_fcmge(auVar49,*pauVar19,4);
        uVar70 = CONCAT26(CONCAT11(bVar69,bVar68),
                          CONCAT24((short)(CONCAT12(bVar67,CONCAT11(bVar66,bVar65)) >> 8),
                                   CONCAT22(CONCAT11(bVar64,bVar63),CONCAT11(bVar62,bVar60)))) &
                 CONCAT26(auVar56._12_2_,
                          CONCAT24(auVar56._8_2_,CONCAT22(auVar56._4_2_,auVar56._0_2_))) &
                 CONCAT26(auVar57._12_2_,
                          CONCAT24(auVar57._8_2_,CONCAT22(auVar57._4_2_,auVar57._0_2_))) &
                 CONCAT26(auVar61._12_2_,
                          CONCAT24(auVar61._8_2_,CONCAT22(auVar61._4_2_,auVar61._0_2_)));
        auVar71._0_4_ = (uint)(ushort)uVar70 << 0x1f;
        auVar71._4_4_ = (uint)(ushort)(uVar70 >> 0x10) << 0x1f;
        auVar71._8_4_ = (uint)(ushort)(uVar70 >> 0x20) << 0x1f;
        auVar71._12_4_ = (uint)(ushort)(uVar70 >> 0x30) << 0x1f;
        auVar56 = NEON_cmlt(auVar71,0,4);
        pauVar19 = pauVar19 + 3;
        auVar58 = auVar59;
        if (CONCAT17(auVar56[15] | auVar56[7],
                     CONCAT16(auVar56[14] | auVar56[6],
                              CONCAT15(auVar56[13] | auVar56[5],
                                       CONCAT14(auVar56[12] | auVar56[4],
                                                CONCAT13(auVar56[11] | auVar56[3],
                                                         CONCAT12(auVar56[10] | auVar56[2],
                                                                  CONCAT11(auVar56[9] | auVar56[1],
                                                                           auVar56[8] | auVar56[0]))
                                                        ))))) != 0) {
          return 0;
        }
      }
      iVar25 = CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar34,bVar32))) + 4;
      bVar32 = (byte)iVar25;
      bVar34 = (byte)((uint)iVar25 >> 8);
      bVar36 = (byte)((uint)iVar25 >> 0x10);
      bVar38 = (byte)((uint)iVar25 >> 0x18);
      iVar25 = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28))) + 4;
      bVar28 = (byte)iVar25;
      bVar29 = (byte)((uint)iVar25 >> 8);
      bVar30 = (byte)((uint)iVar25 >> 0x10);
      bVar31 = (byte)((uint)iVar25 >> 0x18);
      iVar25 = CONCAT13(bVar39,CONCAT12(bVar37,CONCAT11(bVar35,bVar33))) + 4;
      bVar33 = (byte)iVar25;
      bVar35 = (byte)((uint)iVar25 >> 8);
      bVar37 = (byte)((uint)iVar25 >> 0x10);
      bVar39 = (byte)((uint)iVar25 >> 0x18);
      iVar25 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40))) + 4;
      bVar40 = (byte)iVar25;
      bVar41 = (byte)((uint)iVar25 >> 8);
      bVar42 = (byte)((uint)iVar25 >> 0x10);
      bVar43 = (byte)((uint)iVar25 >> 0x18);
      lVar20 = lVar20 + iVar7;
      pauVar21 = pauVar21 + (long)iVar7 * 3;
      uVar18 = 1;
    } while (lVar20 < (iVar6 >> 2) * iVar7);
  }
  return uVar18;
}


