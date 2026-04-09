// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluateCoord
// Entry Point: 00b53ee4
// Size: 128 bytes
// Signature: undefined __thiscall evaluateCoord(CubicSpline * this, uint param_1, float param_2, int param_3)


/* CubicSpline::evaluateCoord(unsigned int, float, int) const */

float __thiscall
CubicSpline::evaluateCoord(CubicSpline *this,uint param_1,float param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2 * param_2;
  uVar5 = NEON_fmadd(param_2,0xc0400000,0x3f800000);
  uVar1 = param_1 * 3 + param_3;
  lVar2 = *(long *)(this + 0x18);
  fVar7 = fVar4 * param_2;
  uVar3 = NEON_fmadd(param_2,0x40400000,0x3f800000);
  fVar6 = (float)NEON_fmadd(fVar4,0x40400000,uVar5);
  uVar5 = NEON_fmadd(fVar4,0xc0c00000,0x40800000);
  uVar3 = NEON_fmadd(fVar4,0x40400000,uVar3);
  uVar5 = NEON_fmadd(fVar7,0x40400000,uVar5);
  uVar3 = NEON_fmadd(fVar7,0xc0400000,uVar3);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar2 + (ulong)(uVar1 + 3) * 4),uVar5,
                     (fVar6 - fVar7) * *(float *)(lVar2 + (ulong)uVar1 * 4));
  uVar3 = NEON_fmadd(*(undefined4 *)(lVar2 + (ulong)(uVar1 + 6) * 4),uVar3,uVar5);
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + (ulong)(uVar1 + 9) * 4),fVar7,uVar3);
  return fVar4 / 6.0;
}


