// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dispatchAllCollisionPairs
// Entry Point: 00f480bc
// Size: 112 bytes
// Signature: undefined __thiscall dispatchAllCollisionPairs(btCollisionDispatcher * this, btOverlappingPairCache * param_1, btDispatcherInfo * param_2, btDispatcher * param_3)


/* btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache*, btDispatcherInfo
   const&, btDispatcher*) */

void __thiscall
btCollisionDispatcher::dispatchAllCollisionPairs
          (btCollisionDispatcher *this,btOverlappingPairCache *param_1,btDispatcherInfo *param_2,
          btDispatcher *param_3)

{
  long lVar1;
  undefined **local_40;
  btDispatcherInfo *pbStack_38;
  btCollisionDispatcher *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &PTR__btOverlapCallback_01019348;
  pbStack_38 = param_2;
  local_30 = this;
  (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_40,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


