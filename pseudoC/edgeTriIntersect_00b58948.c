// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: edgeTriIntersect
// Entry Point: 00b58948
// Size: 472 bytes
// Signature: undefined __cdecl edgeTriIntersect(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, int param_6, int param_7)


/* MathUtil::edgeTriIntersect(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, int, int) */

undefined8
MathUtil::edgeTriIntersect
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
          int param_6,int param_7)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = -(ulong)((uint)param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_6 << 2;
  uVar2 = -(ulong)((uint)param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_7 << 2;
  fVar5 = *(float *)(param_1 + uVar1);
  fVar6 = *(float *)(param_3 + uVar1);
  fVar11 = *(float *)(param_4 + uVar1);
  fVar8 = *(float *)(param_3 + uVar2);
  fVar3 = *(float *)(param_2 + uVar1) - fVar5;
  fVar13 = *(float *)(param_4 + uVar2);
  fVar7 = *(float *)(param_1 + uVar2);
  fVar9 = -fVar3;
  fVar10 = *(float *)(param_2 + uVar2) - fVar7;
  fVar12 = (float)NEON_fmadd(fVar10,fVar6 - fVar11,(fVar8 - fVar13) * fVar9);
  fVar4 = -fVar10;
  fVar15 = (float)NEON_fmadd(fVar8 - fVar13,fVar5 - fVar6,(fVar7 - fVar8) * -(fVar6 - fVar11));
  if (((0.0 < fVar12) && (0.0 <= fVar15 && fVar15 < fVar12 || 0.0 <= fVar15 && fVar15 == fVar12)) ||
     ((fVar12 < 0.0 && (fVar15 <= 0.0 && fVar12 <= fVar15)))) {
    fVar15 = (float)NEON_fmadd(fVar3,fVar7 - fVar8,(fVar5 - fVar6) * fVar4);
    if (fVar12 <= 0.0) {
      if (fVar15 <= 0.0 && fVar12 <= fVar15) {
        return 1;
      }
    }
    else if (0.0 <= fVar15 && fVar15 < fVar12 || 0.0 <= fVar15 && fVar15 == fVar12) {
      return 1;
    }
  }
  fVar15 = *(float *)(param_5 + (long)param_6 * 4);
  fVar14 = *(float *)(param_5 + (long)param_7 * 4);
  fVar12 = (float)NEON_fmadd(fVar10,fVar11 - fVar15,(fVar13 - fVar14) * fVar9);
  fVar16 = (float)NEON_fmadd(fVar13 - fVar14,fVar5 - fVar11,(fVar7 - fVar13) * -(fVar11 - fVar15));
  if (((0.0 < fVar12) && (0.0 <= fVar16 && fVar16 < fVar12 || 0.0 <= fVar16 && fVar16 == fVar12)) ||
     ((fVar12 < 0.0 && (fVar16 <= 0.0 && fVar12 <= fVar16)))) {
    fVar11 = (float)NEON_fmadd(fVar3,fVar7 - fVar13,(fVar5 - fVar11) * fVar4);
    if (fVar12 <= 0.0) {
      if ((fVar11 <= 0.0) && (fVar12 <= fVar11)) {
        return 1;
      }
    }
    else if ((0.0 <= fVar11) && (fVar11 <= fVar12)) {
      return 1;
    }
  }
  fVar9 = (float)NEON_fmadd(fVar10,fVar15 - fVar6,(fVar14 - fVar8) * fVar9);
  fVar6 = (float)NEON_fmadd(fVar14 - fVar8,fVar5 - fVar15,(fVar7 - fVar14) * -(fVar15 - fVar6));
  if ((((0.0 < fVar9) && (0.0 <= fVar6)) && (fVar6 <= fVar9)) ||
     (((fVar9 < 0.0 && (fVar6 <= 0.0)) && (fVar9 <= fVar6)))) {
    fVar3 = (float)NEON_fmadd(fVar3,fVar7 - fVar14,(fVar5 - fVar15) * fVar4);
    if (fVar9 <= 0.0) {
      if ((fVar3 <= 0.0) && (fVar9 <= fVar3)) {
        return 1;
      }
    }
    else if ((0.0 <= fVar3) && (fVar3 <= fVar9)) {
      return 1;
    }
  }
  return 0;
}


