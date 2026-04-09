// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f9ae20
// Size: 24 bytes
// Signature: undefined __cdecl processCollision(btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSoftSoftCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void btSoftSoftCollisionAlgorithm::processCollision
               (btCollisionObjectWrapper *param_1,btCollisionObjectWrapper *param_2,
               btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x10) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00f9ae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,*(long *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
  return;
}


