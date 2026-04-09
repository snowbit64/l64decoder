// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParallelogramHelper
// Entry Point: 00762970
// Size: 600 bytes
// Signature: undefined __thiscall ParallelogramHelper(ParallelogramHelper * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, uint param_8, IntervalRoundingMode param_9)


/* ParallelogramHelper::ParallelogramHelper(float, float, float, float, float, float, unsigned int,
   unsigned int, MathUtil::IntervalRoundingMode) */

void __thiscall
ParallelogramHelper::ParallelogramHelper
          (ParallelogramHelper *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,uint param_7,uint param_8,IntervalRoundingMode param_9)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar17 = param_2 + param_4;
  fVar15 = param_1 + param_3;
  *(uint *)(this + 0x40) = param_7;
  *(uint *)(this + 0x44) = param_8;
  fVar16 = fVar15 + param_5;
  fVar11 = fVar17 + param_6;
  *(float *)this = param_1;
  *(float *)(this + 4) = fVar15;
  *(float *)(this + 0x14) = fVar17;
  fVar14 = *(float *)(MathUtil::s_roundingModeBias + (ulong)param_9 * 8);
  *(float *)(this + 8) = fVar16;
  *(float *)(this + 0xc) = param_1 + param_5;
  fVar10 = *(float *)(MathUtil::s_roundingModeBias + (ulong)param_9 * 8 + 4);
  pfVar6 = (float *)(this + 0x10);
  *pfVar6 = param_2;
  pfVar3 = (float *)(this + 0x14);
  if (fVar17 >= param_2) {
    pfVar3 = pfVar6;
  }
  *(float *)(this + 0x38) = fVar14;
  *(float *)(this + 0x3c) = fVar10;
  *(float *)(this + 0x18) = fVar11;
  *(float *)(this + 0x1c) = param_2 + param_6;
  fVar12 = *pfVar3;
  fVar9 = fVar11;
  if (fVar12 <= fVar11) {
    fVar9 = fVar12;
  }
  uVar5 = 2;
  if (fVar12 <= fVar11) {
    uVar5 = (uint)(fVar17 < param_2);
  }
  uVar1 = 3;
  if (fVar9 <= param_2 + param_6) {
    uVar1 = uVar5;
  }
  uVar5 = uVar1 + 1 & 3;
  uVar4 = uVar1 - 1 & 3;
  uVar8 = (ulong)uVar4;
  fVar12 = *(float *)(this + (ulong)uVar1 * 4);
  fVar9 = pfVar6[uVar1];
  *(uint *)(this + 0x20) = uVar1;
  *(uint *)(this + 0x24) = uVar5;
  fVar18 = *(float *)(this + uVar8 * 4);
  fVar11 = *(float *)(this + (ulong)uVar5 * 4) - fVar12;
  fVar13 = pfVar6[uVar8];
  fVar17 = pfVar6[uVar5] - fVar9;
  uVar1 = uVar1 + 2 & 3;
  *(uint *)(this + 0x28) = uVar1;
  *(uint *)(this + 0x2c) = uVar4;
  fVar19 = (float)NEON_fmadd(fVar17,fVar18 - fVar12,(fVar13 - fVar9) * -fVar11);
  if (0.0 < fVar19) {
    *(uint *)(this + 0x24) = uVar4;
    uVar8 = (ulong)uVar5;
    *(uint *)(this + 0x2c) = uVar5;
    fVar11 = fVar18 - fVar12;
    fVar17 = fVar13 - fVar9;
  }
  if (ABS(fVar17) <= 0.0001) {
    fVar17 = 10000.0;
    if (fVar11 < 0.0) {
      fVar17 = -10000.0;
    }
  }
  else {
    fVar17 = fVar11 / fVar17;
  }
  *(float *)(this + 0x30) = fVar17;
  fVar11 = *(float *)((long)(this + uVar8 * 4) + 0x10);
  fVar12 = *(float *)(this + uVar8 * 4) - fVar12;
  if (ABS(fVar11 - fVar9) <= 0.0001) {
    fVar11 = 10000.0;
    if (fVar12 < 0.0) {
      fVar11 = -10000.0;
    }
  }
  else {
    fVar11 = fVar12 / (fVar11 - fVar9);
  }
  *(float *)(this + 0x34) = fVar11;
  uVar4 = (uint)(fVar14 + fVar9);
  uVar5 = param_8;
  if (uVar4 <= param_8) {
    uVar5 = uVar4;
  }
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar5;
  }
  iVar7 = (int)(fVar10 + *(float *)(this + (ulong)uVar1 * 4 + 0x10));
  if (iVar7 + 1U <= param_8) {
    param_8 = iVar7 + 1;
  }
  if (iVar7 == -2 || iVar7 + 2 < 0 != SCARRY4(iVar7,2)) {
    param_8 = 0;
  }
  pfVar3 = (float *)(this + 4);
  if (fVar15 >= param_1) {
    pfVar3 = (float *)this;
  }
  *(uint *)(this + 0x48) = uVar2;
  *(uint *)(this + 0x4c) = param_8;
  fVar17 = *pfVar3;
  fVar11 = *(float *)(this + 8);
  if (fVar17 <= fVar16) {
    fVar11 = fVar17;
  }
  uVar5 = 2;
  if (fVar17 <= fVar16) {
    uVar5 = (uint)(fVar15 < param_1);
  }
  uVar1 = 3;
  if (fVar11 <= param_1 + param_5) {
    uVar1 = uVar5;
  }
  uVar4 = (uint)(fVar14 + *(float *)(this + (ulong)uVar1 * 4));
  iVar7 = (int)(fVar10 + *(float *)(this + (ulong)(uVar1 + 2 & 3) * 4));
  uVar5 = param_7;
  if (uVar4 <= param_7) {
    uVar5 = uVar4;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar5;
  }
  if (iVar7 + 1U <= param_7) {
    param_7 = iVar7 + 1;
  }
  if (iVar7 == -2 || iVar7 + 2 < 0 != SCARRY4(iVar7,2)) {
    param_7 = 0;
  }
  *(uint *)(this + 0x50) = uVar1;
  *(uint *)(this + 0x54) = param_7;
  return;
}


