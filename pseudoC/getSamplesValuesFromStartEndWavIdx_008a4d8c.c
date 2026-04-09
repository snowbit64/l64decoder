// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplesValuesFromStartEndWavIdx
// Entry Point: 008a4d8c
// Size: 260 bytes
// Signature: undefined __thiscall getSamplesValuesFromStartEndWavIdx(GranularSynthesisRuntimeSettings * this, int param_1, int param_2, float * param_3, uint * param_4)


/* GranularSynthesisRuntimeSettings::getSamplesValuesFromStartEndWavIdx(int, int, float*, unsigned
   int&) const */

void __thiscall
GranularSynthesisRuntimeSettings::getSamplesValuesFromStartEndWavIdx
          (GranularSynthesisRuntimeSettings *this,int param_1,int param_2,float *param_3,
          uint *param_4)

{
  undefined (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  
  if ((-1 < param_1) && (param_1 <= param_2)) {
    lVar2 = *(long *)(this + 0x18);
    iVar5 = (int)((ulong)(*(long *)(this + 0x20) - lVar2) >> 1);
    if ((param_2 < iVar5) && ((-1 < param_2 && (param_1 < iVar5)))) {
      uVar8 = (param_2 - param_1) + 1;
      uVar3 = (ulong)uVar8;
      *param_4 = uVar8;
      if (param_2 - param_1 != -1) {
        if (uVar8 < 0x10) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((!CARRY4(param_1,(uint)(uVar3 - 1))) && (uVar3 - 1 >> 0x20 == 0)) {
            uVar6 = uVar3 & 0xfffffff0;
            pfVar7 = param_3 + 8;
            uVar9 = uVar6;
            uVar8 = param_1;
            do {
              pauVar1 = (undefined (*) [16])(lVar2 + (ulong)uVar8 * 2);
              uVar9 = uVar9 - 0x10;
              uVar8 = uVar8 + 0x10;
              auVar10 = *pauVar1;
              auVar12 = pauVar1[1];
              auVar13._0_4_ = (int)auVar10._8_2_;
              auVar13._4_4_ = (int)auVar10._10_2_;
              auVar13._8_4_ = (int)auVar10._12_2_;
              auVar13._12_4_ = (int)auVar10._14_2_;
              auVar15._0_4_ = (int)auVar10._0_2_;
              auVar15._4_4_ = (int)auVar10._2_2_;
              auVar15._8_4_ = (int)auVar10._4_2_;
              auVar15._12_4_ = (int)auVar10._6_2_;
              auVar14._0_4_ = (int)auVar12._8_2_;
              auVar14._4_4_ = (int)auVar12._10_2_;
              auVar14._8_4_ = (int)auVar12._12_2_;
              auVar14._12_4_ = (int)auVar12._14_2_;
              auVar11._0_4_ = (int)auVar12._0_2_;
              auVar11._4_4_ = (int)auVar12._2_2_;
              auVar11._8_4_ = (int)auVar12._4_2_;
              auVar11._12_4_ = (int)auVar12._6_2_;
              auVar13 = NEON_scvtf(auVar13,4);
              auVar10 = NEON_scvtf(auVar15,4);
              auVar15 = NEON_scvtf(auVar14,4);
              auVar12 = NEON_scvtf(auVar11,4);
              pfVar7[-4] = auVar10._8_4_ * 3.051758e-05;
              pfVar7[-3] = auVar10._12_4_ * 3.051758e-05;
              pfVar7[-8] = auVar10._0_4_ * 3.051758e-05;
              pfVar7[-7] = auVar10._4_4_ * 3.051758e-05;
              *pfVar7 = auVar13._8_4_ * 3.051758e-05;
              pfVar7[1] = auVar13._12_4_ * 3.051758e-05;
              pfVar7[-4] = auVar13._0_4_ * 3.051758e-05;
              pfVar7[-3] = auVar13._4_4_ * 3.051758e-05;
              pfVar7[4] = auVar12._8_4_ * 3.051758e-05;
              pfVar7[5] = auVar12._12_4_ * 3.051758e-05;
              *pfVar7 = auVar12._0_4_ * 3.051758e-05;
              pfVar7[1] = auVar12._4_4_ * 3.051758e-05;
              pfVar7[8] = auVar15._8_4_ * 3.051758e-05;
              pfVar7[9] = auVar15._12_4_ * 3.051758e-05;
              pfVar7[4] = auVar15._0_4_ * 3.051758e-05;
              pfVar7[5] = auVar15._4_4_ * 3.051758e-05;
              pfVar7 = pfVar7 + 0x10;
            } while (uVar9 != 0);
            if (uVar6 == uVar3) {
              return;
            }
          }
        }
        uVar8 = param_1 + (int)uVar6;
        lVar4 = uVar3 - uVar6;
        pfVar7 = param_3 + uVar6;
        do {
          uVar3 = (ulong)uVar8;
          uVar8 = uVar8 + 1;
          lVar4 = lVar4 + -1;
          *pfVar7 = (float)(int)*(short *)(lVar2 + uVar3 * 2) * 3.051758e-05;
          pfVar7 = pfVar7 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


