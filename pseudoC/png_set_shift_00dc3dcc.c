// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_shift
// Entry Point: 00dc3dcc
// Size: 40 bytes
// Signature: undefined png_set_shift(void)


void png_set_shift(long param_1,undefined4 *param_2)

{
  undefined uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x315) = *param_2;
    *(undefined *)(param_1 + 0x319) = uVar1;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 8;
  }
  return;
}


