// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b889c
// Entry Point: 007b889c
// Size: 72 bytes
// Signature: undefined FUN_007b889c(void)


void FUN_007b889c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = 1 << (ulong)(uVar1 & 0x1f);
  if (*(char *)(param_2 + 4) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c) & (uVar2 ^ 0xffffffff);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x5c) | uVar2;
  }
  *(uint *)(param_1 + 0x5c) = uVar2;
  param_1 = param_1 + (long)(int)uVar1 * 4;
  *(uint *)(param_1 + 0x78) = param_2[8];
  *(uint *)(param_1 + 0x84) = param_2[0xc];
  return;
}


