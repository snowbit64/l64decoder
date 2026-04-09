// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nearCallback
// Entry Point: 009b057c
// Size: 60 bytes
// Signature: undefined __cdecl nearCallback(btBroadphasePair * param_1, btCollisionDispatcher * param_2, btDispatcherInfo * param_3)


/* Bt2PhysicsContextManager::nearCallback(btBroadphasePair&, btCollisionDispatcher&,
   btDispatcherInfo const&) */

void Bt2PhysicsContextManager::nearCallback
               (btBroadphasePair *param_1,btCollisionDispatcher *param_2,btDispatcherInfo *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(**(btCollisionObject ***)param_1 + 0xec);
  if ((iVar1 == 5 || iVar1 == 2) &&
     (iVar1 = *(int *)(**(btCollisionObject ***)(param_1 + 8) + 0xec), iVar1 == 2 || iVar1 == 5)) {
    return;
  }
  nearCallback2(param_1,**(btCollisionObject ***)param_1,**(btCollisionObject ***)(param_1 + 8),
                param_2,param_3);
  return;
}


