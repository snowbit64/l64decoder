// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSampleElementProbabilityAt
// Entry Point: 00a4ab78
// Size: 8 bytes
// Signature: undefined __thiscall setSampleElementProbabilityAt(AudioSource * this, uint param_1, float param_2)


/* AudioSource::setSampleElementProbabilityAt(unsigned int, float) */

void __thiscall
AudioSource::setSampleElementProbabilityAt(AudioSource *this,uint param_1,float param_2)

{
  AudioSourceSample::setElementProbabilityAt((AudioSourceSample *)(this + 0x158),param_1,param_2);
  return;
}


