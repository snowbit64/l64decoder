// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSingleWorker
// Entry Point: 008f5898
// Size: 244 bytes
// Signature: undefined initSingleWorker(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::initSingleWorker() */

void TerrainPatchOccluderManager::initSingleWorker(void)

{
  long in_x0;
  undefined8 *this;
  ThreadPoolTaskManager *pTVar1;
  ThreadPool *this_00;
  
  while (((*(long *)(in_x0 + 0x138) != *(long *)(in_x0 + 0x140) || *(int *)(in_x0 + 0x150) != 0 ||
          (*(long *)(in_x0 + 0x158) != *(long *)(in_x0 + 0x160))) || (*(int *)(in_x0 + 0x170) != 0))
        ) {
    ThreadUtil::usleep(1000);
    update();
  }
  pTVar1 = *(ThreadPoolTaskManager **)(in_x0 + 0x178);
  if (pTVar1 != (ThreadPoolTaskManager *)0x0) {
    ThreadPoolTaskManager::~ThreadPoolTaskManager(pTVar1);
    operator_delete(pTVar1);
  }
  this_00 = *(ThreadPool **)(in_x0 + 0x180);
  *(undefined8 *)(in_x0 + 0x178) = 0;
  if (this_00 != (ThreadPool *)0x0) {
    ThreadPool::~ThreadPool(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(in_x0 + 0x180) = 0;
  this = (undefined8 *)operator_new(0x98);
  this[0x12] = 0;
  this[1] = 0;
  *this = 0;
  this[3] = 0;
  this[2] = 0;
  this[5] = 0;
  this[4] = 0;
  this[7] = 0;
  this[6] = 0;
  this[9] = 0;
  this[8] = 0;
  this[0xb] = 0;
  this[10] = 0;
  this[0xd] = 0;
  this[0xc] = 0;
  this[0xf] = 0;
  this[0xe] = 0;
  this[0x11] = 0;
  this[0x10] = 0;
                    /* try { // try from 008f5944 to 008f5947 has its CatchHandler @ 008f5990 */
  ThreadPool::ThreadPool((ThreadPool *)this);
  *(undefined8 **)(in_x0 + 0x180) = this;
  ThreadPool::createFixedNumberOfRovingThreads
            ((ThreadPool *)this,1,"TerrainPatchOccluderManager unique worker",3,0x80000);
  pTVar1 = (ThreadPoolTaskManager *)operator_new(0x78);
                    /* try { // try from 008f5978 to 008f597b has its CatchHandler @ 008f598c */
  ThreadPoolTaskManager::ThreadPoolTaskManager(pTVar1,*(ThreadPool **)(in_x0 + 0x180));
  *(ThreadPoolTaskManager **)(in_x0 + 0x178) = pTVar1;
  return;
}


