// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetSequence
// Entry Point: 00b1a49c
// Size: 100 bytes
// Signature: undefined resetSequence(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatStreamedAudioData::resetSequence() */

void VoiceChatStreamedAudioData::resetSequence(void)

{
  long in_x0;
  long lVar1;
  int iVar2;
  
  *(undefined *)(in_x0 + 0x507) = 1;
  Mutex::enterCriticalSection();
  iVar2 = 0x26;
  if (0xb < *(uint *)(in_x0 + 0x4c4)) {
    iVar2 = -0xc;
  }
  lVar1 = 0x22;
  *(uint *)(in_x0 + 0x4c0) = *(uint *)(in_x0 + 0x4c4) + iVar2;
  do {
    *(undefined *)(in_x0 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x4d2);
  Mutex::leaveCriticalSection();
  return;
}


