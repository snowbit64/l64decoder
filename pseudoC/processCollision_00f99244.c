// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f99244
// Size: 96 bytes
// Signature: undefined __cdecl processCollision(btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSoftRigidCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void btSoftRigidCollisionAlgorithm::processCollision
               (btCollisionObjectWrapper *param_1,btCollisionObjectWrapper *param_2,
               btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  pbVar1 = (btCollisionObjectWrapper *)param_3;
  if (param_1[0x20] != (btCollisionObjectWrapper)0x0) {
    pbVar1 = param_2;
    param_2 = (btCollisionObjectWrapper *)param_3;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x154);
  if (0 < (int)*(uint *)(lVar2 + 0x154)) {
    plVar4 = *(long **)(lVar2 + 0x160);
    do {
      if (*plVar4 == *(long *)(pbVar1 + 0x10)) {
        if ((int)uVar3 != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f992a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x170) + 0x48))();
  return;
}


