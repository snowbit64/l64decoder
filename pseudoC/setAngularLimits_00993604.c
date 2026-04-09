// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAngularLimits
// Entry Point: 00993604
// Size: 508 bytes
// Signature: undefined __thiscall setAngularLimits(Bt2D6Joint * this, btConstraintInfo2 * param_1, float param_2, int param_3, btTransform * param_4, btTransform * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8, btVector3 * param_9)


/* Bt2D6Joint::setAngularLimits(btTypedConstraint::btConstraintInfo2*, float, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
Bt2D6Joint::setAngularLimits
          (Bt2D6Joint *this,btConstraintInfo2 *param_1,float param_2,int param_3,
          btTransform *param_4,btTransform *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8,btVector3 *param_9)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_88 = 0;
  uStack_84 = 1;
  local_80 = 2;
  switch(*(undefined4 *)(this + 0x28c)) {
  case 0:
    local_88 = 0;
    uVar6 = 0x200000001;
    break;
  case 1:
    local_88 = 0;
    uVar6 = 0x100000002;
    break;
  case 2:
    local_88 = 1;
    uVar6 = 0x200000000;
    break;
  case 3:
    local_88 = 1;
    uVar6 = 2;
    break;
  case 4:
    local_88 = 2;
    uVar6 = 0x100000000;
    break;
  case 5:
    local_88 = 2;
    uVar6 = 1;
    break;
  default:
    goto switchD_00993690_caseD_6;
  }
  uStack_84 = (undefined4)uVar6;
  local_80 = (undefined4)((ulong)uVar6 >> 0x20);
switchD_00993690_caseD_6:
  lVar5 = 0;
  iVar3 = local_88;
  while( true ) {
    lVar4 = (long)iVar3;
    if ((*(int *)(this + (long)iVar3 * 0x44 + 0x200) != 0) ||
       (this[lVar4 * 0x44 + 0x1e0] != (Bt2D6Joint)0x0)) {
      uStack_98 = *(undefined8 *)(this + lVar4 * 0x10 + 0x338);
      local_a0 = *(undefined8 *)(this + lVar4 * 0x10 + 0x330);
      uVar1 = *(int *)(this + 0x36c) >> (iVar3 * 2 + 6U & 0x1f);
      if ((uVar1 & 1) == 0) {
        *(float *)(this + lVar4 * 0x44 + 0x1d4) = param_2;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        *(undefined4 *)(this + lVar4 * 0x44 + 0x1d0) = *(undefined4 *)(param_1 + 4);
      }
      iVar3 = setLimitMotor(this,(RotationalLimitMotor *)(this + (long)iVar3 * 0x44 + 0x1c0),iVar3,
                            param_4,param_5,param_6,param_7,param_8,param_9,param_1,param_3,
                            (btVector3 *)&local_a0,true,false);
      param_3 = iVar3 + param_3;
    }
    if (lVar5 == 8) break;
    iVar3 = *(int *)(((ulong)&local_88 | 4) + lVar5);
    lVar5 = lVar5 + 4;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


