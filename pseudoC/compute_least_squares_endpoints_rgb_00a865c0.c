// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_least_squares_endpoints_rgb
// Entry Point: 00a865c0
// Size: 316 bytes
// Signature: undefined __cdecl compute_least_squares_endpoints_rgb(uint param_1, uchar * param_2, vec4F * param_3, vec4F * param_4, vec4F * param_5, color_quad_u8 * param_6)


/* BC7EncodeUtil::BC7Enc16::compute_least_squares_endpoints_rgb(unsigned int, unsigned char const*,
   BC7EncodeUtil::BC7Enc16::vec4F const*, BC7EncodeUtil::BC7Enc16::vec4F*,
   BC7EncodeUtil::BC7Enc16::vec4F*, BC7EncodeUtil::BC7Enc16::color_quad_u8 const*) */

void BC7EncodeUtil::BC7Enc16::compute_least_squares_endpoints_rgb
               (uint param_1,uchar *param_2,vec4F *param_3,vec4F *param_4,vec4F *param_5,
               color_quad_u8 *param_6)

{
  color_quad_u8 *pcVar1;
  float *pfVar2;
  ulong uVar3;
  color_quad_u8 *pcVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  color_quad_u8 cVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_1 == 0) {
    fVar17 = 0.0;
    fVar7 = 0.0;
    fVar16 = 0.0;
    fVar5 = 0.0;
    fVar14 = 0.0;
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar18 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    fVar18 = 0.0;
    fVar12 = 0.0;
    fVar9 = 0.0;
    fVar14 = 0.0;
    fVar5 = 0.0;
    fVar16 = 0.0;
    fVar7 = 0.0;
    fVar17 = 0.0;
    uVar3 = (ulong)param_1;
    pcVar4 = param_6 + 1;
    do {
      uVar3 = uVar3 - 1;
      cVar21 = *pcVar4;
      pfVar2 = (float *)(param_3 + (ulong)*param_2 * 0x10);
      pcVar1 = pcVar4 + 1;
      fVar20 = (float)NEON_ucvtf((uint)(byte)pcVar4[-1]);
      pcVar4 = pcVar4 + 4;
      fVar22 = (float)NEON_ucvtf((uint)(byte)cVar21);
      fVar24 = pfVar2[3];
      fVar23 = (float)NEON_ucvtf((uint)(byte)*pcVar1);
      fVar17 = fVar17 + fVar20;
      fVar16 = fVar16 + fVar22;
      fVar11 = fVar11 + *pfVar2;
      fVar18 = fVar18 + pfVar2[1];
      fVar12 = fVar12 + pfVar2[2];
      fVar9 = (float)NEON_fmadd(fVar24,fVar20,fVar9);
      fVar7 = (float)NEON_fmadd(fVar24,fVar22,fVar7);
      fVar5 = (float)NEON_fmadd(fVar24,fVar23,fVar5);
      fVar14 = fVar14 + fVar23;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  fVar22 = (float)NEON_fmadd(fVar11,fVar12,fVar18 * -fVar18);
  fVar20 = 1.0 / fVar22;
  if (fVar22 == 0.0) {
    fVar20 = fVar22;
  }
  fVar18 = fVar20 * -fVar18;
  fVar11 = fVar11 * fVar20;
  fVar12 = fVar12 * fVar20;
  uVar19 = NEON_fmadd(fVar12,fVar9,(fVar17 - fVar9) * fVar18);
  uVar10 = NEON_fmadd(fVar18,fVar9,(fVar17 - fVar9) * fVar11);
  uVar15 = NEON_fmadd(fVar12,fVar7,(fVar16 - fVar7) * fVar18);
  uVar8 = NEON_fmadd(fVar18,fVar7,(fVar16 - fVar7) * fVar11);
  uVar13 = NEON_fmadd(fVar12,fVar5,(fVar14 - fVar5) * fVar18);
  uVar6 = NEON_fmadd(fVar18,fVar5,(fVar14 - fVar5) * fVar11);
  *(undefined4 *)param_4 = uVar19;
  *(undefined4 *)param_5 = uVar10;
  *(undefined4 *)(param_4 + 4) = uVar15;
  *(undefined4 *)(param_5 + 4) = uVar8;
  *(undefined4 *)(param_4 + 8) = uVar13;
  *(undefined4 *)(param_5 + 8) = uVar6;
  *(undefined4 *)(param_4 + 0xc) = 0x437f0000;
  *(undefined4 *)(param_5 + 0xc) = 0x437f0000;
  return;
}


