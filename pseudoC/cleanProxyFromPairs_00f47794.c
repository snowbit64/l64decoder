// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanProxyFromPairs
// Entry Point: 00f47794
// Size: 96 bytes
// Signature: undefined __thiscall cleanProxyFromPairs(btSortedOverlappingPairCache * this, btBroadphaseProxy * param_1, btDispatcher * param_2)


/* btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy*, btDispatcher*) */

void __thiscall
btSortedOverlappingPairCache::cleanProxyFromPairs
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  long lVar1;
  undefined **local_48;
  btBroadphaseProxy *pbStack_40;
  btSortedOverlappingPairCache *local_38;
  btDispatcher *pbStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = &PTR__btOverlapCallback_010191e8;
  pbStack_40 = param_1;
  local_38 = this;
  pbStack_30 = param_2;
  (**(code **)(*(long *)this + 0x60))(this,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


