// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_abort
// Entry Point: 00d6a980
// Size: 88 bytes
// Signature: undefined jpeg_abort(void)


void jpeg_abort(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 100;
      return;
    }
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x24) = 200;
  }
  return;
}


