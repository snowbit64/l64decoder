// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00926c30
// Size: 64 bytes
// Signature: undefined __thiscall clone(DestructionPhysicsObject * this, TransformGroup * param_1)


/* DestructionPhysicsObject::clone(TransformGroup*) */

void __thiscall
DestructionPhysicsObject::clone(DestructionPhysicsObject *this,TransformGroup *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar1[2] = param_1;
  *(undefined4 *)(puVar1 + 1) = 0x20;
  *puVar1 = &PTR__DestructionPhysicsObject_00fdfec0;
  return;
}


