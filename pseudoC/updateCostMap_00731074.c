// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCostMap
// Entry Point: 00731074
// Size: 160 bytes
// Signature: undefined __thiscall updateCostMap(VehicleNavigationMap * this, float * param_1)


/* VehicleNavigationMap::updateCostMap(float const*) */

void __thiscall VehicleNavigationMap::updateCostMap(VehicleNavigationMap *this,float *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined uVar5;
  
  uVar3 = (ulong)*(ushort *)(this + 0x14);
  if (*(ushort *)(this + 0x14) != 0) {
    uVar1 = 0;
    do {
      if ((int)uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar2 = (uint)uVar3;
          if ((((uint)uVar1 & 0xffff) < uVar2) && (((uint)uVar4 & 0xffff) < uVar2)) {
            if (param_1[(uint)uVar1 + (uint)uVar4 * uVar2] <= 16.0) {
              uVar5 = (undefined)
                      (int)((param_1[(uint)uVar1 + (uint)uVar4 * uVar2] + -1.0) / 0.05905512);
            }
            else {
              uVar5 = 0xff;
            }
            *(undefined *)(*(long *)this + uVar1 + uVar4 * uVar3) = uVar5;
            uVar3 = (ulong)*(ushort *)(this + 0x14);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  return;
}


