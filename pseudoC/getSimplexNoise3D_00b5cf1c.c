// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimplexNoise3D
// Entry Point: 00b5cf1c
// Size: 1040 bytes
// Signature: undefined __cdecl getSimplexNoise3D(float param_1, float param_2, float param_3, Seed * param_4)


/* SimplexNoiseUtil::getSimplexNoise3D(float, float, float, SimplexNoiseUtil::Seed const&) */

float SimplexNoiseUtil::getSimplexNoise3D(float param_1,float param_2,float param_3,Seed *param_4)

{
  Seed SVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar16 = (param_1 + param_2 + param_3) * 0.3333333;
  uVar2 = (int)(fVar16 + param_1) - (uint)(fVar16 + param_1 < 0.0);
  uVar3 = (int)(fVar16 + param_2) - (uint)(fVar16 + param_2 < 0.0);
  uVar4 = (int)(fVar16 + param_3) - (uint)(fVar16 + param_3 < 0.0);
  fVar17 = (float)(uVar2 + uVar3 + uVar4) * 0.1666667;
  fVar18 = param_1 - ((float)uVar2 - fVar17);
  fVar16 = param_2 - ((float)uVar3 - fVar17);
  fVar17 = param_3 - ((float)uVar4 - fVar17);
  if (fVar16 <= fVar18) {
    if (fVar17 <= fVar16) {
      uVar6 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar5 = 1;
      uVar7 = 1;
      uVar10 = 1;
    }
    else {
      uVar5 = 0;
      uVar13 = 0;
      uVar6 = 1;
      uVar7 = 1;
      uVar12 = (uint)(fVar18 < fVar17);
      uVar10 = (uint)(fVar18 >= fVar17);
    }
  }
  else if (fVar17 <= fVar16) {
    uVar12 = 0;
    uVar10 = 0;
    uVar5 = 1;
    uVar13 = 1;
    uVar6 = (uint)(fVar18 < fVar17);
    uVar7 = (uint)(fVar18 >= fVar17);
  }
  else {
    uVar7 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar6 = 1;
    uVar5 = 1;
    uVar12 = 1;
  }
  uVar8 = (ulong)uVar2 & 0xff;
  uVar20 = NEON_fmsub(fVar18,fVar18,0x3f19999a);
  uVar9 = (ulong)uVar3 & 0xff;
  uVar11 = (ulong)uVar4 & 0xff;
  uVar20 = NEON_fmsub(fVar16,fVar16,uVar20);
  fVar22 = (fVar18 - (float)uVar10) + 0.1666667;
  fVar23 = (fVar16 - (float)uVar13) + 0.1666667;
  fVar24 = (fVar17 - (float)uVar12) + 0.1666667;
  fVar25 = (float)NEON_fmsub(fVar17,fVar17,uVar20);
  fVar21 = 0.0;
  fVar14 = 0.0;
  if (0.0 <= fVar25) {
    SVar1 = param_4[uVar8 + (byte)param_4[uVar9 + (byte)param_4[uVar11]]];
    fVar14 = fVar18;
    if (7 < ((byte)SVar1 & 0xf)) {
      fVar14 = fVar16;
    }
    fVar15 = fVar18;
    if (((byte)SVar1 & 0xd) != 0xc) {
      fVar15 = fVar17;
    }
    fVar19 = fVar16;
    if (3 < ((byte)SVar1 & 0xf)) {
      fVar19 = fVar15;
    }
    if (((byte)SVar1 & 1) != 0) {
      fVar14 = -fVar14;
    }
    if (((byte)SVar1 & 2) != 0) {
      fVar19 = -fVar19;
    }
    fVar14 = fVar25 * fVar25 * fVar25 * fVar25 * (fVar14 + fVar19);
  }
  fVar19 = (fVar17 - (float)uVar6) + 0.3333333;
  uVar20 = NEON_fmsub(fVar22,fVar22,0x3f19999a);
  uVar20 = NEON_fmsub(fVar23,fVar23,uVar20);
  fVar26 = (float)NEON_fmsub(fVar24,fVar24,uVar20);
  fVar15 = (fVar18 - (float)uVar7) + 0.3333333;
  fVar25 = (fVar16 - (float)uVar5) + 0.3333333;
  if (0.0 <= fVar26) {
    SVar1 = param_4[uVar10 + uVar8 +
                    (ulong)(byte)param_4[uVar13 + uVar9 + (ulong)(byte)param_4[uVar12 + uVar11]]];
    fVar21 = fVar22;
    if (7 < ((byte)SVar1 & 0xf)) {
      fVar21 = fVar23;
    }
    if (((byte)SVar1 & 0xd) != 0xc) {
      fVar22 = fVar24;
    }
    if (3 < ((byte)SVar1 & 0xf)) {
      fVar23 = fVar22;
    }
    if (((byte)SVar1 & 1) != 0) {
      fVar21 = -fVar21;
    }
    if (((byte)SVar1 & 2) != 0) {
      fVar23 = -fVar23;
    }
    fVar21 = fVar26 * fVar26 * fVar26 * fVar26 * (fVar21 + fVar23);
  }
  fVar18 = fVar18 + -1.0 + 0.5;
  fVar17 = fVar17 + -1.0 + 0.5;
  fVar22 = 0.0;
  uVar20 = NEON_fmsub(fVar15,fVar15,0x3f19999a);
  uVar20 = NEON_fmsub(fVar25,fVar25,uVar20);
  fVar24 = (float)NEON_fmsub(fVar19,fVar19,uVar20);
  fVar16 = fVar16 + -1.0 + 0.5;
  fVar23 = 0.0;
  if (0.0 <= fVar24) {
    SVar1 = param_4[uVar7 + uVar8 +
                    (ulong)(byte)param_4[uVar5 + uVar9 + (ulong)(byte)param_4[uVar6 + uVar11]]];
    fVar22 = fVar15;
    if (7 < ((byte)SVar1 & 0xf)) {
      fVar22 = fVar25;
    }
    if (((byte)SVar1 & 0xd) != 0xc) {
      fVar15 = fVar19;
    }
    if (3 < ((byte)SVar1 & 0xf)) {
      fVar25 = fVar15;
    }
    if (((byte)SVar1 & 1) != 0) {
      fVar22 = -fVar22;
    }
    if (((byte)SVar1 & 2) != 0) {
      fVar25 = -fVar25;
    }
    fVar22 = fVar24 * fVar24 * fVar24 * fVar24 * (fVar22 + fVar25);
  }
  uVar20 = NEON_fmsub(fVar18,fVar18,0x3f19999a);
  uVar20 = NEON_fmsub(fVar16,fVar16,uVar20);
  fVar24 = (float)NEON_fmsub(fVar17,fVar17,uVar20);
  if (0.0 <= fVar24) {
    SVar1 = param_4[(byte)param_4[(byte)param_4[uVar11 + 1] + uVar9 + 1] + uVar8 + 1];
    fVar23 = fVar18;
    if (7 < ((byte)SVar1 & 0xf)) {
      fVar23 = fVar16;
    }
    if (((byte)SVar1 & 0xd) != 0xc) {
      fVar18 = fVar17;
    }
    if (3 < ((byte)SVar1 & 0xf)) {
      fVar16 = fVar18;
    }
    if (((byte)SVar1 & 1) != 0) {
      fVar23 = -fVar23;
    }
    if (((byte)SVar1 & 2) != 0) {
      fVar16 = -fVar16;
    }
    fVar23 = fVar24 * fVar24 * fVar24 * fVar24 * (fVar23 + fVar16);
  }
  return (fVar14 + fVar21 + fVar22 + fVar23) * 32.0;
}


