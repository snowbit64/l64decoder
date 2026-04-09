// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSampleElementFilenameAt
// Entry Point: 00a4ab48
// Size: 8 bytes
// Signature: undefined __thiscall setSampleElementFilenameAt(AudioSource * this, uint param_1, char * param_2)


/* AudioSource::setSampleElementFilenameAt(unsigned int, char const*) */

void __thiscall
AudioSource::setSampleElementFilenameAt(AudioSource *this,uint param_1,char *param_2)

{
  AudioSourceSample::setElementFilenameAt((AudioSourceSample *)(this + 0x158),param_1,param_2);
  return;
}


