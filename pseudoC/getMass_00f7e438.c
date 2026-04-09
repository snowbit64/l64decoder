// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMass
// Entry Point: 00f7e438
// Size: 40 bytes
// Signature: undefined __thiscall getMass(btSoftBody * this, int param_1)


/* btSoftBody::getMass(int) const */

float __thiscall btSoftBody::getMass(btSoftBody *this,int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(this + 0x380) + (long)param_1 * 0x78 + 0x60);
  fVar2 = 1.0 / fVar1;
  if (fVar1 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}


