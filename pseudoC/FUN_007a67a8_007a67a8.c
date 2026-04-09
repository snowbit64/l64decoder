// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a67a8
// Entry Point: 007a67a8
// Size: 144 bytes
// Signature: undefined FUN_007a67a8(void)


void FUN_007a67a8(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint uVar2;
  bool local_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = false;
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::getWheelShapeContactForce(this,param_1,*param_2,&local_3c,local_40);
  uVar2 = (uint)local_40[0];
  if (local_40[0] == false) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = (uint)local_3c;
  }
  param_2[0x42] = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


