// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsObject
// Entry Point: 00a5b1b8
// Size: 56 bytes
// Signature: undefined __thiscall setPhysicsObject(RawTransformGroup * this, PhysicsObject * param_1)


/* RawTransformGroup::setPhysicsObject(PhysicsObject*) */

void __thiscall RawTransformGroup::setPhysicsObject(RawTransformGroup *this,PhysicsObject *param_1)

{
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  *(PhysicsObject **)(this + 0x108) = param_1;
  return;
}


