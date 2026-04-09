// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swapSampleElements
// Entry Point: 00a4ab30
// Size: 8 bytes
// Signature: undefined __thiscall swapSampleElements(AudioSource * this, uint param_1, uint param_2)


/* AudioSource::swapSampleElements(unsigned int, unsigned int) */

void __thiscall AudioSource::swapSampleElements(AudioSource *this,uint param_1,uint param_2)

{
  AudioSourceSample::swapElements((AudioSourceSample *)(this + 0x158),param_1,param_2);
  return;
}


