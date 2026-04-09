// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectLineSegmentAABB
// Entry Point: 00eb9048
// Size: 320 bytes
// Signature: undefined __cdecl fm_intersectLineSegmentAABB(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_intersectLineSegmentAABB(float const*, float const*, float const*, float const*,
   float*) */

void FLOAT_MATH::fm_intersectLineSegmentAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)*(undefined8 *)param_4 - (float)*(undefined8 *)param_3;
  fVar6 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) -
          (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  local_40 = param_4[2] - param_3[2];
  fVar7 = (float)NEON_fmadd(local_40,local_40,fVar6 * fVar6 + fVar4 * fVar4);
  fVar7 = SQRT(fVar7);
  if (fVar7 <= 1e-07) {
    local_48 = 0x3f800000;
    local_40 = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar7;
    local_40 = local_40 * fVar8;
    local_48 = CONCAT44(fVar6 * fVar8,fVar4 * fVar8);
  }
  if ((fVar7 <= 1e-05) ||
     (uVar3 = fm_intersectRayAABB(param_1,param_2,param_3,(float *)&local_48,param_5),
     (uVar3 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    uVar5 = NEON_fmadd(*param_3 - *param_5,*param_3 - *param_5,
                       (param_3[1] - param_5[1]) * (param_3[1] - param_5[1]));
    fVar4 = (float)NEON_fmadd(param_3[2] - param_5[2],param_3[2] - param_5[2],uVar5);
    bVar2 = fVar4 <= fVar7 * fVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


