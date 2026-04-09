// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluateCoord
// Entry Point: 00b53dcc
// Size: 280 bytes
// Signature: undefined __thiscall evaluateCoord(CubicSpline * this, uint param_1, float param_2, int param_3, float * param_4, float * param_5)


/* CubicSpline::evaluateCoord(unsigned int, float, int, float&, float&) const */

void __thiscall
CubicSpline::evaluateCoord
          (CubicSpline *this,uint param_1,float param_2,int param_3,float *param_4,float *param_5)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
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
  
  fVar5 = param_2 * param_2;
  fVar9 = param_2 + param_2;
  fVar11 = fVar5 * param_2;
  uVar3 = NEON_fmadd(fVar9,param_2,fVar5);
  fVar7 = param_2 * 0.0 + 0.5;
  fVar14 = (float)NEON_fmadd(fVar9,0x3f000000,fVar5 * 0.0);
  uVar1 = param_1 * 3 + param_3;
  fVar16 = (float)NEON_fmadd(uVar3,0x3e2aaaab,fVar11 * 0.0);
  fVar4 = (float)NEON_fmadd(uVar3,0x3f000000,fVar11 * 0.0);
  lVar2 = *(long *)(this + 0x18);
  fVar8 = fVar11 * 0.1666667;
  fVar18 = *(float *)(lVar2 + (ulong)uVar1 * 4);
  fVar12 = *(float *)(lVar2 + (ulong)(uVar1 + 3) * 4);
  fVar6 = (0.6666667 - fVar5) + fVar11 * 0.5;
  fVar15 = (fVar5 * 0.5 + (0.1666667 - param_2 * 0.5)) - fVar8;
  fVar17 = *(float *)(lVar2 + (ulong)(uVar1 + 6) * 4);
  fVar11 = (fVar5 * 0.5 + param_2 * 0.5 + 0.1666667) - fVar11 * 0.5;
  fVar13 = *(float *)(lVar2 + (ulong)(uVar1 + 9) * 4);
  fVar9 = (float)NEON_fmadd(fVar6,0,((0.0 - fVar9) + fVar4) * fVar12);
  fVar10 = (float)NEON_fmadd(fVar15,0,((fVar14 + (0.0 - fVar7)) - fVar16) * fVar18);
  fVar4 = (float)NEON_fmadd(fVar11,0,((fVar14 + fVar7 + 0.0) - fVar4) * fVar17);
  fVar5 = (float)NEON_fmadd(fVar8,0,fVar16 * fVar13);
  *param_4 = fVar8 * fVar13 + fVar11 * fVar17 + fVar15 * fVar18 + fVar6 * fVar12;
  *param_5 = fVar5 + fVar4 + fVar10 + fVar9;
  return;
}


