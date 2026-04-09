// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 008f9dd4
// Size: 44 bytes
// Signature: undefined __cdecl executeTask(uint param_1)


/* TerrainPatchOccluderManager::Task::executeTask(unsigned int) */

void TerrainPatchOccluderManager::Task::executeTask(uint param_1)

{
  ulong uVar1;
  TerrainPatchOccluderManager *this;
  
  uVar1 = (ulong)param_1;
  this = *(TerrainPatchOccluderManager **)(uVar1 + 0x28);
  if (*(long *)(this + 0xe8) == 0) {
    return;
  }
  if (*(int *)(uVar1 + 0x38) != 0) {
    processRequestTypeStitch_async(this,(RequestDesc *)(uVar1 + 0x30),(Result *)(uVar1 + 0x48));
    return;
  }
  processRequestTypeOccluder_async(this,(RequestDesc *)(uVar1 + 0x30),(Result *)(uVar1 + 0x48));
  return;
}


