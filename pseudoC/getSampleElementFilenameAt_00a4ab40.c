// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSampleElementFilenameAt
// Entry Point: 00a4ab40
// Size: 8 bytes
// Signature: undefined __thiscall getSampleElementFilenameAt(AudioSource * this, uint param_1)


/* AudioSource::getSampleElementFilenameAt(unsigned int) const */

void __thiscall AudioSource::getSampleElementFilenameAt(AudioSource *this,uint param_1)

{
  AudioSourceSample::getElementFilenameAt((AudioSourceSample *)(this + 0x158),param_1);
  return;
}


