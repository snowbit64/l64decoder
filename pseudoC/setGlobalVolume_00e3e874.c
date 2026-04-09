// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGlobalVolume
// Entry Point: 00e3e874
// Size: 12 bytes
// Signature: undefined __thiscall setGlobalVolume(Soloud * this, float param_1)


/* SoLoud::Soloud::setGlobalVolume(float) */

void __thiscall SoLoud::Soloud::setGlobalVolume(Soloud *this,float param_1)

{
  *(undefined4 *)(this + 0x20f8) = 0;
  *(float *)(this + 0x20c0) = param_1;
  return;
}


