// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInternalRigidBodyCollisionAABB
// Entry Point: 009ab514
// Size: 220 bytes
// Signature: undefined __thiscall getInternalRigidBodyCollisionAABB(Bt2ScenegraphPhysicsContext * this, btCollisionObject * param_1, Matrix4x4 * param_2, Vector3 * param_3, Vector3 * param_4)


/* Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionAABB(btCollisionObject const*,
   Matrix4x4 const&, Vector3&, Vector3&) */

void __thiscall
Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionAABB
          (Bt2ScenegraphPhysicsContext *this,btCollisionObject *param_1,Matrix4x4 *param_2,
          Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_94 = *(undefined4 *)(param_2 + 0x10);
  uStack_84 = *(undefined4 *)(param_2 + 0x14);
  local_98 = *(undefined4 *)param_2;
  local_88 = *(undefined4 *)(param_2 + 4);
  local_8c = 0;
  local_7c = 0;
  local_6c = 0;
  local_78 = *(undefined4 *)(param_2 + 8);
  local_90 = *(undefined4 *)(param_2 + 0x20);
  local_80 = *(undefined4 *)(param_2 + 0x24);
  local_5c = 0;
  uStack_74 = *(undefined4 *)(param_2 + 0x18);
  local_70 = *(undefined4 *)(param_2 + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x30);
  local_60 = *(undefined4 *)(param_2 + 0x38);
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),&local_98,&local_48,&local_58);
  *(undefined8 *)param_3 = local_48;
  *(undefined4 *)(param_3 + 8) = local_40;
  *(undefined8 *)param_4 = local_58;
  *(undefined4 *)(param_4 + 8) = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


