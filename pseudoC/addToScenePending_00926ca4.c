// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScenePending
// Entry Point: 00926ca4
// Size: 16 bytes
// Signature: undefined __cdecl addToScenePending(Bt2ScenegraphPhysicsContext * param_1)


/* PhysicsObject::addToScenePending(Bt2ScenegraphPhysicsContext*) */

void PhysicsObject::addToScenePending(Bt2ScenegraphPhysicsContext *param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}


