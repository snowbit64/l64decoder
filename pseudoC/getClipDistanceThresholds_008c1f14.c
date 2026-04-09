// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClipDistanceThresholds
// Entry Point: 008c1f14
// Size: 28 bytes
// Signature: undefined __thiscall getClipDistanceThresholds(CullingGrid2D * this, uint * param_1, float * param_2)


/* CullingGrid2D::getClipDistanceThresholds(unsigned int&, float*) */

void __thiscall
CullingGrid2D::getClipDistanceThresholds(CullingGrid2D *this,uint *param_1,float *param_2)

{
  float fVar1;
  
  *param_2 = *(float *)(this + 0x34);
  fVar1 = *(float *)(this + 0x38);
  *param_1 = 2;
  param_2[1] = fVar1;
  return;
}


