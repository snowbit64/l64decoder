// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluate
// Entry Point: 00b538e8
// Size: 392 bytes
// Signature: undefined __thiscall evaluate(CubicSpline * this, uint param_1, float param_2, Vector3 * param_3, Vector3 * param_4)


/* CubicSpline::evaluate(unsigned int, float, Vector3&, Vector3&) const */

void __thiscall
CubicSpline::evaluate
          (CubicSpline *this,uint param_1,float param_2,Vector3 *param_3,Vector3 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
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
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar7 = param_2 * param_2;
  fVar10 = param_2 + param_2;
  fVar14 = fVar7 * param_2;
  uVar5 = NEON_fmadd(fVar10,param_2,fVar7);
  lVar4 = *(long *)(this + 0x18);
  uVar3 = param_1 * 3;
  fVar9 = param_2 * 0.0 + 0.5;
  fVar17 = (float)NEON_fmadd(fVar10,0x3f000000,fVar7 * 0.0);
  fVar31 = (float)NEON_fmadd(uVar5,0x3e2aaaab,fVar14 * 0.0);
  puVar1 = (undefined8 *)(lVar4 + (ulong)uVar3 * 4);
  fVar6 = (float)NEON_fmadd(uVar5,0x3f000000,fVar14 * 0.0);
  puVar2 = (undefined8 *)(lVar4 + (ulong)(uVar3 + 3) * 4);
  fVar18 = fVar14 * 0.1666667;
  uVar20 = *puVar1;
  fVar22 = *(float *)(puVar1 + 1);
  fVar15 = (fVar17 + (0.0 - fVar9)) - fVar31;
  fVar11 = (0.0 - fVar10) + fVar6;
  uVar27 = *puVar2;
  fVar8 = (0.6666667 - fVar7) + fVar14 * 0.5;
  fVar10 = (fVar7 * 0.5 + param_2 * 0.5 + 0.1666667) - fVar14 * 0.5;
  fVar29 = (fVar7 * 0.5 + (0.1666667 - param_2 * 0.5)) - fVar18;
  fVar6 = (fVar17 + fVar9 + 0.0) - fVar6;
  fVar19 = (float)uVar20;
  fVar21 = (float)((ulong)uVar20 >> 0x20);
  fVar16 = *(float *)(puVar2 + 1);
  fVar25 = (float)uVar27;
  fVar28 = (float)((ulong)uVar27 >> 0x20);
  puVar1 = (undefined8 *)(lVar4 + (ulong)(uVar3 + 6) * 4);
  fVar13 = (float)NEON_fmadd(fVar29,0,fVar15 * fVar22);
  fVar30 = *(float *)(puVar1 + 1);
  fVar14 = (float)NEON_fmadd(fVar8,0,fVar11 * fVar16);
  uVar20 = *puVar1;
  puVar1 = (undefined8 *)(lVar4 + (ulong)(uVar3 + 9) * 4);
  fVar17 = (float)uVar20;
  fVar12 = (float)((ulong)uVar20 >> 0x20);
  uVar20 = *puVar1;
  fVar26 = *(float *)(puVar1 + 1);
  fVar23 = (float)uVar20;
  fVar24 = (float)((ulong)uVar20 >> 0x20);
  fVar7 = (float)NEON_fmadd(fVar10,0,fVar6 * fVar30);
  fVar9 = (float)NEON_fmadd(fVar18,0,fVar31 * fVar26);
  *(ulong *)param_3 =
       CONCAT44(fVar21 * fVar29 + fVar28 * fVar8 + fVar12 * fVar10 + fVar24 * fVar18,
                fVar19 * fVar29 + fVar25 * fVar8 + fVar17 * fVar10 + fVar23 * fVar18);
  *(float *)(param_3 + 8) = fVar29 * fVar22 + fVar8 * fVar16 + fVar10 * fVar30 + fVar18 * fVar26;
  *(ulong *)param_4 =
       CONCAT44(fVar21 * fVar15 + fVar29 * 0.0 + fVar28 * fVar11 + fVar8 * 0.0 +
                fVar12 * fVar6 + fVar10 * 0.0 + fVar24 * fVar31 + fVar18 * 0.0,
                fVar19 * fVar15 + fVar29 * 0.0 + fVar25 * fVar11 + fVar8 * 0.0 +
                fVar17 * fVar6 + fVar10 * 0.0 + fVar23 * fVar31 + fVar18 * 0.0);
  *(float *)(param_4 + 8) = fVar13 + fVar14 + fVar7 + fVar9;
  return;
}


