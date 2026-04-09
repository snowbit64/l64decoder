// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAppFocus
// Entry Point: 00b15fcc
// Size: 208 bytes
// Signature: undefined __thiscall setAppFocus(VoiceChatManager * this, bool param_1)


/* VoiceChatManager::setAppFocus(bool) */

void __thiscall VoiceChatManager::setAppFocus(VoiceChatManager *this,bool param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar3 = *(long *)(this + 0x1490);
  this[0x2c] = (VoiceChatManager)param_1;
  lVar4 = *(long *)(this + 0x1498);
  bVar1 = lVar3 != lVar4;
  if (param_1) {
    while (bVar1) {
      plVar2 = *(long **)(lVar3 + 0x60);
      if (plVar2 != (long *)0x0) {
        fVar5 = *(float *)(lVar3 + 0x68) * *(float *)(this + 0x20);
        if (*(char *)(lVar3 + 0x6d) != '\0') {
          fVar5 = 0.0;
        }
        (**(code **)(*plVar2 + 0x10))(fVar5,0x3f800000,0,0,plVar2,0,0);
      }
      lVar3 = lVar3 + 0x70;
      bVar1 = lVar3 != lVar4;
    }
  }
  else {
    while (bVar1) {
      if (*(long **)(lVar3 + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x60) + 0x38))();
      }
      if (*(long *)(lVar3 + 0x50) != 0) {
        VoiceChatStreamedAudioData::resetSequence();
      }
      lVar3 = lVar3 + 0x70;
      bVar1 = lVar3 != lVar4;
    }
  }
  return;
}


