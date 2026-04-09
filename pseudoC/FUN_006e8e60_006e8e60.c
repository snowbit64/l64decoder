// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8e60
// Entry Point: 006e8e60
// Size: 44 bytes
// Signature: undefined FUN_006e8e60(void)


void FUN_006e8e60(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = EnvUtil::getNumOfProcessors();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


