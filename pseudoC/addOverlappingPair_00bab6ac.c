// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlappingPair
// Entry Point: 00bab6ac
// Size: 152 bytes
// Signature: undefined __thiscall addOverlappingPair(Bt2PairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* Bt2PhysicsContextManager::Bt2PairCache::addOverlappingPair(btBroadphaseProxy*,
   btBroadphaseProxy*) */

undefined8 __thiscall
Bt2PhysicsContextManager::Bt2PairCache::addOverlappingPair
          (Bt2PairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((ushort)(*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 10) |
              *(ushort *)(param_2 + 8) & *(ushort *)(param_1 + 8)) != 0) {
    uVar1 = *(uint *)(*(long *)param_1 + 0xe0);
    uVar2 = *(uint *)(*(long *)param_2 + 0xe0);
    if (((uVar2 | uVar1) >> 2 & 1) == 0) {
      iVar3 = *(int *)(*(long *)param_1 + 0xec);
      if ((((iVar3 != 5) && (iVar3 != 2)) ||
          ((iVar3 = *(int *)(*(long *)param_2 + 0xec), iVar3 != 2 && (iVar3 != 5)))) &&
         (((uVar2 | uVar1) & 0x13) != 3)) {
LAB_00bab740:
        uVar4 = btHashedOverlappingPairCache::internalAddPair
                          ((btHashedOverlappingPairCache *)this,param_1,param_2);
        return uVar4;
      }
    }
    else if (((((uVar1 >> 2 & 1) == 0) || ((uVar2 & 1) == 0)) || ((uVar1 >> 9 & 1) != 0)) &&
            ((((uVar2 >> 2 & 1) == 0 || ((uVar1 & 1) == 0)) || ((uVar2 >> 9 & 1) != 0))))
    goto LAB_00bab740;
  }
  return 0;
}


