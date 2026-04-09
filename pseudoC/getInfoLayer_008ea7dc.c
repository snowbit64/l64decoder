// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfoLayer
// Entry Point: 008ea7dc
// Size: 16 bytes
// Signature: undefined __thiscall getInfoLayer(BaseTerrain * this, uint param_1)


/* BaseTerrain::getInfoLayer(unsigned int) const */

long __thiscall BaseTerrain::getInfoLayer(BaseTerrain *this,uint param_1)

{
  return *(long *)(this + 0x50) + (ulong)param_1 * 0x58;
}


