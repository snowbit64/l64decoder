// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sphereInFrustum
// Entry Point: 00a48498
// Size: 100 bytes
// Signature: undefined __thiscall sphereInFrustum(TopDownCullingBody * this, Vector3 * param_1, float param_2)


/* TopDownCullingBody::sphereInFrustum(Vector3 const&, float) const */

bool __thiscall
TopDownCullingBody::sphereInFrustum(TopDownCullingBody *this,Vector3 *param_1,float param_2)

{
  if (*(float *)param_1 + param_2 < *(float *)(this + 8)) {
    return false;
  }
  if (*(float *)(this + 0x10) < *(float *)param_1 - param_2) {
    return false;
  }
  if (*(float *)(param_1 + 8) + param_2 < *(float *)(this + 0xc)) {
    return false;
  }
  return *(float *)(param_1 + 8) - param_2 <= *(float *)(this + 0x14);
}


