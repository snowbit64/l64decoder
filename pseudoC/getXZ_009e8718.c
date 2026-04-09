// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009e8718
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementScaleMask * this, uint param_1, uint param_2)


/* ProceduralPlacementScaleMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementScaleMask::getXZ(ProceduralPlacementScaleMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0xd0) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


