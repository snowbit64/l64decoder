// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_gamma
// Entry Point: 00da9a0c
// Size: 304 bytes
// Signature: undefined png_colorspace_set_gamma(void)


void png_colorspace_set_gamma(long param_1,int *param_2,int param_3)

{
  ushort uVar1;
  char *pcVar2;
  double dVar3;
  
  if (param_3 + 0xdabf41bfU < 0xdabf41cf) {
    uVar1 = *(ushort *)((long)param_2 + 0x4a);
    pcVar2 = "gamma value out of range";
  }
  else {
    uVar1 = *(ushort *)((long)param_2 + 0x4a);
    if ((-1 < *(char *)(param_1 + 0x165)) || ((uVar1 >> 3 & 1) == 0)) {
      if (-1 < (short)uVar1) {
        if (((uVar1 & 1) != 0) &&
           ((*param_2 == 0 ||
            (dVar3 = (double)(long)(((double)*param_2 * 100000.0) / (double)param_3 + 0.5),
            (2147483647.0 < dVar3 || dVar3 < -2147483648.0) || 10000 < (int)dVar3 - 95000U)))) {
          if ((uVar1 >> 5 & 1) != 0) {
            png_chunk_report(param_1,"gamma value does not match sRGB",2);
            return;
          }
          png_chunk_report(param_1,"gamma value does not match libpng estimate",0);
        }
        *param_2 = param_3;
        *(ushort *)((long)param_2 + 0x4a) = uVar1 | 9;
      }
      return;
    }
    pcVar2 = "duplicate";
  }
  *(ushort *)((long)param_2 + 0x4a) = uVar1 | 0x8000;
  png_chunk_report(param_1,pcVar2,1);
  return;
}


