// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalInertia
// Entry Point: 00f40518
// Size: 60 bytes
// Signature: undefined getLocalInertia(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btRigidBody::getLocalInertia() const */

float btRigidBody::getLocalInertia(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1d0);
  fVar1 = 1.0 / fVar2;
  if (fVar2 == 0.0) {
    fVar1 = fVar2;
  }
  return fVar1;
}


