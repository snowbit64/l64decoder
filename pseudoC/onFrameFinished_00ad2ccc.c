// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFrameFinished
// Entry Point: 00ad2ccc
// Size: 412 bytes
// Signature: undefined onFrameFinished(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::onFrameFinished() */

void VulkanCommandBuffer::onFrameFinished(void)

{
  size_t __n;
  long lVar1;
  long in_x0;
  Fence *pFVar2;
  undefined8 *puVar3;
  Fence **ppFVar4;
  Fence **ppFVar5;
  Fence *pFVar6;
  undefined8 *__dest;
  undefined8 uVar7;
  Fence *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x1f0) == 0) {
    local_60 = (Fence *)0x0;
    while( true ) {
      do {
        pFVar6 = *(Fence **)(in_x0 + 0x80);
        pFVar2 = (Fence *)FUN_00f275d0(pFVar6,0,(Fence **)(in_x0 + 0x80));
      } while (pFVar6 != pFVar2);
      ppFVar5 = &local_60;
      local_60 = pFVar6;
      if (pFVar6 == (Fence *)0x0) break;
      do {
        do {
          pFVar2 = pFVar6;
          ppFVar4 = ppFVar5;
          ppFVar5 = (Fence **)(pFVar2 + 0x30);
          pFVar6 = *ppFVar5;
        } while (pFVar6 != (Fence *)0x0);
        *ppFVar4 = (Fence *)0x0;
        FUN_00f27700(0xffffffff,in_x0 + 0x88);
                    /* try { // try from 00ad2e50 to 00ad2e57 has its CatchHandler @ 00ad2e68 */
        VulkanResourceAllocator::releaseFence
                  (*(VulkanResourceAllocator **)(*(long *)(in_x0 + 0x98) + 0x370),pFVar2);
        ppFVar5 = &local_60;
        pFVar6 = local_60;
      } while (local_60 != (Fence *)0x0);
    }
  }
  Mutex::enterCriticalSection();
  __dest = *(undefined8 **)(in_x0 + 0x588);
  puVar3 = *(undefined8 **)(in_x0 + 0x590);
  if (__dest != puVar3) {
    uVar7 = *(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18);
    do {
      while ((ulong)__dest[3] <= *(ulong *)(__dest[2] + 8)) {
        (*vkDestroyRenderPass)(uVar7,*__dest,0);
        (*vkDestroyFramebuffer)(uVar7,__dest[1],0);
        __n = *(long *)(in_x0 + 0x590) - (long)(__dest + 4);
        if (__n != 0) {
          memmove(__dest,__dest + 4,__n);
        }
        puVar3 = (undefined8 *)((long)__dest + __n);
        *(undefined8 **)(in_x0 + 0x590) = puVar3;
        if (__dest == puVar3) goto LAB_00ad2da8;
      }
      __dest = __dest + 4;
    } while (__dest != puVar3);
  }
LAB_00ad2da8:
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


