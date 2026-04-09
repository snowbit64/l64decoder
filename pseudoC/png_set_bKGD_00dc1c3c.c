// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_bKGD
// Entry Point: 00dc1c3c
// Size: 44 bytes
// Signature: undefined png_set_bKGD(void)


void png_set_bKGD(long param_1,long param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = *(undefined2 *)(param_3 + 1);
    *(undefined8 *)(param_2 + 0xca) = *param_3;
    *(undefined2 *)(param_2 + 0xd2) = uVar1;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


