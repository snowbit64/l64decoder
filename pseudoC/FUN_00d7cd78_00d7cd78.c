// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7cd78
// Entry Point: 00d7cd78
// Size: 44 bytes
// Signature: undefined FUN_00d7cd78(void)


void FUN_00d7cd78(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  jpeg_destroy(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


