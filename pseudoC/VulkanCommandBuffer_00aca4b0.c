// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanCommandBuffer
// Entry Point: 00aca4b0
// Size: 2172 bytes
// Signature: undefined __thiscall ~VulkanCommandBuffer(VulkanCommandBuffer * this)


/* VulkanCommandBuffer::~VulkanCommandBuffer() */

void __thiscall VulkanCommandBuffer::~VulkanCommandBuffer(VulkanCommandBuffer *this)

{
  long lVar1;
  Fence *pFVar2;
  void *pvVar3;
  long lVar4;
  Fence **ppFVar5;
  Fence **ppFVar6;
  Fence **ppFVar7;
  Fence *pFVar8;
  undefined8 uVar9;
  void **ppvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  Fence *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__VulkanCommandBuffer_00fe6660;
  *(undefined ***)(this + 8) = &PTR__VulkanCommandBuffer_00fe6808;
                    /* try { // try from 00aca4f4 to 00aca4f7 has its CatchHandler @ 00acad2c */
  VulkanRenderDevice::waitUntilGPUIdle();
  if (*(long *)(this + 0x4b8) != 0) {
                    /* try { // try from 00aca50c to 00aca52f has its CatchHandler @ 00acad34 */
    (*vkEndCommandBuffer)();
  }
  if (*(long *)(this + 0x4c0) != 0) {
    (*vkEndCommandBuffer)();
  }
  if (*(long *)(this + 0x4c8) != 0) {
    (*vkEndCommandBuffer)();
  }
  if (*(int *)(this + 0x1f0) == 0) {
    if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 00aca8bc to 00aca8cf has its CatchHandler @ 00acad30 */
      Thread::cancel();
      Semaphore::post();
      Thread::join();
    }
    local_60 = (Fence *)0x0;
    while( true ) {
      do {
        pFVar8 = *(Fence **)(this + 0x28);
        pFVar2 = (Fence *)FUN_00f275d0(pFVar8,0,this + 0x28);
      } while (pFVar8 != pFVar2);
      ppFVar7 = &local_60;
      local_60 = pFVar8;
      if (pFVar8 == (Fence *)0x0) break;
      do {
        do {
          pFVar2 = pFVar8;
          ppFVar6 = ppFVar7;
          ppFVar7 = (Fence **)(pFVar2 + 0x30);
          pFVar8 = *ppFVar7;
        } while (pFVar8 != (Fence *)0x0);
        *ppFVar6 = (Fence *)0x0;
        FUN_00f27700(0xffffffff,this + 0x30);
                    /* try { // try from 00aca944 to 00aca94b has its CatchHandler @ 00acad50 */
        VulkanResourceAllocator::releaseFence
                  (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),pFVar2);
        ppFVar7 = &local_60;
        pFVar8 = local_60;
      } while (local_60 != (Fence *)0x0);
    }
    if (*(long *)(this + 0x38) != 0) {
                    /* try { // try from 00aca960 to 00aca973 has its CatchHandler @ 00acad30 */
      Thread::cancel();
      Semaphore::post();
      Thread::join();
    }
    local_60 = (Fence *)0x0;
    while( true ) {
      do {
        pFVar8 = *(Fence **)(this + 0x50);
        pFVar2 = (Fence *)FUN_00f275d0(pFVar8,0,this + 0x50);
      } while (pFVar8 != pFVar2);
      ppFVar7 = &local_60;
      local_60 = pFVar8;
      if (pFVar8 == (Fence *)0x0) break;
      do {
        do {
          pFVar2 = pFVar8;
          ppFVar6 = ppFVar7;
          ppFVar7 = (Fence **)(pFVar2 + 0x30);
          pFVar8 = *ppFVar7;
        } while (pFVar8 != (Fence *)0x0);
        *ppFVar6 = (Fence *)0x0;
        FUN_00f27700(0xffffffff,this + 0x58);
                    /* try { // try from 00aca9e0 to 00aca9e7 has its CatchHandler @ 00acad4c */
        VulkanResourceAllocator::releaseFence
                  (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),pFVar2);
        ppFVar7 = &local_60;
        pFVar8 = local_60;
      } while (local_60 != (Fence *)0x0);
    }
  }
  ppFVar7 = (Fence **)(this + 0x80);
  local_60 = (Fence *)0x0;
  while( true ) {
    do {
      pFVar8 = *ppFVar7;
      pFVar2 = (Fence *)FUN_00f275d0(pFVar8,0,ppFVar7);
    } while (pFVar8 != pFVar2);
    ppFVar6 = &local_60;
    local_60 = pFVar8;
    if (pFVar8 == (Fence *)0x0) break;
    do {
      do {
        pFVar2 = pFVar8;
        ppFVar5 = ppFVar6;
        ppFVar6 = (Fence **)(pFVar2 + 0x30);
        pFVar8 = *ppFVar6;
      } while (pFVar8 != (Fence *)0x0);
      *ppFVar5 = (Fence *)0x0;
      FUN_00f27700(0xffffffff,this + 0x88);
                    /* try { // try from 00aca5ac to 00aca5b3 has its CatchHandler @ 00acad5c */
      VulkanResourceAllocator::releaseFence
                (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),pFVar2);
      ppFVar6 = &local_60;
      pFVar8 = local_60;
    } while (local_60 != (Fence *)0x0);
  }
  puVar11 = *(undefined8 **)(this + 0x588);
  uVar9 = *(undefined8 *)(*(long *)(this + 0x98) + 0x18);
  local_60 = (Fence *)0x0;
  if (puVar11 != *(undefined8 **)(this + 0x590)) {
    do {
                    /* try { // try from 00aca5f0 to 00aca60f has its CatchHandler @ 00acad54 */
      (*vkDestroyRenderPass)(uVar9,*puVar11,0);
      (*vkDestroyFramebuffer)(uVar9,puVar11[1],0);
      puVar11 = puVar11 + 4;
    } while (puVar11 != *(undefined8 **)(this + 0x590));
  }
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 8))();
  }
  if (*(long **)(this + 0x1e8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e8) + 8))();
  }
  if (*(long *)(this + 0xa50) != 0) {
                    /* try { // try from 00aca65c to 00aca667 has its CatchHandler @ 00acad40 */
    (*vkDestroyCommandPool)(uVar9,*(long *)(this + 0xa50),0);
  }
  lVar4 = *(long *)(this + 0x570);
  if (*(long *)(this + 0x578) != lVar4) {
    uVar12 = 0;
    do {
      FUN_00f27700(0xffffffff,*(long *)(lVar4 + uVar12 * 8) + 8);
                    /* try { // try from 00aca6a0 to 00aca6a7 has its CatchHandler @ 00acad48 */
      VulkanResourceAllocator::releaseDescriptorPool
                (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                 *(DescriptorPool **)(*(long *)(this + 0x570) + uVar12 * 8),(FenceStatus *)0x0);
      uVar12 = (ulong)((int)uVar12 + 1);
      lVar4 = *(long *)(this + 0x570);
    } while (uVar12 < (ulong)(*(long *)(this + 0x578) - lVar4 >> 3));
  }
  if (*(long *)(this + 0x568) != 0) {
    FUN_00f27700(0xffffffff,*(long *)(this + 0x568) + 8);
                    /* try { // try from 00aca6e0 to 00aca6e7 has its CatchHandler @ 00acad40 */
    VulkanResourceAllocator::releaseDescriptorPool
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
               *(DescriptorPool **)(this + 0x568),(FenceStatus *)0x0);
  }
  if (*(long *)(this + 0x4a8) != 0) {
    FUN_00f27700(0xffffffff,*(long *)(this + 0x4a8) + 8);
                    /* try { // try from 00aca708 to 00aca737 has its CatchHandler @ 00acad3c */
    VulkanResourceAllocator::releaseCommandPool
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
               *(CommandPool **)(this + 0x4a8),0,(FenceStatus *)0x0);
  }
  if (*(Fence **)(this + 0x518) != (Fence *)0x0) {
    VulkanResourceAllocator::releaseFence
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
               *(Fence **)(this + 0x518));
  }
  VulkanResourceAllocator::releaseFenceStatus
            (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
             *(FenceStatus **)(this + 0x550));
  if (*(long *)(this + 0x4b0) != 0) {
    FUN_00f27700(0xffffffff,*(long *)(this + 0x4b0) + 8);
                    /* try { // try from 00aca758 to 00aca787 has its CatchHandler @ 00acad3c */
    VulkanResourceAllocator::releaseCommandPool
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
               *(CommandPool **)(this + 0x4b0),1,(FenceStatus *)0x0);
  }
  if (*(Fence **)(this + 0x520) != (Fence *)0x0) {
    VulkanResourceAllocator::releaseFence
              (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
               *(Fence **)(this + 0x520));
  }
  VulkanResourceAllocator::releaseFenceStatus
            (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
             *(FenceStatus **)(this + 0x558));
  if (*(int *)(this + 0x1f0) == 0) {
                    /* try { // try from 00aca7a0 to 00aca80f has its CatchHandler @ 00acad38 */
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5a8),0);
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5b0),0);
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5b8),0);
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5d0),0);
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5d8),0);
    (*vkDestroySemaphore)(uVar9,*(undefined8 *)(this + 0x5e0),0);
  }
  lVar4 = *(long *)(this + 0x8e8);
  if (*(long *)(this + 0x8f0) != lVar4) {
    uVar12 = 0;
    do {
                    /* try { // try from 00aca834 to 00aca83f has its CatchHandler @ 00acad44 */
      (*vkDestroyPipeline)(uVar9,*(undefined8 *)(lVar4 + uVar12 * 8),0);
      uVar12 = (ulong)((int)uVar12 + 1);
      lVar4 = *(long *)(this + 0x8e8);
    } while (uVar12 < (ulong)(*(long *)(this + 0x8f0) - lVar4 >> 3));
  }
                    /* try { // try from 00aca868 to 00aca88b has its CatchHandler @ 00acad40 */
  VulkanRenderDevice::onCommandBufferDeleted
            (*(VulkanRenderDevice **)(this + 0x98),(ICommandBuffer *)this,
             *(int *)(this + 0x1f0) != 0);
  (*vkDestroyPipelineCache)(uVar9,*(undefined8 *)(this + 0x90),0);
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
  }
  if (*(int *)(this + 0x1f0) == 0) {
                    /* try { // try from 00acaa0c to 00acaa13 has its CatchHandler @ 00acad40 */
    (*vkDestroySampler)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),*(undefined8 *)(this + 0xb38)
                        ,0);
    *(undefined8 *)(this + 0xb38) = 0;
    if (*(long **)(this + 0xb30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb30) + 8))();
    }
    *(undefined8 *)(this + 0xb30) = 0;
    if (*(long **)(this + 0xb28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb28) + 8))();
    }
    *(undefined8 *)(this + 0xb28) = 0;
    if (*(long **)(this + 0xb20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb20) + 8))();
    }
    *(undefined8 *)(this + 0xb20) = 0;
    if (*(long **)(this + 0xb18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb18) + 8))();
    }
    *(undefined8 *)(this + 0xb18) = 0;
    lVar4 = *(long *)(this + 0xb58);
  }
  else {
    lVar4 = *(long *)(this + 0xb58);
  }
  if (lVar4 != 0) {
                    /* try { // try from 00acaa84 to 00acaaa7 has its CatchHandler @ 00acad40 */
    (*vkDestroyPipeline)(uVar9,lVar4,0);
  }
  if (*(long *)(this + 0xb60) != 0) {
    (*vkDestroyRenderPass)(uVar9,*(long *)(this + 0xb60),0);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
             *)(this + 0xb00),*(__tree_node **)(this + 0xb08));
  pvVar3 = *(void **)(this + 0xae8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xaf0) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
             *)(this + 0xad0),*(__tree_node **)(this + 0xad8));
  pvVar3 = *(void **)(this + 0xab8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xac0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x8e8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x8f0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x8d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x8d8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x8b8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x8c0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x840);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x848) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x800);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x808) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x7c0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x7c8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x780);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x788) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x740);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x748) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x700);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x708) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x6c0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x6c8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x680);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x688) = pvVar3;
    operator_delete(pvVar3);
  }
  ppvVar10 = (void **)*(void **)(this + 0x660);
  while (ppvVar10 != (void **)0x0) {
    pvVar3 = *ppvVar10;
    operator_delete(ppvVar10);
    ppvVar10 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x650);
  *(undefined8 *)(this + 0x650) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  ppvVar10 = (void **)*(void **)(this + 0x638);
  while (ppvVar10 != (void **)0x0) {
    pvVar3 = *ppvVar10;
    operator_delete(ppvVar10);
    ppvVar10 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x628);
  *(undefined8 *)(this + 0x628) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x588);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x590) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x570);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x578) = pvVar3;
    operator_delete(pvVar3);
  }
  Mutex::~Mutex((Mutex *)(this + 0x528));
  pvVar3 = *(void **)(this + 0x500);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x508) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x4e8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x4f0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x4d0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x4d8) = pvVar3;
    operator_delete(pvVar3);
  }
  Mutex::~Mutex((Mutex *)(this + 0x480));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
             *)(this + 0x468),*(__tree_node **)(this + 0x470));
  pFVar8 = *(Fence **)(this + 0x80);
  while (pFVar8 != (Fence *)0x0) {
    ppvVar10 = (void **)*ppFVar7;
    *ppFVar7 = (Fence *)ppvVar10[6];
    pvVar3 = *ppvVar10;
    if (pvVar3 != (void *)0x0) {
      ppvVar10[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(ppvVar10);
    pFVar8 = *ppFVar7;
  }
  while (*(long *)(this + 0x50) != 0) {
    ppvVar10 = *(void ***)(this + 0x50);
    *(void **)(this + 0x50) = ppvVar10[6];
    pvVar3 = *ppvVar10;
    if (pvVar3 != (void *)0x0) {
      ppvVar10[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(ppvVar10);
  }
  Semaphore::~Semaphore((Semaphore *)(this + 0x40));
  while (*(long *)(this + 0x28) != 0) {
    ppvVar10 = *(void ***)(this + 0x28);
    *(void **)(this + 0x28) = ppvVar10[6];
    pvVar3 = *ppvVar10;
    if (pvVar3 != (void *)0x0) {
      ppvVar10[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(ppvVar10);
  }
  Semaphore::~Semaphore((Semaphore *)(this + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


