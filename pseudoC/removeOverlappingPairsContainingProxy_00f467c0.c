// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingPairsContainingProxy
// Entry Point: 00f467c0
// Size: 92 bytes
// Signature: undefined __cdecl removeOverlappingPairsContainingProxy(btBroadphaseProxy * param_1, btDispatcher * param_2)


/* btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy*,
   btDispatcher*) */

void btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy
               (btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  long lVar1;
  undefined **local_38;
  btDispatcher *pbStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = &PTR__btOverlapCallback_010191a8;
  pbStack_30 = param_2;
  (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


