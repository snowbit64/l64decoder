// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFixedBody
// Entry Point: 00f31b38
// Size: 224 bytes
// Signature: undefined getFixedBody(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btTypedConstraint::getFixedBody() */

undefined8 * btTypedConstraint::getFixedBody(void)

{
  long lVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_02125608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02125608), iVar2 != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    btRigidBody::btRigidBody
              ((btRigidBody *)&DAT_02125348,0.0,(btMotionState *)0x0,(btCollisionShape *)0x0,
               (btVector3 *)&local_38);
    __cxa_atexit(btRigidBody::~btRigidBody,&DAT_02125348,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02125608);
  }
  DAT_021254e4 = 0;
  uRam0000000002125500 = 0;
  _DAT_021254f8 = 0;
  DAT_02125428 = DAT_02125428 | 1;
  uRam0000000002125520 = 0;
  _DAT_02125518 = 0;
  uRam00000000021255d8 = 0;
  _DAT_021255d0 = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return &DAT_02125348;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


