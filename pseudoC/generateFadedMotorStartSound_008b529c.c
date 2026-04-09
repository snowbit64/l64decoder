// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateFadedMotorStartSound
// Entry Point: 008b529c
// Size: 468 bytes
// Signature: undefined __thiscall generateFadedMotorStartSound(LoopSynthesisGenerator * this, uint param_1, float * param_2)


/* LoopSynthesisGenerator::generateFadedMotorStartSound(unsigned int, float*) */

ulong __thiscall
LoopSynthesisGenerator::generateFadedMotorStartSound
          (LoopSynthesisGenerator *this,uint param_1,float *param_2)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  LoopSynthesisGenerator LVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
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
  float fVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  
  plVar6 = *(long **)(this + 0x28);
  iVar23 = *(int *)((long)plVar6 + 0x14);
  if (iVar23 == 0) {
    iVar23 = *(int *)(*plVar6 + 0x30);
  }
  uVar21 = (*(int *)(this + 0x5c) - iVar23) + *(int *)(plVar6 + 2);
  uVar4 = *(int *)(this + 0x5c) - uVar21;
  if ((int)uVar4 <= (int)param_1) {
    param_1 = uVar4;
  }
  uVar4 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  uVar15 = (ulong)uVar4;
  getMotorSound(this,uVar4,*(float **)(this + 0x48),*(float **)(this + 0x50));
  StaticSoundGenerator::getNextBuffer
            (*(StaticSoundGenerator **)(this + 0x28),uVar4,*(float **)(this + 0x50));
  if (0 < (int)param_1) {
    pauVar1 = *(undefined (**) [16])(this + 0x48);
    pauVar2 = *(undefined (**) [16])(this + 0x50);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x5c));
    LVar3 = this[100];
    uVar16 = uVar21;
    if (uVar4 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((*pauVar1 + uVar15 * 4 <= param_2 || (undefined (*) [16])(param_2 + uVar15) <= pauVar1) &&
         (*pauVar2 + uVar15 * 4 <= param_2 || (undefined (*) [16])(param_2 + uVar15) <= pauVar2)) {
        uVar9 = uVar15 & 0x7ffffffc;
        auVar18 = NEON_fmov(0x3f800000,4);
        uVar16 = uVar21 + (int)uVar9;
        iVar23 = uVar21 + 1;
        iVar24 = uVar21 + 2;
        iVar25 = uVar21 + 3;
        uVar11 = uVar9;
        pfVar7 = param_2;
        pauVar13 = pauVar2;
        pauVar14 = pauVar1;
        do {
          auVar28._4_4_ = iVar23;
          auVar28._0_4_ = uVar21;
          auVar28._8_4_ = iVar24;
          auVar28._12_4_ = iVar25;
          auVar28 = NEON_ucvtf(auVar28,4);
          uVar11 = uVar11 - 4;
          uVar21 = uVar21 + 4;
          iVar23 = iVar23 + 4;
          iVar24 = iVar24 + 4;
          iVar25 = iVar25 + 4;
          auVar27._0_4_ = auVar28._0_4_ / fVar17;
          auVar27._4_4_ = auVar28._4_4_ / fVar17;
          auVar27._8_4_ = auVar28._8_4_ / fVar17;
          auVar27._12_4_ = auVar28._12_4_ / fVar17;
          auVar28 = NEON_cmeq(ZEXT116((byte)LVar3),ZEXT816(0),1);
          auVar26[0] = auVar28[0];
          auVar26[1] = auVar26[0];
          auVar26[2] = auVar26[0];
          auVar26[3] = auVar26[0];
          auVar26[4] = auVar26[0];
          auVar26[5] = auVar26[0];
          auVar26[6] = auVar26[0];
          auVar26[7] = auVar26[0];
          auVar26[8] = auVar26[0];
          auVar26[9] = auVar26[0];
          auVar26[10] = auVar26[0];
          auVar26[11] = auVar26[0];
          auVar26[12] = auVar26[0];
          auVar26[13] = auVar26[0];
          auVar26[14] = auVar26[0];
          auVar26[15] = auVar26[0];
          auVar29._0_4_ = auVar18._0_4_ - auVar27._0_4_;
          auVar29._4_4_ = auVar18._4_4_ - auVar27._4_4_;
          auVar29._8_4_ = auVar18._8_4_ - auVar27._8_4_;
          auVar29._12_4_ = auVar18._12_4_ - auVar27._12_4_;
          auVar30 = NEON_fsqrt(auVar27,4);
          auVar28 = NEON_fsqrt(auVar29,4);
          auVar29 = NEON_bif(auVar29,auVar28,auVar26,1);
          auVar28 = *pauVar13;
          auVar27 = NEON_bsl(auVar26,auVar27,auVar30,1);
          auVar26 = *pauVar14;
          pfVar7[4] = auVar28._8_4_ * auVar29._8_4_ + auVar27._8_4_ * auVar26._8_4_;
          pfVar7[5] = auVar28._12_4_ * auVar29._12_4_ + auVar27._12_4_ * auVar26._12_4_;
          *pfVar7 = auVar28._0_4_ * auVar29._0_4_ + auVar27._0_4_ * auVar26._0_4_;
          pfVar7[1] = auVar28._4_4_ * auVar29._4_4_ + auVar27._4_4_ * auVar26._4_4_;
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
    pfVar7 = (float *)(*pauVar2 + uVar9 * 4);
    puVar8 = (undefined4 *)(*pauVar1 + uVar9 * 4);
    pfVar12 = param_2 + uVar9;
    do {
      uVar9 = (ulong)uVar16;
      uVar16 = uVar16 + 1;
      fVar19 = (float)uVar9 / fVar17;
      fVar20 = fVar19;
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        fVar20 = SQRT(fVar19);
      }
      fVar22 = 1.0 - fVar19;
      if (LVar3 != (LoopSynthesisGenerator)0x0) {
        fVar22 = SQRT(1.0 - fVar19);
      }
      bVar5 = lVar10 != -1;
      lVar10 = lVar10 + 1;
      fVar20 = (float)NEON_fmadd(*puVar8,fVar20,*pfVar7 * fVar22);
      *pfVar12 = fVar20;
      pfVar7 = pfVar7 + 1;
      puVar8 = puVar8 + 1;
      pfVar12 = pfVar12 + 1;
    } while (bVar5);
  }
  return uVar15;
}


