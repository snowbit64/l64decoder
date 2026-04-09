// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueCreateCharacterController
// Entry Point: 009a9f30
// Size: 124 bytes
// Signature: undefined __thiscall enqueueCreateCharacterController(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint param_7, float param_8)


/* Bt2ScenegraphPhysicsContext::enqueueCreateCharacterController(TransformGroup*, float, float,
   float, float, float, unsigned int, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueCreateCharacterController
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,uint param_7,float param_8)

{
  long lVar1;
  int local_58 [2];
  TransformGroup *local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  uint local_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58[0] = *(int *)(this + 800);
  *(int *)(this + 800) = local_58[0] + 1;
  local_50 = param_1;
  local_48 = param_2;
  fStack_44 = param_3;
  local_40 = param_4;
  fStack_3c = param_5;
  local_38 = param_6;
  local_34 = param_7;
  local_30 = param_8;
  FUN_009a9fac(this + 0x340,local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_58[0]);
}


