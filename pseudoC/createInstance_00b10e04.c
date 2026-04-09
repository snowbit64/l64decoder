// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createInstance
// Entry Point: 00b10e04
// Size: 52 bytes
// Signature: undefined __thiscall createInstance(SoftAudioSource * this)


/* non-virtual thunk to SoftAudioSource::createInstance() */

SoftAudioVoice * __thiscall SoftAudioSource::createInstance(SoftAudioSource *this)

{
  SoftAudioVoice *this_00;
  
  this_00 = (SoftAudioVoice *)operator_new(0x230);
                    /* try { // try from 00b10e20 to 00b10e27 has its CatchHandler @ 00b10e38 */
  SoftAudioVoice::SoftAudioVoice(this_00,this + -8);
  return this_00;
}


