// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInTriangle
// Entry Point: 00f94fc0
// Size: 288 bytes
// Signature: undefined __thiscall pointInTriangle(SphereTriangleDetector * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* SphereTriangleDetector::pointInTriangle(btVector3 const*, btVector3 const&, btVector3*) */

uint __thiscall
SphereTriangleDetector::pointInTriangle
          (SphereTriangleDetector *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar14 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar15 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar18 = *(float *)param_2;
  fVar17 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 8);
  fVar19 = *(float *)param_3;
  fVar20 = *(float *)(param_3 + 4);
  fVar21 = *(float *)(param_3 + 8);
  fVar2 = (float)NEON_fnmsub(fVar1,fVar16 - fVar14,fVar17 * (fVar13 - fVar3));
  fVar7 = (-((fVar3 - fVar11) * fVar17) + (fVar14 - fVar8) * fVar1) * (fVar19 - fVar6) +
          (fVar20 - fVar8) * (-((fVar10 - fVar6) * fVar1) + (fVar3 - fVar11) * fVar18) +
          (fVar21 - fVar11) * (-((fVar14 - fVar8) * fVar18) + (fVar10 - fVar6) * fVar17);
  fVar6 = (-((fVar11 - fVar13) * fVar17) + (fVar8 - fVar16) * fVar1) * (fVar19 - fVar15) +
          (fVar20 - fVar16) * (-((fVar6 - fVar15) * fVar1) + (fVar11 - fVar13) * fVar18) +
          (fVar21 - fVar13) * (-((fVar8 - fVar16) * fVar18) + (fVar6 - fVar15) * fVar17);
  uVar12 = NEON_fnmsub(fVar18,fVar13 - fVar3,fVar1 * (fVar15 - fVar10));
  uVar4 = NEON_fcmgt(CONCAT44(fVar6,fVar7),0,4);
  uVar9 = NEON_fnmsub(fVar17,fVar15 - fVar10,fVar18 * (fVar16 - fVar14));
  uVar12 = NEON_fmadd(uVar12,fVar20 - fVar14,fVar2 * (fVar19 - fVar10));
  fVar1 = (float)NEON_fmadd(uVar9,fVar21 - fVar3,uVar12);
  if ((((uVar4 & 0x100000000) != 0) && ((uVar4 & 1) != 0)) && (0.0 < fVar1)) {
    return 1;
  }
  uVar5 = NEON_fcmle(CONCAT44(fVar6,fVar7),0,2);
  return (uint)((ulong)uVar5 >> 0x20) & (uint)uVar5 & (uint)(fVar1 <= 0.0);
}


