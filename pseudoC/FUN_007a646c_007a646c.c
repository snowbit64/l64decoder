// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a646c
// Entry Point: 007a646c
// Size: 124 bytes
// Signature: undefined FUN_007a646c(void)


void FUN_007a646c(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_2[4];
  uStack_44 = param_2[8];
  local_40 = param_2[0xc];
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeSteeringCenter
            (this,param_1,*param_2,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


