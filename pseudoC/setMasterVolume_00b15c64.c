// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMasterVolume
// Entry Point: 00b15c64
// Size: 144 bytes
// Signature: undefined __thiscall setMasterVolume(VoiceChatManager * this, float param_1)


/* VoiceChatManager::setMasterVolume(float) */

void __thiscall VoiceChatManager::setMasterVolume(VoiceChatManager *this,float param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (*(float *)(this + 0x20) != param_1) {
    lVar1 = *(long *)(this + 0x1490);
    lVar2 = *(long *)(this + 0x1498);
    *(float *)(this + 0x20) = param_1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
      if (*(long **)(lVar1 + 0x60) != (long *)0x0) {
        fVar3 = *(float *)(lVar1 + 0x68) * *(float *)(this + 0x20);
        if (*(char *)(lVar1 + 0x6d) != '\0') {
          fVar3 = 0.0;
        }
        (**(code **)(**(long **)(lVar1 + 0x60) + 0x50))(fVar3);
      }
    }
  }
  return;
}


