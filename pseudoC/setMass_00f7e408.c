// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMass
// Entry Point: 00f7e408
// Size: 48 bytes
// Signature: undefined __thiscall setMass(btSoftBody * this, int param_1, float param_2)


/* btSoftBody::setMass(int, float) */

void __thiscall btSoftBody::setMass(btSoftBody *this,int param_1,float param_2)

{
  float fVar1;
  
  this[0x4b4] = (btSoftBody)0x1;
  fVar1 = 1.0 / param_2;
  if (param_2 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(*(long *)(this + 0x380) + (long)param_1 * 0x78 + 0x60) = fVar1;
  return;
}


