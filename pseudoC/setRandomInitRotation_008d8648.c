// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRandomInitRotation
// Entry Point: 008d8648
// Size: 36 bytes
// Signature: undefined __thiscall setRandomInitRotation(ParticleSystem * this, bool param_1)


/* ParticleSystem::setRandomInitRotation(bool) */

void __thiscall ParticleSystem::setRandomInitRotation(ParticleSystem *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x40c90fdb;
  this[0x16d] = (ParticleSystem)param_1;
  if (!param_1) {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0xb4) = uVar1;
  return;
}


