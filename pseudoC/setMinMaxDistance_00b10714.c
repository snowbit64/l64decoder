// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMinMaxDistance
// Entry Point: 00b10714
// Size: 96 bytes
// Signature: undefined __thiscall setMinMaxDistance(SoftAudioSource * this, float param_1, float param_2)


/* SoftAudioSource::setMinMaxDistance(float, float) */

void __thiscall
SoftAudioSource::setMinMaxDistance(SoftAudioSource *this,float param_1,float param_2)

{
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2;
  *(uint *)(this + 0x34) = (uint)(param_1 < param_2) << 2;
  if (*(uint *)(this + 200) != 0) {
    SoLoud::Soloud::set3dSourceMinMaxDistance
              (*(Soloud **)(this + 0xb8),*(uint *)(this + 200),param_1,param_2);
    SoLoud::Soloud::set3dSourceAttenuation
              (*(Soloud **)(this + 0xb8),*(uint *)(this + 200),*(uint *)(this + 0x34),
               *(float *)(this + 0x30));
    return;
  }
  return;
}


