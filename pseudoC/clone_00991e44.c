// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00991e44
// Size: 64 bytes
// Signature: undefined __cdecl clone(TransformGroup * param_1)


/* Bt2ContextPhysicsObject::clone(TransformGroup*) */

void Bt2ContextPhysicsObject::clone(TransformGroup *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *(uint *)(puVar1 + 1) = *(uint *)(param_1 + 8) & 0xfffffff8;
  *puVar1 = &PTR__PhysicsObject_00fe0d88;
  return;
}


