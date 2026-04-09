// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSampleElement
// Entry Point: 00a4a118
// Size: 8 bytes
// Signature: undefined __cdecl addSampleElement(char * param_1, float param_2)


/* AudioSource::addSampleElement(char const*, float) */

void AudioSource::addSampleElement(char *param_1,float param_2)

{
  AudioSourceSample::addElement(param_1 + 0x158,param_2);
  return;
}


