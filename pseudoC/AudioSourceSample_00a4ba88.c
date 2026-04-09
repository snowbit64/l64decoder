// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSourceSample
// Entry Point: 00a4ba88
// Size: 68 bytes
// Signature: undefined __thiscall ~AudioSourceSample(AudioSourceSample * this)


/* AudioSourceSample::~AudioSourceSample() */

void __thiscall AudioSourceSample::~AudioSourceSample(AudioSourceSample *this)

{
  *(undefined ***)this = &PTR__AudioSourceSample_00fe3488;
  *(undefined ***)(this + 0x20) = &PTR__AudioSourceSample_00fe3570;
                    /* try { // try from 00a4bab0 to 00a4bab3 has its CatchHandler @ 00a4bacc */
  Sample::unload();
  SmallVector<AudioSourceSample::Element,1u>::~SmallVector
            ((SmallVector<AudioSourceSample::Element,1u> *)(this + 0xb0));
  Sample::~Sample((Sample *)this);
  return;
}


