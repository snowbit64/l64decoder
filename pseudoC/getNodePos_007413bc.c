// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodePos
// Entry Point: 007413bc
// Size: 36 bytes
// Signature: undefined __thiscall getNodePos(VehicleNavigationGridAdapter * this, NodeId param_1)


/* VehicleNavigationGridAdapter::getNodePos(NodeId) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getNodePos(VehicleNavigationGridAdapter *this,NodeId param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub((float)(ulong)(param_1 & 0xffff),*(undefined4 *)(this + 0x2c),
                      *(undefined4 *)(this + 0x34));
  NEON_fnmsub((float)(ulong)(param_1 >> 0x10),*(undefined4 *)(this + 0x2c),
              *(undefined4 *)(this + 0x34));
  return uVar1;
}


