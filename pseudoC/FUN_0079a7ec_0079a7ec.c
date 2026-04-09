// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a7ec
// Entry Point: 0079a7ec
// Size: 84 bytes
// Signature: undefined FUN_0079a7ec(void)


void FUN_0079a7ec(long param_1)

{
  ENetNetworkManager *this;
  
  DAT_0107c290 = 0;
  this = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::getDefaultLocalIp(this,&DAT_0107c290,0xff);
  *(undefined **)(param_1 + 0x100) = &DAT_0107c290;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


