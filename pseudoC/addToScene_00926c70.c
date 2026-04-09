// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToScene
// Entry Point: 00926c70
// Size: 28 bytes
// Signature: undefined __thiscall addToScene(DestructionPhysicsObject * this, Bt2ScenegraphPhysicsContext * param_1)


/* DestructionPhysicsObject::addToScene(Bt2ScenegraphPhysicsContext*) */

void __thiscall
DestructionPhysicsObject::addToScene
          (DestructionPhysicsObject *this,Bt2ScenegraphPhysicsContext *param_1)

{
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffc | 1;
  DestructionShape::addToScene(*(DestructionShape **)(this + 0x10),param_1);
  return;
}


