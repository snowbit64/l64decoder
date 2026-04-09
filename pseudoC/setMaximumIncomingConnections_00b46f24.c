// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaximumIncomingConnections
// Entry Point: 00b46f24
// Size: 64 bytes
// Signature: undefined __thiscall setMaximumIncomingConnections(ENetNetworkManager * this, ushort param_1)


/* ENetNetworkManager::setMaximumIncomingConnections(unsigned short) */

void __thiscall
ENetNetworkManager::setMaximumIncomingConnections(ENetNetworkManager *this,ushort param_1)

{
  Mutex::enterCriticalSection();
  *(uint *)(this + 100) = (uint)param_1;
  Mutex::leaveCriticalSection();
  return;
}


