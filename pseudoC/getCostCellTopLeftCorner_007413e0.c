// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCostCellTopLeftCorner
// Entry Point: 007413e0
// Size: 32 bytes
// Signature: undefined __thiscall getCostCellTopLeftCorner(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2)


/* VehicleNavigationGridAdapter::getCostCellTopLeftCorner(unsigned short, unsigned short) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getCostCellTopLeftCorner
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub((float)(ulong)param_1,*(undefined4 *)(this + 0x30),
                      *(undefined4 *)(this + 0x34));
  NEON_fnmsub((float)(ulong)param_2,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  return uVar1;
}


