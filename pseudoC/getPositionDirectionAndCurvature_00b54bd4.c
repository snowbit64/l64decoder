// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionDirectionAndCurvature
// Entry Point: 00b54bd4
// Size: 320 bytes
// Signature: undefined __thiscall getPositionDirectionAndCurvature(CubicSpline * this, uint param_1, float param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5)


/* CubicSpline::getPositionDirectionAndCurvature(unsigned int, float, Vector3&, Vector3&, Vector3&)
   const */

void __thiscall
CubicSpline::getPositionDirectionAndCurvature
          (CubicSpline *this,uint param_1,float param_2,Vector3 *param_3,Vector3 *param_4,
          Vector3 *param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  evaluate(this,param_1,param_2,param_3,param_4);
  lVar6 = *(long *)(this + 0x18);
  uVar5 = param_1 * 3;
  pfVar1 = (float *)(lVar6 + (ulong)uVar5 * 4);
  fVar10 = 1.0 - param_2;
  puVar2 = (undefined4 *)(lVar6 + (ulong)(uVar5 + 3) * 4);
  uVar7 = NEON_fmadd(param_2,0x40400000,0xc0000000);
  fVar16 = *(float *)(param_4 + 4);
  puVar3 = (undefined4 *)(lVar6 + (ulong)(uVar5 + 6) * 4);
  uVar13 = NEON_fmadd(param_2,0xc0400000,0x3f800000);
  puVar4 = (undefined4 *)(lVar6 + (ulong)(uVar5 + 9) * 4);
  uVar11 = NEON_fmadd(puVar2[1],uVar7,fVar10 * pfVar1[1]);
  uVar14 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)param_4,fVar16 * fVar16);
  uVar8 = NEON_fmadd(puVar2[2],uVar7,fVar10 * pfVar1[2]);
  fVar17 = *(float *)(param_4 + 8);
  uVar11 = NEON_fmadd(puVar3[1],uVar13,uVar11);
  fVar15 = (float)NEON_fmadd(fVar17,fVar17,uVar14);
  uVar8 = NEON_fmadd(puVar3[2],uVar13,uVar8);
  uVar14 = *puVar4;
  fVar12 = (float)NEON_fmadd(puVar4[1],param_2,uVar11);
  fVar9 = (float)NEON_fmadd(puVar4[2],param_2,uVar8);
  uVar8 = *puVar3;
  fVar17 = (float)NEON_fmadd(fVar16,fVar9,fVar12 * -fVar17);
  uVar7 = NEON_fmadd(*puVar2,uVar7,fVar10 * *pfVar1);
  *(float *)param_5 = fVar17;
  uVar7 = NEON_fmadd(uVar8,uVar13,uVar7);
  fVar10 = (float)NEON_fmadd(uVar14,param_2,uVar7);
  fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),fVar10,fVar9 * -*(float *)param_4);
  *(float *)(param_5 + 4) = fVar16;
  fVar9 = 1.0 / (fVar15 * SQRT(fVar15));
  fVar10 = (float)NEON_fmadd(*(undefined4 *)param_4,fVar12,fVar10 * -*(float *)(param_4 + 4));
  *(float *)param_5 = fVar17 * fVar9;
  *(float *)(param_5 + 4) = fVar16 * fVar9;
  *(float *)(param_5 + 8) = fVar9 * fVar10;
  return;
}


