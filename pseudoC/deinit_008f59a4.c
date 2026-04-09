// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinit
// Entry Point: 008f59a4
// Size: 88 bytes
// Signature: undefined deinit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::deinit() */

void TerrainPatchOccluderManager::deinit(void)

{
  long in_x0;
  ThreadPoolTaskManager *this;
  ThreadPool *this_00;
  
  clear();
  this = *(ThreadPoolTaskManager **)(in_x0 + 0x178);
  if (this != (ThreadPoolTaskManager *)0x0) {
    ThreadPoolTaskManager::~ThreadPoolTaskManager(this);
    operator_delete(this);
  }
  this_00 = *(ThreadPool **)(in_x0 + 0x180);
  *(undefined8 *)(in_x0 + 0x178) = 0;
  if (this_00 != (ThreadPool *)0x0) {
    ThreadPool::~ThreadPool(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(in_x0 + 0x180) = 0;
  return;
}


