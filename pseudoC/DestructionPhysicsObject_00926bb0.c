// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionPhysicsObject
// Entry Point: 00926bb0
// Size: 52 bytes
// Signature: undefined __thiscall ~DestructionPhysicsObject(DestructionPhysicsObject * this)


/* DestructionPhysicsObject::~DestructionPhysicsObject() */

void __thiscall DestructionPhysicsObject::~DestructionPhysicsObject(DestructionPhysicsObject *this)

{
  *(undefined ***)this = &PTR__DestructionPhysicsObject_00fdfec0;
  if (((byte)this[8] & 3) != 0) {
                    /* try { // try from 00926bd8 to 00926bdb has its CatchHandler @ 00926be4 */
    DestructionShape::removeFromScene();
  }
  return;
}


