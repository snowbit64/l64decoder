// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticOnServerInfoRead
// Entry Point: 00b40d18
// Size: 4 bytes
// Signature: undefined __cdecl staticOnServerInfoRead(void * param_1, ServerOverviewInfo * param_2, uint param_3, uint param_4)


/* MasterServerManager::staticOnServerInfoRead(void*, MasterServerManager::ServerOverviewInfo*,
   unsigned int, unsigned int) */

void MasterServerManager::staticOnServerInfoRead
               (void *param_1,ServerOverviewInfo *param_2,uint param_3,uint param_4)

{
  onServerInfoRead((MasterServerManager *)param_1,param_2,param_3,param_4);
  return;
}


