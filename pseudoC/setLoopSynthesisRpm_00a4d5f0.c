// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoopSynthesisRpm
// Entry Point: 00a4d5f0
// Size: 140 bytes
// Signature: undefined __thiscall setLoopSynthesisRpm(AudioSourceSample * this, float param_1)


/* AudioSourceSample::setLoopSynthesisRpm(float) */

void __thiscall AudioSourceSample::setLoopSynthesisRpm(AudioSourceSample *this,float param_1)

{
  AudioSourceSample *pAVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0xb0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      pAVar1 = this + (ulong)*(uint *)(this + 0xac) * 0x38 + 0xb4;
      if (1 < uVar2) {
        pAVar1 = (AudioSourceSample *)
                 (*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
      }
      if (*(long *)(pAVar1 + 0x28) != 0) {
        LoopSynthesisGenerator::setRpm
                  ((LoopSynthesisGenerator *)(*(long *)(pAVar1 + 0x28) + 0x10),param_1);
        uVar2 = *(uint *)(this + 0xb0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}


