// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e90c4
// Entry Point: 006e90c4
// Size: 48 bytes
// Signature: undefined FUN_006e90c4(void)


void FUN_006e90c4(long param_1)

{
  ulong uVar1;
  
  uVar1 = EnvUtil::getTotalMemory();
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(int *)(param_1 + 0x100) = (int)(uVar1 >> 0x14);
  return;
}


