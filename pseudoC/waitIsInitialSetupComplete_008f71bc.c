// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitIsInitialSetupComplete
// Entry Point: 008f71bc
// Size: 128 bytes
// Signature: undefined waitIsInitialSetupComplete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::waitIsInitialSetupComplete() */

void TerrainPatchOccluderManager::waitIsInitialSetupComplete(void)

{
  long *in_x0;
  long lVar1;
  
  if (*(char *)((long)in_x0 + 0x133) == '\0') {
    lVar1 = ThreadUtil::getCurrentThreadId();
    if (lVar1 != *in_x0) {
      Event::wait((Event *)(in_x0 + 1),0xffffffff);
      return;
    }
    while (((in_x0[0x27] != in_x0[0x28] || *(int *)(in_x0 + 0x2a) != 0 ||
            (in_x0[0x2b] != in_x0[0x2c])) || (*(int *)(in_x0 + 0x2e) != 0))) {
      ThreadUtil::usleep(1000);
      update();
    }
  }
  return;
}


