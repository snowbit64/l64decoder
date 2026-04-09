// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionOffsetAndInvScale
// Entry Point: 008c88bc
// Size: 332 bytes
// Signature: undefined __cdecl getPositionOffsetAndInvScale(uint param_1, float * param_2, float param_3, bool * param_4, float * param_5, float * param_6)


/* IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale(unsigned int, float const*, float,
   bool&, float*, float&) */

void IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
               (uint param_1,float *param_2,float param_3,bool *param_4,float *param_5,
               float *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_1 == 0) {
    fVar17 = -3.402823e+38;
    fVar6 = 3.402823e+38;
    fVar15 = fVar17;
    fVar11 = fVar6;
    fVar13 = fVar6;
    fVar16 = fVar17;
  }
  else {
    uVar4 = 0;
    fVar5 = -3.402823e+38;
    fVar8 = 3.402823e+38;
    fVar9 = fVar5;
    fVar10 = fVar8;
    fVar12 = fVar8;
    fVar14 = fVar5;
    do {
      fVar15 = param_2[uVar4 & 0xffffffff];
      iVar2 = (int)uVar4;
      fVar16 = param_2[iVar2 + 1];
      uVar4 = uVar4 + 3;
      fVar17 = param_2[iVar2 + 2];
      fVar6 = fVar15;
      if (fVar8 <= fVar15) {
        fVar6 = fVar8;
      }
      fVar11 = fVar16;
      if (fVar10 <= fVar16) {
        fVar11 = fVar10;
      }
      fVar13 = fVar17;
      if (fVar12 <= fVar17) {
        fVar13 = fVar12;
      }
      if (fVar15 <= fVar9) {
        fVar15 = fVar9;
      }
      if (fVar16 <= fVar14) {
        fVar16 = fVar14;
      }
      if (fVar17 <= fVar5) {
        fVar17 = fVar5;
      }
      fVar5 = fVar17;
      fVar9 = fVar15;
      fVar8 = fVar6;
      fVar10 = fVar11;
      fVar12 = fVar13;
      fVar14 = fVar16;
    } while ((ulong)param_1 + (ulong)param_1 * 2 != uVar4);
  }
  fVar5 = fVar17 - fVar13;
  if (fVar17 - fVar13 <= fVar16 - fVar11) {
    fVar5 = fVar16 - fVar11;
  }
  if (fVar5 <= fVar15 - fVar6) {
    fVar5 = fVar15 - fVar6;
  }
  uVar7 = 0x1000000;
  if (fVar5 <= param_3 * 65536.0) {
    uVar7 = 0x8000;
  }
  uVar3 = (uint)(fVar5 * 0.5);
  *param_4 = param_3 * 65536.0 < fVar5;
  param_5[2] = (fVar13 + fVar17) * 0.5;
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  *param_5 = (fVar15 + fVar6) * 0.5;
  param_5[1] = (fVar11 + fVar16) * 0.5;
  uVar1 = uVar3 - 1 | uVar3 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar3 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar7 / uVar3;
  }
  *param_6 = (float)(ulong)uVar1;
  return;
}


