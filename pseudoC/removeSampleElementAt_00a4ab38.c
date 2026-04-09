// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeSampleElementAt
// Entry Point: 00a4ab38
// Size: 8 bytes
// Signature: undefined __thiscall removeSampleElementAt(AudioSource * this, uint param_1)


/* AudioSource::removeSampleElementAt(unsigned int) */

void __thiscall AudioSource::removeSampleElementAt(AudioSource *this,uint param_1)

{
  AudioSourceSample::removeElementAt((AudioSourceSample *)(this + 0x158),param_1);
  return;
}


