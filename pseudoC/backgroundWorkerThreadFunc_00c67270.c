// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backgroundWorkerThreadFunc
// Entry Point: 00c67270
// Size: 24 bytes
// Signature: undefined __cdecl backgroundWorkerThreadFunc(void * param_1, bool * param_2)


/* UserBlockManager::backgroundWorkerThreadFunc(void*, bool volatile&) */

undefined8 UserBlockManager::backgroundWorkerThreadFunc(void *param_1,bool *param_2)

{
  sendUserReports((UserBlockManager *)param_1,param_2);
  return 0;
}


