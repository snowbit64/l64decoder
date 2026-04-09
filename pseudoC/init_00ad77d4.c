// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00ad77d4
// Size: 192 bytes
// Signature: undefined __cdecl init(VulkanCommandBuffer * param_1, IRenderDevice * param_2, uint param_3, char * param_4)


/* VulkanStagingBuffer::init(VulkanCommandBuffer*, IRenderDevice*, unsigned int, char const*) */

void VulkanStagingBuffer::init
               (VulkanCommandBuffer *param_1,IRenderDevice *param_2,uint param_3,char *param_4)

{
  long lVar1;
  VulkanResourceAllocator *this;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  Buffer *pBVar5;
  
  plVar3 = (long *)(ulong)param_3;
  *(long **)(param_1 + 0x10) = plVar3;
  uVar4 = (uint)param_4;
  if ((*(long *)(param_1 + 0x18) == 0) || (uVar4 <= *(uint *)(param_1 + 8))) {
    if (*(long *)(param_1 + 0x18) != 0) {
      return;
    }
  }
  else {
    lVar1 = (**(code **)(*plVar3 + 0x138))(plVar3);
    pBVar5 = *(Buffer **)(param_1 + 0x18);
    Mutex::enterCriticalSection();
                    /* try { // try from 00ad7838 to 00ad783f has its CatchHandler @ 00ad7898 */
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(lVar1 + 0x98) + 0x370),pBVar5,
               *(FenceStatus **)(lVar1 + 0x550));
                    /* try { // try from 00ad7840 to 00ad7847 has its CatchHandler @ 00ad7894 */
    Mutex::leaveCriticalSection();
    plVar3 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  this = (VulkanResourceAllocator *)plVar3[0x6e];
  *(uint *)(param_1 + 8) = uVar4;
  param_1[0xc] = (VulkanCommandBuffer)0x0;
  uVar2 = VulkanResourceAllocator::createBuffer(this,uVar4,7,2,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}


