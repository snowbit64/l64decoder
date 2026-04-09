// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_sCAL_fixed
// Entry Point: 00db06cc
// Size: 164 bytes
// Signature: undefined png_get_sCAL_fixed(void)


undefined8
png_get_sCAL_fixed(long param_1,long param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) >> 6 & 1) != 0)) {
    pcVar2 = *(char **)(param_2 + 0x150);
    *param_3 = (uint)*(byte *)(param_2 + 0x14c);
    atof(pcVar2);
    uVar1 = png_fixed(param_1,"sCAL width");
    pcVar2 = *(char **)(param_2 + 0x158);
    *param_4 = uVar1;
    atof(pcVar2);
    uVar1 = png_fixed(param_1,"sCAL height");
    *param_5 = uVar1;
    return 0x4000;
  }
  return 0;
}


