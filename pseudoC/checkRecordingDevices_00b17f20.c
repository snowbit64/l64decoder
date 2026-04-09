// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkRecordingDevices
// Entry Point: 00b17f20
// Size: 168 bytes
// Signature: undefined checkRecordingDevices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::checkRecordingDevices() */

void VoiceChatManager::checkRecordingDevices(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  
  if (*(long **)(in_x0 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x50) + 0x198))();
    iVar1 = (**(code **)(**(long **)(in_x0 + 0x50) + 0x188))();
    if (*(int *)(in_x0 + 0x60) != iVar1) {
      if (*(long **)(in_x0 + 0x58) != (long *)0x0) {
        (**(code **)(**(long **)(in_x0 + 0x58) + 8))();
        *(undefined4 *)(in_x0 + 0x60) = 0xffffffff;
      }
      lVar2 = (**(code **)(**(long **)(in_x0 + 0x50) + 0x1a0))
                        (*(long **)(in_x0 + 0x50),iVar1,0,0x5622);
      *(long *)(in_x0 + 0x58) = lVar2;
      if (lVar2 != 0) {
        *(int *)(in_x0 + 0x60) = iVar1;
        VoiceAutoLevelDetector::reset();
        return;
      }
    }
  }
  return;
}


