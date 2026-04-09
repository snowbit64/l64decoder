// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanProxyFromPairs
// Entry Point: 00f4686c
// Size: 96 bytes
// Signature: undefined __thiscall cleanProxyFromPairs(btHashedOverlappingPairCache * this, btBroadphaseProxy * param_1, btDispatcher * param_2)


/* btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy*, btDispatcher*) */

void __thiscall
btHashedOverlappingPairCache::cleanProxyFromPairs
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  long lVar1;
  undefined **local_48;
  btBroadphaseProxy *pbStack_40;
  btHashedOverlappingPairCache *local_38;
  btDispatcher *pbStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = &PTR__btOverlapCallback_01019168;
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


