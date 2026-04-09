// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPreset
// Entry Point: 00b135ac
// Size: 936 bytes
// Signature: undefined __thiscall setPreset(FDNReverb * this, Preset * param_1)


/* FDNReverb::setPreset(FDNReverb::Preset const&) */

void __thiscall FDNReverb::setPreset(FDNReverb *this,Preset *param_1)

{
  long lVar1;
  FDNReverb *this_00;
  uint *puVar2;
  uint uVar3;
  IIRFilter *pIVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  IIRCoefficients aIStack_b0 [24];
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  fVar12 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(this + 0xdc);
  fVar20 = *(float *)(param_1 + 8);
  fVar25 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(this + 0xe0);
  fVar26 = *(float *)(this + 0xe4);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar22 = *(float *)(param_1 + 0x24);
  fVar23 = *(float *)(param_1 + 0x10);
  fVar24 = *(float *)(this + 0xe8);
  fVar16 = *(float *)(this + 0xfc);
  fVar17 = *(float *)(this + 0x100);
  fVar8 = (float)NEON_fmin(*(float *)(param_1 + 0x18),0x3e99999a);
  fVar21 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x18) == *(float *)(this + 0xf0)) {
    this_00 = this;
    if (fVar13 != *(float *)(this + 0xf8)) {
      fVar18 = *(float *)this;
      puVar2 = *(uint **)(this + 0x20);
      goto LAB_00b13690;
    }
  }
  else {
    fVar18 = *(float *)this;
    uVar3 = (int)(fVar8 * fVar18);
    if (*(uint *)(this + 0x10) <= (uint)(int)(fVar8 * fVar18)) {
      uVar3 = *(uint *)(this + 0x10) - 1;
    }
    puVar2 = *(uint **)(this + 0x20);
    *puVar2 = uVar3;
LAB_00b13690:
    fVar13 = (float)NEON_fmin(fVar13,0x3dcccccd);
    uVar3 = (uint)((fVar13 + fVar8) * fVar18);
    if (*(uint *)(this + 0x10) <= uVar3) {
      uVar3 = *(uint *)(this + 0x10) - 1;
    }
    puVar2[1] = uVar3;
    this_00 = (FDNReverb *)memset(*(void **)(this + 8),0,(ulong)(*(int *)(this + 0x14) + 1) << 2);
  }
  if (fVar25 == fVar26) {
    if ((fVar23 == fVar24) && (fVar22 == fVar16)) goto LAB_00b1378c;
    fVar13 = *(float *)(param_1 + 0xc);
    fVar8 = *(float *)this;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xc);
    fVar8 = *(float *)this;
    fVar23 = powf(0.001,(float)(ulong)((uint)(*(int *)(this + 0x80) + *(int *)(this + 0x70) +
                                              *(int *)(this + 0x90) + *(int *)(this + 0xa0)) >> 2) /
                        (fVar13 * fVar8));
    fVar23 = (float)NEON_fmsub(fVar23,fVar23,0x3f800000);
    *(float *)(this + 0x144) = SQRT(fVar23);
  }
  fVar24 = *(float *)(param_1 + 0x10);
  fVar23 = cosf((*(float *)(param_1 + 0x24) * 6.283185) / fVar8);
  if (fVar23 <= 0.99) {
    lVar5 = 0;
    do {
      fVar26 = (float)NEON_ucvtf(*(undefined4 *)(this + lVar5 * 4 + 0x70));
      fVar25 = powf(0.001,fVar26 / (fVar13 * fVar8));
      *(float *)(this + lVar5 + 0x114) = fVar25;
      if (fVar24 < 1.0) {
        fVar26 = powf(0.001,fVar26 / (fVar13 * fVar24 * fVar8));
        fVar26 = (fVar26 / fVar25) * (fVar26 / fVar25);
        fVar25 = 0.0;
        if (fVar26 < 0.9999) {
          fVar25 = 1.0 - fVar26;
          fVar26 = (float)NEON_fmadd(fVar26,fVar23,0xbf800000);
          fVar26 = fVar26 + fVar26;
          fVar18 = (float)NEON_fmadd(fVar26,fVar26,fVar25 * fVar25 * -4.0);
          fVar25 = (-fVar26 - SQRT(fVar18)) / (fVar25 + fVar25);
        }
        uVar9 = NEON_fmin(fVar25,0x3f7ae148);
        *(undefined4 *)(this + lVar5 + 0x124) = uVar9;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
  }
LAB_00b1378c:
  if ((fVar12 != fVar6) || (fVar22 != fVar16)) {
    pIVar4 = *(IIRFilter **)(this + 0x150);
    IIRFilter::createHighShelf
              ((IIRFilter *)this_00,*(float *)this,*(float *)(param_1 + 0x24),
               *(float *)(param_1 + 4),0.7071068);
    IIRFilter::setCoefficients(pIVar4,aIStack_b0);
    this_00 = (FDNReverb *)IIRFilter::clear();
  }
  if ((fVar20 != fVar7) || (fVar21 != fVar17)) {
    pIVar4 = *(IIRFilter **)(this + 0x148);
    IIRFilter::createLowShelf
              ((IIRFilter *)this_00,*(float *)this,*(float *)(param_1 + 0x28),
               *(float *)(param_1 + 8),0.7071068);
    IIRFilter::setCoefficients(pIVar4,aIStack_b0);
    IIRFilter::clear();
  }
  uVar19 = *(undefined8 *)param_1;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x24);
  uVar10 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xd8) = uVar19;
  *(undefined8 *)(this + 0xfc) = uVar11;
  *(undefined8 *)(this + 0xf4) = uVar10;
  *(undefined8 *)(this + 0xf0) = uVar15;
  *(undefined8 *)(this + 0xe8) = uVar14;
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


