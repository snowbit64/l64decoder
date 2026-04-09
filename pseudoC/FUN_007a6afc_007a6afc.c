// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6afc
// Entry Point: 007a6afc
// Size: 144 bytes
// Signature: undefined FUN_007a6afc(void)


void FUN_007a6afc(TransformGroup *param_1,long param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::getMotorRotationSpeed(this,param_1,&local_3c,&fStack_40,&local_44);
  *(float *)(param_2 + 0x100) = local_3c;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(float *)(param_2 + 0x110) = fStack_40;
  *(float *)(param_2 + 0x120) = local_44;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


