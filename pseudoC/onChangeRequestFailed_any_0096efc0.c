// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChangeRequestFailed_any
// Entry Point: 0096efc0
// Size: 60 bytes
// Signature: undefined __cdecl onChangeRequestFailed_any(ulonglong param_1)


/* TextureStreamingManager::CommonPipelineData::onChangeRequestFailed_any(unsigned long long) */

void TextureStreamingManager::CommonPipelineData::onChangeRequestFailed_any(ulonglong param_1)

{
  Mutex::enterCriticalSection();
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
                    /* try { // try from 0096efe8 to 0096efef has its CatchHandler @ 0096effc */
  Mutex::leaveCriticalSection();
  return;
}


