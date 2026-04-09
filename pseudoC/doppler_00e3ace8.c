// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doppler
// Entry Point: 00e3ace8
// Size: 140 bytes
// Signature: undefined __thiscall doppler(SoLoud * this, vec3 param_1, vec3 param_2, vec3 param_3, float param_4, float param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)


/* SoLoud::doppler(SoLoud::vec3, SoLoud::vec3, SoLoud::vec3, float, float) */

float __thiscall
SoLoud::doppler(SoLoud *this,vec3 param_1,vec3 param_2,vec3 param_3,float param_4,float param_5,
               undefined param_6,undefined param_7,undefined param_8,undefined param_9,
               undefined4 param_10,undefined4 param_11,float param_12,float param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 in_s2;
  undefined4 in_s3;
  float fVar4;
  float in_s4;
  undefined4 in_s5;
  undefined4 uVar5;
  float fVar6;
  float in_stack_00000004;
  
  uVar5 = NEON_fmadd(param_4,param_4,param_5 * param_5);
  fVar6 = (float)NEON_fmadd(in_s2,in_s2,uVar5);
  fVar6 = SQRT(fVar6);
  if (fVar6 == 0.0) {
    return 1.0;
  }
  uVar5 = NEON_fmadd(param_4,in_s3,param_5 * in_s4);
  fVar4 = (float)NEON_fmadd(in_s2,in_s5,uVar5);
  uVar5 = NEON_fmadd(param_4,param_10,param_5 * in_stack_00000004);
  fVar1 = (float)NEON_fmadd(in_s2,param_11,uVar5);
  fVar2 = (param_13 / param_12) * 0.99;
  fVar3 = fVar4 / fVar6;
  if (fVar2 <= fVar4 / fVar6) {
    fVar3 = fVar2;
  }
  fVar4 = fVar1 / fVar6;
  if (fVar2 <= fVar1 / fVar6) {
    fVar4 = fVar2;
  }
  fVar3 = (float)NEON_fmsub(param_12,fVar3,param_13);
  fVar6 = (float)NEON_fmsub(param_12,fVar4,param_13);
  return fVar6 / fVar3;
}


