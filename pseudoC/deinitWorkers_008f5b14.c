// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitWorkers
// Entry Point: 008f5b14
// Size: 84 bytes
// Signature: undefined deinitWorkers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::deinitWorkers() */

void TerrainPatchOccluderManager::deinitWorkers(void)

{
  long in_x0;
  ThreadPoolTaskManager *this;
  ThreadPool *this_00;
  
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


