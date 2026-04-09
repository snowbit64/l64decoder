// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingPair
// Entry Point: 009b426c
// Size: 240 bytes
// Signature: undefined __thiscall removeOverlappingPair(Bt2PhysicsOverlapCallback * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2, btDispatcher * param_3)


/* Bt2PhysicsOverlapCallback::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*,
   btDispatcher*) */

undefined8 __thiscall
Bt2PhysicsOverlapCallback::removeOverlappingPair
          (Bt2PhysicsOverlapCallback *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  
  plVar4 = *(long **)param_2;
  plVar3 = *(long **)param_1;
  if (*(int *)(plVar4 + 0x20) != 4) {
    plVar4 = (long *)0x0;
  }
  if (*(int *)(plVar3 + 0x20) == 4 && plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_1);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))(plVar4,param_1,param_3,param_2);
  }
  if ((((*(uint **)(*(long *)param_1 + 0x108) != (uint *)0x0) &&
       (puVar5 = *(uint **)(*(long *)param_2 + 0x108), puVar5 != (uint *)0x0)) &&
      (uVar1 = **(uint **)(*(long *)param_1 + 0x108), (uVar1 & 1) != 0)) &&
     (uVar2 = *puVar5, (uVar2 & 1) != 0)) {
    if ((uVar1 >> 5 & 1) != 0) {
      removeOverlapInternal(this,param_1,param_2);
      uVar2 = *puVar5;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      removeOverlapInternal(this,param_2,param_1);
    }
  }
  return 0;
}


