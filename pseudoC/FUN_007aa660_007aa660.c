// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa660
// Entry Point: 007aa660
// Size: 88 bytes
// Signature: undefined FUN_007aa660(void)


void FUN_007aa660(long param_1,float *param_2)

{
  float fVar1;
  FillPlaneGeometry *this;
  
  param_2[0x40] = -NAN;
  this = *(FillPlaneGeometry **)(param_1 + 0x170);
  param_2[0x42] = 1.401298e-45;
  if ((((byte)this[0x31] & 1) != 0) &&
     (fVar1 = (float)FillPlaneGeometry::findPolyline(this,*param_2,param_2[4]), fVar1 != -NAN)) {
    param_2[0x40] = fVar1;
    param_2[0x42] = 1.401298e-45;
  }
  return;
}


