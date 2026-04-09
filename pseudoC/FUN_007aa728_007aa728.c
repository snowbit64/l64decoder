// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa728
// Entry Point: 007aa728
// Size: 24 bytes
// Signature: undefined FUN_007aa728(void)


void FUN_007aa728(long param_1,float *param_2)

{
  if (((byte)(*(FillPlaneGeometry **)(param_1 + 0x170))[0x31] & 1) == 0) {
    return;
  }
  FillPlaneGeometry::setMaxPhysicalSurfaceAngle(*(FillPlaneGeometry **)(param_1 + 0x170),*param_2);
  return;
}


