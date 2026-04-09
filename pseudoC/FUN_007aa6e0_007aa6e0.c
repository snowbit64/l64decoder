// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa6e0
// Entry Point: 007aa6e0
// Size: 72 bytes
// Signature: undefined FUN_007aa6e0(void)


void FUN_007aa6e0(long param_1,float *param_2)

{
  FillPlaneGeometry *this;
  float fVar1;
  
  param_2[0x40] = 0.0;
  this = *(FillPlaneGeometry **)(param_1 + 0x170);
  param_2[0x42] = 5.605194e-45;
  if (((byte)this[0x31] & 1) != 0) {
    fVar1 = (float)FillPlaneGeometry::getPointHeight(this,*param_2,param_2[4]);
    param_2[0x42] = 5.605194e-45;
    param_2[0x40] = fVar1;
  }
  return;
}


