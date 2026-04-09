// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeRemoteAudio
// Entry Point: 00b16d38
// Size: 268 bytes
// Signature: undefined __thiscall writeRemoteAudio(VoiceChatManager * this, AudioData * param_1, float param_2)


/* VoiceChatManager::writeRemoteAudio(VoiceChatManager::AudioData const&, float) */

void __thiscall
VoiceChatManager::writeRemoteAudio(VoiceChatManager *this,AudioData *param_1,float param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  
  if (this[0x2c] != (VoiceChatManager)0x0) {
    lVar3 = *(long *)(this + 0x1490);
    if (lVar3 != *(long *)(this + 0x1498)) {
      do {
        if (*(AudioData *)(lVar3 + 0x6c) == *param_1) {
          if (*(VoiceChatStreamedAudioData **)(lVar3 + 0x50) == (VoiceChatStreamedAudioData *)0x0) {
            return;
          }
          if (*(char *)(lVar3 + 0x6d) != '\0') {
            return;
          }
          VoiceChatStreamedAudioData::pushData
                    (*(VoiceChatStreamedAudioData **)(lVar3 + 0x50),*(uchar **)(param_1 + 8),
                     (uint)*(ushort *)(param_1 + 4),*(ushort *)(param_1 + 2));
          uVar1 = (**(code **)(**(long **)(lVar3 + 0x60) + 0x18))();
          if ((uVar1 & 1) == 0) {
            fVar4 = *(float *)(lVar3 + 0x68) * *(float *)(this + 0x20);
            if (*(char *)(lVar3 + 0x6d) != '\0') {
              fVar4 = 0.0;
            }
            (**(code **)(**(long **)(lVar3 + 0x60) + 0x10))
                      (fVar4,0x3f800000,0,0,*(long **)(lVar3 + 0x60),0,0);
            VoiceChatStreamedAudioData::setInitialDelay
                      (*(VoiceChatStreamedAudioData **)(lVar3 + 0x50),param_2);
          }
          plVar2 = *(long **)(lVar3 + 0x60);
          VoiceChatStreamedAudioData::getPitch();
                    /* WARNING: Could not recover jumptable at 0x00b16e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x78))(plVar2);
          return;
        }
        lVar3 = lVar3 + 0x70;
      } while (lVar3 != *(long *)(this + 0x1498));
    }
  }
  return;
}


