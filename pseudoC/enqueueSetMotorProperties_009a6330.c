// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetMotorProperties
// Entry Point: 009a6330
// Size: 380 bytes
// Signature: undefined __thiscall enqueueSetMotorProperties(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint param_8, float * param_9, float * param_10, bool param_11)


/* Bt2ScenegraphPhysicsContext::enqueueSetMotorProperties(TransformGroup*, float, float, float,
   float, float, float, unsigned int, float const*, float const*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetMotorProperties
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,uint param_8,float *param_9,
          float *param_10,bool param_11)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float *__dest;
  float *__dest_00;
  ulong __n;
  TransformGroup *local_d8;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  uint local_b0;
  float *local_a8;
  float *pfStack_a0;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if ((((param_1 == (TransformGroup *)0x0) ||
       (lVar3 = RawTransformGroup::getPhysicsObject(), lVar3 == 0)) ||
      (uVar1 = *(uint *)(lVar3 + 8), ((uVar1 ^ 0xffffffff) & 0x88) != 0)) || ((uVar1 & 3) == 0)) {
    if (param_11) {
      if (param_9 != (float *)0x0) {
        operator_delete__(param_9);
      }
      if (param_10 != (float *)0x0) {
        operator_delete__(param_10);
      }
    }
  }
  else {
    local_d0 = 0xf;
    local_d8 = param_1;
    local_c8 = param_2;
    fStack_c4 = param_3;
    local_c0 = param_4;
    fStack_bc = param_5;
    local_b8 = param_6;
    fStack_b4 = param_7;
    local_b0 = param_8;
    local_a8 = param_9;
    pfStack_a0 = param_10;
    if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
      setMotorProperties(this,param_1,(SetMotorProperties *)&local_c8,param_11);
    }
    else {
      if (!param_11) {
        __n = (ulong)param_8 << 2;
        __dest = (float *)operator_new__(__n);
        memcpy(__dest,param_9,__n);
        __dest_00 = (float *)operator_new__(__n);
        memcpy(__dest_00,param_10,__n);
        local_a8 = __dest;
        pfStack_a0 = __dest_00;
      }
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (this + 0x170),(TransformCommand *)&local_d8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


