// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadElement
// Entry Point: 00a4cb1c
// Size: 40 bytes
// Signature: undefined __cdecl unloadElement(uint param_1)


/* AudioSourceSample::unloadElement(unsigned int) */

void AudioSourceSample::unloadElement(uint param_1)

{
  Element::destroy();
  return;
}


