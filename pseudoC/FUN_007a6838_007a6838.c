// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6838
// Entry Point: 007a6838
// Size: 172 bytes
// Signature: undefined FUN_007a6838(void)


void FUN_007a6838(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  float local_50;
  float local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::getWheelShapePosition
            (this,param_1,*param_2,(Vector3 *)&local_48,&local_4c,&local_50);
  param_2[0x40] = local_48;
  param_2[0x44] = uStack_44;
  param_2[0x48] = local_40;
  param_2[0x4c] = (uint)local_4c;
  param_2[0x42] = 4;
  param_2[0x46] = 4;
  param_2[0x4a] = 4;
  param_2[0x4e] = 4;
  param_2[0x50] = (uint)local_50;
  param_2[0x52] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


