// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDamping
// Entry Point: 00f3fe44
// Size: 36 bytes
// Signature: undefined __thiscall setDamping(btRigidBody * this, float param_1, float param_2)


/* btRigidBody::setDamping(float, float) */

void __thiscall btRigidBody::setDamping(btRigidBody *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar2 = (float)NEON_fminnm(param_2,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(this + 0x200) = fVar1;
  *(float *)(this + 0x204) = fVar2;
  return;
}


