// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSoundSystem
// Entry Point: 00705330
// Size: 8 bytes
// Signature: undefined __thiscall setSoundSystem(AnimalAnimationSystem * this, AnimalSoundSystem * param_1)


/* AnimalAnimationSystem::setSoundSystem(AnimalSoundSystem*) */

void __thiscall
AnimalAnimationSystem::setSoundSystem(AnimalAnimationSystem *this,AnimalSoundSystem *param_1)

{
  *(AnimalSoundSystem **)(this + 0x2a0) = param_1;
  return;
}


