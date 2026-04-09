// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isAnimationActive
// Entry Point: 00705e28
// Size: 16 bytes
// Signature: undefined __thiscall isAnimationActive(AnimalAnimationSystem * this, uint param_1)


/* AnimalAnimationSystem::isAnimationActive(unsigned int) */

bool __thiscall AnimalAnimationSystem::isAnimationActive(AnimalAnimationSystem *this,uint param_1)

{
  return *(uint *)(this + 0x2ac) == param_1;
}


