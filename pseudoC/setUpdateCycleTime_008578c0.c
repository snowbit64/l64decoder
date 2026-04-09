// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateCycleTime
// Entry Point: 008578c0
// Size: 88 bytes
// Signature: undefined __thiscall setUpdateCycleTime(DensityMapUpdater * this, float param_1)


/* DensityMapUpdater::setUpdateCycleTime(float) */

void __thiscall DensityMapUpdater::setUpdateCycleTime(DensityMapUpdater *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  if (0.0 < *(float *)(this + 0x1058)) {
    fVar2 = *(float *)(this + 0x1054) / *(float *)(this + 0x1058);
  }
  *(float *)(this + 0x1058) = param_1;
  *(float *)(this + 0x1054) = fVar2 * param_1;
  if (0.0 < param_1) {
    fVar1 = ((float)(ulong)(uint)(*(int *)(this + 0x38) * *(int *)(this + 0x38)) / param_1) * 1.33;
  }
  *(float *)(this + 0x1064) = fVar1;
  return;
}


