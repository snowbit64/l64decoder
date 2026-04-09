// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDropVelocity
// Entry Point: 008dbf08
// Size: 28 bytes
// Signature: undefined __thiscall getDropVelocity(Precipitation * this, Drop * param_1)


/* Precipitation::getDropVelocity(Precipitation::Drop const&) */

float __thiscall Precipitation::getDropVelocity(Precipitation *this,Drop *param_1)

{
  NEON_fmadd(*(undefined4 *)(this + 0x98),*(float *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc))
  ;
  return *(float *)(this + 0x94) * *(float *)(param_1 + 0x10);
}


