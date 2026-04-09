// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_muldiv
// Entry Point: 00dabd08
// Size: 108 bytes
// Signature: undefined png_muldiv(void)


undefined8 png_muldiv(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  double dVar2;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar2 = (double)(long)(((double)param_2 * (double)param_3) / (double)param_4 + 0.5);
    if (2147483647.0 < dVar2 || dVar2 < -2147483648.0) {
      return 0;
    }
    iVar1 = (int)dVar2;
  }
  *param_1 = iVar1;
  return 1;
}


