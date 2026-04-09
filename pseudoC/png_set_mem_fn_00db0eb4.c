// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_mem_fn
// Entry Point: 00db0eb4
// Size: 20 bytes
// Signature: undefined png_set_mem_fn(void)


void png_set_mem_fn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x420) = param_2;
    *(undefined8 *)(param_1 + 0x428) = param_3;
    *(undefined8 *)(param_1 + 0x430) = param_4;
  }
  return;
}


