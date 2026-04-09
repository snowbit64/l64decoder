// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInFrustum
// Entry Point: 00a48450
// Size: 72 bytes
// Signature: undefined __thiscall pointInFrustum(TopDownCullingBody * this, Vector3 * param_1)


/* TopDownCullingBody::pointInFrustum(Vector3 const&) const */

bool __thiscall TopDownCullingBody::pointInFrustum(TopDownCullingBody *this,Vector3 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  if ((fVar1 < *(float *)(this + 8) || *(float *)(this + 0x10) <= fVar1) &&
      (fVar1 < *(float *)(this + 8) || fVar1 != *(float *)(this + 0x10))) {
    return false;
  }
  if (*(float *)(param_1 + 8) < *(float *)(this + 0xc)) {
    return false;
  }
  return *(float *)(param_1 + 8) <= *(float *)(this + 0x14);
}


