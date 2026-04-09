// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processLateReverb
// Entry Point: 00b13f9c
// Size: 380 bytes
// Signature: undefined __thiscall processLateReverb(FDNReverb * this, float param_1, float * param_2)


/* FDNReverb::processLateReverb(float, float*) */

void __thiscall FDNReverb::processLateReverb(FDNReverb *this,float param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined auVar12 [16];
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined auVar21 [16];
  float fVar24;
  
  piVar13 = *(int **)(this + 0xc0);
  fVar19 = *(float *)(this + 0x144);
  uVar9 = *(uint *)(this + 4);
  uVar10 = *(uint *)(this + 0xb4);
  iVar1 = *(int *)(this + 0x70);
  uVar4 = *(uint *)(this + 0x74);
  iVar2 = *piVar13;
  iVar5 = piVar13[1];
  lVar17 = *(long *)(this + 0xa8);
  iVar11 = piVar13[2];
  iVar3 = *(int *)(this + 0x80);
  uVar6 = *(uint *)(this + 0x84);
  *(float *)(lVar17 + (ulong)(uVar10 & uVar9) * 4) = fVar19 * param_1;
  lVar15 = *(long *)(this + 0x78);
  lVar18 = *(long *)(this + 0x68);
  uVar7 = *(uint *)(this + 0x94);
  lVar16 = *(long *)(this + 0x88);
  uVar8 = *(uint *)(this + 0xa4);
  lVar14 = *(long *)(this + 0x98);
  auVar21 = NEON_fmov(0x3f800000,4);
  fVar20 = (float)*(undefined8 *)(this + 0x124);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x124) >> 0x20);
  fVar23 = (float)*(undefined8 *)(this + 300);
  fVar24 = (float)((ulong)*(undefined8 *)(this + 300) >> 0x20);
  fVar20 = fVar20 * (float)*(undefined8 *)(this + 0x134) +
           (fVar19 * param_1 + *(float *)(lVar18 + (ulong)(uVar9 - iVar1 & uVar4) * 4)) *
           (float)*(undefined8 *)(this + 0x114) * (auVar21._0_4_ - fVar20);
  fVar22 = fVar22 * (float)((ulong)*(undefined8 *)(this + 0x134) >> 0x20) +
           (*(float *)(lVar17 + (ulong)(uVar9 - iVar2 & uVar10) * 4) +
           *(float *)(lVar15 + (ulong)(uVar9 - iVar3 & uVar6) * 4)) *
           (float)((ulong)*(undefined8 *)(this + 0x114) >> 0x20) * (auVar21._4_4_ - fVar22);
  fVar23 = fVar23 * (float)*(undefined8 *)(this + 0x13c) +
           (*(float *)(lVar17 + (ulong)(uVar9 - iVar5 & uVar10) * 4) +
           *(float *)(lVar16 + (ulong)(uVar9 - *(int *)(this + 0x90) & uVar7) * 4)) *
           (float)*(undefined8 *)(this + 0x11c) * (auVar21._8_4_ - fVar23);
  fVar24 = fVar24 * (float)((ulong)*(undefined8 *)(this + 0x13c) >> 0x20) +
           (*(float *)(lVar17 + (ulong)(uVar9 - iVar11 & uVar10) * 4) +
           *(float *)(lVar14 + (ulong)(uVar9 - *(int *)(this + 0xa0) & uVar8) * 4)) *
           (float)((ulong)*(undefined8 *)(this + 0x11c) >> 0x20) * (auVar21._12_4_ - fVar24);
  *(float *)(this + 0x144) = fVar23;
  *(float *)(this + 0x148) = fVar24;
  *(float *)(this + 0x134) = fVar20;
  *(float *)(this + 0x138) = fVar22;
  fVar19 = (fVar20 + fVar22 + fVar23 + fVar24) * -0.5;
  fVar20 = fVar20 + fVar19;
  fVar22 = fVar22 + fVar19;
  fVar23 = fVar23 + fVar19;
  auVar21._4_4_ = fVar22;
  auVar21._0_4_ = fVar20;
  auVar21._8_4_ = fVar23;
  auVar21._12_4_ = fVar24 + fVar19;
  auVar12._4_4_ = fVar22;
  auVar12._0_4_ = fVar20;
  auVar12._8_4_ = fVar23;
  auVar12._12_4_ = fVar24 + fVar19;
  auVar21 = NEON_ext(auVar21,auVar12,8,1);
  *param_2 = auVar21._0_4_;
  param_2[1] = fVar20;
  param_2[2] = auVar21._4_4_;
  param_2[3] = fVar22;
  *(float *)(lVar18 + (ulong)(uVar4 & uVar9) * 4) = fVar23;
  *param_2 = *(float *)(this + 0xf4) * *param_2;
  *(float *)(lVar15 + (ulong)(uVar6 & uVar9) * 4) = param_2[1];
  param_2[1] = *(float *)(this + 0xf4) * param_2[1];
  *(float *)(lVar16 + (ulong)(uVar7 & uVar9) * 4) = param_2[2];
  param_2[2] = *(float *)(this + 0xf4) * param_2[2];
  *(float *)(lVar14 + (ulong)(uVar8 & uVar9) * 4) = param_2[3];
  param_2[3] = *(float *)(this + 0xf4) * param_2[3];
  return;
}


