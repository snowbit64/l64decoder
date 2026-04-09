// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCellCost
// Entry Point: 00731114
// Size: 88 bytes
// Signature: undefined __thiscall setCellCost(VehicleNavigationMap * this, float param_1, ushort param_2, ushort param_3)


/* VehicleNavigationMap::setCellCost(float, unsigned short, unsigned short) */

void __thiscall
VehicleNavigationMap::setCellCost
          (VehicleNavigationMap *this,float param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  undefined uVar2;
  
  uVar1 = *(ushort *)(this + 0x14);
  if ((param_2 < uVar1 && param_3 <= uVar1) && (param_2 >= uVar1 || uVar1 != param_3)) {
    if (param_1 <= 16.0) {
      uVar2 = (undefined)(int)((param_1 + -1.0) / 0.05905512);
    }
    else {
      uVar2 = 0xff;
    }
    *(undefined *)(*(long *)this + (ulong)param_2 + (ulong)uVar1 * (ulong)param_3) = uVar2;
  }
  return;
}


