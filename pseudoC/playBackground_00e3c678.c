// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playBackground
// Entry Point: 00e3c678
// Size: 84 bytes
// Signature: undefined __thiscall playBackground(Soloud * this, AudioSource * param_1, float param_2, bool param_3, uint param_4)


/* SoLoud::Soloud::playBackground(SoLoud::AudioSource&, float, bool, unsigned int) */

uint __thiscall
SoLoud::Soloud::playBackground
          (Soloud *this,AudioSource *param_1,float param_2,bool param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = play(this,param_1,param_2,0.0,1.0,param_3,param_4);
  setPanAbsolute(this,uVar1,1.0,1.0,0.0,0.0,0.0,0.0);
  return uVar1;
}


