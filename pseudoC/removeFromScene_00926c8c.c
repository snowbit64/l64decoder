// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 00926c8c
// Size: 24 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionPhysicsObject::removeFromScene() */

void DestructionPhysicsObject::removeFromScene(void)

{
  long in_x0;
  
  *(uint *)(in_x0 + 8) = *(uint *)(in_x0 + 8) & 0xfffffffc;
  DestructionShape::removeFromScene();
  return;
}


