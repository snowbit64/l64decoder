// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerUp
// Entry Point: 00e3bf68
// Size: 16 bytes
// Signature: undefined __thiscall set3dListenerUp(Soloud * this, float param_1, float param_2, float param_3)


/* SoLoud::Soloud::set3dListenerUp(float, float, float) */

void __thiscall
SoLoud::Soloud::set3dListenerUp(Soloud *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x3460) = param_1;
  *(float *)(this + 0x3464) = param_2;
  *(float *)(this + 0x3468) = param_3;
  return;
}


