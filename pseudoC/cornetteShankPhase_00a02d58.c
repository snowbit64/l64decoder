// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cornetteShankPhase
// Entry Point: 00a02d58
// Size: 104 bytes
// Signature: undefined __cdecl cornetteShankPhase(float param_1, float param_2, float param_3, float * param_4)


/* LightScatteringUtil::cornetteShankPhase(float, float, float, float&) */

void LightScatteringUtil::cornetteShankPhase
               (float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = NEON_fmadd(param_2,param_2,0x3f800000);
  fVar5 = (float)NEON_fmsub(param_2,param_2,0x3f800000);
  fVar3 = (float)NEON_fmadd(param_2 * -2.0,param_3,uVar4);
  fVar2 = (float)NEON_fmadd(param_3,param_3,0x3f800000);
  fVar1 = (float)NEON_fmadd(param_2,param_2,0x40000000);
  fVar3 = 1.0 / SQRT(fVar3);
  *param_4 = (param_1 / 12.56637) *
             fVar2 * ((fVar5 * 3.0) / (fVar1 + fVar1)) * fVar3 * fVar3 * fVar3;
  return;
}


