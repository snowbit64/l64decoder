// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCornerNode
// Entry Point: 00737190
// Size: 8 bytes
// Signature: undefined __thiscall getCornerNode(VehicleNavigationAgent * this, PlanarPose * param_1)


/* VehicleNavigationAgent::getCornerNode(PlanarPose const&) const */

void __thiscall
VehicleNavigationAgent::getCornerNode(VehicleNavigationAgent *this,PlanarPose *param_1)

{
  VehicleNavigationGridAdapter::getCornerNode
            (*(VehicleNavigationGridAdapter **)(this + 0x12a0),param_1);
  return;
}


