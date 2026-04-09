// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: secondDerivative
// Entry Point: 00b53f64
// Size: 140 bytes
// Signature: undefined __thiscall secondDerivative(CubicSpline * this, uint param_1, float param_2)


/* CubicSpline::secondDerivative(unsigned int, float) const */

float __thiscall CubicSpline::secondDerivative(CubicSpline *this,uint param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  lVar6 = *(long *)(this + 0x18);
  uVar5 = param_1 * 3;
  puVar1 = (undefined8 *)(lVar6 + (ulong)uVar5 * 4);
  puVar2 = (undefined8 *)(lVar6 + (ulong)(uVar5 + 3) * 4);
  fVar8 = (float)NEON_fmadd(param_2,0x40400000,0xc0000000);
  fVar7 = (float)NEON_fmadd(param_2,0xc0400000,0x3f800000);
  puVar3 = (undefined8 *)(lVar6 + (ulong)(uVar5 + 6) * 4);
  puVar4 = (undefined8 *)(lVar6 + (ulong)(uVar5 + 9) * 4);
  uVar9 = NEON_fmadd(*(undefined4 *)(puVar2 + 1),fVar8,(1.0 - param_2) * *(float *)(puVar1 + 1));
  uVar9 = NEON_fmadd(*(undefined4 *)(puVar3 + 1),fVar7,uVar9);
  NEON_fmadd(*(undefined4 *)(puVar4 + 1),param_2,uVar9);
  return (float)*puVar1 * (1.0 - param_2) + (float)*puVar2 * fVar8 + (float)*puVar3 * fVar7 +
         (float)*puVar4 * param_2;
}


