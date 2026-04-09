// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoadFactor
// Entry Point: 008b73ac
// Size: 24 bytes
// Signature: undefined __thiscall setLoadFactor(LoadSoundSimulation * this, float param_1)


/* LoadSoundSimulation::setLoadFactor(float) */

void __thiscall LoadSoundSimulation::setLoadFactor(LoadSoundSimulation *this,float param_1)

{
  if (*(float *)(this + 0x50c) != param_1) {
    *(float *)(this + 0x50c) = param_1;
    updateRuntimeSettings();
    return;
  }
  return;
}


