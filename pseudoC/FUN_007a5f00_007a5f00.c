// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5f00
// Entry Point: 007a5f00
// Size: 112 bytes
// Signature: undefined FUN_007a5f00(void)


void FUN_007a5f00(TransformGroup *param_1,undefined4 *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[4];
  local_30 = param_2[8];
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetVelocity(this,param_1,(Vector3 *)&local_38,false);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


