// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isActive
// Entry Point: 00b1a3dc
// Size: 52 bytes
// Signature: undefined isActive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatStreamedAudioData::isActive() */

bool VoiceChatStreamedAudioData::isActive(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + (ulong)*(uint *)(in_x0 + 0x4c0) * 0x18 + 0x22) != '\0') {
    return *(int *)(in_x0 + (ulong)*(uint *)(in_x0 + 0x4c0) * 0x18 + 0x18) != 0;
  }
  return false;
}


