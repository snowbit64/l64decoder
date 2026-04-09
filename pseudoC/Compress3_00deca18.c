// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress3
// Entry Point: 00deca18
// Size: 804 bytes
// Signature: undefined __thiscall Compress3(RangeFit * this, void * param_1)


/* squish::RangeFit::Compress3(void*) */

void __thiscall squish::RangeFit::Compress3(RangeFit *this,void *param_1)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  uint *this_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  undefined auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined auVar49 [16];
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong uVar64;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar73 [16];
  undefined8 uStack_b8;
  uchar auStack_a8 [16];
  float local_98 [4];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  fVar11 = *(float *)(this + 0x20);
  this_00 = *(uint **)(this + 8);
  uVar2 = *this_00;
  uVar4 = (ulong)uVar2;
  fVar12 = *(float *)(this + 0x2c);
  if ((int)uVar2 < 1) {
    fVar19 = 0.0;
    goto LAB_00decbb0;
  }
  fVar13 = *(float *)(this + 0x24);
  fVar14 = *(float *)(this + 0x28);
  fVar15 = *(float *)(this + 0x30);
  fVar16 = *(float *)(this + 0x34);
  fVar19 = 0.0;
  fVar17 = fVar11 * 0.5 + fVar12 * 0.5;
  fVar18 = fVar13 * 0.5 + fVar15 * 0.5;
  fVar42 = fVar14 * 0.5 + fVar16 * 0.5;
  fVar45 = *(float *)(this + 0x1c);
  fVar43 = *(float *)(this + 0x14);
  fVar44 = *(float *)(this + 0x18);
  if (uVar2 < 4) {
LAB_00decae0:
    uVar6 = 0;
  }
  else {
    pfVar8 = (float *)(this_00 + 1);
    if ((local_98 < this_00 + uVar4 * 3 + 1) && (pfVar8 < (float *)((long)local_98 + uVar4)))
    goto LAB_00decae0;
    uVar6 = uVar4 & 0xfffffffc;
    fVar19 = 0.0;
    pfVar9 = local_98;
    uVar10 = uVar6;
    do {
      fVar46 = *pfVar8;
      fVar57 = pfVar8[1];
      fVar22 = pfVar8[2];
      fVar53 = pfVar8[3];
      fVar58 = pfVar8[4];
      fVar23 = pfVar8[5];
      fVar55 = pfVar8[6];
      fVar60 = pfVar8[7];
      fVar24 = pfVar8[8];
      fVar56 = pfVar8[9];
      fVar61 = pfVar8[10];
      fVar25 = pfVar8[0xb];
      pfVar8 = pfVar8 + 0xc;
      uVar10 = uVar10 - 4;
      fVar26 = (fVar57 - fVar13) * fVar44;
      fVar27 = (fVar58 - fVar13) * fVar44;
      fVar28 = (fVar60 - fVar13) * fVar44;
      fVar29 = (fVar61 - fVar13) * fVar44;
      fVar38 = (fVar57 - fVar15) * fVar44;
      fVar39 = (fVar58 - fVar15) * fVar44;
      fVar40 = (fVar60 - fVar15) * fVar44;
      fVar41 = (fVar61 - fVar15) * fVar44;
      fVar34 = (fVar22 - fVar14) * fVar45;
      fVar35 = (fVar23 - fVar14) * fVar45;
      fVar36 = (fVar24 - fVar14) * fVar45;
      fVar37 = (fVar25 - fVar14) * fVar45;
      fVar62 = (fVar46 - fVar12) * fVar43;
      fVar67 = (fVar53 - fVar12) * fVar43;
      fVar69 = (fVar55 - fVar12) * fVar43;
      fVar71 = (fVar56 - fVar12) * fVar43;
      fVar30 = (fVar46 - fVar11) * fVar43;
      fVar31 = (fVar53 - fVar11) * fVar43;
      fVar32 = (fVar55 - (float)uStack_b8) * fVar43;
      fVar33 = (fVar56 - (float)((ulong)uStack_b8 >> 0x20)) * fVar43;
      fVar63 = (fVar22 - fVar16) * fVar45;
      fVar68 = (fVar23 - fVar16) * fVar45;
      fVar70 = (fVar24 - fVar16) * fVar45;
      fVar72 = (fVar25 - fVar16) * fVar45;
      fVar48 = (fVar57 - fVar18) * fVar44;
      fVar50 = (fVar58 - fVar18) * fVar44;
      fVar51 = (fVar60 - fVar18) * fVar44;
      fVar52 = (fVar61 - fVar18) * fVar44;
      fVar57 = fVar38 * fVar38 + fVar62 * fVar62 + fVar63 * fVar63;
      fVar58 = fVar39 * fVar39 + fVar67 * fVar67 + fVar68 * fVar68;
      fVar60 = fVar40 * fVar40 + fVar69 * fVar69 + fVar70 * fVar70;
      fVar61 = fVar41 * fVar41 + fVar71 * fVar71 + fVar72 * fVar72;
      fVar46 = (fVar46 - fVar17) * fVar43;
      fVar53 = (fVar53 - fVar17) * fVar43;
      fVar55 = (fVar55 - fVar17) * fVar43;
      fVar56 = (fVar56 - fVar17) * fVar43;
      fVar22 = (fVar22 - fVar42) * fVar45;
      fVar23 = (fVar23 - fVar42) * fVar45;
      fVar24 = (fVar24 - fVar42) * fVar45;
      fVar25 = (fVar25 - fVar42) * fVar45;
      auVar21._4_4_ = fVar27 * fVar27 + fVar31 * fVar31 + fVar35 * fVar35;
      auVar21._0_4_ = fVar26 * fVar26 + fVar30 * fVar30 + fVar34 * fVar34;
      auVar21._8_4_ = fVar28 * fVar28 + fVar32 * fVar32 + fVar36 * fVar36;
      auVar21._12_4_ = fVar29 * fVar29 + fVar33 * fVar33 + fVar37 * fVar37;
      auVar65._8_4_ = 0x7f7fffff;
      auVar65._0_8_ = 0x7f7fffff7f7fffff;
      auVar65._12_4_ = 0x7f7fffff;
      auVar65 = NEON_fminnm(auVar21,auVar65,4);
      auVar66._4_4_ = fVar58;
      auVar66._0_4_ = fVar57;
      auVar66._8_4_ = fVar60;
      auVar66._12_4_ = fVar61;
      auVar21 = NEON_fcmgt(auVar65,auVar66,4);
      auVar49._0_4_ = fVar48 * fVar48 + fVar46 * fVar46 + fVar22 * fVar22;
      auVar49._4_4_ = fVar50 * fVar50 + fVar53 * fVar53 + fVar23 * fVar23;
      auVar49._8_4_ = fVar51 * fVar51 + fVar55 * fVar55 + fVar24 * fVar24;
      auVar49._12_4_ = fVar52 * fVar52 + fVar56 * fVar56 + fVar25 * fVar25;
      auVar73._4_4_ = fVar58;
      auVar73._0_4_ = fVar57;
      auVar73._8_4_ = fVar60;
      auVar73._12_4_ = fVar61;
      auVar66 = NEON_bit(auVar65,auVar73,auVar21,1);
      auVar73 = NEON_fcmgt(auVar66,auVar49,4);
      auVar66 = NEON_bif(auVar49,auVar66,auVar73,1);
      uVar20 = CONCAT26(auVar73._12_2_,CONCAT24(auVar73._8_2_,CONCAT22(auVar73._4_2_,auVar73._0_2_))
                       ) & 0x2000200020002;
      uVar64 = (ulong)CONCAT16(auVar21[12] & ~auVar73[12],
                               (uint6)CONCAT14(auVar21[8] & ~auVar73[8],
                                               (uint)CONCAT12(auVar21[4] & ~auVar73[4],
                                                              (ushort)(byte)(auVar21[0] &
                                                                            ~auVar73[0])))) &
               0x1000100010001;
      fVar19 = fVar19 + auVar66._0_4_ + auVar66._4_4_ + auVar66._8_4_ + auVar66._12_4_;
      *pfVar9 = (float)CONCAT13((byte)(uVar20 >> 0x30) | (byte)(uVar64 >> 0x30),
                                CONCAT12((byte)(uVar20 >> 0x20) | (byte)(uVar64 >> 0x20),
                                         CONCAT11((byte)(uVar20 >> 0x10) | (byte)(uVar64 >> 0x10),
                                                  (byte)uVar20 | (byte)uVar64)));
      pfVar9 = pfVar9 + 1;
    } while (uVar10 != 0);
    if (uVar6 == uVar4) goto LAB_00decbb0;
  }
  lVar5 = uVar4 - uVar6;
  puVar7 = (undefined *)((long)local_98 + uVar6);
  pfVar8 = (float *)(this_00 + uVar6 * 3);
  do {
    fVar55 = pfVar8[1];
    fVar46 = pfVar8[2];
    fVar56 = pfVar8[3];
    fVar53 = (fVar46 - fVar13) * fVar44;
    fVar57 = (fVar55 - fVar11) * fVar43;
    fVar58 = (fVar46 - fVar15) * fVar44;
    fVar60 = (fVar56 - fVar14) * fVar45;
    fVar61 = (fVar55 - fVar12) * fVar43;
    fVar46 = (fVar46 - fVar18) * fVar44;
    fVar55 = (fVar55 - fVar17) * fVar43;
    uVar54 = NEON_fmadd(fVar57,fVar57,fVar53 * fVar53);
    uVar59 = NEON_fmadd(fVar61,fVar61,fVar58 * fVar58);
    uVar47 = NEON_fmadd(fVar55,fVar55,fVar46 * fVar46);
    uVar54 = NEON_fmadd(fVar60,fVar60,uVar54);
    fVar53 = (fVar56 - fVar16) * fVar45;
    fVar46 = (fVar56 - fVar42) * fVar45;
    fVar55 = (float)NEON_fminnm(uVar54,0x7f7fffff);
    fVar56 = (float)NEON_fmadd(fVar53,fVar53,uVar59);
    fVar53 = (float)NEON_fmadd(fVar46,fVar46,uVar47);
    fVar46 = fVar56;
    if (fVar56 >= fVar55) {
      fVar46 = fVar55;
    }
    fVar57 = fVar53;
    if (fVar46 <= fVar53) {
      fVar57 = fVar46;
    }
    uVar1 = 2;
    if (fVar46 <= fVar53) {
      uVar1 = fVar56 < fVar55;
    }
    lVar5 = lVar5 + -1;
    *puVar7 = uVar1;
    fVar19 = fVar19 + fVar57;
    puVar7 = puVar7 + 1;
    pfVar8 = pfVar8 + 3;
  } while (lVar5 != 0);
LAB_00decbb0:
  if (fVar19 < *(float *)(this + 0x38)) {
    ColourSet::RemapIndices((ColourSet *)this_00,(uchar *)local_98,auStack_a8);
    WriteColourBlock3((Vec3 *)(this + 0x20),(Vec3 *)(this + 0x2c),auStack_a8,param_1);
    *(float *)(this + 0x38) = fVar19;
  }
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


