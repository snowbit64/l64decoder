// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseTextureWithGraphicsQueueThreadSafe
// Entry Point: 00aad990
// Size: 108 bytes
// Signature: undefined __thiscall releaseTextureWithGraphicsQueueThreadSafe(VulkanCommandBuffer * this, Texture * param_1, FenceStatus * param_2, ulonglong param_3)


/* VulkanCommandBuffer::releaseTextureWithGraphicsQueueThreadSafe(VulkanResourceAllocator::Texture*,
   VulkanResourceAllocator::FenceStatus*, unsigned long long) */

void __thiscall
VulkanCommandBuffer::releaseTextureWithGraphicsQueueThreadSafe
          (VulkanCommandBuffer *this,Texture *param_1,FenceStatus *param_2,ulonglong param_3)

{
  Mutex::enterCriticalSection();
                    /* try { // try from 00aad9d0 to 00aad9df has its CatchHandler @ 00aada00 */
  VulkanResourceAllocator::releaseTexture
            (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),param_1,
             (FenceStatus *)*(ulonglong **)(this + 0x550),**(ulonglong **)(this + 0x550),param_2,
             param_3);
                    /* try { // try from 00aad9e0 to 00aad9e7 has its CatchHandler @ 00aad9fc */
  Mutex::leaveCriticalSection();
  return;
}


