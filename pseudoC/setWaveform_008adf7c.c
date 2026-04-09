// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWaveform
// Entry Point: 008adf7c
// Size: 948 bytes
// Signature: undefined __thiscall setWaveform(LowFrequencyOscillator * this, Waveform param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LowFrequencyOscillator::setWaveform(LFOSettings::Waveform) */

void __thiscall LowFrequencyOscillator::setWaveform(LowFrequencyOscillator *this,Waveform param_1)

{
  long lVar1;
  float *pfVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar14;
  int iVar15;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float __x;
  float __x_00;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined auVar25 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  int iStack_58;
  int iStack_54;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_38;
  
  if (4 < param_1) {
    return;
  }
  fVar17 = (float)((ulong)uStack_68 >> 0x20);
  switch(param_1) {
  case 0:
    iVar23 = SUB164(_DAT_004c51c0,8);
    iVar24 = SUB164(_DAT_004c51c0,0xc);
    iVar21 = SUB164(_DAT_004c51c0,0);
    iVar22 = SUB164(_DAT_004c51c0,4);
    lVar5 = 0;
    auVar12 = _DAT_004c51c0;
    iVar9 = iVar21;
    iVar14 = iVar22;
    iVar15 = iVar23;
    iVar16 = iVar24;
    auVar25 = _DAT_004c51c0;
    do {
      auVar13 = NEON_scvtf(auVar12,4);
      auVar31._0_4_ = 0x40 - iVar21;
      auVar31._4_4_ = 0x40 - iVar22;
      auVar31._8_4_ = 0x40 - iVar23;
      auVar31._12_4_ = 0x40 - iVar24;
      auVar3._4_4_ = iVar14;
      auVar3._0_4_ = iVar9;
      auVar3._8_4_ = iVar15;
      auVar3._12_4_ = iVar16;
      auVar32 = NEON_neg(auVar3,4);
      iVar26 = auVar25._4_4_;
      iVar27 = auVar25._8_4_;
      iVar28 = auVar25._12_4_;
      lVar1 = lVar5 + 0x10;
      auVar30 = NEON_scvtf(auVar31,4);
      auVar11._0_4_ = auVar12._0_4_ + 4;
      auVar11._4_4_ = auVar12._4_4_ + 4;
      auVar11._8_4_ = auVar12._8_4_ + 4;
      auVar11._12_4_ = auVar12._12_4_ + 4;
      iVar21 = iVar21 + 4;
      iVar22 = iVar22 + 4;
      iVar23 = iVar23 + 4;
      iVar24 = iVar24 + 4;
      *(float *)(this + lVar5 + 0x1c) = auVar13._8_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x20) = auVar13._12_4_ * 0.015625;
      *(float *)(this + lVar5 + 0xc) = auVar13._0_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x10) = auVar13._4_4_ * 0.015625;
      auVar12 = NEON_scvtf(auVar32,4);
      auVar4._4_4_ = iVar26 + -0x40;
      auVar4._0_4_ = auVar25._0_4_ + -0x40;
      auVar4._8_4_ = iVar27 + -0x40;
      auVar4._12_4_ = iVar28 + -0x40;
      auVar13 = NEON_scvtf(auVar4,4);
      iVar9 = iVar9 + 4;
      iVar14 = iVar14 + 4;
      iVar15 = iVar15 + 4;
      iVar16 = iVar16 + 4;
      auVar25._0_4_ = auVar25._0_4_ + 4;
      auVar25._4_4_ = iVar26 + 4;
      auVar25._8_4_ = iVar27 + 4;
      auVar25._12_4_ = iVar28 + 4;
      *(float *)(this + lVar5 + 0x11c) = auVar30._8_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x120) = auVar30._12_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x10c) = auVar30._0_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x110) = auVar30._4_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x21c) = auVar12._8_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x220) = auVar12._12_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x20c) = auVar12._0_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x210) = auVar12._4_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x31c) = auVar13._8_4_ * 0.015625;
      *(float *)(this + lVar5 + 800) = auVar13._12_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x30c) = auVar13._0_4_ * 0.015625;
      *(float *)(this + lVar5 + 0x310) = auVar13._4_4_ * 0.015625;
      lVar5 = lVar1;
      auVar12 = auVar11;
    } while (lVar1 != 0x100);
    uVar10 = 0;
    break;
  case 1:
    lVar5 = 0;
    iVar9 = 0;
    iVar14 = 1;
    do {
      auVar12._4_4_ = iVar14;
      auVar12._0_4_ = iVar9;
      auVar12._8_8_ = 0x300000002;
      auVar12 = NEON_scvtf(auVar12,4);
      fVar6 = sinf(auVar12._4_4_ * 0.00390625 * 6.283185);
      fVar7 = sinf(auVar12._0_4_ * 0.00390625 * 6.283185);
      sinf(fStack_48);
      fVar8 = sinf(fStack_44);
      pfVar2 = (float *)(this + lVar5 + 0xc);
      pfVar2[4] = 0.0;
      pfVar2[5] = fVar8;
      *pfVar2 = fVar7;
      pfVar2[1] = fVar6;
      lVar5 = lVar5 + 0x10;
      iVar9 = (int)(auVar12._8_4_ * (float)uStack_68 * (float)uStack_78) + 4;
      iVar14 = (int)(auVar12._12_4_ * fVar17 * (float)((ulong)uStack_78 >> 0x20)) + 4;
    } while (lVar5 != 0x400);
    uVar10 = 0x343bbd2e;
    break;
  case 2:
    auVar12 = NEON_fmov(0xbf800000,4);
    iVar15 = 2;
    iVar16 = 3;
    iVar9 = 0;
    iVar14 = 1;
    lVar5 = 0;
    do {
      auVar29._0_4_ = iVar9 + 4;
      auVar29._4_4_ = iVar14 + 4;
      auVar29._8_4_ = iVar15 + 4;
      auVar29._12_4_ = iVar16 + 4;
      auVar32._4_4_ = iVar14;
      auVar32._0_4_ = iVar9;
      auVar32._8_4_ = iVar15;
      auVar32._12_4_ = iVar16;
      auVar13 = NEON_scvtf(auVar32,4);
      lVar1 = lVar5 + 0x20;
      auVar30 = NEON_scvtf(auVar29,4);
      iVar9 = iVar9 + 8;
      iVar14 = iVar14 + 8;
      iVar15 = iVar15 + 8;
      iVar16 = iVar16 + 8;
      *(float *)(this + lVar5 + 0x1c) = auVar12._8_4_ + (auVar13._8_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x20) = auVar12._12_4_ + (auVar13._12_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0xc) = auVar12._0_4_ + (auVar13._0_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x10) = auVar12._4_4_ + (auVar13._4_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x2c) = auVar12._8_4_ + (auVar30._8_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x30) = auVar12._12_4_ + (auVar30._12_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x1c) = auVar12._0_4_ + (auVar30._0_4_ / 255.0) * 2.0;
      *(float *)(this + lVar5 + 0x20) = auVar12._4_4_ + (auVar30._4_4_ / 255.0) * 2.0;
      lVar5 = lVar1;
    } while (lVar1 != 0x400);
    goto LAB_008ae314;
  case 3:
    auVar12 = NEON_fmov(0x3f800000,4);
    auVar13 = NEON_fmov(0xbf800000,4);
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 0x10;
      *(long *)(this + lVar5 + 0x14) = auVar12._8_8_;
      *(long *)(this + lVar5 + 0xc) = auVar12._0_8_;
      *(long *)(this + lVar5 + 0x214) = auVar13._8_8_;
      *(long *)(this + lVar5 + 0x20c) = auVar13._0_8_;
      lVar5 = lVar1;
    } while (lVar1 != 0x200);
    uVar10 = 0x3f800000;
    break;
  case 4:
    auVar12 = NEON_fmov(0xbf800000,4);
    iVar9 = 0;
    iVar14 = 1;
    iVar15 = 2;
    iVar16 = 3;
    lVar5 = 0;
    do {
      auVar13._4_4_ = iVar14;
      auVar13._0_4_ = iVar9;
      auVar13._8_8_ = uStack_68;
      auVar13 = NEON_scvtf(auVar13,4);
      fVar6 = expf(auVar13._4_4_ * 0.0078125);
      fVar7 = expf(auVar13._0_4_ * 0.0078125);
      expf((float)uStack_38);
      fVar8 = expf((float)((ulong)uStack_38 >> 0x20));
      fVar18 = auVar12._8_4_;
      fVar19 = auVar12._12_4_;
      fVar20 = (float)((ulong)uStack_88 >> 0x20);
      auVar30._0_4_ = 0x80 - iVar15;
      auVar30._4_4_ = 0x80 - iVar16;
      auVar30._8_4_ = 0x80 - iStack_58;
      auVar30._12_4_ = 0x80 - iStack_54;
      auVar13 = NEON_scvtf(auVar30,4);
      __x = auVar13._8_4_ * 0.0078125;
      __x_00 = auVar13._12_4_ * 0.0078125;
      uStack_38 = CONCAT44(__x_00,__x);
      *(float *)(this + lVar5 + 0x1c) = fVar18 + ((fVar18 + 0.0) / (float)uStack_88) * 2.0;
      *(float *)(this + lVar5 + 0x20) = fVar19 + ((fVar8 + fVar19) / fVar20) * 2.0;
      *(float *)(this + lVar5 + 0xc) = ((fVar7 + 1.718282) / 1.718282) * 2.0 + 1.718282;
      *(float *)(this + lVar5 + 0x10) = ((fVar6 + 1.718282) / 1.718282) * 2.0 + 1.718282;
      fVar6 = expf(auVar13._4_4_ * 0.0078125);
      fVar7 = expf(auVar13._0_4_ * 0.0078125);
      expf(__x);
      fVar8 = expf(__x_00);
      lVar1 = lVar5 + 0x10;
      *(float *)(this + lVar5 + 0x21c) = fVar18 + ((fVar18 + 0.0) / (float)uStack_88) * 2.0;
      *(float *)(this + lVar5 + 0x220) = fVar19 + ((fVar8 + fVar19) / fVar20) * 2.0;
      *(float *)(this + lVar5 + 0x20c) = ((fVar7 + 1.718282) / 1.718282) * 2.0 + 1.718282;
      *(float *)(this + lVar5 + 0x210) = ((fVar6 + 1.718282) / 1.718282) * 2.0 + 1.718282;
      iVar9 = iVar9 + 4;
      iVar14 = iVar14 + 4;
      iVar15 = (int)(float)uStack_68 + 4;
      iVar16 = (int)fVar17 + 4;
      iStack_58 = iStack_58 + 4;
      iStack_54 = iStack_54 + 4;
      lVar5 = lVar1;
    } while (lVar1 != 0x200);
LAB_008ae314:
    uVar10 = 0xbf800000;
  }
  *(undefined4 *)(this + 0x40c) = uVar10;
                    /* WARNING: Read-only address (ram,0x004c51c0) is written */
  return;
}


