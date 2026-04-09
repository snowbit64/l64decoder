// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dSoundSpeed
// Entry Point: 00e3bedc
// Size: 32 bytes
// Signature: undefined __thiscall set3dSoundSpeed(Soloud * this, float param_1)


/* SoLoud::Soloud::set3dSoundSpeed(float) */

undefined8 __thiscall SoLoud::Soloud::set3dSoundSpeed(Soloud *this,float param_1)

{
  if (0.0 < param_1) {
    *(float *)(this + 0x3478) = param_1;
    return 0;
  }
  return 1;
}


