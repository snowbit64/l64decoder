// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_eXIf_1
// Entry Point: 00db0510
// Size: 56 bytes
// Signature: undefined png_get_eXIf_1(void)


undefined8 png_get_eXIf_1(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_4 != (undefined8 *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 0x10 & 1) != 0)) {
    uVar1 = 0x10000;
    uVar2 = *(undefined8 *)(param_2 + 0xf0);
    *param_3 = *(undefined4 *)(param_2 + 0xec);
    *param_4 = uVar2;
  }
  return uVar1;
}


