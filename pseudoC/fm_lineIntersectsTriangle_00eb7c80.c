// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineIntersectsTriangle
// Entry Point: 00eb7c80
// Size: 256 bytes
// Signature: undefined __cdecl fm_lineIntersectsTriangle(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* FLOAT_MATH::fm_lineIntersectsTriangle(float const*, float const*, float const*, float const*,
   float const*, float*) */

void FLOAT_MATH::fm_lineIntersectsTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar4 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar5 = *param_2 - *param_1;
  uVar6 = NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar7 = (float)NEON_fmadd(fVar9,fVar9,uVar6);
  fVar8 = 1.0 / SQRT(fVar7);
  local_64 = fVar5 * fVar8;
  fStack_60 = fVar4 * fVar8;
  local_5c = fVar9 * fVar8;
  uVar1 = fm_rayIntersectsTriangle(param_1,&local_64,param_3,param_4,param_5,&local_68);
  if (((uVar1 & 1) == 0) || (local_68 <= SQRT(fVar7))) {
    uVar2 = 0;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    uVar2 = 1;
    fVar5 = (float)NEON_fmadd(fVar5 * fVar8,local_68,*param_1);
    *param_6 = fVar5;
    fVar4 = (float)NEON_fmadd(fVar4 * fVar8,local_68,param_1[1]);
    param_6[1] = fVar4;
    fVar4 = (float)NEON_fmadd(fVar9 * fVar8,local_68,param_1[2]);
    param_6[2] = fVar4;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


