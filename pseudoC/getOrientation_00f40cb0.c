// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrientation
// Entry Point: 00f40cb0
// Size: 84 bytes
// Signature: undefined getOrientation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btRigidBody::getOrientation() const */

void btRigidBody::getOrientation(void)

{
  long lVar1;
  long in_x0;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  btMatrix3x3::getRotation((btMatrix3x3 *)(in_x0 + 8),(btQuaternion *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30,uStack_2c);
}


