// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocity
// Entry Point: 00b106d4
// Size: 64 bytes
// Signature: undefined __thiscall setVelocity(SoftAudioSource * this, float * param_1)


/* SoftAudioSource::setVelocity(float const*) */

void __thiscall SoftAudioSource::setVelocity(SoftAudioSource *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  *(float *)(this + 0xe4) = fVar1 * 1000.0;
  fVar2 = param_1[1];
  *(float *)(this + 0xe8) = fVar2 * 1000.0;
  fVar3 = param_1[2];
  *(float *)(this + 0xec) = fVar3 * 1000.0;
  if (*(uint *)(this + 200) != 0) {
    SoLoud::Soloud::set3dSourceVelocity
              (*(Soloud **)(this + 0xb8),*(uint *)(this + 200),fVar1 * 1000.0,fVar2 * 1000.0,
               fVar3 * 1000.0);
    return;
  }
  return;
}


