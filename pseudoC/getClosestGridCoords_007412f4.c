// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestGridCoords
// Entry Point: 007412f4
// Size: 48 bytes
// Signature: undefined __thiscall getClosestGridCoords(VehicleNavigationGridAdapter * this, ushort * param_1, ushort * param_2, Vector2 * param_3)


/* VehicleNavigationGridAdapter::getClosestGridCoords(unsigned short&, unsigned short&, Vector2
   const&) const */

void __thiscall
VehicleNavigationGridAdapter::getClosestGridCoords
          (VehicleNavigationGridAdapter *this,ushort *param_1,ushort *param_2,Vector2 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_3 + 4);
  fVar1 = *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x24);
  *param_1 = (ushort)(int)((*(float *)param_3 + fVar1) * fVar3);
  *param_2 = (ushort)(int)(fVar3 * (fVar1 + fVar2));
  return;
}


