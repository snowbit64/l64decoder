// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sphereInFrustum
// Entry Point: 00b560d8
// Size: 4 bytes
// Signature: undefined __cdecl sphereInFrustum(Vector3 * param_1, float param_2)


/* Frustum::sphereInFrustum(Vector3 const&, float) const */

void Frustum::sphereInFrustum(Vector3 *param_1,float param_2)

{
  Vector3 *in_x1;
  
  sphereInFrustumNonVirtual((Frustum *)param_1,in_x1,param_2);
  return;
}


