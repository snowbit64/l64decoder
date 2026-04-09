// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ac14
// Entry Point: 00f0ac14
// Size: 56 bytes
// Signature: undefined FUN_00f0ac14(void)


void FUN_00f0ac14(long param_1)

{
  if (*(ushort *)(param_1 + 0x50) == 200) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"C stack overflow");
  }
  if (*(ushort *)(param_1 + 0x50) < 0xe1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f0a90c(param_1,5);
}


