// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFrameFinished
// Entry Point: 00abf68c
// Size: 156 bytes
// Signature: undefined onFrameFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanMemoryAllocator::onFrameFinished() */

void VulkanMemoryAllocator::onFrameFinished(void)

{
  long lVar1;
  VulkanMemoryAllocator *in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  Mutex::enterCriticalSection();
                    /* try { // try from 00abf6b0 to 00abf6bb has its CatchHandler @ 00abf72c */
  garbageCollect(in_x0,false);
  lVar5 = *(long *)(in_x0 + 0x220);
  for (lVar4 = *(long *)(in_x0 + 0x218); lVar4 != lVar5; lVar4 = lVar4 + 0x38) {
    lVar2 = *(long *)(lVar4 + 8);
    lVar1 = *(long *)(lVar4 + 0x10);
    lVar3 = lVar2;
    if (lVar2 != lVar1) {
      do {
                    /* try { // try from 00abf6f4 to 00abf6f7 has its CatchHandler @ 00abf730 */
        SubAllocator::updateFreeSize();
        lVar2 = lVar2 + 8;
      } while (lVar2 != lVar1);
      lVar2 = *(long *)(lVar4 + 8);
      lVar3 = *(long *)(lVar4 + 0x10);
    }
    FUN_00abfd3c(lVar2,lVar3);
  }
                    /* try { // try from 00abf70c to 00abf713 has its CatchHandler @ 00abf728 */
  Mutex::leaveCriticalSection();
  return;
}


