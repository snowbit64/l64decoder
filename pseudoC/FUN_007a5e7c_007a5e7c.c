// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5e7c
// Entry Point: 007a5e7c
// Size: 132 bytes
// Signature: undefined FUN_007a5e7c(void)


void FUN_007a5e7c(undefined8 param_1,long param_2)

{
  long lVar1;
  Bt2PhysicsRBObject *this;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(this + 8) ^ 0xffffffff) & 0x88) == 0) {
    Bt2PhysicsRBObject::getAngularVelocity(this,(Vector3 *)&local_38);
    *(undefined4 *)(param_2 + 0x100) = local_38;
    *(undefined4 *)(param_2 + 0x108) = 4;
    *(undefined4 *)(param_2 + 0x110) = uStack_34;
    *(undefined4 *)(param_2 + 0x118) = 4;
    *(undefined4 *)(param_2 + 0x120) = local_30;
    *(undefined4 *)(param_2 + 0x128) = 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


