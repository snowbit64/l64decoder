// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_least_squares_endpoints_rgba
// Entry Point: 00a86454
// Size: 364 bytes
// Signature: undefined __cdecl compute_least_squares_endpoints_rgba(uint param_1, uchar * param_2, vec4F * param_3, vec4F * param_4, vec4F * param_5, color_quad_u8 * param_6)


/* BC7EncodeUtil::BC7Enc16::compute_least_squares_endpoints_rgba(unsigned int, unsigned char const*,
   BC7EncodeUtil::BC7Enc16::vec4F const*, BC7EncodeUtil::BC7Enc16::vec4F*,
   BC7EncodeUtil::BC7Enc16::vec4F*, BC7EncodeUtil::BC7Enc16::color_quad_u8 const*) */

void BC7EncodeUtil::BC7Enc16::compute_least_squares_endpoints_rgba
               (uint param_1,uchar *param_2,vec4F *param_3,vec4F *param_4,vec4F *param_5,
               color_quad_u8 *param_6)

{
  color_quad_u8 *pcVar1;
  color_quad_u8 *pcVar2;
  float *pfVar3;
  ulong uVar4;
  color_quad_u8 *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_1 == 0) {
    fVar19 = 0.0;
    fVar9 = 0.0;
    fVar18 = 0.0;
    fVar7 = 0.0;
    fVar17 = 0.0;
    fVar6 = 0.0;
    fVar14 = 0.0;
    fVar11 = 0.0;
    fVar16 = 0.0;
    fVar20 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar13 = 0.0;
    fVar20 = 0.0;
    fVar16 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar6 = 0.0;
    fVar17 = 0.0;
    fVar7 = 0.0;
    fVar18 = 0.0;
    fVar9 = 0.0;
    fVar19 = 0.0;
    uVar4 = (ulong)param_1;
    pcVar5 = param_6 + 1;
    do {
      uVar4 = uVar4 - 1;
      pfVar3 = (float *)(param_3 + (ulong)*param_2 * 0x10);
      pcVar1 = pcVar5 + 1;
      pcVar2 = pcVar5 + 2;
      fVar22 = (float)NEON_ucvtf((uint)(byte)pcVar5[-1]);
      fVar23 = (float)NEON_ucvtf((uint)(byte)*pcVar5);
      pcVar5 = pcVar5 + 4;
      fVar25 = (float)NEON_ucvtf((uint)(byte)*pcVar1);
      fVar26 = (float)NEON_ucvtf((uint)(byte)*pcVar2);
      fVar19 = fVar19 + fVar22;
      fVar18 = fVar18 + fVar23;
      fVar13 = fVar13 + *pfVar3;
      fVar20 = fVar20 + pfVar3[1];
      fVar27 = pfVar3[3];
      fVar17 = fVar17 + fVar25;
      fVar14 = fVar14 + fVar26;
      fVar16 = fVar16 + pfVar3[2];
      fVar11 = (float)NEON_fmadd(fVar27,fVar22,fVar11);
      fVar9 = (float)NEON_fmadd(fVar27,fVar23,fVar9);
      fVar7 = (float)NEON_fmadd(fVar27,fVar25,fVar7);
      fVar6 = (float)NEON_fmadd(fVar27,fVar26,fVar6);
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  fVar23 = (float)NEON_fmadd(fVar13,fVar16,fVar20 * -fVar20);
  fVar22 = 1.0 / fVar23;
  if (fVar23 == 0.0) {
    fVar22 = fVar23;
  }
  fVar20 = fVar22 * -fVar20;
  fVar13 = fVar13 * fVar22;
  fVar16 = fVar16 * fVar22;
  uVar21 = NEON_fmadd(fVar16,fVar11,(fVar19 - fVar11) * fVar20);
  uVar12 = NEON_fmadd(fVar20,fVar11,(fVar19 - fVar11) * fVar13);
  uVar24 = NEON_fmadd(fVar16,fVar9,(fVar18 - fVar9) * fVar20);
  uVar10 = NEON_fmadd(fVar20,fVar9,(fVar18 - fVar9) * fVar13);
  uVar15 = NEON_fmadd(fVar16,fVar7,(fVar17 - fVar7) * fVar20);
  uVar8 = NEON_fmadd(fVar20,fVar7,(fVar17 - fVar7) * fVar13);
  *(undefined4 *)param_4 = uVar21;
  *(undefined4 *)param_5 = uVar12;
  uVar21 = NEON_fmadd(fVar16,fVar6,(fVar14 - fVar6) * fVar20);
  uVar12 = NEON_fmadd(fVar20,fVar6,(fVar14 - fVar6) * fVar13);
  *(undefined4 *)(param_4 + 4) = uVar24;
  *(undefined4 *)(param_5 + 4) = uVar10;
  *(undefined4 *)(param_4 + 8) = uVar15;
  *(undefined4 *)(param_5 + 8) = uVar8;
  *(undefined4 *)(param_4 + 0xc) = uVar21;
  *(undefined4 *)(param_5 + 0xc) = uVar12;
  return;
}


