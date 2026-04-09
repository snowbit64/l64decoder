// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 008f5684
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::getInstance() */

undefined * TerrainPatchOccluderManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_0107e238 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0107e238), iVar1 != 0)) {
                    /* try { // try from 008f56c4 to 008f56cf has its CatchHandler @ 008f56fc */
    TerrainPatchOccluderManager((TerrainPatchOccluderManager *)&DAT_0107e0a8);
    __cxa_atexit(~TerrainPatchOccluderManager,&DAT_0107e0a8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107e238);
  }
  return &DAT_0107e0a8;
}


