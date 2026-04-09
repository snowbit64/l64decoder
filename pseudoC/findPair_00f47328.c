// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPair
// Entry Point: 00f47328
// Size: 200 bytes
// Signature: undefined __thiscall findPair(btSortedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btSortedOverlappingPairCache::findPair(btBroadphaseProxy*, btBroadphaseProxy*) */

btBroadphaseProxy ** __thiscall
btSortedOverlappingPairCache::findPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  btBroadphaseProxy *pbVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  btBroadphaseProxy **ppbVar5;
  
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 == (long *)0x0) {
    if ((*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 8)) == 0) {
      return (btBroadphaseProxy **)0x0;
    }
    if ((*(ushort *)(param_1 + 10) & *(ushort *)(param_2 + 8)) == 0) {
      return (btBroadphaseProxy **)0x0;
    }
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
    if ((uVar4 & 1) == 0) {
      return (btBroadphaseProxy **)0x0;
    }
  }
  uVar2 = *(uint *)(this + 0xc);
  pbVar1 = param_2;
  if (*(int *)(param_2 + 0x18) <= *(int *)(param_1 + 0x18)) {
    pbVar1 = param_1;
    param_1 = param_2;
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    ppbVar5 = *(btBroadphaseProxy ***)(this + 0x18);
    do {
      if (*ppbVar5 == param_1 && ppbVar5[1] == pbVar1) {
        if ((int)uVar2 <= (int)uVar4) {
          return (btBroadphaseProxy **)0x0;
        }
        return ppbVar5;
      }
      uVar4 = uVar4 + 1;
      ppbVar5 = ppbVar5 + 4;
    } while (uVar2 != uVar4);
  }
  return (btBroadphaseProxy **)0x0;
}


