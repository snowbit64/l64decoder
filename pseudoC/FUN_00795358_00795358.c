// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795358
// Entry Point: 00795358
// Size: 120 bytes
// Signature: undefined FUN_00795358(void)


void FUN_00795358(uint *param_1)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1[0xc];
  uStack_34 = param_1[0x10];
  local_30 = param_1[0x14];
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointDrive
            (this,*param_1,*(bool *)(param_1 + 4),*(bool *)(param_1 + 8),(Vector3 *)&local_38,
             (float)param_1[0x18]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


