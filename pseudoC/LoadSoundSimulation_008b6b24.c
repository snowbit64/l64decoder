// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoadSoundSimulation
// Entry Point: 008b6b24
// Size: 56 bytes
// Signature: undefined __thiscall ~LoadSoundSimulation(LoadSoundSimulation * this)


/* LoadSoundSimulation::~LoadSoundSimulation() */

void __thiscall LoadSoundSimulation::~LoadSoundSimulation(LoadSoundSimulation *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x4e8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x4f0) = pvVar1;
    operator_delete(pvVar1);
  }
  Equalizer::~Equalizer((Equalizer *)(this + 0x4d0));
  BandDistortion::~BandDistortion((BandDistortion *)(this + 0x430));
  return;
}


