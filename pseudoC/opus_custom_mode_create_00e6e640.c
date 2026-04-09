// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_custom_mode_create
// Entry Point: 00e6e640
// Size: 96 bytes
// Signature: undefined opus_custom_mode_create(void)


undefined * opus_custom_mode_create(int param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == 48000) &&
     ((((param_2 == 0x3c0 || ((param_2 & 0x7fffffff) == 0x1e0)) || ((param_2 & 0x3fffffff) == 0xf0))
      || ((param_2 & 0x1fffffff) == 0x78)))) {
    puVar1 = &DAT_01014080;
    if (param_3 == (undefined4 *)0x0) {
      return &DAT_01014080;
    }
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_3 == (undefined4 *)0x0) {
      return (undefined *)0x0;
    }
    uVar2 = 0xffffffff;
  }
  *param_3 = uVar2;
  return puVar1;
}


