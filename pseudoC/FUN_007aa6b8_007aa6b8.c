// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa6b8
// Entry Point: 007aa6b8
// Size: 40 bytes
// Signature: undefined FUN_007aa6b8(void)


void FUN_007aa6b8(long param_1,uint *param_2)

{
  if ((((byte)(*(FillPlaneGeometry **)(param_1 + 0x170))[0x31] & 1) != 0) && (-1 < (int)*param_2)) {
    FillPlaneGeometry::setPolylineTranslation
              (*(FillPlaneGeometry **)(param_1 + 0x170),*param_2,(float)param_2[4],(float)param_2[8]
              );
    return;
  }
  return;
}


