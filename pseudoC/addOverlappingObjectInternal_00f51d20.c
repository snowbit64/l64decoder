// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlappingObjectInternal
// Entry Point: 00f51d20
// Size: 368 bytes
// Signature: undefined __thiscall addOverlappingObjectInternal(btPairCachingGhostObject * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void __thiscall
btPairCachingGhostObject::addOverlappingObjectInternal
          (btPairCachingGhostObject *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  btBroadphaseProxy *pbVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  uVar3 = *(uint *)(this + 0x154);
  uVar4 = (ulong)uVar3;
  lVar9 = *(long *)param_1;
  pbVar1 = *(btBroadphaseProxy **)(this + 0xc0);
  if (param_2 != (btBroadphaseProxy *)0x0) {
    pbVar1 = param_2;
  }
  plVar8 = *(long **)(this + 0x160);
  uVar5 = uVar4;
  plVar7 = plVar8;
  if (0 < (int)uVar3) {
    do {
      if (*plVar7 == lVar9) {
        if ((int)uVar5 != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar5 != 0);
  }
  if (uVar3 == *(uint *)(this + 0x158)) {
    uVar2 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar2 = 1;
    }
    if ((int)uVar3 < (int)uVar2) {
      if (uVar2 == 0) {
        plVar8 = (long *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        plVar8 = (long *)(*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3
                                    ,0x10);
        uVar3 = *(uint *)(this + 0x154);
        uVar4 = (ulong)uVar3;
      }
      if (0 < (int)uVar3) {
        uVar3 = (uint)uVar4;
        lVar6 = 0;
        do {
          *(undefined8 *)((long)plVar8 + lVar6) = *(undefined8 *)(*(long *)(this + 0x160) + lVar6);
          lVar6 = lVar6 + 8;
        } while (uVar4 * 8 - lVar6 != 0);
      }
      if ((*(long *)(this + 0x160) != 0) && (this[0x168] != (btPairCachingGhostObject)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar3 = *(uint *)(this + 0x154);
      }
      *(long **)(this + 0x160) = plVar8;
      *(uint *)(this + 0x158) = uVar2;
      this[0x168] = (btPairCachingGhostObject)0x1;
    }
  }
  plVar8[(int)uVar3] = lVar9;
  *(uint *)(this + 0x154) = uVar3 + 1;
  (**(code **)(**(long **)(this + 0x170) + 0x10))(*(long **)(this + 0x170),pbVar1,param_1);
  return;
}


