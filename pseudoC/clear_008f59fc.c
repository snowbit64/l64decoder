// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 008f59fc
// Size: 280 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::clear() */

void TerrainPatchOccluderManager::clear(void)

{
  long in_x0;
  long lVar1;
  Decimator *this;
  void *pvVar2;
  
  if (*(long *)(in_x0 + 0x178) != 0) {
    ThreadPoolTaskManager::cancelAllTasks();
    ThreadPoolTaskManager::waitForAllTasks(*(ThreadPoolTaskManager **)(in_x0 + 0x178),true);
    lVar1 = ThreadPoolTaskManager::getNextFinishedTask();
    while (lVar1 != 0) {
      if (*(long **)(lVar1 + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + 0x68) + 8))();
      }
      pvVar2 = *(void **)(lVar1 + 0x70);
      *(undefined8 *)(lVar1 + 0x68) = 0;
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 8));
        }
        operator_delete(pvVar2);
      }
      *(undefined8 *)(lVar1 + 0x70) = 0;
      if (*(long **)(lVar1 + 0x78) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + 0x78) + 8))();
      }
      *(undefined8 *)(lVar1 + 0x78) = 0;
      lVar1 = ThreadPoolTaskManager::getNextFinishedTask();
    }
  }
  this = *(Decimator **)(in_x0 + 0xe8);
  if (this != (Decimator *)0x0) {
    Decimator::~Decimator(this);
    operator_delete(this);
  }
  *(undefined4 *)(in_x0 + 0xf8) = 0;
  *(undefined8 *)(in_x0 + 0x68) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  *(undefined8 *)(in_x0 + 0xf0) = 0x4000000000000000;
  releaseOccluders();
  *(undefined4 *)(in_x0 + 0x150) = 0;
  *(undefined4 *)(in_x0 + 0x170) = 0;
  *(undefined8 *)(in_x0 + 0x120) = *(undefined8 *)(in_x0 + 0x118);
  *(undefined8 *)(in_x0 + 0x140) = *(undefined8 *)(in_x0 + 0x138);
  *(undefined8 *)(in_x0 + 0x160) = *(undefined8 *)(in_x0 + 0x158);
  *(undefined4 *)(in_x0 + 0x130) = 0x1000000;
  Event::post();
  *(undefined *)(in_x0 + 0x188) = 0;
  return;
}


