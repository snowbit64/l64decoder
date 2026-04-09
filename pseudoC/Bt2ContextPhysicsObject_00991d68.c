// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2ContextPhysicsObject
// Entry Point: 00991d68
// Size: 56 bytes
// Signature: undefined __thiscall ~Bt2ContextPhysicsObject(Bt2ContextPhysicsObject * this)


/* Bt2ContextPhysicsObject::~Bt2ContextPhysicsObject() */

void __thiscall Bt2ContextPhysicsObject::~Bt2ContextPhysicsObject(Bt2ContextPhysicsObject *this)

{
  *(undefined ***)this = &PTR__Bt2ContextPhysicsObject_00fe0d30;
  if ((*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (((byte)this[8] >> 1 & 1) != 0)) {
                    /* try { // try from 00991d94 to 00991d97 has its CatchHandler @ 00991da0 */
    Bt2ScenegraphPhysicsContext::removePendingPhysicsObject
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
  }
  return;
}


