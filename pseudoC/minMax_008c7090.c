// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: minMax
// Entry Point: 008c7090
// Size: 124 bytes
// Signature: undefined __thiscall minMax(SplineGeometry * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* SplineGeometry::minMax(Vector3&, Vector3&, Vector3&) */

void __thiscall
SplineGeometry::minMax(SplineGeometry *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)param_3;
  if (fVar1 < *(float *)param_1) {
    *(float *)param_1 = fVar1;
    fVar1 = *(float *)param_3;
  }
  if (*(float *)param_2 < fVar1) {
    *(float *)param_2 = fVar1;
  }
  fVar1 = *(float *)(param_3 + 4);
  if (fVar1 < *(float *)(param_1 + 4)) {
    *(float *)(param_1 + 4) = fVar1;
    fVar1 = *(float *)(param_3 + 4);
  }
  if (*(float *)(param_2 + 4) < fVar1) {
    *(float *)(param_2 + 4) = fVar1;
  }
  fVar1 = *(float *)(param_3 + 8);
  if (fVar1 < *(float *)(param_1 + 8)) {
    *(float *)(param_1 + 8) = fVar1;
    fVar1 = *(float *)(param_3 + 8);
  }
  if (*(float *)(param_2 + 8) < fVar1) {
    *(float *)(param_2 + 8) = fVar1;
  }
  return;
}


