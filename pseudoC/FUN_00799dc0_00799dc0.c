// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799dc0
// Entry Point: 00799dc0
// Size: 36 bytes
// Signature: undefined FUN_00799dc0(void)


void FUN_00799dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  ENetNetworkManager *this;
  
  uVar1 = *param_1;
  this = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  ENetNetworkManager::setMaximumIncomingConnections(this,(ushort)uVar1);
  return;
}


