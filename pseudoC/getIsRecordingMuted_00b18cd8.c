// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsRecordingMuted
// Entry Point: 00b18cd8
// Size: 16 bytes
// Signature: undefined getIsRecordingMuted(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::getIsRecordingMuted() */

bool VoiceChatManager::getIsRecordingMuted(void)

{
  long in_x0;
  
  return *(char *)(in_x0 + 0x2e) != '\0';
}


