// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddLightJoint
// Entry Point: 009a7d90
// Size: 716 bytes
// Signature: undefined __cdecl enqueueAddLightJoint(uint param_1, TransformGroup * * param_2, uint * param_3, IJointBreakReport * param_4, Vector3 * param_5, Vector3 * param_6, Vector3 * param_7, float * param_8, float * param_9, float * param_10, float * param_11, float * param_12, float * param_13, float * param_14, float * param_15, float * param_16, float * param_17, float param_18, float param_19, float param_20, float * param_21, float * param_22, float * param_23, float * param_24, float * param_25, float * param_26, float * param_27, float * param_28, float * param_29, float * param_30)


/* Bt2ScenegraphPhysicsContext::enqueueAddLightJoint(unsigned int, TransformGroup**, unsigned int*,
   IJointBreakReport*, Vector3 const*, Vector3 const*, Vector3 const*, float const*, float const*,
   float const*, float const*, float const*, float const*, float const*, float const*, float const*,
   float const*, float, float, float, float const*, float const*, float const*, float const*, float
   const*, float const*, float const*, float const*, float const*, float const*) */

void Bt2ScenegraphPhysicsContext::enqueueAddLightJoint
               (uint param_1,TransformGroup **param_2,uint *param_3,IJointBreakReport *param_4,
               Vector3 *param_5,Vector3 *param_6,Vector3 *param_7,float *param_8,float *param_9,
               float *param_10,float *param_11,float *param_12,float *param_13,float *param_14,
               float *param_15,float *param_16,float *param_17,float param_18,float param_19,
               float param_20,float *param_21,float *param_22,float *param_23,float *param_24,
               float *param_25,float *param_26,float *param_27,float *param_28,float *param_29,
               float *param_30)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 *in_stack_00000098;
  int local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  float local_15c;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  undefined8 local_140;
  float local_138;
  undefined8 local_134;
  float local_12c;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  float local_fc;
  float local_f8;
  float fStack_f4;
  Vector3 *local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74;
  long local_70;
  
  this = (Bt2ScenegraphPhysicsContext *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_1d0 = *(int *)(this + 0x1b8) + 1;
  *(int *)(this + 0x1b8) = local_1d0;
  if (*(long *)param_3 == 0) {
    local_1cc = (uint)param_2 | 0x100000;
    local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)param_4);
  }
  else {
    local_1cc = (uint)param_2 & 0xffefffff;
    local_1c8 = *(long *)param_3;
  }
  if (*(long *)(param_3 + 2) == 0) {
    local_1cc = local_1cc | 0x200000;
    local_1c0 = CONCAT44(local_1c0._4_4_,*(undefined4 *)(param_4 + 4));
  }
  else {
    local_1cc = local_1cc & 0xffdfffff;
    local_1c0 = *(long *)(param_3 + 2);
  }
  local_134 = *(undefined8 *)param_14;
  local_1b8 = *(undefined8 *)param_6;
  local_128 = *(undefined8 *)param_15;
  local_110 = *(undefined8 *)param_17;
  local_1a4 = *(undefined4 *)(param_6 + 0x14);
  local_11c = *(undefined8 *)param_16;
  local_dc = *(undefined8 *)param_23;
  local_18c = *(undefined4 *)(param_7 + 0x14);
  local_104 = *(undefined8 *)param_21;
  local_b8 = *(undefined8 *)param_26;
  local_180 = param_8[2];
  local_1b0 = *(undefined4 *)(param_6 + 8);
  local_94 = *(undefined8 *)param_29;
  local_17c = *(undefined8 *)(param_8 + 3);
  local_1ac = *(undefined8 *)(param_6 + 0xc);
  local_12c = param_14[2];
  local_1a0 = *(undefined8 *)param_7;
  local_e8 = *(undefined8 *)param_22;
  local_108 = param_17[2];
  local_198 = *(undefined4 *)(param_7 + 8);
  local_d0 = *(undefined8 *)param_24;
  local_d4 = param_23[2];
  local_194 = *(undefined8 *)(param_7 + 0xc);
  local_170 = *(undefined8 *)param_9;
  local_c8 = param_24[2];
  local_188 = *(undefined8 *)param_8;
  local_bc = param_25[2];
  local_174 = param_8[5];
  local_c4 = *(undefined8 *)param_25;
  local_b0 = param_26[2];
  local_168 = param_9[2];
  local_ac = *(undefined8 *)param_27;
  local_a4 = param_27[2];
  local_164 = *(undefined8 *)param_10;
  local_15c = param_10[2];
  local_98 = param_28[2];
  local_a0 = *(undefined8 *)param_28;
  local_88 = *(undefined8 *)param_30;
  local_158 = *(undefined8 *)param_11;
  local_8c = param_29[2];
  local_150 = param_11[2];
  local_7c = *in_stack_00000098;
  local_120 = param_15[2];
  local_144 = param_12[2];
  local_80 = param_30[2];
  local_138 = param_13[2];
  local_114 = param_16[2];
  local_fc = param_21[2];
  local_e0 = param_22[2];
  local_14c = *(undefined8 *)param_12;
  local_140 = *(undefined8 *)param_13;
  local_74 = *(undefined4 *)(in_stack_00000098 + 1);
  local_f8 = param_18;
  fStack_f4 = param_19;
  local_f0 = param_5;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    addLightJoint(this,(AddLightJointDesc *)&local_1d0);
  }
  else {
    FUN_009a805c(this + 0x1d8,&local_1d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1d0);
}


