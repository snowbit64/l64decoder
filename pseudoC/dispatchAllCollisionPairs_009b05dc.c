// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dispatchAllCollisionPairs
// Entry Point: 009b05dc
// Size: 112 bytes
// Signature: undefined __thiscall dispatchAllCollisionPairs(Bt2CollisionDispatcher * this, btOverlappingPairCache * param_1, btDispatcherInfo * param_2, btDispatcher * param_3)


/* Bt2PhysicsContextManager::Bt2CollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache*,
   btDispatcherInfo const&, btDispatcher*) */

void __thiscall
Bt2PhysicsContextManager::Bt2CollisionDispatcher::dispatchAllCollisionPairs
          (Bt2CollisionDispatcher *this,btOverlappingPairCache *param_1,btDispatcherInfo *param_2,
          btDispatcher *param_3)

{
  long lVar1;
  undefined **local_40;
  btDispatcherInfo *pbStack_38;
  Bt2CollisionDispatcher *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &PTR__btOverlapCallback_00fe14c0;
  pbStack_38 = param_2;
  local_30 = this;
  (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_40,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


