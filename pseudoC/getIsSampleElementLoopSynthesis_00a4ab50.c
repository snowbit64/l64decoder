// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsSampleElementLoopSynthesis
// Entry Point: 00a4ab50
// Size: 32 bytes
// Signature: undefined __thiscall getIsSampleElementLoopSynthesis(AudioSource * this, uint param_1)


/* AudioSource::getIsSampleElementLoopSynthesis(unsigned int) const */

bool __thiscall AudioSource::getIsSampleElementLoopSynthesis(AudioSource *this,uint param_1)

{
  long lVar1;
  
  lVar1 = AudioSourceSample::getElementLoopSynthesisGeneratorAt
                    ((AudioSourceSample *)(this + 0x158),param_1);
  return lVar1 != 0;
}


