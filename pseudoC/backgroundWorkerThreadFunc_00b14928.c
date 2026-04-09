// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backgroundWorkerThreadFunc
// Entry Point: 00b14928
// Size: 24 bytes
// Signature: undefined __cdecl backgroundWorkerThreadFunc(void * param_1, bool * param_2)


/* VoiceChatManager::backgroundWorkerThreadFunc(void*, bool volatile&) */

undefined8 VoiceChatManager::backgroundWorkerThreadFunc(void *param_1,bool *param_2)

{
  analyzeAndEncodeLocalAudio((VoiceChatManager *)param_1,param_2);
  return 0;
}


