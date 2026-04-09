// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioSource
// Entry Point: 00b0f94c
// Size: 124 bytes
// Signature: undefined __thiscall ~SoftAudioSource(SoftAudioSource * this)


/* SoftAudioSource::~SoftAudioSource() */

void __thiscall SoftAudioSource::~SoftAudioSource(SoftAudioSource *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__SoftAudioSource_00fe7c10;
  *(undefined ***)(this + 8) = &PTR_setFilter_00fe7cd8;
  iVar1 = FUN_00f276a0(0,this + 0x110);
  if (iVar1 == 1) {
                    /* try { // try from 00b0f990 to 00b0f997 has its CatchHandler @ 00b0f9c8 */
    SoftAudioDevice::notifySourceStopsPlaying(*(SoftAudioDevice **)(this + 0xa8),this);
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 0x10))();
  }
                    /* try { // try from 00b0f9b0 to 00b0f9b7 has its CatchHandler @ 00b0f9c8 */
  SoftAudioDevice::notifySourceIsBeingDestroyed(*(SoftAudioDevice **)(this + 0xa8),this);
  SoLoud::AudioSource::~AudioSource((AudioSource *)(this + 8));
  return;
}


