// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetDestruction
// Entry Point: 009253a4
// Size: 72 bytes
// Signature: undefined resetDestruction(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionShape::resetDestruction() */

void DestructionShape::resetDestruction(void)

{
  DestructionShape *in_x0;
  long lVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    return;
  }
  pBVar2 = *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x290);
  removeFromScene();
  addToScene(in_x0,pBVar2);
  return;
}


