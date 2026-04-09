// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGravity
// Entry Point: 008d85c0
// Size: 64 bytes
// Signature: undefined __thiscall setGravity(ParticleSystem * this, float * param_1)


/* ParticleSystem::setGravity(float*) */

void __thiscall ParticleSystem::setGravity(ParticleSystem *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  *(float *)(this + 0x160) = fVar1;
  fVar3 = param_1[1];
  *(float *)(this + 0x164) = fVar3;
  fVar2 = param_1[2];
  *(float *)(this + 0x168) = fVar2;
  this[0x15c] = (ParticleSystem)((fVar1 != 0.0 || fVar3 != 0.0) || fVar2 != 0.0);
  return;
}


