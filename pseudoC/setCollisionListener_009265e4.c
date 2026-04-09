// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionListener
// Entry Point: 009265e4
// Size: 56 bytes
// Signature: undefined __thiscall setCollisionListener(DestructionShape * this, IDestructionCollisionListener * param_1)


/* DestructionShape::setCollisionListener(IDestructionCollisionListener*) */

void __thiscall
DestructionShape::setCollisionListener
          (DestructionShape *this,IDestructionCollisionListener *param_1)

{
  if (*(long **)(this + 0x3c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c8) + 8))();
  }
  *(IDestructionCollisionListener **)(this + 0x3c8) = param_1;
  return;
}


