// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_sPLT
// Entry Point: 00db04cc
// Size: 36 bytes
// Signature: undefined png_get_sPLT(void)


undefined4 png_get_sPLT(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x148);
    *param_3 = *(undefined8 *)(param_2 + 0x140);
  }
  return uVar1;
}


