// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChangeRequestStarted_any
// Entry Point: 0096d848
// Size: 60 bytes
// Signature: undefined __cdecl onChangeRequestStarted_any(ChangeRequest * param_1)


/* TextureStreamingManager::CommonPipelineData::onChangeRequestStarted_any(TextureStreamingManager::ChangeRequest
   const&) */

void TextureStreamingManager::CommonPipelineData::onChangeRequestStarted_any(ChangeRequest *param_1)

{
  Mutex::enterCriticalSection();
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
                    /* try { // try from 0096d870 to 0096d877 has its CatchHandler @ 0096d884 */
  Mutex::leaveCriticalSection();
  return;
}


