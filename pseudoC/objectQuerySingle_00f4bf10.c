// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: objectQuerySingle
// Entry Point: 00f4bf10
// Size: 96 bytes
// Signature: undefined __cdecl objectQuerySingle(btConvexShape * param_1, btTransform * param_2, btTransform * param_3, btCollisionObject * param_4, btCollisionShape * param_5, btTransform * param_6, ConvexResultCallback * param_7, float param_8, bool param_9)


/* btCollisionWorld::objectQuerySingle(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionObject*, btCollisionShape const*, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float, bool) */

void btCollisionWorld::objectQuerySingle
               (btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
               btCollisionObject *param_4,btCollisionShape *param_5,btTransform *param_6,
               ConvexResultCallback *param_7,float param_8,bool param_9)

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
  pbStack_48 = param_5;
  local_40 = param_4;
  pbStack_38 = param_6;
  objectQuerySingleInternal
            ((btCollisionWorld *)param_1,(btConvexShape *)param_2,param_3,(btTransform *)&local_50,
             (btCollisionObjectWrapper *)param_7,(ConvexResultCallback *)(ulong)param_9,param_8,
             SUB81(param_7,0));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


