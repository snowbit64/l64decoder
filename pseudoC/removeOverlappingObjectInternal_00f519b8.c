// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingObjectInternal
// Entry Point: 00f519b8
// Size: 80 bytes
// Signature: undefined __cdecl removeOverlappingObjectInternal(btBroadphaseProxy * param_1, btDispatcher * param_2, btBroadphaseProxy * param_3)


/* btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy*, btDispatcher*,
   btBroadphaseProxy*) */

void btGhostObject::removeOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btDispatcher *param_2,btBroadphaseProxy *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x154);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x160);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == *(long *)param_2) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        uVar4 = *(undefined8 *)(lVar3 + (ulong)(uVar1 - 1) * 8);
        *(uint *)(param_1 + 0x154) = uVar1 - 1;
        *(undefined8 *)(lVar3 + uVar2 * 8) = uVar4;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


