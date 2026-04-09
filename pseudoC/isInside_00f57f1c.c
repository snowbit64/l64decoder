// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInside
// Entry Point: 00f57f1c
// Size: 116 bytes
// Signature: undefined __thiscall isInside(btBoxShape * this, btVector3 * param_1, float param_2)


/* btBoxShape::isInside(btVector3 const&, float) const */

bool __thiscall btBoxShape::isInside(btBoxShape *this,btVector3 *param_1,float param_2)

{
  if (*(float *)(this + 0x2c) + param_2 < *(float *)param_1 ||
      *(float *)param_1 < -(*(float *)(this + 0x2c) + param_2)) {
    return false;
  }
  if (*(float *)(this + 0x30) + param_2 < *(float *)(param_1 + 4) ||
      *(float *)(param_1 + 4) < -(*(float *)(this + 0x30) + param_2)) {
    return false;
  }
  if (*(float *)(this + 0x34) + param_2 < *(float *)(param_1 + 8)) {
    return false;
  }
  return -(*(float *)(this + 0x34) + param_2) <= *(float *)(param_1 + 8);
}


