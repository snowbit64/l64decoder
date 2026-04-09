// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: proceedToTransform
// Entry Point: 00f403a8
// Size: 4 bytes
// Signature: undefined __cdecl proceedToTransform(btTransform * param_1)


/* btRigidBody::proceedToTransform(btTransform const&) */

void btRigidBody::proceedToTransform(btTransform *param_1)

{
  btTransform *in_x1;
  
  setCenterOfMassTransform((btRigidBody *)param_1,in_x1);
  return;
}


