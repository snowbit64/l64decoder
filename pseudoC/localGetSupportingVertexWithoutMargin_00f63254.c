// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f63254
// Size: 88 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btCylinderShape * this, btVector3 * param_1)


/* btCylinderShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btCylinderShape::localGetSupportingVertexWithoutMargin(btCylinderShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8),fVar2 * fVar2)
  ;
  if (SQRT(fVar1) != 0.0) {
    return (*(float *)(this + 0x2c) / SQRT(fVar1)) * fVar2;
  }
  return *(float *)(this + 0x2c);
}


