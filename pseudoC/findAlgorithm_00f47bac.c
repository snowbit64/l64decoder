// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findAlgorithm
// Entry Point: 00f47bac
// Size: 136 bytes
// Signature: undefined __thiscall findAlgorithm(btCollisionDispatcher * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btPersistentManifold * param_3)


/* btCollisionDispatcher::findAlgorithm(btCollisionObjectWrapper const*, btCollisionObjectWrapper
   const*, btPersistentManifold*) */

void __thiscall
btCollisionDispatcher::findAlgorithm
          (btCollisionDispatcher *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btPersistentManifold *param_3)

{
  long lVar1;
  btCollisionDispatcher *local_38;
  btPersistentManifold *pbStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = this;
  pbStack_30 = param_3;
  (**(code **)(**(long **)(this + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8 +
                                  (long)*(int *)(*(long *)(param_1 + 8) + 8) * 0x120 + 0x80) + 0x10)
  )(*(long **)(this + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8 +
                      (long)*(int *)(*(long *)(param_1 + 8) + 8) * 0x120 + 0x80),&local_38,param_1,
    param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


