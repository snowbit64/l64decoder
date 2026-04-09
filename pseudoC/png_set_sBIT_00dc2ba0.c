// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_sBIT
// Entry Point: 00dc2ba0
// Size: 44 bytes
// Signature: undefined png_set_sBIT(void)


void png_set_sBIT(long param_1,long param_2,undefined4 *param_3)

{
  undefined uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = *(undefined *)(param_3 + 1);
    *(undefined4 *)(param_2 + 0xb0) = *param_3;
    *(undefined *)(param_2 + 0xb4) = uVar1;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  return;
}


