// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuatDX
// Entry Point: 00eb4a54
// Size: 396 bytes
// Signature: undefined __cdecl fm_eulerToQuatDX(float param_1, float param_2, float param_3, float * param_4)


/* FLOAT_MATH::fm_eulerToQuatDX(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToQuatDX(float param_1,float param_2,float param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 uStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sincosf(param_1 * 0.5,&fStack_9c,&local_a0);
  sincosf(param_2 * 0.5,&fStack_a4,&local_a8);
  sincosf(param_3 * 0.5,&fStack_ac,&local_b0);
  local_7c = 0;
  local_8c = 0;
  local_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  fVar4 = (float)NEON_fmadd(fStack_9c,local_a8 * local_b0,fStack_a4 * fStack_ac * -local_a0);
  fVar2 = (float)NEON_fmadd(local_a0,local_a8 * fStack_ac,fStack_a4 * local_b0 * -fStack_9c);
  fVar5 = (float)NEON_fmadd(local_a0,fStack_a4 * local_b0,fStack_9c * local_a8 * fStack_ac);
  fVar3 = (float)NEON_fmadd(local_a0,local_a8 * local_b0,fStack_9c * fStack_a4 * fStack_ac);
  local_88 = fVar4 * fVar5 - fVar2 * fVar3;
  fStack_94 = fVar4 * fVar5 + fVar2 * fVar3;
  local_78 = fVar4 * fVar2 + fVar5 * fVar3;
  local_90 = fVar4 * fVar2 - fVar5 * fVar3;
  fStack_74 = fVar5 * fVar2 - fVar4 * fVar3;
  local_80 = fVar5 * fVar2 + fVar4 * fVar3;
  local_98 = (float)NEON_fmadd(fVar5 * fVar5 + fVar2 * fVar2,0xc0000000,0x3f800000);
  fStack_94 = fStack_94 + fStack_94;
  local_88 = local_88 + local_88;
  uStack_84 = NEON_fmadd(fVar4 * fVar4 + fVar2 * fVar2,0xc0000000,0x3f800000);
  local_78 = local_78 + local_78;
  local_80 = local_80 + local_80;
  local_70 = NEON_fmadd(fVar4 * fVar4 + fVar5 * fVar5,0xc0000000,0x3f800000);
  fStack_74 = fStack_74 + fStack_74;
  local_90 = local_90 + local_90;
  fm_matrixToQuat(&local_98,param_4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


