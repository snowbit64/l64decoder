// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAngularMotionDisc
// Entry Point: 00f5efe8
// Size: 116 bytes
// Signature: undefined getAngularMotionDisc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionShape::getAngularMotionDisc() const */

float btCollisionShape::getAngularMotionDisc(void)

{
  long lVar1;
  long *in_x0;
  undefined4 uVar2;
  float fVar3;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*in_x0 + 0x18))(in_x0,&local_38,&local_3c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = NEON_fmadd(uStack_34,uStack_34,local_38 * local_38);
    fVar3 = (float)NEON_fmadd(local_30,local_30,uVar2);
    return SQRT(fVar3) + local_3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


