// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44334
// Entry Point: 00d44334
// Size: 68 bytes
// Signature: undefined FUN_00d44334(void)


char * FUN_00d44334(long param_1,char *param_2)

{
  uint uVar1;
  
  if (*param_2 == '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x88 + (ulong)(byte)param_2[1]);
      if (0x15 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x200600U) == 0) {
        return param_2;
      }
      param_2 = param_2 + 2;
    } while (*param_2 == '\0');
  }
  return param_2;
}


