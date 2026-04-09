// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791f80
// Entry Point: 00791f80
// Size: 108 bytes
// Signature: undefined FUN_00791f80(void)


void FUN_00791f80(uint *param_1)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1[4];
  uStack_34 = param_1[8];
  local_30 = param_1[0xc];
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::setCharacterControllerPosition(this,*param_1,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


