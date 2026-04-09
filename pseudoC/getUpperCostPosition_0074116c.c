// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUpperCostPosition
// Entry Point: 0074116c
// Size: 72 bytes
// Signature: undefined __thiscall getUpperCostPosition(VehicleNavigationGridAdapter * this, ushort * param_1, ushort * param_2, float * param_3, float * param_4, Vector2 * param_5)


/* VehicleNavigationGridAdapter::getUpperCostPosition(unsigned short&, unsigned short&, float&,
   float&, Vector2 const&) const */

void __thiscall
VehicleNavigationGridAdapter::getUpperCostPosition
          (VehicleNavigationGridAdapter *this,ushort *param_1,ushort *param_2,float *param_3,
          float *param_4,Vector2 *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (*(float *)param_5 + *(float *)(this + 0x34)) * *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x28) * (*(float *)(this + 0x34) + *(float *)(param_5 + 4));
  *param_1 = (ushort)(int)fVar1;
  *param_2 = (ushort)(int)fVar2;
  *param_3 = fVar1 - (float)(int)fVar1;
  *param_4 = fVar2 - (float)(int)fVar2;
  return;
}


