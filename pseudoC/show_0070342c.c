// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: show
// Entry Point: 0070342c
// Size: 92 bytes
// Signature: undefined show(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Animal::show() */

void Animal::show(void)

{
  long in_x0;
  Bt2PhysicsRBObject *this;
  
  if (*(ScenegraphNode **)(in_x0 + 0x698) != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(in_x0 + 0x698),true);
  }
  if (((*(long *)(in_x0 + 0x6a0) != 0) &&
      (this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject(),
      this != (Bt2PhysicsRBObject *)0x0)) && ((*(uint *)(this + 8) >> 3 & 1) != 0)) {
    *(uint *)(this + 8) = *(uint *)(this + 8) | 0x800;
    Bt2PhysicsRBObject::raiseDirtyFlags(this,0x800);
    return;
  }
  return;
}


