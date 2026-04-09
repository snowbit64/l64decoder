// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalAddress
// Entry Point: 00b481a0
// Size: 32 bytes
// Signature: undefined __thiscall getLocalAddress(ENetNetworkManager * this, uint param_1)


/* ENetNetworkManager::getLocalAddress(unsigned int) */

undefined8 __thiscall ENetNetworkManager::getLocalAddress(ENetNetworkManager *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&NetworkAddress::UNASSIGNED_ADDRESS;
  if (param_1 < 4) {
    puVar1 = (undefined8 *)(this + (ulong)param_1 * 8 + 0x130);
  }
  return *puVar1;
}


