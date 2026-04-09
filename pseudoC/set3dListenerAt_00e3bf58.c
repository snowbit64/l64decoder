// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerAt
// Entry Point: 00e3bf58
// Size: 16 bytes
// Signature: undefined __thiscall set3dListenerAt(Soloud * this, float param_1, float param_2, float param_3)


/* SoLoud::Soloud::set3dListenerAt(float, float, float) */

void __thiscall
SoLoud::Soloud::set3dListenerAt(Soloud *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x3454) = param_1;
  *(float *)(this + 0x3458) = param_2;
  *(float *)(this + 0x345c) = param_3;
  return;
}


