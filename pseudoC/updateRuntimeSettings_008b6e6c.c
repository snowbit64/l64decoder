// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRuntimeSettings
// Entry Point: 008b6e6c
// Size: 720 bytes
// Signature: undefined updateRuntimeSettings(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadSoundSimulation::updateRuntimeSettings() */

void LoadSoundSimulation::updateRuntimeSettings(void)

{
  long *this;
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long *in_x0;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  
  lVar6 = *in_x0;
  pfVar3 = *(float **)(lVar6 + 0x48);
  uVar4 = *(long *)(lVar6 + 0x50) - (long)pfVar3;
  if ((int)(uVar4 >> 6) != 0) {
    uVar11 = 0;
    fVar13 = *(float *)((long)in_x0 + 0x50c);
    pfVar5 = pfVar3;
    do {
      if (fVar13 <= *pfVar5) {
        uVar10 = (uint)uVar11;
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar10 - 1;
        }
        uVar2 = uVar10;
        if (*pfVar5 != fVar13) {
          uVar2 = uVar1;
        }
        uVar4 = (ulong)uVar2;
        if (uVar2 == uVar10) goto LAB_008b6ed8;
        fVar13 = (fVar13 - pfVar3[uVar4 * 0x10]) / (*pfVar5 - pfVar3[uVar4 * 0x10]);
        if (0.0 < fVar13) goto LAB_008b6ee4;
        uVar11 = (ulong)uVar2;
        goto LAB_008b6ed8;
      }
      uVar11 = uVar11 + 1;
      pfVar5 = pfVar5 + 0x10;
    } while ((uVar4 >> 6 & 0xffffffff) != uVar11);
  }
  uVar11 = 0;
LAB_008b6ed8:
  uVar11 = uVar11 & 0xffffffff;
  fVar13 = 0.0;
  uVar4 = uVar11;
LAB_008b6ee4:
  lVar9 = uVar4 * 0x40;
  lVar12 = uVar11 * 0x40;
  fVar14 = (float)AudioMathUtil::lerp(pfVar3[uVar4 * 0x10 + 0xd],pfVar3[uVar11 * 0x10 + 0xd],fVar13)
  ;
  fVar15 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(lVar6 + 0x48) + lVar9 + 0x38),
                                      *(float *)(*(long *)(lVar6 + 0x48) + lVar12 + 0x38),fVar13);
  lVar6 = *in_x0;
  fVar16 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(lVar6 + 0x48) + lVar9 + 0x28),
                                      *(float *)(*(long *)(lVar6 + 0x48) + lVar12 + 0x28),fVar13);
  fVar17 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(lVar6 + 0x48) + lVar9 + 0x2c),
                                      *(float *)(*(long *)(lVar6 + 0x48) + lVar12 + 0x2c),fVar13);
  fVar18 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(lVar6 + 0x48) + lVar9 + 0x30),
                                      *(float *)(*(long *)(lVar6 + 0x48) + lVar12 + 0x30),fVar13);
  fVar19 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(*in_x0 + 0x48) + lVar9 + 0x3c),
                                      *(float *)(*(long *)(*in_x0 + 0x48) + lVar12 + 0x3c),fVar13);
  lVar7 = *in_x0;
  lVar6 = *(long *)(lVar7 + 0x48);
  uVar20 = AudioMathUtil::lerp(*(float *)(lVar6 + lVar9 + 4),*(float *)(lVar6 + lVar12 + 4),fVar13);
  lVar6 = *(long *)(lVar7 + 0x48);
  uVar21 = AudioMathUtil::lerp(*(float *)(lVar6 + lVar9 + 8),*(float *)(lVar6 + lVar12 + 8),fVar13);
  *(undefined4 *)(in_x0 + 0x83) = uVar20;
  lVar6 = in_x0[0x9d];
  *(undefined4 *)((long)in_x0 + 0x41c) = uVar21;
  if ((int)((ulong)(in_x0[0x9e] - lVar6) >> 2) != 0) {
    uVar8 = 0;
    lVar7 = *in_x0;
    do {
      lVar6 = (ulong)*(uint *)(lVar6 + uVar8 * 4) * 0xc;
      fVar22 = (float)AudioMathUtil::lerp(*(float *)(*(long *)(*(long *)(lVar7 + 0x48) +
                                                               uVar4 * 0x40 + 0x10) + lVar6 + 4),
                                          *(float *)(*(long *)(*(long *)(lVar7 + 0x48) +
                                                               uVar11 * 0x40 + 0x10) + lVar6 + 4),
                                          fVar13);
      Equalizer::setGainDb((Equalizer *)(in_x0 + 0x9a),(int)uVar8,fVar22);
      uVar8 = uVar8 + 1;
      lVar6 = in_x0[0x9d];
    } while (uVar8 < ((ulong)(in_x0[0x9e] - lVar6) >> 2 & 0xffffffff));
  }
  this = in_x0 + 0x86;
  BandDistortion::setDistortionLowDrive((BandDistortion *)this,fVar16);
  BandDistortion::setDistortionMidDrive((BandDistortion *)this,fVar17);
  BandDistortion::setDistortionHighDrive((BandDistortion *)this,fVar18);
  fVar13 = powf(10.0,fVar19 * 0.05);
  fVar13 = fVar13 * *(float *)(*in_x0 + 4);
  *(float *)(in_x0 + 0xa0) = fVar14 * fVar13;
  *(float *)((long)in_x0 + 0x504) = fVar15 * fVar13;
  return;
}


