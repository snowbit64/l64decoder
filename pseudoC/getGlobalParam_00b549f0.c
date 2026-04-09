// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGlobalParam
// Entry Point: 00b549f0
// Size: 80 bytes
// Signature: undefined __thiscall getGlobalParam(CubicSpline * this, uint param_1, float param_2)


/* CubicSpline::getGlobalParam(unsigned int, float) const */

float __thiscall CubicSpline::getGlobalParam(CubicSpline *this,uint param_1,float param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0x38) + (ulong)(param_1 * 0x21) * 4;
  fVar3 = *(float *)(lVar1 + (ulong)(uint)(int)(param_2 * 32.0) * 4);
  uVar2 = NEON_ucvtf((int)(param_2 * 32.0));
  uVar2 = NEON_fnmsub(param_2,0x42000000,uVar2);
  fVar3 = (float)NEON_fmadd(uVar2,*(float *)(lVar1 + (ulong)((int)(param_2 * 32.0) + 1) * 4) - fVar3
                            ,fVar3);
  return (*(float *)(*(long *)(this + 0x10) + (ulong)param_1 * 4) + fVar3) / *(float *)(this + 0x2c)
  ;
}


