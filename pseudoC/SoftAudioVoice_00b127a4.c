// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioVoice
// Entry Point: 00b127a4
// Size: 100 bytes
// Signature: undefined __thiscall SoftAudioVoice(SoftAudioVoice * this, SoftAudioSource * param_1)


/* SoftAudioVoice::SoftAudioVoice(SoftAudioSource*) */

void __thiscall SoftAudioVoice::SoftAudioVoice(SoftAudioVoice *this,SoftAudioSource *param_1)

{
  undefined8 uVar1;
  
  SoLoud::AudioSourceInstance::AudioSourceInstance((AudioSourceInstance *)this);
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR__SoftAudioVoice_00fe7f70;
                    /* try { // try from 00b127dc to 00b127df has its CatchHandler @ 00b12808 */
  uVar1 = SoftAudioBuffer::createReader();
  *(undefined8 *)(this + 0x1f0) = uVar1;
  *(SoftAudioSource **)(this + 0x200) = param_1;
  *(undefined4 *)(this + 0x228) = 0;
  this[0x208] = (SoftAudioVoice)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  return;
}


