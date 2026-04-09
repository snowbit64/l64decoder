// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a65bc
// Entry Point: 007a65bc
// Size: 128 bytes
// Signature: undefined FUN_007a65bc(void)


void FUN_007a65bc(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint uVar2;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  uVar2 = Bt2ScenegraphPhysicsContext::getWheelShapeContactObject
                    (this,param_1,*param_2,(int *)&local_3c);
  param_2[0x40] = uVar2;
  param_2[0x42] = 1;
  param_2[0x44] = local_3c;
  param_2[0x46] = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


