// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSourceSample
// Entry Point: 00a4bae8
// Size: 84 bytes
// Signature: undefined __thiscall ~AudioSourceSample(AudioSourceSample * this)


/* non-virtual thunk to AudioSourceSample::~AudioSourceSample() */

void __thiscall AudioSourceSample::~AudioSourceSample(AudioSourceSample *this)

{
  *(undefined ***)(this + -0x20) = &PTR__AudioSourceSample_00fe3488;
  *(undefined ***)this = &PTR__AudioSourceSample_00fe3570;
                    /* try { // try from 00a4bb18 to 00a4bb1f has its CatchHandler @ 00a4bb3c */
  Sample::unload();
  SmallVector<AudioSourceSample::Element,1u>::~SmallVector
            ((SmallVector<AudioSourceSample::Element,1u> *)(this + 0x90));
  Sample::~Sample((Sample *)(this + -0x20));
  return;
}


