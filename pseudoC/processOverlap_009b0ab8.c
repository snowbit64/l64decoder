// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processOverlap
// Entry Point: 009b0ab8
// Size: 104 bytes
// Signature: undefined __thiscall processOverlap(Bt2CollisionPairCallback * this, btBroadphasePair * param_1)


/* Bt2PhysicsContextManager::Bt2CollisionPairCallback::processOverlap(btBroadphasePair&) */

uint __thiscall
Bt2PhysicsContextManager::Bt2CollisionPairCallback::processOverlap
          (Bt2CollisionPairCallback *this,btBroadphasePair *param_1)

{
  btCollisionObject *pbVar1;
  btCollisionObject *pbVar2;
  
  pbVar2 = **(btCollisionObject ***)param_1;
  pbVar1 = **(btCollisionObject ***)(param_1 + 8);
  if ((*(int *)(pbVar2 + 0xec) == 5 || *(int *)(pbVar2 + 0xec) == 2) &&
     (*(int *)(pbVar1 + 0xec) == 5 || *(int *)(pbVar1 + 0xec) == 2)) {
    return (*(uint *)(pbVar2 + 0xe0) & *(uint *)(pbVar1 + 0xe0)) >> 2 & 1;
  }
  nearCallback2(param_1,pbVar2,pbVar1,*(btCollisionDispatcher **)(this + 0x10),
                *(btDispatcherInfo **)(this + 8));
  return 0;
}


