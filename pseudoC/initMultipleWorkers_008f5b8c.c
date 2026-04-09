// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initMultipleWorkers
// Entry Point: 008f5b8c
// Size: 272 bytes
// Signature: undefined initMultipleWorkers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::initMultipleWorkers() */

void TerrainPatchOccluderManager::initMultipleWorkers(void)

{
  long in_x0;
  ulong uVar1;
  undefined8 *this;
  uint uVar2;
  ThreadPoolTaskManager *pTVar3;
  ThreadPool *this_00;
  
  while (((*(long *)(in_x0 + 0x138) != *(long *)(in_x0 + 0x140) || *(int *)(in_x0 + 0x150) != 0 ||
          (*(long *)(in_x0 + 0x158) != *(long *)(in_x0 + 0x160))) || (*(int *)(in_x0 + 0x170) != 0))
        ) {
    ThreadUtil::usleep(1000);
    update();
  }
  pTVar3 = *(ThreadPoolTaskManager **)(in_x0 + 0x178);
  if (pTVar3 != (ThreadPoolTaskManager *)0x0) {
    ThreadPoolTaskManager::~ThreadPoolTaskManager(pTVar3);
    operator_delete(pTVar3);
  }
  this_00 = *(ThreadPool **)(in_x0 + 0x180);
  *(undefined8 *)(in_x0 + 0x178) = 0;
  if (this_00 != (ThreadPool *)0x0) {
    ThreadPool::~ThreadPool(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(in_x0 + 0x180) = 0;
  uVar1 = EnvUtil::getNumOfProcessors();
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
                    /* try { // try from 008f5c44 to 008f5c47 has its CatchHandler @ 008f5ca0 */
  ThreadPool::ThreadPool((ThreadPool *)this);
  uVar2 = (uint)((uVar1 & 0xffffffff) >> 1);
  if (2 < uVar2) {
    uVar2 = 3;
  }
  *(undefined8 **)(in_x0 + 0x180) = this;
  ThreadPool::createFixedNumberOfRovingThreads
            ((ThreadPool *)this,uVar2,"TerrainPatchOccluderManager threadpool",3,0x80000);
  pTVar3 = (ThreadPoolTaskManager *)operator_new(0x78);
                    /* try { // try from 008f5c84 to 008f5c87 has its CatchHandler @ 008f5c9c */
  ThreadPoolTaskManager::ThreadPoolTaskManager(pTVar3,*(ThreadPool **)(in_x0 + 0x180));
  *(ThreadPoolTaskManager **)(in_x0 + 0x178) = pTVar3;
  return;
}


