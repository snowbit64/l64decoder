// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeEndPoints
// Entry Point: 00de8f08
// Size: 372 bytes
// Signature: undefined __thiscall ComputeEndPoints(SingleColourFit * this, SingleColourLookup * * param_1)


/* squish::SingleColourFit::ComputeEndPoints(squish::SingleColourLookup const* const*) */

void __thiscall
squish::SingleColourFit::ComputeEndPoints(SingleColourFit *this,SingleColourLookup **param_1)

{
  SingleColourLookup *pSVar1;
  SingleColourLookup *pSVar2;
  SingleColourLookup SVar3;
  SingleColourLookup SVar4;
  SingleColourLookup SVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  SingleColourLookup *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar8 = (ulong)(byte)this[0x14];
  pSVar11 = param_1[2];
  this[0x30] = (SingleColourFit)0x0;
  pSVar1 = *param_1 + uVar8 * 6;
  uVar9 = (ulong)(byte)this[0x15];
  pSVar2 = param_1[1] + uVar9 * 6;
  uVar10 = (ulong)(byte)this[0x16];
  fVar12 = (float)NEON_ucvtf((uint)(byte)*pSVar1);
  SVar3 = pSVar2[2];
  pSVar11 = pSVar11 + uVar10 * 6;
  fVar13 = (float)NEON_ucvtf((uint)(byte)*pSVar2);
  SVar4 = pSVar1[2];
  SVar5 = pSVar11[2];
  fVar14 = (float)NEON_ucvtf((uint)(byte)*pSVar11);
  *(float *)(this + 0x18) = fVar12 / 31.0;
  *(float *)(this + 0x1c) = fVar13 / 63.0;
  *(float *)(this + 0x20) = fVar14 / 31.0;
  fVar13 = (float)NEON_ucvtf((uint)(byte)pSVar2[1]);
  fVar12 = (float)NEON_ucvtf((uint)(byte)pSVar1[1]);
  fVar14 = (float)NEON_ucvtf((uint)(byte)pSVar11[1]);
  *(float *)(this + 0x24) = fVar12 / 31.0;
  *(float *)(this + 0x28) = fVar13 / 63.0;
  *(float *)(this + 0x2c) = fVar14 / 31.0;
  pSVar1 = *param_1;
  pSVar2 = param_1[1];
  pSVar11 = param_1[2];
  uVar6 = (uint)(byte)SVar4 * (uint)(byte)SVar4 + (uint)(byte)SVar3 * (uint)(byte)SVar3 +
          (uint)(byte)SVar5 * (uint)(byte)SVar5;
  uVar7 = (uint)(byte)pSVar1[uVar8 * 6 + 5] * (uint)(byte)pSVar1[uVar8 * 6 + 5] +
          (uint)(byte)pSVar2[uVar9 * 6 + 5] * (uint)(byte)pSVar2[uVar9 * 6 + 5] +
          (uint)(byte)pSVar11[uVar10 * 6 + 5] * (uint)(byte)pSVar11[uVar10 * 6 + 5];
  *(uint *)(this + 0x34) = uVar6;
  if (uVar7 < uVar6) {
    *(uint *)(this + 0x34) = uVar7;
    fVar12 = (float)NEON_ucvtf((uint)(byte)pSVar1[uVar8 * 6 + 3]);
    fVar13 = (float)NEON_ucvtf((uint)(byte)pSVar2[uVar9 * 6 + 3]);
    fVar14 = (float)NEON_ucvtf((uint)(byte)pSVar11[uVar10 * 6 + 3]);
    *(float *)(this + 0x18) = fVar12 / 31.0;
    *(float *)(this + 0x1c) = fVar13 / 63.0;
    *(float *)(this + 0x20) = fVar14 / 31.0;
    fVar13 = (float)NEON_ucvtf((uint)(byte)pSVar2[uVar9 * 6 + 4]);
    fVar12 = (float)NEON_ucvtf((uint)(byte)pSVar1[uVar8 * 6 + 4]);
    this[0x30] = (SingleColourFit)0x2;
    fVar14 = (float)NEON_ucvtf((uint)(byte)pSVar11[uVar10 * 6 + 4]);
    *(float *)(this + 0x24) = fVar12 / 31.0;
    *(float *)(this + 0x28) = fVar13 / 63.0;
    *(float *)(this + 0x2c) = fVar14 / 31.0;
  }
  return;
}


