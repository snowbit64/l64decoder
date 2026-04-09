// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009da7e4
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementPerlinNoiseMask * this, uint param_1, uint param_2)


/* ProceduralPlacementPerlinNoiseMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementPerlinNoiseMask::getXZ
          (ProceduralPlacementPerlinNoiseMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0xd8) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


