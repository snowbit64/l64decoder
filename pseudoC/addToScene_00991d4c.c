// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScene
// Entry Point: 00991d4c
// Size: 20 bytes
// Signature: undefined __cdecl addToScene(Bt2ScenegraphPhysicsContext * param_1)


/* PhysicsObject::addToScene(Bt2ScenegraphPhysicsContext*) */

void PhysicsObject::addToScene(Bt2ScenegraphPhysicsContext *param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc | 1;
  return;
}


