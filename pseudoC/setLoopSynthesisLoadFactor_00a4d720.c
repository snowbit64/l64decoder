// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoopSynthesisLoadFactor
// Entry Point: 00a4d720
// Size: 136 bytes
// Signature: undefined __thiscall setLoopSynthesisLoadFactor(AudioSourceSample * this, float param_1)


/* AudioSourceSample::setLoopSynthesisLoadFactor(float) */

void __thiscall AudioSourceSample::setLoopSynthesisLoadFactor(AudioSourceSample *this,float param_1)

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
      if (*(long *)(pAVar1 + lVar3 + 0x28) != 0) {
        LoopSynthesisGenerator::setLoadFactor
                  ((LoopSynthesisGenerator *)(*(long *)(pAVar1 + lVar3 + 0x28) + 0x10),param_1);
        uVar2 = *(uint *)(this + 0xb0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (uVar4 < uVar2);
  }
  return;
}


