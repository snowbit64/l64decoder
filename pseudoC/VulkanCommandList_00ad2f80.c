// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanCommandList
// Entry Point: 00ad2f80
// Size: 484 bytes
// Signature: undefined __thiscall ~VulkanCommandList(VulkanCommandList * this)


/* VulkanCommandBuffer::VulkanCommandList::~VulkanCommandList() */

void __thiscall VulkanCommandBuffer::VulkanCommandList::~VulkanCommandList(VulkanCommandList *this)

{
  DescriptorPool **ppDVar1;
  DescriptorPool **ppDVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  CommandPool *pCVar7;
  DescriptorPool *pDVar8;
  VulkanResourceAllocator *pVVar9;
  
  ppDVar1 = *(DescriptorPool ***)(this + 0x78);
  ppDVar2 = *(DescriptorPool ***)(this + 0x80);
  *(undefined ***)this = &PTR__VulkanCommandList_00fe68b8;
  for (; ppDVar1 != ppDVar2; ppDVar1 = ppDVar1 + 1) {
    pDVar8 = *ppDVar1;
    iVar3 = FUN_00f27700(0xffffffff,pDVar8 + 8);
    if (iVar3 < 2) {
      pVVar9 = (VulkanResourceAllocator *)(*(long **)(this + 8))[0x6e];
                    /* try { // try from 00ad3138 to 00ad314b has its CatchHandler @ 00ad316c */
      lVar4 = (**(code **)(**(long **)(this + 8) + 0x138))();
      VulkanResourceAllocator::releaseDescriptorPool(pVVar9,pDVar8,*(FenceStatus **)(lVar4 + 0x550))
      ;
    }
  }
  if ((*(long *)(this + 0x68) != 0) &&
     (iVar3 = FUN_00f27700(0xffffffff,*(long *)(this + 0x68) + 8), iVar3 < 2)) {
    pCVar7 = *(CommandPool **)(this + 0x68);
    pVVar9 = (VulkanResourceAllocator *)(*(long **)(this + 8))[0x6e];
                    /* try { // try from 00ad2fe4 to 00ad2ffb has its CatchHandler @ 00ad3168 */
    lVar4 = (**(code **)(**(long **)(this + 8) + 0x138))();
    VulkanResourceAllocator::releaseCommandPool(pVVar9,pCVar7,0,*(FenceStatus **)(lVar4 + 0x550));
  }
  puVar6 = *(undefined8 **)(this + 0x58);
  if (puVar6 != (undefined8 *)0x0) {
    pVVar9 = *(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370);
    puVar6[1] = *puVar6;
                    /* try { // try from 00ad3014 to 00ad3017 has its CatchHandler @ 00ad3164 */
    VulkanResourceAllocator::releaseFenceStatus(pVVar9,(FenceStatus *)puVar6);
  }
  if ((*(long *)(this + 0x70) != 0) &&
     (iVar3 = FUN_00f27700(0xffffffff,*(long *)(this + 0x70) + 8), iVar3 < 2)) {
    pCVar7 = *(CommandPool **)(this + 0x70);
    pVVar9 = (VulkanResourceAllocator *)(*(long **)(this + 8))[0x6e];
                    /* try { // try from 00ad3048 to 00ad305f has its CatchHandler @ 00ad3168 */
    lVar4 = (**(code **)(**(long **)(this + 8) + 0x138))();
    VulkanResourceAllocator::releaseCommandPool(pVVar9,pCVar7,1,*(FenceStatus **)(lVar4 + 0x558));
  }
  puVar6 = *(undefined8 **)(this + 0x60);
  if (puVar6 != (undefined8 *)0x0) {
    pVVar9 = *(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370);
    puVar6[1] = *puVar6;
                    /* try { // try from 00ad3078 to 00ad307b has its CatchHandler @ 00ad3164 */
    VulkanResourceAllocator::releaseFenceStatus(pVVar9,(FenceStatus *)puVar6);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::__map_value_compare<VulkanBufferResource*,std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>,std::__ndk1::less<VulkanBufferResource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanBufferResource*,VulkanBufferResource::BUFFER_LAYOUT>>>
             *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
  pvVar5 = *(void **)(this + 0xc0);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 200) = pvVar5;
    operator_delete(pvVar5);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::__map_value_compare<VulkanTextureObject*,std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>,std::__ndk1::less<VulkanTextureObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanTextureObject*,VulkanTextureObject::LAYOUT>>>
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  pvVar5 = *(void **)(this + 0x90);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x78);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x40);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x28);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x18) = pvVar5;
  operator_delete(pvVar5);
  return;
}


