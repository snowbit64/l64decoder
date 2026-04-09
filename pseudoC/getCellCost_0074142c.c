// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellCost
// Entry Point: 0074142c
// Size: 148 bytes
// Signature: undefined __thiscall getCellCost(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2, ushort param_3)


/* VehicleNavigationGridAdapter::getCellCost(unsigned short, unsigned short, unsigned short) const
    */

ulong __thiscall
VehicleNavigationGridAdapter::getCellCost
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 10);
  uVar3 = 0xff;
  if ((param_1 < uVar2) && ((uint)param_2 < (uint)uVar2)) {
    uVar1 = ((uint)uVar2 * (uint)param_2 + (uint)param_1) * 8 + (uint)param_3;
    uVar4 = (ulong)(uVar1 & 0x3fff);
    if (*(uint *)(this + uVar4 * 4 + 0x80) == uVar1) {
      uVar3 = (ulong)(byte)this[uVar4 + 0x10080];
    }
    else {
      uVar3 = computeCellCost(this,param_1,param_2,param_3);
      *(uint *)(this + uVar4 * 4 + 0x80) = uVar1;
      this[uVar4 + 0x10080] = SUB81(uVar3,0);
    }
  }
  return uVar3;
}


