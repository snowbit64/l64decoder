// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimplexNoise2D
// Entry Point: 00b5cd14
// Size: 520 bytes
// Signature: undefined __cdecl getSimplexNoise2D(float param_1, float param_2, Seed * param_3)


/* SimplexNoiseUtil::getSimplexNoise2D(float, float, SimplexNoiseUtil::Seed const&) */

float SimplexNoiseUtil::getSimplexNoise2D(float param_1,float param_2,Seed *param_3)

{
  ulong uVar1;
  Seed SVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar8 = (param_1 + param_2) * 0.3660254;
  fVar10 = fVar8 + param_1;
  fVar8 = fVar8 + param_2;
  uVar3 = (int)fVar10 - (uint)(fVar10 < 0.0);
  uVar4 = (int)fVar8 - (uint)(fVar8 < 0.0);
  uVar5 = (ulong)uVar3 & 0xff;
  uVar6 = (ulong)uVar4 & 0xff;
  fVar8 = (float)(uVar3 + uVar4) * 0.2113249;
  fVar9 = param_1 - ((float)uVar3 - fVar8);
  fVar11 = param_2 - ((float)uVar4 - fVar8);
  fVar10 = 0.0;
  fVar7 = 1.0;
  uVar13 = NEON_fmsub(fVar9,fVar9,0x3f000000);
  fVar8 = 0.0;
  if (fVar11 < fVar9) {
    fVar7 = 0.0;
    fVar8 = 1.0;
  }
  fVar15 = (float)NEON_fmsub(fVar11,fVar11,uVar13);
  fVar8 = (fVar9 - fVar8) + 0.2113249;
  fVar14 = (fVar11 - fVar7) + 0.2113249;
  fVar7 = 0.0;
  if (0.0 <= fVar15) {
    SVar2 = param_3[uVar5 + (byte)param_3[uVar6]];
    fVar12 = fVar11;
    fVar7 = fVar9;
    if (((byte)SVar2 & 4) != 0) {
      fVar12 = fVar9;
      fVar7 = fVar11;
    }
    if (((byte)SVar2 & 1) != 0) {
      fVar7 = -fVar7;
    }
    fVar16 = 2.0;
    if (((byte)SVar2 & 2) != 0) {
      fVar16 = -2.0;
    }
    fVar7 = fVar15 * fVar15 * fVar15 * fVar15 * (fVar7 + fVar12 * fVar16);
  }
  uVar13 = NEON_fmsub(fVar8,fVar8,0x3f000000);
  fVar16 = (float)NEON_fmsub(fVar14,fVar14,uVar13);
  fVar15 = fVar9 + -1.0 + 0.4226497;
  fVar12 = fVar11 + -1.0 + 0.4226497;
  if (0.0 <= fVar16) {
    uVar1 = uVar5;
    if (fVar11 < fVar9) {
      uVar1 = uVar5 + 1;
    }
    SVar2 = param_3[uVar1 + (byte)param_3[uVar6 + (fVar9 <= fVar11)]];
    fVar10 = fVar14;
    if (((byte)SVar2 & 4) != 0) {
      fVar10 = fVar8;
      fVar8 = fVar14;
    }
    if (((byte)SVar2 & 1) != 0) {
      fVar8 = -fVar8;
    }
    fVar9 = 2.0;
    if (((byte)SVar2 & 2) != 0) {
      fVar9 = -2.0;
    }
    fVar10 = fVar16 * fVar16 * fVar16 * fVar16 * (fVar8 + fVar10 * fVar9);
  }
  fVar9 = 0.0;
  uVar13 = NEON_fmsub(fVar15,fVar15,0x3f000000);
  fVar8 = (float)NEON_fmsub(fVar12,fVar12,uVar13);
  if (0.0 <= fVar8) {
    SVar2 = param_3[(byte)param_3[uVar6 + 1] + uVar5 + 1];
    fVar9 = fVar12;
    if (((byte)SVar2 & 4) != 0) {
      fVar9 = fVar15;
      fVar15 = fVar12;
    }
    if (((byte)SVar2 & 1) != 0) {
      fVar15 = -fVar15;
    }
    fVar11 = 2.0;
    if (((byte)SVar2 & 2) != 0) {
      fVar11 = -2.0;
    }
    fVar9 = fVar8 * fVar8 * fVar8 * fVar8 * (fVar15 + fVar9 * fVar11);
  }
  return (fVar7 + fVar10 + fVar9) * 40.0;
}


