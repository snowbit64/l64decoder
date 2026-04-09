// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildLinearJacobian
// Entry Point: 00f3e374
// Size: 320 bytes
// Signature: undefined __thiscall buildLinearJacobian(btGeneric6DofConstraint * this, btJacobianEntry * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4)


/* btGeneric6DofConstraint::buildLinearJacobian(btJacobianEntry&, btVector3 const&, btVector3
   const&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::buildLinearJacobian
          (btGeneric6DofConstraint *this,btJacobianEntry *param_1,btVector3 *param_2,
          btVector3 *param_3,btVector3 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  local_58 = *(undefined4 *)(lVar1 + 8);
  local_4c = 0;
  uStack_40 = *(undefined4 *)(lVar1 + 0x2c);
  uStack_30 = *(undefined4 *)(lVar1 + 0x30);
  uStack_54 = *(undefined4 *)(lVar1 + 0x18);
  local_44 = *(undefined4 *)(lVar1 + 0x1c);
  local_48 = *(undefined4 *)(lVar1 + 0xc);
  local_3c = 0;
  local_50 = *(undefined4 *)(lVar1 + 0x28);
  local_38 = *(undefined4 *)(lVar1 + 0x10);
  local_34 = *(undefined4 *)(lVar1 + 0x20);
  local_2c = 0;
  local_90 = *(float *)(param_3 + 8) - *(float *)(lVar1 + 0x40);
  local_98 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20),
                      (float)*(undefined8 *)param_3 - (float)*(undefined8 *)(lVar1 + 0x38));
  uStack_70 = *(undefined4 *)(lVar2 + 0x2c);
  local_88 = *(undefined4 *)(lVar2 + 8);
  local_7c = 0;
  local_78 = *(undefined4 *)(lVar2 + 0xc);
  local_a8 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20),
                      (float)*(undefined8 *)param_4 - (float)*(undefined8 *)(lVar2 + 0x38));
  uStack_84 = *(undefined4 *)(lVar2 + 0x18);
  local_74 = *(undefined4 *)(lVar2 + 0x1c);
  local_6c = 0;
  local_80 = *(undefined4 *)(lVar2 + 0x28);
  local_8c = 0;
  local_68 = *(undefined4 *)(lVar2 + 0x10);
  uStack_60 = *(undefined4 *)(lVar2 + 0x30);
  local_64 = *(undefined4 *)(lVar2 + 0x20);
  local_5c = 0;
  local_a0 = *(float *)(param_4 + 8) - *(float *)(lVar2 + 0x40);
  local_9c = 0;
  btJacobianEntry::btJacobianEntry
            (param_1,(btMatrix3x3 *)&local_58,(btMatrix3x3 *)&local_88,(btVector3 *)&local_98,
             (btVector3 *)&local_a8,param_2,(btVector3 *)(lVar1 + 0x1d0),*(float *)(lVar1 + 0x19c),
             (btVector3 *)(lVar2 + 0x1d0),*(float *)(lVar2 + 0x19c));
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


