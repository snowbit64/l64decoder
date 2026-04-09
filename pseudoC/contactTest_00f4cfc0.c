// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contactTest
// Entry Point: 00f4cfc0
// Size: 176 bytes
// Signature: undefined __thiscall contactTest(btCollisionWorld * this, btCollisionObject * param_1, ContactResultCallback * param_2, btDispatcher * param_3)


/* btCollisionWorld::contactTest(btCollisionObject*, btCollisionWorld::ContactResultCallback&,
   btDispatcher*) */

void __thiscall
btCollisionWorld::contactTest
          (btCollisionWorld *this,btCollisionObject *param_1,ContactResultCallback *param_2,
          btDispatcher *param_3)

{
  long lVar1;
  undefined **local_90;
  btCollisionObject *pbStack_88;
  btCollisionWorld *local_80;
  btDispatcher *pbStack_78;
  ContactResultCallback *local_70;
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),param_1 + 8,auStack_58,auStack_68);
  local_90 = &PTR__btBroadphaseAabbCallback_010197c0;
  pbStack_88 = param_1;
  local_80 = this;
  pbStack_78 = param_3;
  local_70 = param_2;
  (**(code **)(**(long **)(this + 0x60) + 0x38))
            (*(long **)(this + 0x60),auStack_58,auStack_68,&local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


