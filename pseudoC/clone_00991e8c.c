// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00991e8c
// Size: 60 bytes
// Signature: undefined __cdecl clone(TransformGroup * param_1)


/* PhysicsObject::clone(TransformGroup*) */

void PhysicsObject::clone(TransformGroup *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar1 = &PTR__PhysicsObject_00fe0d88;
  return;
}


