// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: aabbInFrustum
// Entry Point: 00a484fc
// Size: 108 bytes
// Signature: undefined __thiscall aabbInFrustum(TopDownCullingBody * this, Vector3 * param_1, Vector3 * param_2)


/* TopDownCullingBody::aabbInFrustum(Vector3 const&, Vector3 const&) const */

bool __thiscall
TopDownCullingBody::aabbInFrustum(TopDownCullingBody *this,Vector3 *param_1,Vector3 *param_2)

{
  if (*(float *)param_1 + *(float *)param_2 < *(float *)(this + 8)) {
    return false;
  }
  if (*(float *)(this + 0x10) < *(float *)param_1 - *(float *)param_2) {
    return false;
  }
  if (*(float *)(param_1 + 8) + *(float *)(param_2 + 8) < *(float *)(this + 0xc)) {
    return false;
  }
  return *(float *)(param_1 + 8) - *(float *)(param_2 + 8) <= *(float *)(this + 0x14);
}


