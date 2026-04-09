// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInitialDelay
// Entry Point: 00b1a418
// Size: 132 bytes
// Signature: undefined __thiscall setInitialDelay(VoiceChatStreamedAudioData * this, float param_1)


/* VoiceChatStreamedAudioData::setInitialDelay(float) */

void __thiscall
VoiceChatStreamedAudioData::setInitialDelay(VoiceChatStreamedAudioData *this,float param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 * 0.001 * 50.0);
  if (0x31 < uVar1) {
    uVar1 = 0x32;
  }
  Mutex::enterCriticalSection();
  *(uint *)(this + 0x4c0) = ((*(int *)(this + 0x4c4) - uVar1) - 2) % 0x32;
  Mutex::leaveCriticalSection();
  return;
}


