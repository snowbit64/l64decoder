// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRoad
// Entry Point: 007323a4
// Size: 112 bytes
// Signature: undefined __thiscall removeRoad(VehicleNavigationMap * this, uint param_1)


/* VehicleNavigationMap::removeRoad(unsigned int) */

void __thiscall VehicleNavigationMap::removeRoad(VehicleNavigationMap *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar1 != lVar2) {
    do {
      while (*(uint *)(lVar1 + 0x14) != param_1) {
        lVar1 = lVar1 + 0x50;
        if (lVar1 == lVar2) {
          return;
        }
      }
      lVar1 = FUN_00732414(this + 0x18,lVar1);
      lVar2 = *(long *)(this + 0x20);
    } while (lVar1 != lVar2);
  }
  return;
}


