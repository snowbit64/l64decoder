// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRecordingMode
// Entry Point: 00b15c28
// Size: 52 bytes
// Signature: undefined __thiscall setRecordingMode(VoiceChatManager * this, VOICE_ACTIVATION param_1)


/* VoiceChatManager::setRecordingMode(VoiceChatManager::VOICE_ACTIVATION) */

void __thiscall VoiceChatManager::setRecordingMode(VoiceChatManager *this,VOICE_ACTIVATION param_1)

{
  if (*(long *)(this + 0x50) != 0) {
    Event::post();
  }
  *(VOICE_ACTIVATION *)(this + 0x18) = param_1;
  return;
}


