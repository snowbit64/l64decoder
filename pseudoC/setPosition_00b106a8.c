// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPosition
// Entry Point: 00b106a8
// Size: 44 bytes
// Signature: undefined __thiscall setPosition(SoftAudioSource * this, float * param_1)


/* SoftAudioSource::setPosition(float const*) */

void __thiscall SoftAudioSource::setPosition(SoftAudioSource *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  *(float *)(this + 0xd8) = fVar1;
  fVar2 = param_1[1];
  *(float *)(this + 0xdc) = fVar2;
  fVar3 = param_1[2];
  *(float *)(this + 0xe0) = fVar3;
  if (*(uint *)(this + 200) != 0) {
    SoLoud::Soloud::set3dSourcePosition
              (*(Soloud **)(this + 0xb8),*(uint *)(this + 200),fVar1,fVar2,fVar3);
    return;
  }
  return;
}


