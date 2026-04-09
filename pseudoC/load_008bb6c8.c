// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 008bb6c8
// Size: 128 bytes
// Signature: undefined load(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SampleChunk::load() */

bool SampleChunk::load(void)

{
  char *pcVar1;
  bool bVar2;
  long in_x0;
  long *plVar3;
  FormatSupport *pFVar4;
  ulong uVar5;
  
  if (*(char *)(in_x0 + 0x20) == '\0') {
    pcVar1 = (char *)(in_x0 + 0x31);
    if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(in_x0 + 0x40);
    }
    AudioDeviceManager::getInstance();
    plVar3 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    pFVar4 = (FormatSupport *)(**(code **)(*plVar3 + 0x18))();
    uVar5 = AudioLoadUtil::load(pcVar1,pFVar4,(AudioBufferDesc *)(in_x0 + 0x50));
    if ((uVar5 & 1) == 0) {
      bVar2 = *(char *)(in_x0 + 0x20) != '\0';
    }
    else {
      bVar2 = true;
      *(undefined *)(in_x0 + 0x20) = 1;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


