// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetLightJointBreakForce
// Entry Point: 009a8df0
// Size: 112 bytes
// Signature: undefined __cdecl enqueueSetLightJointBreakForce(uint param_1, float param_2, float param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetLightJointBreakForce(unsigned int, float, float) */

void Bt2ScenegraphPhysicsContext::enqueueSetLightJointBreakForce
               (uint param_1,float param_2,float param_3)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint in_w1;
  JointCommand local_58 [4];
  undefined4 uStack_54;
  float local_50 [10];
  long local_28;
  
  this = (Bt2ScenegraphPhysicsContext *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_54 = 7;
  local_50[0] = param_2;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    setJointBreakForce(this,in_w1,(SetJointBreakForce *)local_50);
  }
  else {
    SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u>::push_back
              ((SimpleArray<Bt2ScenegraphPhysicsContext::JointCommand,true,32u> *)(this + 0x208),
               local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


