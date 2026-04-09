// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingObjectInternal
// Entry Point: 00f51e90
// Size: 140 bytes
// Signature: undefined __thiscall removeOverlappingObjectInternal(btPairCachingGhostObject * this, btBroadphaseProxy * param_1, btDispatcher * param_2, btBroadphaseProxy * param_3)


/* btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy*, btDispatcher*,
   btBroadphaseProxy*) */

void __thiscall
btPairCachingGhostObject::removeOverlappingObjectInternal
          (btPairCachingGhostObject *this,btBroadphaseProxy *param_1,btDispatcher *param_2,
          btBroadphaseProxy *param_3)

{
  btBroadphaseProxy *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(uint *)(this + 0x154);
  pbVar1 = *(btBroadphaseProxy **)(this + 0xc0);
  if (param_3 != (btBroadphaseProxy *)0x0) {
    pbVar1 = param_3;
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    lVar5 = *(long *)(this + 0x160);
    do {
      if (*(long *)(lVar5 + uVar4 * 8) == *(long *)param_1) {
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
        uVar3 = *(undefined8 *)(lVar5 + (ulong)(uVar2 - 1) * 8);
        *(uint *)(this + 0x154) = uVar2 - 1;
        *(undefined8 *)(lVar5 + uVar4 * 8) = uVar3;
        (**(code **)(**(long **)(this + 0x170) + 0x18))
                  (*(long **)(this + 0x170),pbVar1,param_1,param_2);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}


