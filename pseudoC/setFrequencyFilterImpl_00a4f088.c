// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrequencyFilterImpl
// Entry Point: 00a4f088
// Size: 196 bytes
// Signature: undefined __thiscall setFrequencyFilterImpl(AudioSourceSample * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* AudioSourceSample::setFrequencyFilterImpl(float, float, float, float, float, float) */

void __thiscall
AudioSourceSample::setFrequencyFilterImpl
          (AudioSourceSample *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  AudioSourceSample *pAVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0xb0);
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      pAVar1 = this + 0xb4;
      if (1 < uVar2) {
        pAVar1 = *(AudioSourceSample **)(this + 0xf0);
      }
      if (*(long **)(pAVar1 + lVar3 + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(pAVar1 + lVar3 + 0x30) + 0x80))
                  (param_1,param_2,param_3,param_4,param_5,param_6);
        uVar2 = *(uint *)(this + 0xb0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (uVar4 < uVar2);
  }
  return;
}


