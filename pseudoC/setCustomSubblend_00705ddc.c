// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomSubblend
// Entry Point: 00705ddc
// Size: 28 bytes
// Signature: undefined __thiscall setCustomSubblend(AnimalAnimationSystem * this, float param_1)


/* AnimalAnimationSystem::setCustomSubblend(float) */

void __thiscall AnimalAnimationSystem::setCustomSubblend(AnimalAnimationSystem *this,float param_1)

{
  *(float *)(this + 0x300) = param_1;
  this[0x2d9] = (AnimalAnimationSystem)0x1;
  *(float *)(this + 0x304) = 1.0 - param_1;
  return;
}


