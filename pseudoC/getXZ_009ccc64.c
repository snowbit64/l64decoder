// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009ccc64
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementIndexPerlinNoiseMask * this, uint param_1, uint param_2)


/* ProceduralPlacementIndexPerlinNoiseMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementIndexPerlinNoiseMask::getXZ
          (ProceduralPlacementIndexPerlinNoiseMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0xe0) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


