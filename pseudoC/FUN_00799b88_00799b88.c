// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799b88
// Entry Point: 00799b88
// Size: 48 bytes
// Signature: undefined FUN_00799b88(void)


void FUN_00799b88(long param_1)

{
  undefined4 uVar1;
  
  ENetNetworkManager::getInstance();
  uVar1 = ENetNetworkManager::getTime();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


