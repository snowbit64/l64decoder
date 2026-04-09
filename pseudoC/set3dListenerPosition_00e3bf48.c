// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerPosition
// Entry Point: 00e3bf48
// Size: 16 bytes
// Signature: undefined __thiscall set3dListenerPosition(Soloud * this, float param_1, float param_2, float param_3)


/* SoLoud::Soloud::set3dListenerPosition(float, float, float) */

void __thiscall
SoLoud::Soloud::set3dListenerPosition(Soloud *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x3448) = param_1;
  *(float *)(this + 0x344c) = param_2;
  *(float *)(this + 0x3450) = param_3;
  return;
}


