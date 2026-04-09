// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f57b44
// Size: 60 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btBoxShape * this, btVector3 * param_1)


/* btBoxShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btBoxShape::localGetSupportingVertexWithoutMargin(btBoxShape *this,btVector3 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x2c);
  if (*(float *)param_1 < 0.0) {
    fVar1 = -*(float *)(this + 0x2c);
  }
  return fVar1;
}


