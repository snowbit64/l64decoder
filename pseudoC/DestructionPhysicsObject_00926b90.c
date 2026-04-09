// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionPhysicsObject
// Entry Point: 00926b90
// Size: 32 bytes
// Signature: undefined __thiscall DestructionPhysicsObject(DestructionPhysicsObject * this, DestructionShape * param_1)


/* DestructionPhysicsObject::DestructionPhysicsObject(DestructionShape*) */

void __thiscall
DestructionPhysicsObject::DestructionPhysicsObject
          (DestructionPhysicsObject *this,DestructionShape *param_1)

{
  *(undefined4 *)(this + 8) = 0x20;
  *(DestructionShape **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__DestructionPhysicsObject_00fdfec0;
  return;
}


