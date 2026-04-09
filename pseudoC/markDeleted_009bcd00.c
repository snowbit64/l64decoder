// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDeleted
// Entry Point: 009bcd00
// Size: 68 bytes
// Signature: undefined markDeleted(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsCharacterController::markDeleted() */

void Bt2PhysicsCharacterController::markDeleted(void)

{
  WorldTransformationDirtyListener *in_x0;
  
  if (*(ScenegraphNode **)(in_x0 + 0x18) != (ScenegraphNode *)0x0) {
    ScenegraphNode::removeWorldTransformationDirtyListener(*(ScenegraphNode **)(in_x0 + 0x18),in_x0)
    ;
    *(undefined8 *)(in_x0 + 0x18) = 0;
  }
  **(uint **)(*(long *)(in_x0 + 0x10) + 0x108) =
       **(uint **)(*(long *)(in_x0 + 0x10) + 0x108) | 0x100;
  return;
}


