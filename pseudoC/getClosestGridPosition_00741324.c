// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestGridPosition
// Entry Point: 00741324
// Size: 60 bytes
// Signature: undefined __thiscall getClosestGridPosition(VehicleNavigationGridAdapter * this, Vector2 * param_1)


/* VehicleNavigationGridAdapter::getClosestGridPosition(Vector2 const&) const */

undefined4 __thiscall
VehicleNavigationGridAdapter::getClosestGridPosition
          (VehicleNavigationGridAdapter *this,Vector2 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x34);
  uVar1 = NEON_fnmsub((float)(ulong)(uint)(int)((*(float *)param_1 + fVar2) *
                                               *(float *)(this + 0x24)),*(undefined4 *)(this + 0x2c)
                      ,fVar2);
  NEON_fnmsub((float)(ulong)(uint)(int)(*(float *)(this + 0x24) * (fVar2 + *(float *)(param_1 + 4)))
              ,*(undefined4 *)(this + 0x2c),fVar2);
  return uVar1;
}


