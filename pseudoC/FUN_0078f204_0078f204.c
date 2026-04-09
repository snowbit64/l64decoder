// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f204
// Entry Point: 0078f204
// Size: 40 bytes
// Signature: undefined FUN_0078f204(void)


void FUN_0078f204(uint *param_1)

{
  uint uVar1;
  
  uVar1 = GenericMpManager::getInstance();
  GenericMpManager::inviteFriend(uVar1,*param_1);
  return;
}


