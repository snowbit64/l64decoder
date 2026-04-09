// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertBufferShortToSamples
// Entry Point: 008a8214
// Size: 168 bytes
// Signature: undefined __cdecl convertBufferShortToSamples(short * param_1, uint param_2, float * param_3)


/* AudioMathUtil::convertBufferShortToSamples(short const*, unsigned int, float*) */

void AudioMathUtil::convertBufferShortToSamples(short *param_1,uint param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  float *pfVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    if (param_2 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffff0;
      pauVar4 = (undefined (*) [16])(param_1 + 8);
      param_1 = param_1 + uVar3;
      pfVar5 = param_3 + 8;
      uVar6 = uVar3;
      do {
        auVar7 = pauVar4[-1];
        auVar9 = *pauVar4;
        pauVar4 = pauVar4 + 2;
        uVar6 = uVar6 - 0x10;
        auVar10._0_4_ = (int)auVar7._8_2_;
        auVar10._4_4_ = (int)auVar7._10_2_;
        auVar10._8_4_ = (int)auVar7._12_2_;
        auVar10._12_4_ = (int)auVar7._14_2_;
        auVar12._0_4_ = (int)auVar7._0_2_;
        auVar12._4_4_ = (int)auVar7._2_2_;
        auVar12._8_4_ = (int)auVar7._4_2_;
        auVar12._12_4_ = (int)auVar7._6_2_;
        auVar11._0_4_ = (int)auVar9._8_2_;
        auVar11._4_4_ = (int)auVar9._10_2_;
        auVar11._8_4_ = (int)auVar9._12_2_;
        auVar11._12_4_ = (int)auVar9._14_2_;
        auVar8._0_4_ = (int)auVar9._0_2_;
        auVar8._4_4_ = (int)auVar9._2_2_;
        auVar8._8_4_ = (int)auVar9._4_2_;
        auVar8._12_4_ = (int)auVar9._6_2_;
        auVar10 = NEON_scvtf(auVar10,4);
        auVar7 = NEON_scvtf(auVar12,4);
        auVar12 = NEON_scvtf(auVar11,4);
        auVar9 = NEON_scvtf(auVar8,4);
        pfVar5[-4] = auVar7._8_4_ * 3.051758e-05;
        pfVar5[-3] = auVar7._12_4_ * 3.051758e-05;
        pfVar5[-8] = auVar7._0_4_ * 3.051758e-05;
        pfVar5[-7] = auVar7._4_4_ * 3.051758e-05;
        *pfVar5 = auVar10._8_4_ * 3.051758e-05;
        pfVar5[1] = auVar10._12_4_ * 3.051758e-05;
        pfVar5[-4] = auVar10._0_4_ * 3.051758e-05;
        pfVar5[-3] = auVar10._4_4_ * 3.051758e-05;
        pfVar5[4] = auVar9._8_4_ * 3.051758e-05;
        pfVar5[5] = auVar9._12_4_ * 3.051758e-05;
        *pfVar5 = auVar9._0_4_ * 3.051758e-05;
        pfVar5[1] = auVar9._4_4_ * 3.051758e-05;
        pfVar5[8] = auVar12._8_4_ * 3.051758e-05;
        pfVar5[9] = auVar12._12_4_ * 3.051758e-05;
        pfVar5[4] = auVar12._0_4_ * 3.051758e-05;
        pfVar5[5] = auVar12._4_4_ * 3.051758e-05;
        pfVar5 = pfVar5 + 0x10;
      } while (uVar6 != 0);
      if (uVar3 == uVar1) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    pfVar5 = param_3 + uVar3;
    do {
      lVar2 = lVar2 + -1;
      *pfVar5 = (float)(int)*param_1 * 3.051758e-05;
      param_1 = param_1 + 1;
      pfVar5 = pfVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}


