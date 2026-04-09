// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f525dc
// Size: 272 bytes
// Signature: undefined __thiscall rayTest(btGhostObject * this, btVector3 * param_1, btVector3 * param_2, RayResultCallback * param_3)


/* btGhostObject::rayTest(btVector3 const&, btVector3 const&, btCollisionWorld::RayResultCallback&)
   const */

void __thiscall
btGhostObject::rayTest
          (btGhostObject *this,btVector3 *param_1,btVector3 *param_2,RayResultCallback *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  local_58 = *(undefined8 *)param_1;
  local_88 = 0x3f800000;
  local_7c = 0;
  local_84 = 0;
  uStack_90 = *(undefined8 *)(param_2 + 8);
  local_98 = *(undefined8 *)param_2;
  local_74 = 0x3f800000;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_bc = 0;
  local_c4 = 0;
  local_b4 = 0x3f800000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0x3f800000;
  if (0 < *(int *)(this + 0x154)) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(this + 0x160) + lVar3 * 8);
      uVar2 = (**(code **)(*(long *)param_3 + 0x10))(param_3,*(undefined8 *)(lVar4 + 0xc0));
      if ((uVar2 & 1) != 0) {
        uStack_e8 = *(undefined8 *)(lVar4 + 200);
        lStack_d8 = lVar4 + 8;
        local_f0 = 0;
        local_d0 = 0xffffffffffffffff;
        local_e0 = lVar4;
        btCollisionWorld::rayTestSingleInternal
                  ((btTransform *)&local_88,(btTransform *)&local_c8,
                   (btCollisionObjectWrapper *)&local_f0,param_3);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x154));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


