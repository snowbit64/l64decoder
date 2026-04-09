// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateTimes
// Entry Point: 00856a64
// Size: 60 bytes
// Signature: undefined __thiscall setUpdateTimes(DensityMapUpdater * this, float param_1, float param_2)


/* DensityMapUpdater::setUpdateTimes(float, float) */

void __thiscall
DensityMapUpdater::setUpdateTimes(DensityMapUpdater *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  *(float *)(this + 0x1054) = param_2;
  *(float *)(this + 0x1058) = param_1;
  if (0.0 < param_1) {
    fVar1 = ((float)(ulong)(uint)(*(int *)(this + 0x38) * *(int *)(this + 0x38)) / param_1) * 1.33;
  }
  *(float *)(this + 0x1064) = fVar1;
  return;
}


