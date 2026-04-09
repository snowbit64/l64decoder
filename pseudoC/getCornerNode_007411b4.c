// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCornerNode
// Entry Point: 007411b4
// Size: 84 bytes
// Signature: undefined __thiscall getCornerNode(VehicleNavigationGridAdapter * this, PlanarPose * param_1)


/* VehicleNavigationGridAdapter::getCornerNode(PlanarPose const&) const */

ulong __thiscall
VehicleNavigationGridAdapter::getCornerNode(VehicleNavigationGridAdapter *this,PlanarPose *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(this + 0x34);
  fVar5 = *(float *)(this + 0x24);
  lVar1 = getOctant((Vector2 *)(param_1 + 8));
  return lVar1 << 0x20 | ((ulong)(uint)(int)(fVar5 * (fVar2 + fVar4)) & 0xffff) << 0x10 |
         (ulong)(uint)(int)((fVar3 + fVar2) * fVar5);
}


