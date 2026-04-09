// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_catmullRom
// Entry Point: 00eb5b70
// Size: 192 bytes
// Signature: undefined __cdecl fm_catmullRom(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float param_6)


/* FLOAT_MATH::fm_catmullRom(float*, float const*, float const*, float const*, float const*, float)
    */

void FLOAT_MATH::fm_catmullRom
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar2 = param_6 * param_6;
  fVar4 = fVar2 * param_6;
  fVar1 = (float)NEON_fmadd(fVar4,0x40400000,fVar2 * -5.0);
  fVar6 = (float)NEON_fnmsub(fVar2,0x40000000,fVar4);
  fVar3 = fVar4 - fVar2;
  fVar1 = fVar1 + 2.0;
  fVar6 = fVar6 - param_6;
  fVar2 = (float)NEON_fmadd(fVar4,0xc0400000,fVar2 * 4.0);
  fVar2 = fVar2 + param_6;
  uVar5 = NEON_fmadd(fVar6,*param_2,fVar1 * *param_3);
  uVar5 = NEON_fmadd(fVar2,*param_4,uVar5);
  fVar4 = (float)NEON_fmadd(fVar3,*param_5,uVar5);
  *param_1 = fVar4 * 0.5;
  uVar5 = NEON_fmadd(fVar6,param_2[1],fVar1 * param_3[1]);
  uVar5 = NEON_fmadd(fVar2,param_4[1],uVar5);
  fVar4 = (float)NEON_fmadd(fVar3,param_5[1],uVar5);
  param_1[1] = fVar4 * 0.5;
  uVar5 = NEON_fmadd(fVar6,param_2[2],fVar1 * param_3[2]);
  uVar5 = NEON_fmadd(fVar2,param_4[2],uVar5);
  fVar2 = (float)NEON_fmadd(fVar3,param_5[2],uVar5);
  param_1[2] = fVar2 * 0.5;
  return;
}


