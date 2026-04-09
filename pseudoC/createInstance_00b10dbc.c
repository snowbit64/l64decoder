// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00b10dbc
// Size: 52 bytes
// Signature: undefined createInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::createInstance() */

SoftAudioVoice * SoftAudioSource::createInstance(void)

{
  SoftAudioSource *in_x0;
  SoftAudioVoice *this;
  
  this = (SoftAudioVoice *)operator_new(0x230);
                    /* try { // try from 00b10dd8 to 00b10ddf has its CatchHandler @ 00b10df0 */
  SoftAudioVoice::SoftAudioVoice(this,in_x0);
  return this;
}


