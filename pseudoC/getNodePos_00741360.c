// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodePos
// Entry Point: 00741360
// Size: 36 bytes
// Signature: undefined __thiscall getNodePos(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2)


/* VehicleNavigationGridAdapter::getNodePos(unsigned short, unsigned short) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getNodePos
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub((float)(ulong)param_1,*(undefined4 *)(this + 0x2c),
                      *(undefined4 *)(this + 0x34));
  NEON_fnmsub((float)(ulong)param_2,*(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x34));
  return uVar1;
}


