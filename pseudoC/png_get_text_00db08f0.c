// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_text
// Entry Point: 00db08f0
// Size: 68 bytes
// Signature: undefined png_get_text(void)


int png_get_text(long param_1,long param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (iVar1 = *(int *)(param_2 + 0x94), iVar1 < 1)) {
    iVar1 = 0;
  }
  else if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_2 + 0xa0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar1;
  }
  return iVar1;
}


