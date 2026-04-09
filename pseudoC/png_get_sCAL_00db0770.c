// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_sCAL
// Entry Point: 00db0770
// Size: 124 bytes
// Signature: undefined png_get_sCAL(void)


undefined8 png_get_sCAL(long param_1,long param_2,uint *param_3,double *param_4,double *param_5)

{
  char *pcVar1;
  double dVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) >> 6 & 1) != 0)) {
    pcVar1 = *(char **)(param_2 + 0x150);
    *param_3 = (uint)*(byte *)(param_2 + 0x14c);
    dVar2 = atof(pcVar1);
    pcVar1 = *(char **)(param_2 + 0x158);
    *param_4 = dVar2;
    dVar2 = atof(pcVar1);
    *param_5 = dVar2;
    return 0x4000;
  }
  return 0;
}


