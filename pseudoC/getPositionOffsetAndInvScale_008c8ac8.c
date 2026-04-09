// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionOffsetAndInvScale
// Entry Point: 008c8ac8
// Size: 312 bytes
// Signature: undefined __cdecl getPositionOffsetAndInvScale(uint param_1, float * param_2, bool param_3, float * param_4, float * param_5)


/* IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale(unsigned int, float const*, bool,
   float*, float&) */

void IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
               (uint param_1,float *param_2,bool param_3,float *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
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
    fVar3 = 3.402823e+38;
    fVar15 = -3.402823e+38;
    fVar17 = fVar15;
    fVar11 = fVar3;
    fVar16 = fVar15;
    fVar14 = fVar3;
  }
  else {
    uVar5 = 0;
    fVar6 = -3.402823e+38;
    fVar8 = 3.402823e+38;
    fVar9 = fVar6;
    fVar10 = fVar8;
    fVar12 = fVar6;
    fVar13 = fVar8;
    do {
      fVar15 = param_2[uVar5 & 0xffffffff];
      iVar2 = (int)uVar5;
      fVar16 = param_2[iVar2 + 1];
      uVar5 = uVar5 + 3;
      fVar17 = param_2[iVar2 + 2];
      fVar11 = fVar15;
      if (fVar10 <= fVar15) {
        fVar11 = fVar10;
      }
      fVar14 = fVar16;
      if (fVar13 <= fVar16) {
        fVar14 = fVar13;
      }
      fVar3 = fVar17;
      if (fVar8 <= fVar17) {
        fVar3 = fVar8;
      }
      if (fVar15 <= fVar6) {
        fVar15 = fVar6;
      }
      if (fVar16 <= fVar12) {
        fVar16 = fVar12;
      }
      if (fVar17 <= fVar9) {
        fVar17 = fVar9;
      }
      fVar8 = fVar3;
      fVar6 = fVar15;
      fVar9 = fVar17;
      fVar10 = fVar11;
      fVar12 = fVar16;
      fVar13 = fVar14;
    } while ((ulong)param_1 + (ulong)param_1 * 2 != uVar5);
  }
  fVar8 = fVar17 - fVar3;
  if (fVar17 - fVar3 <= fVar16 - fVar14) {
    fVar8 = fVar16 - fVar14;
  }
  if (fVar8 <= fVar15 - fVar11) {
    fVar8 = fVar15 - fVar11;
  }
  uVar7 = 0x1000000;
  if (!param_3) {
    uVar7 = 0x8000;
  }
  *param_4 = (fVar11 + fVar15) * 0.5;
  param_4[1] = (fVar14 + fVar16) * 0.5;
  uVar4 = (uint)(fVar8 * 0.5);
  param_4[2] = (fVar3 + fVar17) * 0.5;
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  uVar1 = uVar4 - 1 | uVar4 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar4 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar7 / uVar4;
  }
  *param_5 = (float)(ulong)uVar1;
  return;
}


