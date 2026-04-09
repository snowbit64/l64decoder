// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellCost
// Entry Point: 0073116c
// Size: 28 bytes
// Signature: undefined __thiscall getCellCost(VehicleNavigationMap * this, ushort param_1, ushort param_2)


/* VehicleNavigationMap::getCellCost(unsigned short, unsigned short) const */

undefined __thiscall
VehicleNavigationMap::getCellCost(VehicleNavigationMap *this,ushort param_1,ushort param_2)

{
  return *(undefined *)
          (*(long *)this + (ulong)*(ushort *)(this + 0x14) * (ulong)param_2 + (ulong)param_1);
}


