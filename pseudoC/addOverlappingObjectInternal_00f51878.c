// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlappingObjectInternal
// Entry Point: 00f51878
// Size: 320 bytes
// Signature: undefined __cdecl addOverlappingObjectInternal(btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void btGhostObject::addOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x154);
  uVar3 = (ulong)uVar2;
  lVar8 = *(long *)param_2;
  plVar7 = *(long **)(param_1 + 0x160);
  uVar4 = uVar3;
  plVar6 = plVar7;
  if (0 < (int)uVar2) {
    do {
      if (*plVar6 == lVar8) {
        if ((int)uVar4 != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar4 != 0);
  }
  if (uVar2 == *(uint *)(param_1 + 0x158)) {
    uVar1 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        plVar7 = (long *)(*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                    ,0x10);
        uVar2 = *(uint *)(param_1 + 0x154);
        uVar3 = (ulong)uVar2;
      }
      if (0 < (int)uVar2) {
        uVar2 = (uint)uVar3;
        lVar5 = 0;
        do {
          *(undefined8 *)((long)plVar7 + lVar5) =
               *(undefined8 *)(*(long *)(param_1 + 0x160) + lVar5);
          lVar5 = lVar5 + 8;
        } while (uVar3 * 8 - lVar5 != 0);
      }
      if ((*(long *)(param_1 + 0x160) != 0) && (param_1[0x168] != (btBroadphaseProxy)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar2 = *(uint *)(param_1 + 0x154);
      }
      *(long **)(param_1 + 0x160) = plVar7;
      *(uint *)(param_1 + 0x158) = uVar1;
      param_1[0x168] = (btBroadphaseProxy)0x1;
    }
  }
  plVar7[(int)uVar2] = lVar8;
  *(uint *)(param_1 + 0x154) = uVar2 + 1;
  return;
}


