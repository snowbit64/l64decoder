// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodePose
// Entry Point: 00741384
// Size: 56 bytes
// Signature: undefined __thiscall getNodePose(VehicleNavigationGridAdapter * this, NodeId param_1)


/* VehicleNavigationGridAdapter::getNodePose(NodeId) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getNodePose(VehicleNavigationGridAdapter *this,NodeId param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub((float)(ulong)(param_1 & 0xffff),*(undefined4 *)(this + 0x2c),
                      *(undefined4 *)(this + 0x34));
  NEON_fnmsub((float)(ulong)(param_1 >> 0x10),*(undefined4 *)(this + 0x2c),
              *(undefined4 *)(this + 0x34));
  return uVar1;
}


