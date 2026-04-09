// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPair
// Entry Point: 00f46978
// Size: 204 bytes
// Signature: undefined __thiscall findPair(btHashedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btHashedOverlappingPairCache::findPair(btBroadphaseProxy*, btBroadphaseProxy*) */

long * __thiscall
btHashedOverlappingPairCache::findPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long *plVar1;
  btBroadphaseProxy *pbVar2;
  uint uVar3;
  int iVar4;
  
  pbVar2 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar2 = param_2;
    param_2 = param_1;
  }
  uVar3 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar2 + 0x18) << 0x10;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ (int)uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x10) & *(int *)(this + 0x10) - 1U;
  gFindPairs = gFindPairs + 1;
  if (((int)uVar3 < *(int *)(this + 0x34)) &&
     (iVar4 = *(int *)(*(long *)(this + 0x40) + (long)(int)uVar3 * 4), iVar4 != -1)) {
    do {
      plVar1 = (long *)(*(long *)(this + 0x18) + (long)iVar4 * 0x20);
      if ((*(uint *)(*plVar1 + 0x18) == *(uint *)(param_2 + 0x18)) &&
         (*(int *)(plVar1[1] + 0x18) == *(int *)(pbVar2 + 0x18))) {
        return plVar1;
      }
      iVar4 = *(int *)(*(long *)(this + 0x60) + (long)iVar4 * 4);
    } while (iVar4 != -1);
  }
  return (long *)0x0;
}


