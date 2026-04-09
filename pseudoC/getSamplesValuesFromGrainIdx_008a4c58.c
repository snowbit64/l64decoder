// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplesValuesFromGrainIdx
// Entry Point: 008a4c58
// Size: 308 bytes
// Signature: undefined __thiscall getSamplesValuesFromGrainIdx(GranularSynthesisRuntimeSettings * this, int param_1, float * param_2, uint * param_3)


/* GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx(int, float*, unsigned int&) const
    */

void __thiscall
GranularSynthesisRuntimeSettings::getSamplesValuesFromGrainIdx
          (GranularSynthesisRuntimeSettings *this,int param_1,float *param_2,uint *param_3)

{
  uint *puVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  float *pfVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  *param_3 = 0;
  if (-1 < param_1) {
    lVar4 = *(long *)(this + 0x30);
    if ((lVar4 != *(long *)(this + 0x38)) &&
       (param_1 <= (int)((ulong)(*(long *)(this + 0x38) - lVar4) >> 4))) {
      puVar1 = (uint *)(lVar4 + (ulong)(uint)param_1 * 0x10);
      uVar6 = *puVar1;
      if (-1 < (int)uVar6) {
        uVar5 = puVar1[1];
        if ((int)uVar6 <= (int)uVar5) {
          lVar4 = *(long *)(this + 0x18);
          iVar10 = (int)((ulong)(*(long *)(this + 0x20) - lVar4) >> 1);
          if ((((int)uVar5 < iVar10) && (-1 < (int)uVar5)) && ((int)uVar6 < iVar10)) {
            uVar3 = (uVar5 - uVar6) + 1;
            uVar7 = (ulong)uVar3;
            *param_3 = uVar3;
            if (uVar5 - uVar6 != -1) {
              if (uVar3 < 0x10) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                if ((!CARRY4(uVar6,(uint)(uVar7 - 1))) && (uVar7 - 1 >> 0x20 == 0)) {
                  uVar9 = uVar7 & 0xfffffff0;
                  pfVar11 = param_2 + 8;
                  uVar12 = uVar9;
                  uVar5 = uVar6;
                  do {
                    pauVar2 = (undefined (*) [16])(lVar4 + (ulong)uVar5 * 2);
                    uVar12 = uVar12 - 0x10;
                    uVar5 = uVar5 + 0x10;
                    auVar13 = *pauVar2;
                    auVar15 = pauVar2[1];
                    auVar16._0_4_ = (int)auVar13._8_2_;
                    auVar16._4_4_ = (int)auVar13._10_2_;
                    auVar16._8_4_ = (int)auVar13._12_2_;
                    auVar16._12_4_ = (int)auVar13._14_2_;
                    auVar18._0_4_ = (int)auVar13._0_2_;
                    auVar18._4_4_ = (int)auVar13._2_2_;
                    auVar18._8_4_ = (int)auVar13._4_2_;
                    auVar18._12_4_ = (int)auVar13._6_2_;
                    auVar17._0_4_ = (int)auVar15._8_2_;
                    auVar17._4_4_ = (int)auVar15._10_2_;
                    auVar17._8_4_ = (int)auVar15._12_2_;
                    auVar17._12_4_ = (int)auVar15._14_2_;
                    auVar14._0_4_ = (int)auVar15._0_2_;
                    auVar14._4_4_ = (int)auVar15._2_2_;
                    auVar14._8_4_ = (int)auVar15._4_2_;
                    auVar14._12_4_ = (int)auVar15._6_2_;
                    auVar16 = NEON_scvtf(auVar16,4);
                    auVar13 = NEON_scvtf(auVar18,4);
                    auVar18 = NEON_scvtf(auVar17,4);
                    auVar15 = NEON_scvtf(auVar14,4);
                    pfVar11[-4] = auVar13._8_4_ * 3.051758e-05;
                    pfVar11[-3] = auVar13._12_4_ * 3.051758e-05;
                    pfVar11[-8] = auVar13._0_4_ * 3.051758e-05;
                    pfVar11[-7] = auVar13._4_4_ * 3.051758e-05;
                    *pfVar11 = auVar16._8_4_ * 3.051758e-05;
                    pfVar11[1] = auVar16._12_4_ * 3.051758e-05;
                    pfVar11[-4] = auVar16._0_4_ * 3.051758e-05;
                    pfVar11[-3] = auVar16._4_4_ * 3.051758e-05;
                    pfVar11[4] = auVar15._8_4_ * 3.051758e-05;
                    pfVar11[5] = auVar15._12_4_ * 3.051758e-05;
                    *pfVar11 = auVar15._0_4_ * 3.051758e-05;
                    pfVar11[1] = auVar15._4_4_ * 3.051758e-05;
                    pfVar11[8] = auVar18._8_4_ * 3.051758e-05;
                    pfVar11[9] = auVar18._12_4_ * 3.051758e-05;
                    pfVar11[4] = auVar18._0_4_ * 3.051758e-05;
                    pfVar11[5] = auVar18._4_4_ * 3.051758e-05;
                    pfVar11 = pfVar11 + 0x10;
                  } while (uVar12 != 0);
                  if (uVar9 == uVar7) {
                    return;
                  }
                }
              }
              lVar8 = uVar7 - uVar9;
              uVar6 = uVar6 + (int)uVar9;
              pfVar11 = param_2 + uVar9;
              do {
                uVar7 = (ulong)uVar6;
                lVar8 = lVar8 + -1;
                uVar6 = uVar6 + 1;
                *pfVar11 = (float)(int)*(short *)(lVar4 + uVar7 * 2) * 3.051758e-05;
                pfVar11 = pfVar11 + 1;
              } while (lVar8 != 0);
            }
          }
        }
      }
    }
  }
  return;
}


