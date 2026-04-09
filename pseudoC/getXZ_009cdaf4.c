// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009cdaf4
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementIndexSimplexNoiseMask * this, uint param_1, uint param_2)


/* ProceduralPlacementIndexSimplexNoiseMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementIndexSimplexNoiseMask::getXZ
          (ProceduralPlacementIndexSimplexNoiseMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0x2d0) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


