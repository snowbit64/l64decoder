// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFrameFinished
// Entry Point: 00ab7a18
// Size: 316 bytes
// Signature: undefined onFrameFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::onFrameFinished() */

void VulkanRenderDevice::onFrameFinished(void)

{
  undefined8 *puVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(in_x0 + 0x5c0) != *(long *)(in_x0 + 0x5b8)) {
    uVar3 = 0;
    do {
      VulkanCommandBuffer::onFrameFinished();
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(in_x0 + 0x5c0) - *(long *)(in_x0 + 0x5b8) >> 3));
  }
  VulkanCommandBuffer::onFrameFinished();
  VulkanResourceAllocator::onFrameFinished();
  VulkanMemoryAllocator::onFrameFinished();
  Semaphore::wait();
  *(int *)(in_x0 + 0x3b4) = *(int *)(in_x0 + 0x3b4) + 1;
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(in_x0 + 0x410);
  while (lVar2 != 0) {
    uVar3 = *(ulong *)(in_x0 + 0x408);
    puVar1 = (undefined8 *)
             (*(long *)((long)*(void ***)(in_x0 + 0x3f0) + (uVar3 >> 5 & 0x7fffffffffffff8)) +
             (uVar3 & 0xff) * 0x10);
    uVar4 = *puVar1;
    if (*(uint *)(in_x0 + 0x3b8) < *(uint *)(puVar1 + 1)) break;
    *(long *)(in_x0 + 0x410) = lVar2 + -1;
    *(ulong *)(in_x0 + 0x408) = uVar3 + 1;
    if (0x1ff < uVar3 + 1) {
      operator_delete(**(void ***)(in_x0 + 0x3f0));
      *(long *)(in_x0 + 0x3f0) = *(long *)(in_x0 + 0x3f0) + 8;
      *(long *)(in_x0 + 0x408) = *(long *)(in_x0 + 0x408) + -0x100;
    }
    (*vkDestroyImageView)(*(undefined8 *)(in_x0 + 0x18),uVar4,0);
    lVar2 = *(long *)(in_x0 + 0x410);
  }
  Mutex::leaveCriticalSection();
  VulkanCommandBuffer::beginNextFrame();
  readQueryResults();
  return;
}


