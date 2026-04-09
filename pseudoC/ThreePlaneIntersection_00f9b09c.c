// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThreePlaneIntersection
// Entry Point: 00f9b09c
// Size: 208 bytes
// Signature: undefined __cdecl ThreePlaneIntersection(btPlane * param_1, btPlane * param_2, btPlane * param_3)


/* ThreePlaneIntersection(btPlane const&, btPlane const&, btPlane const&) */

float ThreePlaneIntersection(btPlane *param_1,btPlane *param_2,btPlane *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_3 + 4);
  fVar5 = *(float *)param_2;
  fVar11 = *(float *)param_3;
  uVar9 = NEON_rev64(uVar4,4);
  uVar18 = *(undefined8 *)(param_1 + 4);
  uVar14 = NEON_rev64(uVar3,4);
  fVar19 = *(float *)param_1;
  fVar8 = (float)((ulong)uVar3 >> 0x20);
  fVar17 = (float)uVar18;
  fVar13 = (float)((ulong)uVar4 >> 0x20);
  fVar16 = -(fVar11 * (float)uVar3) + fVar5 * (float)uVar4;
  uVar6 = NEON_rev64(uVar18,4);
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar1 = (float)((ulong)uVar18 >> 0x20);
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar12 = -(fVar10 * fVar8) + fVar15 * fVar13;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  uVar2 = NEON_fmadd(*(float *)(param_2 + 0x10),-((float)uVar4 * fVar19) + fVar11 * fVar17,
                     fVar16 * *(float *)(param_1 + 0x10));
  NEON_fmadd(*(float *)(param_3 + 0x10),-(fVar5 * fVar17) + fVar19 * (float)uVar3,uVar2);
  return ((-(fVar13 * fVar7) + fVar1 * fVar10) * *(float *)(param_2 + 0x10) +
          fVar12 * *(float *)(param_1 + 0x10) +
         (-(fVar15 * fVar1) + fVar7 * fVar8) * *(float *)(param_3 + 0x10)) *
         (-1.0 / (fVar12 * fVar19 + fVar1 * fVar16 +
                 fVar17 * (-((float)uVar9 * fVar5) + (float)uVar14 * fVar11)));
}


