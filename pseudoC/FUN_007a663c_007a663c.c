// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a663c
// Entry Point: 007a663c
// Size: 192 bytes
// Signature: undefined FUN_007a663c(void)


void FUN_007a663c(TransformGroup *param_1,uint *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this;
  uint uVar2;
  bool local_50 [4];
  float local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = false;
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::getWheelShapeContactPoint
            (this,param_1,*param_2,(Vector3 *)&local_48,&local_4c,local_50);
  uVar2 = (uint)local_50[0];
  if (local_50[0] == false) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = local_48;
    param_2[0x44] = uStack_44;
    param_2[0x48] = local_40;
    param_2[0x4c] = (uint)local_4c;
  }
  param_2[0x42] = uVar2;
  param_2[0x46] = uVar2;
  param_2[0x4a] = uVar2;
  param_2[0x4e] = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


