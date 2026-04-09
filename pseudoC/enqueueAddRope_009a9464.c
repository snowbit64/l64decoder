// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddRope
// Entry Point: 009a9464
// Size: 336 bytes
// Signature: undefined __thiscall enqueueAddRope(Bt2ScenegraphPhysicsContext * this, uint param_1, TransformGroup * * param_2, float param_3, float param_4, float param_5, uint param_6, TransformGroup * param_7, bool param_8, float param_9, float param_10, float param_11, TransformGroup * param_12, bool param_13, float param_14, float param_15, float param_16, bool param_17)


/* Bt2ScenegraphPhysicsContext::enqueueAddRope(unsigned int, TransformGroup**, float, float, float,
   unsigned int, TransformGroup*, bool, float, float, float, TransformGroup*, bool, float, float,
   float, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddRope
          (Bt2ScenegraphPhysicsContext *this,uint param_1,TransformGroup **param_2,float param_3,
          float param_4,float param_5,uint param_6,TransformGroup *param_7,bool param_8,
          float param_9,float param_10,float param_11,TransformGroup *param_12,bool param_13,
          float param_14,float param_15,float param_16,bool param_17)

{
  long lVar1;
  int local_108;
  uint uStack_104;
  void *local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  uint local_ec;
  TransformGroup *local_e8;
  undefined local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  TransformGroup *local_d0;
  undefined local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  local_108 = *(int *)(this + 0x2a8) + 1;
  *(int *)(this + 0x2a8) = local_108;
  uStack_104 = param_1;
  local_100 = operator_new__((ulong)param_1 << 3);
  memcpy(local_100,param_2,(ulong)param_1 << 3);
  local_bc = param_16;
  local_b8 = param_17;
  local_f8 = param_3;
  fStack_f4 = param_4;
  local_f0 = param_5;
  local_ec = param_6;
  local_e8 = param_7;
  local_e0 = param_8;
  local_dc = param_9;
  fStack_d8 = param_10;
  local_d4 = param_11;
  local_d0 = param_12;
  local_c8 = param_13;
  local_c4 = param_14;
  fStack_c0 = param_15;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    addRope(this,(AddRopeDesc *)&local_108);
  }
  else {
    FUN_009a95b4(this + 0x2d8,&local_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_108);
}


