// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d150
// Entry Point: 0078d150
// Size: 44 bytes
// Signature: undefined FUN_0078d150(void)


void FUN_0078d150(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = EnvUtil::getTime();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


