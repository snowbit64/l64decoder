// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00867750
// Size: 60 bytes
// Signature: undefined __thiscall init(SpeedScaleInfo * this, float param_1)


/* ConditionalAnimationItem::SpeedScaleInfo::init(float) */

void __thiscall ConditionalAnimationItem::SpeedScaleInfo::init(SpeedScaleInfo *this,float param_1)

{
  float fVar1;
  
  if (*(int *)this != 0) {
    fVar1 = *(float *)(this + 4);
    if (0.0 < fVar1) {
      fVar1 = (param_1 * 0.001) / fVar1;
    }
    *(float *)(this + 8) = fVar1;
    return;
  }
  *(undefined4 *)(this + 8) = 0x3f800000;
  return;
}


