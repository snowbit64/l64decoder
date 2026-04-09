// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSetServerInfoFailed
// Entry Point: 00b3fcc4
// Size: 4 bytes
// Signature: undefined __cdecl onSetServerInfoFailed(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onSetServerInfoFailed(GsBitStream*, unsigned int) */

void MasterServerManager::onSetServerInfoFailed(GsBitStream *param_1,uint param_2)

{
  initiateSendAddServer();
  return;
}


