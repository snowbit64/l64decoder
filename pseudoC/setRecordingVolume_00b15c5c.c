// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRecordingVolume
// Entry Point: 00b15c5c
// Size: 8 bytes
// Signature: undefined __thiscall setRecordingVolume(VoiceChatManager * this, float param_1)


/* VoiceChatManager::setRecordingVolume(float) */

void __thiscall VoiceChatManager::setRecordingVolume(VoiceChatManager *this,float param_1)

{
  *(float *)(this + 0x1c) = param_1;
  return;
}


