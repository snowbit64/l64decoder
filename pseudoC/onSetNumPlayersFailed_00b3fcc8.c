// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSetNumPlayersFailed
// Entry Point: 00b3fcc8
// Size: 4 bytes
// Signature: undefined __cdecl onSetNumPlayersFailed(GsBitStream * param_1, uint param_2)


/* MasterServerManager::onSetNumPlayersFailed(GsBitStream*, unsigned int) */

void MasterServerManager::onSetNumPlayersFailed(GsBitStream *param_1,uint param_2)

{
  initiateSendAddServer();
  return;
}


