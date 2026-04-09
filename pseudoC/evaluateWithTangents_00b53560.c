// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluateWithTangents
// Entry Point: 00b53560
// Size: 308 bytes
// Signature: undefined __cdecl evaluateWithTangents(float param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6, Vector3 * param_7)


/* CubicBezierUtil::evaluateWithTangents(float, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3&, Vector3&) */

void CubicBezierUtil::evaluateWithTangents
               (float param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
               Vector3 *param_6,Vector3 *param_7)

{
  float fVar1;
  float fVar2;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar3 = 1.0 - param_1;
  fVar1 = (float)NEON_fmadd(param_1,0x40000000,0x3f800000);
  fVar6 = (float)NEON_fmadd(param_1,0xc0000000,0x40400000);
  fVar17 = param_1 * param_1;
  fVar13 = *(float *)(param_2 + 8);
  fVar18 = *(float *)(param_3 + 8);
  fVar7 = fVar17 * fVar6;
  fVar10 = fVar17 * (param_1 + -1.0);
  fVar4 = fVar3 * fVar3;
  fVar8 = (float)NEON_fmadd(fVar17,0xc0000000,fVar6 * (param_1 + param_1));
  fVar24 = fVar4 * param_1;
  fVar6 = fVar1 * fVar4;
  fVar17 = fVar17 + (param_1 + -1.0) * (param_1 + param_1);
  fVar5 = (float)NEON_fmadd(fVar4,0x40000000,fVar1 * (-fVar3 - fVar3));
  fVar15 = (float)*(undefined8 *)param_3;
  fVar16 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar4 = fVar4 + (-fVar3 - fVar3) * param_1;
  fVar11 = (float)*(undefined8 *)param_2;
  fVar12 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar14 = *(float *)(param_4 + 8);
  fVar22 = (float)*(undefined8 *)param_4;
  fVar23 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar3 = (float)NEON_fmadd(fVar6,0,fVar5 * fVar13);
  fVar1 = (float)NEON_fmadd(fVar24,0,fVar4 * fVar18);
  fVar21 = *(float *)(param_5 + 8);
  fVar9 = (float)NEON_fmadd(fVar7,0,fVar8 * fVar14);
  fVar19 = (float)*(undefined8 *)param_5;
  fVar20 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
  fVar2 = (float)NEON_fmadd(fVar10,0,fVar17 * fVar21);
  *(ulong *)param_6 =
       CONCAT44(fVar12 * fVar6 + fVar16 * fVar24 + fVar23 * fVar7 + fVar20 * fVar10,
                fVar11 * fVar6 + fVar15 * fVar24 + fVar22 * fVar7 + fVar19 * fVar10);
  *(float *)(param_6 + 8) = fVar6 * fVar13 + fVar24 * fVar18 + fVar7 * fVar14 + fVar10 * fVar21;
  *(ulong *)param_7 =
       CONCAT44(fVar12 * fVar5 + fVar6 * 0.0 + fVar16 * fVar4 + fVar24 * 0.0 +
                fVar23 * fVar8 + fVar7 * 0.0 + fVar20 * fVar17 + fVar10 * 0.0,
                fVar11 * fVar5 + fVar6 * 0.0 + fVar15 * fVar4 + fVar24 * 0.0 +
                fVar22 * fVar8 + fVar7 * 0.0 + fVar19 * fVar17 + fVar10 * 0.0);
  *(float *)(param_7 + 8) = fVar3 + fVar1 + fVar9 + fVar2;
  return;
}


