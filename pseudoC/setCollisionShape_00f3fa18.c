// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionShape
// Entry Point: 00f3fa18
// Size: 24 bytes
// Signature: undefined __thiscall setCollisionShape(btCollisionObject * this, btCollisionShape * param_1)


/* btCollisionObject::setCollisionShape(btCollisionShape*) */

void __thiscall
btCollisionObject::setCollisionShape(btCollisionObject *this,btCollisionShape *param_1)

{
  *(btCollisionShape **)(this + 200) = param_1;
  *(btCollisionShape **)(this + 0xd8) = param_1;
  *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  return;
}


