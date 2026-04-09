// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateFadedMotorStopSound
// Entry Point: 008b54b4
// Size: 440 bytes
// Signature: undefined __thiscall generateFadedMotorStopSound(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::generateFadedMotorStopSound(unsigned int, float*) */

ulong __thiscall
LoopSynthesisGenerator::generateFadedMotorStopSound
          (LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  uint uVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  LoopSynthesisGenerator LVar4;
  undefined auVar5 [16];
  bool bVar6;
  float *pfVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  undefined (*pauVar13) [16];
  undefined (*pauVar14) [16];
  ulong uVar15;
  uint uVar16;
  float fVar17;
  undefined auVar18 [16];
  float fVar19;
  float fVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  float fVar29;
  float fVar30;
  undefined auVar31 [16];
  
  uVar21 = *(uint *)(*(long *)(this + 0x30) + 0x10);
  if ((int)(*(int *)(this + 0x60) - uVar21) <= (int)param_1) {
    param_1 = *(int *)(this + 0x60) - uVar21;
  }
  uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  uVar15 = (ulong)uVar1;
  getMotorSound(this,uVar1,*(float **)(this + 0x48),*(float **)(this + 0x50));
  StaticSoundGenerator::getNextBuffer
            (*(StaticSoundGenerator **)(this + 0x30),uVar1,*(float **)(this + 0x50));
  if (0 < (int)param_1) {
    pauVar2 = *(undefined (**) [16])(this + 0x48);
    pauVar3 = *(undefined (**) [16])(this + 0x50);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x60));
    LVar4 = this[100];
    uVar16 = uVar21;
    if (uVar1 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((*pauVar2 + uVar15 * 4 <= param_2 || (undefined (*) [16])(param_2 + uVar15) <= pauVar2) &&
         (*pauVar3 + uVar15 * 4 <= param_2 || (undefined (*) [16])(param_2 + uVar15) <= pauVar3)) {
        uVar9 = uVar15 & 0x7ffffffc;
        auVar18 = NEON_fmov(0x3f800000,4);
        uVar16 = uVar21 + (int)uVar9;
        iVar22 = uVar21 + 1;
        iVar23 = uVar21 + 2;
        iVar24 = uVar21 + 3;
        uVar11 = uVar9;
        pfVar7 = param_2;
        pauVar13 = pauVar3;
        pauVar14 = pauVar2;
        do {
          auVar27._4_4_ = iVar22;
          auVar27._0_4_ = uVar21;
          auVar27._8_4_ = iVar23;
          auVar27._12_4_ = iVar24;
          auVar27 = NEON_ucvtf(auVar27,4);
          uVar11 = uVar11 - 4;
          uVar21 = uVar21 + 4;
          iVar22 = iVar22 + 4;
          iVar23 = iVar23 + 4;
          iVar24 = iVar24 + 4;
          auVar28._0_4_ = auVar27._0_4_ / fVar17;
          auVar28._4_4_ = auVar27._4_4_ / fVar17;
          auVar28._8_4_ = auVar27._8_4_ / fVar17;
          auVar28._12_4_ = auVar27._12_4_ / fVar17;
          auVar27 = NEON_cmeq(ZEXT116((byte)LVar4),ZEXT816(0),1);
          auVar25[0] = auVar27[0];
          auVar25[1] = auVar25[0];
          auVar25[2] = auVar25[0];
          auVar25[3] = auVar25[0];
          auVar25[4] = auVar25[0];
          auVar25[5] = auVar25[0];
          auVar25[6] = auVar25[0];
          auVar25[7] = auVar25[0];
          auVar25[8] = auVar25[0];
          auVar25[9] = auVar25[0];
          auVar25[10] = auVar25[0];
          auVar25[11] = auVar25[0];
          auVar25[12] = auVar25[0];
          auVar25[13] = auVar25[0];
          auVar25[14] = auVar25[0];
          auVar25[15] = auVar25[0];
          auVar27 = NEON_fsqrt(auVar28,4);
          fVar20 = auVar18._0_4_ - auVar28._0_4_;
          fVar19 = auVar18._4_4_ - auVar28._4_4_;
          fVar29 = auVar18._8_4_ - auVar28._8_4_;
          fVar30 = auVar18._12_4_ - auVar28._12_4_;
          auVar5._4_4_ = fVar19;
          auVar5._0_4_ = fVar20;
          auVar5._8_4_ = fVar29;
          auVar5._12_4_ = fVar30;
          auVar31 = NEON_fsqrt(auVar5,4);
          auVar28 = NEON_bif(auVar28,auVar27,auVar25,1);
          auVar27 = *pauVar13;
          auVar5 = *pauVar14;
          auVar26._4_4_ = fVar19;
          auVar26._0_4_ = fVar20;
          auVar26._8_4_ = fVar29;
          auVar26._12_4_ = fVar30;
          auVar26 = NEON_bsl(auVar25,auVar26,auVar31,1);
          pfVar7[4] = auVar28._8_4_ * auVar27._8_4_ + auVar26._8_4_ * auVar5._8_4_;
          pfVar7[5] = auVar28._12_4_ * auVar27._12_4_ + auVar26._12_4_ * auVar5._12_4_;
          *pfVar7 = auVar28._0_4_ * auVar27._0_4_ + auVar26._0_4_ * auVar5._0_4_;
          pfVar7[1] = auVar28._4_4_ * auVar27._4_4_ + auVar26._4_4_ * auVar5._4_4_;
          pfVar7 = pfVar7 + 4;
          pauVar13 = pauVar13 + 1;
          pauVar14 = pauVar14 + 1;
        } while (uVar11 != 0);
        if (uVar9 == uVar15) {
          return uVar15;
        }
      }
    }
    lVar10 = uVar9 - uVar15;
    pfVar7 = (float *)(*pauVar3 + uVar9 * 4);
    puVar8 = (undefined4 *)(*pauVar2 + uVar9 * 4);
    pfVar12 = param_2 + uVar9;
    do {
      uVar9 = (ulong)uVar16;
      uVar16 = uVar16 + 1;
      fVar19 = (float)uVar9 / fVar17;
      fVar20 = fVar19;
      if (LVar4 != (LoopSynthesisGenerator)0x0) {
        fVar20 = SQRT(fVar19);
      }
      fVar29 = 1.0 - fVar19;
      if (LVar4 != (LoopSynthesisGenerator)0x0) {
        fVar29 = SQRT(1.0 - fVar19);
      }
      bVar6 = lVar10 != -1;
      lVar10 = lVar10 + 1;
      fVar20 = (float)NEON_fmadd(*puVar8,fVar29,fVar20 * *pfVar7);
      *pfVar12 = fVar20;
      pfVar7 = pfVar7 + 1;
      puVar8 = puVar8 + 1;
      pfVar12 = pfVar12 + 1;
    } while (bVar6);
  }
  return uVar15;
}


