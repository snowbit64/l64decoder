// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlane
// Entry Point: 00b55a68
// Size: 16 bytes
// Signature: undefined __thiscall getPlane(Frustum * this, FRUSTUM_PLANES param_1, Plane * param_2)


/* Frustum::getPlane(Frustum::FRUSTUM_PLANES, Plane&) const */

void __thiscall Frustum::getPlane(Frustum *this,FRUSTUM_PLANES param_1,Plane *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + (ulong)param_1 * 0x10 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + (ulong)param_1 * 0x10 + 0x10);
  *(undefined8 *)param_2 = uVar1;
  return;
}


