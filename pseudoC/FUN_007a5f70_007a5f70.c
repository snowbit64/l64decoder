// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5f70
// Entry Point: 007a5f70
// Size: 156 bytes
// Signature: undefined FUN_007a5f70(void)


void FUN_007a5f70(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  Bt2PhysicsRBObject *this;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(this + 8) ^ 0xffffffff) & 0x88) == 0) {
    local_38 = *param_2;
    uStack_34 = param_2[4];
    local_30 = param_2[8];
    Bt2PhysicsRBObject::getVelocityAtWorldPos(this,(Vector3 *)&local_38,(Vector3 *)&local_48);
    param_2[0x40] = local_48;
    param_2[0x42] = 4;
    param_2[0x44] = uStack_44;
    param_2[0x46] = 4;
    param_2[0x48] = local_40;
    param_2[0x4a] = 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


