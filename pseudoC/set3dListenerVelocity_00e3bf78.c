// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerVelocity
// Entry Point: 00e3bf78
// Size: 16 bytes
// Signature: undefined __thiscall set3dListenerVelocity(Soloud * this, float param_1, float param_2, float param_3)


/* SoLoud::Soloud::set3dListenerVelocity(float, float, float) */

void __thiscall
SoLoud::Soloud::set3dListenerVelocity(Soloud *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x346c) = param_1;
  *(float *)(this + 0x3470) = param_2;
  *(float *)(this + 0x3474) = param_3;
  return;
}


