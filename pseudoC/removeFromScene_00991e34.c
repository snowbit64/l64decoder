// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 00991e34
// Size: 16 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PhysicsObject::removeFromScene() */

void PhysicsObject::removeFromScene(void)

{
  long in_x0;
  
  *(uint *)(in_x0 + 8) = *(uint *)(in_x0 + 8) & 0xfffffffc;
  return;
}


