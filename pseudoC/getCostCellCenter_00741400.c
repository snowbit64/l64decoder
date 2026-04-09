// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCostCellCenter
// Entry Point: 00741400
// Size: 44 bytes
// Signature: undefined __thiscall getCostCellCenter(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2)


/* VehicleNavigationGridAdapter::getCostCellCenter(unsigned short, unsigned short) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getCostCellCenter
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub((float)(ulong)param_1 + 0.5,*(undefined4 *)(this + 0x30),
                      *(undefined4 *)(this + 0x34));
  NEON_fnmsub((float)(ulong)param_2 + 0.5,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34))
  ;
  return uVar1;
}


