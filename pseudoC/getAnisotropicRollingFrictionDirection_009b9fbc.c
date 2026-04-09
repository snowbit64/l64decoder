// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnisotropicRollingFrictionDirection
// Entry Point: 009b9fbc
// Size: 84 bytes
// Signature: undefined getAnisotropicRollingFrictionDirection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCylinderShape::getAnisotropicRollingFrictionDirection() const */

void btCylinderShape::getAnisotropicRollingFrictionDirection(void)

{
  long lVar1;
  long in_x0;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)((long)&local_28 + (long)*(int *)(in_x0 + 0x44) * 4) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_28,local_28._4_4_,(undefined4)local_20,local_20._4_4_);
}


