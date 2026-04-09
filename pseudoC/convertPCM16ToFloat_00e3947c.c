// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPCM16ToFloat
// Entry Point: 00e3947c
// Size: 204 bytes
// Signature: undefined __cdecl convertPCM16ToFloat(void * param_1, float * param_2, uint param_3, uint param_4)


/* SoLoud::convertPCM16ToFloat(void const*, float*, unsigned int, unsigned int) */

void SoLoud::convertPCM16ToFloat(void *param_1,float *param_2,uint param_3,uint param_4)

{
  undefined (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar2 = (ulong)param_3;
    if ((0xf < param_3) && (param_4 == 1)) {
      uVar4 = uVar2 & 0xfffffff0;
      uVar5 = 0;
      pfVar6 = param_2 + 8;
      uVar7 = uVar4;
      do {
        pauVar1 = (undefined (*) [16])((long)param_1 + (ulong)uVar5 * 2);
        uVar7 = uVar7 - 0x10;
        uVar5 = uVar5 + 0x10;
        auVar8 = *pauVar1;
        auVar10 = pauVar1[1];
        auVar11._0_4_ = (int)auVar8._0_2_;
        auVar11._4_4_ = (int)auVar8._2_2_;
        auVar11._8_4_ = (int)auVar8._4_2_;
        auVar11._12_4_ = (int)auVar8._6_2_;
        auVar13._0_4_ = (int)auVar8._8_2_;
        auVar13._4_4_ = (int)auVar8._10_2_;
        auVar13._8_4_ = (int)auVar8._12_2_;
        auVar13._12_4_ = (int)auVar8._14_2_;
        auVar12._0_4_ = (int)auVar10._8_2_;
        auVar12._4_4_ = (int)auVar10._10_2_;
        auVar12._8_4_ = (int)auVar10._12_2_;
        auVar12._12_4_ = (int)auVar10._14_2_;
        auVar9._0_4_ = (int)auVar10._0_2_;
        auVar9._4_4_ = (int)auVar10._2_2_;
        auVar9._8_4_ = (int)auVar10._4_2_;
        auVar9._12_4_ = (int)auVar10._6_2_;
        auVar11 = NEON_scvtf(auVar11,4);
        auVar8 = NEON_scvtf(auVar13,4);
        auVar13 = NEON_scvtf(auVar12,4);
        auVar10 = NEON_scvtf(auVar9,4);
        pfVar6[-4] = auVar11._8_4_ / 32767.0;
        pfVar6[-3] = auVar11._12_4_ / 32767.0;
        pfVar6[-8] = auVar11._0_4_ / 32767.0;
        pfVar6[-7] = auVar11._4_4_ / 32767.0;
        *pfVar6 = auVar8._8_4_ / 32767.0;
        pfVar6[1] = auVar8._12_4_ / 32767.0;
        pfVar6[-4] = auVar8._0_4_ / 32767.0;
        pfVar6[-3] = auVar8._4_4_ / 32767.0;
        pfVar6[4] = auVar10._8_4_ / 32767.0;
        pfVar6[5] = auVar10._12_4_ / 32767.0;
        *pfVar6 = auVar10._0_4_ / 32767.0;
        pfVar6[1] = auVar10._4_4_ / 32767.0;
        pfVar6[8] = auVar13._8_4_ / 32767.0;
        pfVar6[9] = auVar13._12_4_ / 32767.0;
        pfVar6[4] = auVar13._0_4_ / 32767.0;
        pfVar6[5] = auVar13._4_4_ / 32767.0;
        pfVar6 = pfVar6 + 0x10;
      } while (uVar7 != 0);
      if (uVar4 == uVar2) {
        return;
      }
    }
    uVar5 = param_4 * (int)uVar4;
    lVar3 = uVar2 - uVar4;
    pfVar6 = param_2 + uVar4;
    do {
      uVar2 = (ulong)uVar5;
      uVar5 = uVar5 + param_4;
      lVar3 = lVar3 + -1;
      *pfVar6 = (float)(int)*(short *)((long)param_1 + uVar2 * 2) / 32767.0;
      pfVar6 = pfVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


