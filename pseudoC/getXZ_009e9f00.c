// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009e9f00
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementSimplexNoiseMask * this, uint param_1, uint param_2)


/* ProceduralPlacementSimplexNoiseMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementSimplexNoiseMask::getXZ
          (ProceduralPlacementSimplexNoiseMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0x2c8) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


