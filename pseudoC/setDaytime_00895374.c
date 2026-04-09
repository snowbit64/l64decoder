// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDaytime
// Entry Point: 00895374
// Size: 44 bytes
// Signature: undefined __thiscall setDaytime(PedestrianSystem * this, float param_1)


/* PedestrianSystem::setDaytime(float) */

void __thiscall PedestrianSystem::setDaytime(PedestrianSystem *this,float param_1)

{
  *(float *)(this + 0x25984) = param_1;
  this[0x25978] =
       (PedestrianSystem)
       (*(float *)(this + 0x2597c) < param_1 || param_1 < *(float *)(this + 0x25980));
  return;
}


