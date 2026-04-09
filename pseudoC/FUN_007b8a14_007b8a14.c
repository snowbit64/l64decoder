// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8a14
// Entry Point: 007b8a14
// Size: 108 bytes
// Signature: undefined FUN_007b8a14(void)


void FUN_007b8a14(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (*(char *)(param_2 + 4) != '\0') {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20000 << (ulong)(uVar1 & 0x1f);
  }
  if (*(char *)(param_2 + 8) != '\0') {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x4000 << (ulong)(uVar1 & 0x1f);
  }
  param_1 = param_1 + (long)(int)uVar1 * 4;
  *(uint *)(param_1 + 0x120) = param_2[0xc];
  *(uint *)(param_1 + 300) = param_2[0x10];
  *(uint *)(param_1 + 0x138) = param_2[0x14];
  *(uint *)(param_1 + 0x144) = param_2[0x18];
  *(uint *)(param_1 + 0x150) = param_2[0x1c];
  return;
}


