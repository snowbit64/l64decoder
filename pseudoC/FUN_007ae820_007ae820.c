// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae820
// Entry Point: 007ae820
// Size: 40 bytes
// Signature: undefined FUN_007ae820(void)


void FUN_007ae820(long param_1,char *param_2)

{
  if (*param_2 != '\0') {
    *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) | 2;
    return;
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) & 0xfffffffd;
  return;
}


