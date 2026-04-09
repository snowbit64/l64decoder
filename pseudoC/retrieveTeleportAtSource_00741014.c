// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: retrieveTeleportAtSource
// Entry Point: 00741014
// Size: 136 bytes
// Signature: undefined __thiscall retrieveTeleportAtSource(VehicleNavigationGridAdapter * this, NodeId param_1)


/* VehicleNavigationGridAdapter::retrieveTeleportAtSource(NodeId) const */

int __thiscall
VehicleNavigationGridAdapter::retrieveTeleportAtSource
          (VehicleNavigationGridAdapter *this,NodeId param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x68);
  lVar2 = *(long *)(this + 0x70);
  lVar3 = lVar1;
  if (lVar1 == lVar2) {
joined_r0x00741090:
    if (lVar3 != lVar2) {
      return (int)((ulong)(lVar3 - lVar1) >> 1) * -0x49249249;
    }
  }
  else {
    do {
      if ((((*(uint *)(lVar3 + 2) & 0xffff) == (param_1 & 0xffff)) &&
          (((*(uint *)(lVar3 + 2) ^ param_1) & 0xffff0000) == 0)) && (*(short *)(lVar3 + 6) == 0))
      goto joined_r0x00741090;
      lVar3 = lVar3 + 0xe;
    } while (lVar3 != lVar2);
  }
  return 0xffff;
}


