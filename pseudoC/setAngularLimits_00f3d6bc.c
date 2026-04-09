// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAngularLimits
// Entry Point: 00f3d6bc
// Size: 604 bytes
// Signature: undefined __thiscall setAngularLimits(btGeneric6DofConstraint * this, btConstraintInfo2 * param_1, int param_2, btTransform * param_3, btTransform * param_4, btVector3 * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8)


/* btGeneric6DofConstraint::setAngularLimits(btTypedConstraint::btConstraintInfo2*, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
btGeneric6DofConstraint::setAngularLimits
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,int param_2,btTransform *param_3
          ,btTransform *param_4,btVector3 *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(this + 0x3b4) != 0) || (this[0x3a8] != (btGeneric6DofConstraint)0x0)) {
    uStack_78 = *(undefined8 *)(this + 0x4d8);
    local_80 = *(undefined8 *)(this + 0x4d0);
    uVar1 = *(uint *)(this + 0x530);
    if ((uVar1 >> 9 & 1) == 0) {
      *(undefined4 *)(this + 0x398) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 10 & 1) == 0) {
      *(undefined4 *)(this + 0x3a0) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xb & 1) == 0) {
      *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 4);
    }
    iVar3 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x37c),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_80,1,0);
    param_2 = iVar3 + param_2;
  }
  if ((*(int *)(this + 0x3f4) != 0) || (this[1000] != (btGeneric6DofConstraint)0x0)) {
    uStack_78 = *(undefined8 *)(this + 0x4e8);
    local_80 = *(undefined8 *)(this + 0x4e0);
    uVar1 = *(uint *)(this + 0x530);
    if ((uVar1 >> 0xc & 1) == 0) {
      *(undefined4 *)(this + 0x3d8) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      *(undefined4 *)(this + 0x3e0) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xe & 1) == 0) {
      *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 4);
    }
    iVar3 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x3bc),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_80,1,0);
    param_2 = iVar3 + param_2;
  }
  if ((*(int *)(this + 0x434) != 0) || (this[0x428] != (btGeneric6DofConstraint)0x0)) {
    uStack_78 = *(undefined8 *)(this + 0x4f8);
    local_80 = *(undefined8 *)(this + 0x4f0);
    uVar1 = *(uint *)(this + 0x530);
    if ((uVar1 >> 0xf & 1) == 0) {
      *(undefined4 *)(this + 0x418) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x10 & 1) == 0) {
      *(undefined4 *)(this + 0x420) = **(undefined4 **)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      *(undefined4 *)(this + 0x41c) = *(undefined4 *)(param_1 + 4);
    }
    iVar3 = get_limit_motor_info2
                      (this,(btRotationalLimitMotor *)(this + 0x3fc),param_3,param_4,param_5,param_6
                       ,param_7,param_8,param_1,param_2,(btVector3 *)&local_80,1,0);
    param_2 = iVar3 + param_2;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


