// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAudioSource
// Entry Point: 00b0bd9c
// Size: 100 bytes
// Signature: undefined __thiscall createAudioSource(SoftAudioDevice * this, AudioSourceDesc * param_1)


/* SoftAudioDevice::createAudioSource(AudioSourceDesc const&) */

SoftAudioSource * __thiscall
SoftAudioDevice::createAudioSource(SoftAudioDevice *this,AudioSourceDesc *param_1)

{
  uint uVar1;
  uint uVar2;
  SoftAudioSource *this_00;
  
  uVar2 = *(uint *)(this + 0x1b9c);
  uVar1 = *(int *)(this + 0x1b98) + 1;
  if (uVar2 <= uVar1) {
    uVar2 = *(int *)(this + 0x1b98) + 1;
  }
  *(uint *)(this + 0x1b98) = uVar1;
  *(uint *)(this + 0x1b9c) = uVar2;
  this_00 = (SoftAudioSource *)operator_new(0x118);
                    /* try { // try from 00b0bde0 to 00b0bdeb has its CatchHandler @ 00b0be00 */
  SoftAudioSource::SoftAudioSource(this_00,param_1,this,*(Soloud **)(this + 8));
  return this_00;
}


