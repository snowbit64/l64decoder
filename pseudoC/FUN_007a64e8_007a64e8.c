// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a64e8
// Entry Point: 007a64e8
// Size: 148 bytes
// Signature: undefined FUN_007a64e8(void)


void FUN_007a64e8(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::computeWheelShapeTireForces
            (this,param_1,*param_2,(float)param_2[4],(float)param_2[8],(float)param_2[0xc],
             (float *)((long)&local_40 + 4),(float *)&local_40);
  param_2[0x40] = local_40._4_4_;
  param_2[0x42] = 4;
  param_2[0x44] = (uint)local_40;
  param_2[0x46] = 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


