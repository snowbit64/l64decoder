// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 00991df0
// Size: 68 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ContextPhysicsObject::removeFromScene() */

void Bt2ContextPhysicsObject::removeFromScene(void)

{
  Bt2ContextPhysicsObject *in_x0;
  
  if ((*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (((byte)in_x0[8] >> 1 & 1) != 0)) {
    Bt2ScenegraphPhysicsContext::removePendingPhysicsObject
              (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10),in_x0);
  }
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(uint *)(in_x0 + 8) = *(uint *)(in_x0 + 8) & 0xfffffffc;
  return;
}


