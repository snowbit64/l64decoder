// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 0086778c
// Size: 44 bytes
// Signature: undefined __thiscall get(SpeedScaleInfo * this, float param_1, float param_2)


/* ConditionalAnimationItem::SpeedScaleInfo::get(float, float) const */

float __thiscall
ConditionalAnimationItem::SpeedScaleInfo::get(SpeedScaleInfo *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 8);
  if (*(int *)this == 3) {
    fVar1 = fVar1 * param_2;
  }
  else if (*(int *)this == 2) {
    return fVar1 * param_1;
  }
  return fVar1;
}


