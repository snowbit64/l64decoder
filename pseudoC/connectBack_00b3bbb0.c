// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectBack
// Entry Point: 00b3bbb0
// Size: 68 bytes
// Signature: undefined __cdecl connectBack(uint param_1)


/* MasterServerManager::connectBack(unsigned int) */

void MasterServerManager::connectBack(uint param_1)

{
  MasterServerManager *this;
  NetworkAddress *pNVar1;
  
  this = (MasterServerManager *)(ulong)param_1;
  deleteServerOverviewInfos();
  pNVar1 = *(NetworkAddress **)(this + 0x418);
  if (pNVar1 != *(NetworkAddress **)(this + 0x420)) {
    connectBack(this,pNVar1,pNVar1[2]);
    return;
  }
  return;
}


