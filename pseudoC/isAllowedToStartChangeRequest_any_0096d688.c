// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isAllowedToStartChangeRequest_any
// Entry Point: 0096d688
// Size: 60 bytes
// Signature: undefined isAllowedToStartChangeRequest_any(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::CommonPipelineData::isAllowedToStartChangeRequest_any() const */

bool TextureStreamingManager::CommonPipelineData::isAllowedToStartChangeRequest_any(void)

{
  uint uVar1;
  long in_x0;
  
  Mutex::enterCriticalSection();
  uVar1 = *(uint *)(in_x0 + 0xb0);
                    /* try { // try from 0096d6a8 to 0096d6af has its CatchHandler @ 0096d6c4 */
  Mutex::leaveCriticalSection();
  return uVar1 < 10;
}


