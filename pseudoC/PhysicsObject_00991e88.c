// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsObject
// Entry Point: 00991e88
// Size: 4 bytes
// Signature: undefined __thiscall ~PhysicsObject(PhysicsObject * this)


/* PhysicsObject::~PhysicsObject() */

void __thiscall PhysicsObject::~PhysicsObject(PhysicsObject *this)

{
  operator_delete(this);
  return;
}


