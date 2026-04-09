// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_init_io
// Entry Point: 00da94d8
// Size: 12 bytes
// Signature: undefined png_init_io(void)


void png_init_io(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x140) = param_2;
  }
  return;
}


