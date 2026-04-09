// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTestSingle
// Entry Point: 00f4beb4
// Size: 92 bytes
// Signature: undefined __cdecl rayTestSingle(btTransform * param_1, btTransform * param_2, btCollisionObject * param_3, btCollisionShape * param_4, btTransform * param_5, RayResultCallback * param_6)


/* btCollisionWorld::rayTestSingle(btTransform const&, btTransform const&, btCollisionObject*,
   btCollisionShape const*, btTransform const&, btCollisionWorld::RayResultCallback&) */

void btCollisionWorld::rayTestSingle
               (btTransform *param_1,btTransform *param_2,btCollisionObject *param_3,
               btCollisionShape *param_4,btTransform *param_5,RayResultCallback *param_6)

{
  long lVar1;
  undefined8 local_50;
  btCollisionShape *pbStack_48;
  btCollisionObject *local_40;
  btTransform *pbStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_30 = 0xffffffffffffffff;
  pbStack_48 = param_4;
  local_40 = param_3;
  pbStack_38 = param_5;
  rayTestSingleInternal(param_1,param_2,(btCollisionObjectWrapper *)&local_50,param_6);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


