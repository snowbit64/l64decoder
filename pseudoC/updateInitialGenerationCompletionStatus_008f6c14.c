// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInitialGenerationCompletionStatus
// Entry Point: 008f6c14
// Size: 96 bytes
// Signature: undefined updateInitialGenerationCompletionStatus(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::updateInitialGenerationCompletionStatus() */

void TerrainPatchOccluderManager::updateInitialGenerationCompletionStatus(void)

{
  long in_x0;
  
  if ((((*(char *)(in_x0 + 0x133) == '\0') && (*(char *)(in_x0 + 0x132) != '\0')) &&
      (*(long *)(in_x0 + 0x158) == *(long *)(in_x0 + 0x160))) && (*(int *)(in_x0 + 0x170) == 0)) {
    *(undefined *)(in_x0 + 0x133) = 1;
    Event::post();
    initSingleWorker();
    return;
  }
  return;
}


