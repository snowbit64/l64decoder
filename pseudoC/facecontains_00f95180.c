// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: facecontains
// Entry Point: 00f95180
// Size: 292 bytes
// Signature: undefined __thiscall facecontains(SphereTriangleDetector * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* SphereTriangleDetector::facecontains(btVector3 const&, btVector3 const*, btVector3&) */

uint __thiscall
SphereTriangleDetector::facecontains
          (SphereTriangleDetector *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
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
  float fVar20;
  
  fVar10 = *(float *)(param_2 + 0x24);
  fVar2 = *(float *)(param_2 + 0x28);
  fVar12 = *(float *)(param_2 + 0x14);
  fVar7 = *(float *)(param_2 + 0x18);
  fVar16 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0x20);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar15 = *(float *)param_2;
  fVar5 = *(float *)(param_3 + 4);
  fVar18 = *(float *)(param_3 + 8);
  fVar20 = *(float *)param_3;
  fVar17 = *(float *)param_1;
  fVar19 = *(float *)(param_1 + 4);
  fVar14 = *(float *)(param_1 + 8);
  fVar13 = (float)NEON_fnmsub(fVar18,fVar16 - fVar10,fVar5 * (fVar8 - fVar2));
  uVar9 = NEON_fnmsub(fVar20,fVar8 - fVar2,fVar18 * (fVar15 - fVar3));
  uVar1 = CONCAT44((-((fVar7 - fVar8) * fVar5) + (fVar12 - fVar16) * fVar18) * (fVar17 - fVar15) +
                   (fVar19 - fVar16) * (-((fVar11 - fVar15) * fVar18) + (fVar7 - fVar8) * fVar20) +
                   (fVar14 - fVar8) * (-((fVar12 - fVar16) * fVar20) + (fVar11 - fVar15) * fVar5),
                   (-((fVar2 - fVar7) * fVar5) + (fVar10 - fVar12) * fVar18) * (fVar17 - fVar11) +
                   (fVar19 - fVar12) * (-((fVar3 - fVar11) * fVar18) + (fVar2 - fVar7) * fVar20) +
                   (fVar14 - fVar7) * (-((fVar10 - fVar12) * fVar20) + (fVar3 - fVar11) * fVar5));
  uVar4 = NEON_fcmgt(uVar1,0,4);
  uVar6 = NEON_fnmsub(fVar5,fVar15 - fVar3,fVar20 * (fVar16 - fVar10));
  uVar9 = NEON_fmadd(uVar9,fVar19 - fVar10,fVar13 * (fVar17 - fVar3));
  fVar2 = (float)NEON_fmadd(uVar6,fVar14 - fVar2,uVar9);
  if ((((uVar4 & 0x100000000) != 0) && ((uVar4 & 1) != 0)) && (0.0 < fVar2)) {
    return 1;
  }
  uVar1 = NEON_fcmle(uVar1,0,2);
  return (uint)((ulong)uVar1 >> 0x20) & (uint)uVar1 & (uint)(fVar2 <= 0.0);
}


