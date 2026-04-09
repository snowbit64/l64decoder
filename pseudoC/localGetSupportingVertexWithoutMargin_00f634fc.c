// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f634fc
// Size: 84 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btCylinderShapeX * this, btVector3 * param_1)


/* btCylinderShapeX::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btCylinderShapeX::localGetSupportingVertexWithoutMargin(btCylinderShapeX *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8),
                            *(float *)(param_1 + 4) * *(float *)(param_1 + 4));
  fVar2 = *(float *)(this + 0x2c);
  if (SQRT(fVar1) != 0.0) {
    fVar1 = -fVar2;
    if (0.0 <= *(float *)param_1) {
      fVar1 = fVar2;
    }
    return fVar1;
  }
  fVar1 = -fVar2;
  if (0.0 <= *(float *)param_1) {
    fVar1 = fVar2;
  }
  return fVar1;
}


