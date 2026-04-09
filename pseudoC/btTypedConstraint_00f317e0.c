// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btTypedConstraint
// Entry Point: 00f317e0
// Size: 312 bytes
// Signature: undefined __thiscall btTypedConstraint(btTypedConstraint * this, btTypedConstraintType param_1, btRigidBody * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* btTypedConstraint::btTypedConstraint(btTypedConstraintType, btRigidBody&) */

void __thiscall
btTypedConstraint::btTypedConstraint
          (btTypedConstraint *this,btTypedConstraintType param_1,btRigidBody *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0e30;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(btRigidBody **)(this + 0x28) = param_2;
  *(btTypedConstraintType *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined2 *)(this + 0x1c) = 1;
  if ((DAT_02125608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_02125608);
    if (iVar2 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      btRigidBody::btRigidBody
                ((btRigidBody *)&DAT_02125348,0.0,(btMotionState *)0x0,(btCollisionShape *)0x0,
                 (btVector3 *)&local_38);
      __cxa_atexit(btRigidBody::~btRigidBody,&DAT_02125348,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_02125608);
    }
  }
  DAT_021254e4 = 0;
  uRam00000000021255d8 = 0;
  _DAT_021255d0 = 0;
  DAT_02125428 = DAT_02125428 | 1;
  uRam0000000002125500 = 0;
  _DAT_021254f8 = 0;
  uRam0000000002125520 = 0;
  _DAT_02125518 = 0;
  *(undefined8 **)(this + 0x30) = &DAT_02125348;
  *(undefined8 *)(this + 0x38) = 0x3e99999a00000000;
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


