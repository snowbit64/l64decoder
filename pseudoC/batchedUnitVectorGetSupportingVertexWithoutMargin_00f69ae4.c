// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f69ae4
// Size: 36 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btSphereShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btSphereShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  if (0 < param_3) {
    memset(param_2,0,(ulong)(uint)param_3 << 4);
    return;
  }
  return;
}


