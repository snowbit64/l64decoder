// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertBufferSamplesToShort
// Entry Point: 008a818c
// Size: 136 bytes
// Signature: undefined __cdecl convertBufferSamplesToShort(float * param_1, uint param_2, short * param_3)


/* AudioMathUtil::convertBufferSamplesToShort(float const*, unsigned int, short*) */

void AudioMathUtil::convertBufferSamplesToShort(float *param_1,uint param_2,short *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  short *psVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    if (param_2 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffff0;
      pauVar4 = (undefined (*) [16])(param_1 + 8);
      psVar5 = param_3 + 8;
      param_1 = param_1 + uVar3;
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 0x10;
        auVar7 = NEON_fcvtzs(pauVar4[-2],0xf,4);
        auVar8 = NEON_fcvtzs(pauVar4[-1],0xf,4);
        auVar9 = NEON_fcvtzs(*pauVar4,0xf,4);
        auVar10 = NEON_fcvtzs(pauVar4[1],0xf,4);
        *psVar5 = auVar8._0_2_;
        psVar5[1] = auVar8._4_2_;
        psVar5[2] = auVar8._8_2_;
        psVar5[3] = auVar8._12_2_;
        psVar5[-8] = auVar7._0_2_;
        psVar5[-7] = auVar7._4_2_;
        psVar5[-6] = auVar7._8_2_;
        psVar5[-5] = auVar7._12_2_;
        psVar5[8] = auVar10._0_2_;
        psVar5[9] = auVar10._4_2_;
        psVar5[10] = auVar10._8_2_;
        psVar5[0xb] = auVar10._12_2_;
        *psVar5 = auVar9._0_2_;
        psVar5[1] = auVar9._4_2_;
        psVar5[2] = auVar9._8_2_;
        psVar5[3] = auVar9._12_2_;
        psVar5 = psVar5 + 0x10;
        pauVar4 = pauVar4 + 4;
      } while (uVar6 != 0);
      if (uVar3 == uVar1) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    psVar5 = param_3 + uVar3;
    do {
      lVar2 = lVar2 + -1;
      *psVar5 = (short)(int)(*param_1 * 32768.0);
      param_1 = param_1 + 1;
      psVar5 = psVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}


