// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009e92f4
// Size: 20 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementSignedDistanceMask * this, uint param_1, uint param_2)


/* ProceduralPlacementSignedDistanceMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementSignedDistanceMask::getXZ
          (ProceduralPlacementSignedDistanceMask *this,uint param_1,uint param_2)

{
  return *(undefined4 *)
          (*(long *)(this + 0x58) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
}


