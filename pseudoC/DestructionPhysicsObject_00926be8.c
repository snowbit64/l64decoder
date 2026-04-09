// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionPhysicsObject
// Entry Point: 00926be8
// Size: 68 bytes
// Signature: undefined __thiscall ~DestructionPhysicsObject(DestructionPhysicsObject * this)


/* DestructionPhysicsObject::~DestructionPhysicsObject() */

void __thiscall DestructionPhysicsObject::~DestructionPhysicsObject(DestructionPhysicsObject *this)

{
  *(undefined ***)this = &PTR__DestructionPhysicsObject_00fdfec0;
  if (((byte)this[8] & 3) != 0) {
                    /* try { // try from 00926c18 to 00926c1b has its CatchHandler @ 00926c2c */
    DestructionShape::removeFromScene();
  }
  operator_delete(this);
  return;
}


