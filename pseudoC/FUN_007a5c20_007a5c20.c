// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5c20
// Entry Point: 007a5c20
// Size: 144 bytes
// Signature: undefined FUN_007a5c20(void)


void FUN_007a5c20(TransformGroup *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *this;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(lVar2 + 8) ^ 0xffffffff) & 0x88) == 0) {
    local_48 = *param_2;
    uStack_44 = param_2[4];
    local_40 = param_2[8];
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddTorque(this,param_1,(Vector3 *)&local_48,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


