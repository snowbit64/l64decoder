// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPCM32ToFloat
// Entry Point: 00e3939c
// Size: 224 bytes
// Signature: undefined __cdecl convertPCM32ToFloat(void * param_1, float * param_2, uint param_3, uint param_4)


/* SoLoud::convertPCM32ToFloat(void const*, float*, unsigned int, unsigned int) */

void SoLoud::convertPCM32ToFloat(void *param_1,float *param_2,uint param_3,uint param_4)

{
  undefined (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar2 = (ulong)param_3;
    if ((7 < param_3) && (param_4 == 1)) {
      uVar4 = uVar2 & 0xfffffff8;
      uVar5 = 0;
      puVar7 = (undefined8 *)(param_2 + 4);
      uVar8 = uVar4;
      do {
        pauVar1 = (undefined (*) [16])((long)param_1 + (ulong)uVar5 * 4);
        uVar8 = uVar8 - 8;
        uVar5 = uVar5 + 8;
        auVar9 = *pauVar1;
        auVar11 = pauVar1[1];
        auVar14._0_8_ = (long)auVar9._8_4_;
        auVar14._8_8_ = (long)auVar9._12_4_;
        auVar12._0_8_ = (long)auVar9._0_4_;
        auVar12._8_8_ = (long)auVar9._4_4_;
        auVar13._0_8_ = (long)auVar11._0_4_;
        auVar13._8_8_ = (long)auVar11._4_4_;
        auVar10._0_8_ = (long)auVar11._8_4_;
        auVar10._8_8_ = (long)auVar11._12_4_;
        auVar9 = NEON_scvtf(auVar12,8);
        auVar12 = NEON_scvtf(auVar14,8);
        auVar14 = NEON_scvtf(auVar13,8);
        auVar11 = NEON_scvtf(auVar10,8);
        puVar7[-1] = CONCAT44((float)(auVar12._8_8_ / 2147483647.0),
                              (float)(auVar12._0_8_ / 2147483647.0));
        puVar7[-2] = CONCAT44((float)(auVar9._8_8_ / 2147483647.0),
                              (float)(auVar9._0_8_ / 2147483647.0));
        puVar7[1] = CONCAT44((float)(auVar11._8_8_ / 2147483647.0),
                             (float)(auVar11._0_8_ / 2147483647.0));
        *puVar7 = CONCAT44((float)(auVar14._8_8_ / 2147483647.0),
                           (float)(auVar14._0_8_ / 2147483647.0));
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
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
      *pfVar6 = (float)(long)*(int *)((long)param_1 + uVar2 * 4) / 2.147484e+09;
      pfVar6 = pfVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


