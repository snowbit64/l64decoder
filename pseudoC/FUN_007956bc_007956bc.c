// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007956bc
// Entry Point: 007956bc
// Size: 120 bytes
// Signature: undefined FUN_007956bc(void)


void FUN_007956bc(uint *param_1)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  uVar2 = Bt2ScenegraphPhysicsContext::getRopeLength(this,*param_1,&local_2c);
  param_1[0x40] = uVar2;
  param_1[0x42] = 4;
  param_1[0x44] = local_2c;
  param_1[0x46] = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


