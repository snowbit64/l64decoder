// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBlocked
// Entry Point: 00741944
// Size: 176 bytes
// Signature: undefined __thiscall isBlocked(VehicleNavigationGridAdapter * this, ushort param_1, ushort param_2)


/* VehicleNavigationGridAdapter::isBlocked(unsigned short, unsigned short) const */

bool __thiscall
VehicleNavigationGridAdapter::isBlocked
          (VehicleNavigationGridAdapter *this,ushort param_1,ushort param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *(ulong *)(this + 0x60);
  uVar1 = (ulong)*(ushort *)(this + 10) * (ulong)param_2 + (ulong)param_1;
  lVar2 = *(long *)(this + 0x40);
  uVar3 = uVar4 & uVar1;
  uVar6 = *(uint *)(lVar2 + uVar3 * 8 + 4);
  if (uVar6 + 1 < 2) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 + 1 & uVar4;
      uVar6 = *(uint *)(lVar2 + uVar3 * 8 + 4);
    } while ((uVar6 != 0xffffffff && uVar7 <= uVar6) && (uVar6 == 0xffffffff || uVar6 != uVar7));
  }
  do {
    if (uVar6 != uVar7) {
      lVar5 = *(long *)(this + 0x48);
      uVar3 = lVar5 - lVar2 >> 3;
LAB_007419e4:
      return lVar2 + uVar3 * 8 != lVar5;
    }
    if (*(int *)(lVar2 + uVar3 * 8) == (int)uVar1) {
      lVar5 = *(long *)(this + 0x48);
      goto LAB_007419e4;
    }
    uVar6 = uVar6 + 1;
    uVar3 = uVar3 + 1 & uVar4;
    uVar7 = *(uint *)(lVar2 + uVar3 * 8 + 4);
  } while( true );
}


