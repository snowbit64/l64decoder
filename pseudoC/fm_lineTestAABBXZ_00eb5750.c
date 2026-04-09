// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineTestAABBXZ
// Entry Point: 00eb5750
// Size: 132 bytes
// Signature: undefined __cdecl fm_lineTestAABBXZ(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_lineTestAABBXZ(float const*, float const*, float const*, float const*, float&) */

uint FLOAT_MATH::fm_lineTestAABBXZ
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  uint uVar2;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fStack_34 = *param_3;
  local_2c = param_3[2];
  local_40 = *param_4;
  local_3c = 0x4e6e6b28;
  local_38 = param_4[2];
  local_30 = 0xce6e6b28;
  uVar2 = intersect(param_1,param_2,&fStack_34,&local_40,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


