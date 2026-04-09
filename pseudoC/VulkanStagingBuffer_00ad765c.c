// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanStagingBuffer
// Entry Point: 00ad765c
// Size: 120 bytes
// Signature: undefined __thiscall ~VulkanStagingBuffer(VulkanStagingBuffer * this)


/* VulkanStagingBuffer::~VulkanStagingBuffer() */

void __thiscall VulkanStagingBuffer::~VulkanStagingBuffer(VulkanStagingBuffer *this)

{
  long lVar1;
  Buffer *pBVar2;
  
  *(undefined ***)this = &PTR__VulkanStagingBuffer_00fe6b58;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 00ad7690 to 00ad76a7 has its CatchHandler @ 00ad76ec */
    lVar1 = (**(code **)(**(long **)(this + 0x10) + 0x138))();
    pBVar2 = *(Buffer **)(this + 0x18);
    Mutex::enterCriticalSection();
                    /* try { // try from 00ad76b4 to 00ad76bb has its CatchHandler @ 00ad76d8 */
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(lVar1 + 0x98) + 0x370),pBVar2,
               *(FenceStatus **)(lVar1 + 0x550));
                    /* try { // try from 00ad76bc to 00ad76c3 has its CatchHandler @ 00ad76d4 */
    Mutex::leaveCriticalSection();
  }
  return;
}


