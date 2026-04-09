// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00b10eb0
// Size: 60 bytes
// Signature: undefined createInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::BiquadResonantFilterWithDefaultWet::createInstance() */

long * SoftAudioSource::BiquadResonantFilterWithDefaultWet::createInstance(void)

{
  long in_x0;
  long *plVar1;
  
  plVar1 = (long *)SoLoud::BiquadResonantFilter::createInstance();
  (**(code **)(*plVar1 + 0x28))(*(undefined4 *)(in_x0 + 0x18),plVar1,0);
  return plVar1;
}


