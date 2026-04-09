// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00b19b50
// Size: 528 bytes
// Signature: undefined __thiscall process(VoiceAutoLevelDetector * this, short * param_1, uint param_2)


/* VoiceAutoLevelDetector::process(short*, unsigned int) */

void __thiscall
VoiceAutoLevelDetector::process(VoiceAutoLevelDetector *this,short *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  short *psVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined auVar10 [16];
  undefined auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined auVar21 [16];
  float fVar26;
  float fVar27;
  undefined auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (param_2 == 0) {
    fVar8 = 0.0;
  }
  else {
    uVar1 = (ulong)param_2;
    if (param_2 < 0x10) {
      fVar8 = 0.0;
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0xfffffff0;
      fVar8 = 0.0;
      puVar5 = (undefined8 *)(param_1 + 8);
      uVar7 = uVar3;
      do {
        auVar11 = *(undefined (*) [16])(puVar5 + -2);
        uVar30 = puVar5[1];
        uVar29 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 0x10;
        auVar21._0_4_ = (int)auVar11._0_2_;
        auVar21._4_4_ = (int)auVar11._2_2_;
        auVar21._8_4_ = (int)auVar11._4_2_;
        auVar21._12_4_ = (int)auVar11._6_2_;
        auVar10._0_4_ = (int)auVar11._8_2_;
        auVar10._4_4_ = (int)auVar11._10_2_;
        auVar10._8_4_ = (int)auVar11._12_2_;
        auVar10._12_4_ = (int)auVar11._14_2_;
        auVar21 = NEON_scvtf(auVar21,4);
        auVar11 = NEON_scvtf(auVar10,4);
        fVar18 = auVar21._0_4_ / 32767.0;
        fVar22 = auVar21._4_4_ / 32767.0;
        fVar24 = auVar21._8_4_ / 32767.0;
        fVar26 = auVar21._12_4_ / 32767.0;
        fVar9 = auVar11._0_4_ / 32767.0;
        fVar12 = auVar11._4_4_ / 32767.0;
        fVar14 = auVar11._8_4_ / 32767.0;
        fVar16 = auVar11._12_4_ / 32767.0;
        auVar11._0_4_ = (int)(short)uVar29;
        auVar11._4_4_ = (int)(short)((ulong)uVar29 >> 0x10);
        auVar11._8_4_ = (int)(short)((ulong)uVar29 >> 0x20);
        auVar11._12_4_ = (int)(short)((ulong)uVar29 >> 0x30);
        auVar11 = NEON_scvtf(auVar11,4);
        fVar19 = auVar11._0_4_ / 32767.0;
        fVar23 = auVar11._4_4_ / 32767.0;
        fVar25 = auVar11._8_4_ / 32767.0;
        fVar27 = auVar11._12_4_ / 32767.0;
        auVar28._0_4_ = (int)(short)uVar30;
        auVar28._4_4_ = (int)(short)((ulong)uVar30 >> 0x10);
        auVar28._8_4_ = (int)(short)((ulong)uVar30 >> 0x20);
        auVar28._12_4_ = (int)(short)((ulong)uVar30 >> 0x30);
        auVar11 = NEON_scvtf(auVar28,4);
        fVar20 = auVar11._0_4_ / 32767.0;
        fVar13 = auVar11._4_4_ / 32767.0;
        fVar15 = auVar11._8_4_ / 32767.0;
        fVar17 = auVar11._12_4_ / 32767.0;
        fVar8 = fVar8 + fVar18 * fVar18 + fVar22 * fVar22 + fVar24 * fVar24 + fVar26 * fVar26 +
                fVar9 * fVar9 + fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16 +
                fVar19 * fVar19 + fVar23 * fVar23 + fVar25 * fVar25 + fVar27 * fVar27 +
                fVar20 * fVar20 + fVar13 * fVar13 + fVar15 * fVar15 + fVar17 * fVar17;
      } while (uVar7 != 0);
      if (uVar3 == uVar1) goto LAB_00b19c84;
    }
    lVar2 = uVar1 - uVar3;
    psVar6 = param_1 + uVar3;
    do {
      lVar2 = lVar2 + -1;
      fVar8 = (float)NEON_fmadd((float)(int)*psVar6 / 32767.0,(float)(int)*psVar6 / 32767.0,fVar8);
      psVar6 = psVar6 + 1;
    } while (lVar2 != 0);
  }
LAB_00b19c84:
  iVar4 = *(int *)(this + 0x38);
  fVar9 = *(float *)(this + (long)iVar4 * 4 + 0x10);
  *(float *)(this + (long)iVar4 * 4 + 0x10) = fVar8;
  fVar8 = (fVar8 - fVar9) + *(float *)(this + 0x3c);
  fVar9 = *(float *)(this + 0xc);
  *(float *)(this + 0x3c) = fVar8;
  *(uint *)(this + 0x38) = (iVar4 + 1U) % 10;
  fVar8 = SQRT((*(float *)this * (float)(ulong)param_2 * 10.0) / fVar8);
  if ((fVar9 < fVar8) || (fVar9 = *(float *)(this + 8), fVar8 < fVar9)) {
    fVar8 = fVar9;
  }
  if (param_2 != 0) {
    fVar9 = *(float *)(this + 4);
    uVar1 = (ulong)param_2;
    fVar20 = fVar8 - fVar9;
    do {
      iVar4 = (int)(fVar9 * (float)(int)*param_1);
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
      }
      else {
        iVar4 = 0x7fff;
      }
      fVar9 = fVar20 / (float)(ulong)param_2 + fVar9;
      uVar1 = uVar1 - 1;
      *param_1 = (short)iVar4;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  *(float *)(this + 4) = fVar8;
  return;
}


