// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLinearLimits
// Entry Point: 00f3d918
// Size: 556 bytes
// Signature: undefined __thiscall setLinearLimits(btGeneric6DofConstraint * this, btConstraintInfo2 * param_1, int param_2, btTransform * param_3, btTransform * param_4, btVector3 * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8)


/* btGeneric6DofConstraint::setLinearLimits(btTypedConstraint::btConstraintInfo2*, int, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

int __thiscall
btGeneric6DofConstraint::setLinearLimits
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,int param_2,btTransform *param_3
          ,btTransform *param_4,btVector3 *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8)

{
  long lVar1;
  btGeneric6DofConstraint bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 local_90;
  btGeneric6DofConstraint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  uVar9 = 0;
  lVar7 = 0;
  lVar8 = 0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_7c = 0;
  local_9c = 0x3e4ccccd00000000;
  do {
    bVar2 = this[lVar8 + 0x32c];
    if (*(int *)(this + lVar7 + 0x370) == 0) {
      if (this[lVar8 + 0x32c] != (btGeneric6DofConstraint)0x0) {
        bVar2 = (btGeneric6DofConstraint)0x1;
        goto LAB_00f3da20;
      }
    }
    else {
LAB_00f3da20:
      local_8c = bVar2;
      uStack_84 = *(undefined4 *)(this + lVar7 + 0x360);
      local_88 = *(undefined4 *)(this + lVar7 + 0x350);
      local_90 = 0;
      uStack_ac = *(undefined4 *)(this + lVar7 + 0x340);
      local_a8 = 0;
      uStack_b4 = *(undefined4 *)(this + lVar7 + 0x2d0);
      local_a4 = NEON_rev64(*(undefined8 *)(this + 0x2f0),4);
      local_b8 = *(undefined4 *)(this + lVar7 + 0x2c0);
      local_6c = 0;
      local_b0 = *(undefined4 *)(this + lVar7 + 0x330);
      local_78 = *(undefined4 *)(this + lVar7 + 0x440);
      uStack_74 = *(undefined4 *)(this + lVar7 + 0x450);
      local_70 = *(undefined4 *)(this + lVar7 + 0x460);
      uVar4 = *(int *)(this + 0x530) >> (uVar9 & 0x1f);
      if ((uVar4 & 1) == 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x38);
      }
      else {
        puVar5 = (undefined4 *)(this + lVar7 + 0x2fc);
      }
      if ((uVar4 >> 1 & 1) == 0) {
        puVar6 = *(undefined4 **)(param_1 + 0x38);
      }
      else {
        puVar6 = (undefined4 *)(this + lVar7 + 0x31c);
      }
      uStack_94 = *puVar6;
      puVar6 = (undefined4 *)(param_1 + 4);
      if ((uVar4 & 4) != 0) {
        puVar6 = (undefined4 *)(this + lVar7 + 0x30c);
      }
      local_9c = CONCAT44(*puVar6,*puVar5);
      uVar4 = (uint)(byte)this[0x52d];
      if (uVar4 != 0) {
        uVar4 = (int)lVar8 + 1;
        if (*(int *)(this + ((ulong)(uVar4 + ((uVar4 & 0xff) / 3) * -3) & 0xff) * 0x40 + 0x3b4) == 0
           ) {
          uVar4 = 1;
        }
        else {
          uVar4 = (int)lVar8 + 2;
          uVar4 = (uint)(*(int *)(this + ((ulong)(uVar4 + ((uVar4 & 0xff) / 3) * -3) & 0xff) * 0x40
                                         + 0x3b4) == 0);
        }
      }
      local_80 = *(int *)(this + lVar7 + 0x370);
      iVar3 = get_limit_motor_info2
                        (this,(btRotationalLimitMotor *)&local_b8,param_3,param_4,param_5,param_6,
                         param_7,param_8,param_1,param_2,(btVector3 *)&local_78,0,uVar4);
      param_2 = iVar3 + param_2;
    }
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + 4;
    uVar9 = uVar9 + 3;
    if (lVar7 == 0xc) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


