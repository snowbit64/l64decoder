// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setApplyGlobalUpdateMaxTimePerFrame
// Entry Point: 0085dfc4
// Size: 8 bytes
// Signature: undefined __thiscall setApplyGlobalUpdateMaxTimePerFrame(DensityMapHeightUpdater * this, float param_1)


/* DensityMapHeightUpdater::setApplyGlobalUpdateMaxTimePerFrame(float) */

void __thiscall
DensityMapHeightUpdater::setApplyGlobalUpdateMaxTimePerFrame
          (DensityMapHeightUpdater *this,float param_1)

{
  *(float *)(this + 0xc80) = param_1;
  return;
}


