// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSampleElementProbabilityAt
// Entry Point: 00a4ab70
// Size: 8 bytes
// Signature: undefined __thiscall getSampleElementProbabilityAt(AudioSource * this, uint param_1)


/* AudioSource::getSampleElementProbabilityAt(unsigned int) const */

void __thiscall AudioSource::getSampleElementProbabilityAt(AudioSource *this,uint param_1)

{
  AudioSourceSample::getElementProbabilityAt((AudioSourceSample *)(this + 0x158),param_1);
  return;
}


