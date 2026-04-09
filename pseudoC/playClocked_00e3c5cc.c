// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playClocked
// Entry Point: 00e3c5cc
// Size: 172 bytes
// Signature: undefined __thiscall playClocked(Soloud * this, double param_1, AudioSource * param_2, float param_3, float param_4, uint param_5)


/* SoLoud::Soloud::playClocked(double, SoLoud::AudioSource&, float, float, unsigned int) */

uint __thiscall
SoLoud::Soloud::playClocked
          (Soloud *this,double param_1,AudioSource *param_2,float param_3,float param_4,uint param_5
          )

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = play(this,param_2,param_3,param_4,1.0,true,param_5);
  lockAudioMutex();
  dVar4 = *(double *)(this + 0x2110);
  if (dVar4 == 0.0) {
    *(double *)(this + 0x2110) = param_1;
  }
  unlockAudioMutex();
  if (param_1 <= dVar4) {
    uVar2 = 0;
  }
  else {
    dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(this + 0x20a0));
    uVar2 = (uint)((param_1 - dVar4) * dVar3);
  }
  setDelaySamples(this,uVar1,uVar2);
  setPause(this,uVar1,false);
  return uVar1;
}


