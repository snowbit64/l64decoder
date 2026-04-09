// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanRenderDevice
// Entry Point: 00ab3efc
// Size: 1256 bytes
// Signature: undefined __thiscall ~VulkanRenderDevice(VulkanRenderDevice * this)


/* VulkanRenderDevice::~VulkanRenderDevice() */

void __thiscall VulkanRenderDevice::~VulkanRenderDevice(VulkanRenderDevice *this)

{
  bool bVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  VulkanRenderDevice **ppVVar5;
  VulkanRenderDevice *pVVar6;
  ulong uVar7;
  VulkanRenderDevice **ppVVar8;
  undefined8 uVar9;
  
  *(undefined ***)this = &PTR__VulkanRenderDevice_00fe5f68;
  if (*(long *)(this + 0x440) == 0) {
    lVar4 = 0;
    lVar2 = *(long *)(this + 0x450);
  }
  else {
                    /* try { // try from 00ab3f3c to 00ab3f87 has its CatchHandler @ 00ab43e8 */
    (*vkQueueWaitIdle)();
    lVar4 = *(long *)(this + 0x440);
    lVar2 = *(long *)(this + 0x450);
  }
  if ((lVar2 != 0) && (lVar2 != lVar4)) {
    (*vkQueueWaitIdle)();
    lVar4 = *(long *)(this + 0x440);
  }
  if ((*(long *)(this + 0x448) != 0) && (*(long *)(this + 0x448) != lVar4)) {
    (*vkQueueWaitIdle)();
  }
  if (*(long *)(this + 0x558) != 0) {
                    /* try { // try from 00ab3fa0 to 00ab3fbf has its CatchHandler @ 00ab43e4 */
    (*vkDestroyQueryPool)(*(undefined8 *)(this + 0x18),*(long *)(this + 0x558),0);
  }
  if (*(long *)(this + 0x588) != 0) {
    (*vkDestroyQueryPool)(*(undefined8 *)(this + 0x18),*(long *)(this + 0x588),0);
  }
  ppVVar8 = *(VulkanRenderDevice ***)(this + 0x468);
  while (ppVVar8 != (VulkanRenderDevice **)(this + 0x470)) {
                    /* try { // try from 00ab3fdc to 00ab3fdf has its CatchHandler @ 00ab4400 */
    VulkanBlendState::deleteBlendState((VkPipelineColorBlendStateCreateInfo *)(ppVVar8 + 0xe));
    ppVVar5 = (VulkanRenderDevice **)ppVVar8[1];
    if ((VulkanRenderDevice **)ppVVar8[1] == (VulkanRenderDevice **)0x0) {
      ppVVar5 = ppVVar8 + 2;
      bVar1 = *(VulkanRenderDevice ***)*ppVVar5 != ppVVar8;
      ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
      if (bVar1) {
        do {
          pVVar6 = *ppVVar5;
          ppVVar5 = (VulkanRenderDevice **)(pVVar6 + 0x10);
          ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
        } while (*ppVVar8 != pVVar6);
      }
    }
    else {
      do {
        ppVVar8 = ppVVar5;
        ppVVar5 = (VulkanRenderDevice **)*ppVVar8;
      } while ((VulkanRenderDevice **)*ppVVar8 != (VulkanRenderDevice **)0x0);
    }
  }
  ppVVar8 = *(VulkanRenderDevice ***)(this + 0x4c8);
  while (ppVVar8 != (VulkanRenderDevice **)(this + 0x4d0)) {
                    /* try { // try from 00ab4048 to 00ab404b has its CatchHandler @ 00ab43fc */
    VulkanSamplerObject::deleteSampler((VkSampler_T *)ppVVar8[9],*(VkDevice_T **)(this + 0x18));
    ppVVar5 = (VulkanRenderDevice **)ppVVar8[1];
    if ((VulkanRenderDevice **)ppVVar8[1] == (VulkanRenderDevice **)0x0) {
      ppVVar5 = ppVVar8 + 2;
      bVar1 = *(VulkanRenderDevice ***)*ppVVar5 != ppVVar8;
      ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
      if (bVar1) {
        do {
          pVVar6 = *ppVVar5;
          ppVVar5 = (VulkanRenderDevice **)(pVVar6 + 0x10);
          ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
        } while (*ppVVar8 != pVVar6);
      }
    }
    else {
      do {
        ppVVar8 = ppVVar5;
        ppVVar5 = (VulkanRenderDevice **)*ppVVar8;
      } while ((VulkanRenderDevice **)*ppVVar8 != (VulkanRenderDevice **)0x0);
    }
  }
  ppVVar8 = *(VulkanRenderDevice ***)(this + 0x4f8);
  while (ppVVar8 != (VulkanRenderDevice **)(this + 0x500)) {
                    /* try { // try from 00ab40b4 to 00ab40b7 has its CatchHandler @ 00ab43f8 */
    VulkanProgramObject::deleteDescriptorSetLayout
              ((VkDescriptorSetLayout_T *)ppVVar8[7],*(VkDevice_T **)(this + 0x18));
    ppVVar5 = (VulkanRenderDevice **)ppVVar8[1];
    if ((VulkanRenderDevice **)ppVVar8[1] == (VulkanRenderDevice **)0x0) {
      ppVVar5 = ppVVar8 + 2;
      bVar1 = *(VulkanRenderDevice ***)*ppVVar5 != ppVVar8;
      ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
      if (bVar1) {
        do {
          pVVar6 = *ppVVar5;
          ppVVar5 = (VulkanRenderDevice **)(pVVar6 + 0x10);
          ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
        } while (*ppVVar8 != pVVar6);
      }
    }
    else {
      do {
        ppVVar8 = ppVVar5;
        ppVVar5 = (VulkanRenderDevice **)*ppVVar8;
      } while ((VulkanRenderDevice **)*ppVVar8 != (VulkanRenderDevice **)0x0);
    }
  }
  ppVVar8 = *(VulkanRenderDevice ***)(this + 0x510);
  while (ppVVar8 != (VulkanRenderDevice **)(this + 0x518)) {
                    /* try { // try from 00ab4130 to 00ab4133 has its CatchHandler @ 00ab43f4 */
    VulkanProgramObject::deletePipelineLayout
              ((VkPipelineLayout_T *)ppVVar8[8],*(VkDevice_T **)(this + 0x18));
    ppVVar5 = (VulkanRenderDevice **)ppVVar8[1];
    if ((VulkanRenderDevice **)ppVVar8[1] == (VulkanRenderDevice **)0x0) {
      ppVVar5 = ppVVar8 + 2;
      bVar1 = *(VulkanRenderDevice ***)*ppVVar5 != ppVVar8;
      ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
      if (bVar1) {
        do {
          pVVar6 = *ppVVar5;
          ppVVar5 = (VulkanRenderDevice **)(pVVar6 + 0x10);
          ppVVar8 = (VulkanRenderDevice **)*ppVVar5;
        } while (*ppVVar8 != pVVar6);
      }
    }
    else {
      do {
        ppVVar8 = ppVVar5;
        ppVVar5 = (VulkanRenderDevice **)*ppVVar8;
      } while ((VulkanRenderDevice **)*ppVVar8 != (VulkanRenderDevice **)0x0);
    }
  }
  while (*(long *)(this + 0x410) != 0) {
    uVar7 = *(ulong *)(this + 0x408);
    uVar9 = *(undefined8 *)
             (*(long *)((long)*(void ***)(this + 0x3f0) + (uVar7 >> 5 & 0x7fffffffffffff8)) +
             (uVar7 & 0xff) * 0x10);
    *(long *)(this + 0x410) = *(long *)(this + 0x410) + -1;
    *(ulong *)(this + 0x408) = uVar7 + 1;
    if (0x1ff < uVar7 + 1) {
      operator_delete(**(void ***)(this + 0x3f0));
      *(long *)(this + 0x3f0) = *(long *)(this + 0x3f0) + 8;
      *(long *)(this + 0x408) = *(long *)(this + 0x408) + -0x100;
    }
                    /* try { // try from 00ab418c to 00ab4197 has its CatchHandler @ 00ab4404 */
    (*vkDestroyImageView)(*(undefined8 *)(this + 0x18),uVar9,0);
  }
  if (*(long **)(this + 0x390) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x390) + 8))();
  }
  if (*(long **)(this + 0x370) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x370) + 8))();
  }
  if (*(long **)(this + 0x378) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x378) + 8))();
  }
  if (*(long **)(this + 0x380) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x380) + 8))();
  }
  if (*(long **)(this + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x388) + 8))();
  }
  if (*(long *)(this + 0x30) != 0) {
                    /* try { // try from 00ab4278 to 00ab429b has its CatchHandler @ 00ab43ec */
    (*vkDestroyDebugReportCallbackEXT)(*(undefined8 *)(this + 0x10),*(long *)(this + 0x30),0);
  }
  if (*(long *)(this + 0x18) != 0) {
    (*vkDestroyDevice)(*(long *)(this + 0x18),0);
  }
  lVar4 = *(long *)(this + 0x418);
  if (*(long *)(this + 0x420) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ab42c4 to 00ab42cb has its CatchHandler @ 00ab43f0 */
      (*vkDestroySurfaceKHR)(*(undefined8 *)(this + 0x10),*(undefined8 *)(lVar4 + uVar7 * 8),0);
      uVar7 = (ulong)((int)uVar7 + 1);
      lVar4 = *(long *)(this + 0x418);
    } while (uVar7 < (ulong)(*(long *)(this + 0x420) - lVar4 >> 3));
  }
  if (*(long *)(this + 0x10) != 0) {
                    /* try { // try from 00ab42f8 to 00ab42ff has its CatchHandler @ 00ab43ec */
    (*vkDestroyInstance)(*(long *)(this + 0x10),0);
  }
  pvVar3 = *(void **)(this + 0x5b8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x5c0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x598);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x5a0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x568);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x570) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>,std::__ndk1::__map_value_compare<VkShaderModule_T*,std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>,std::__ndk1::less<VkShaderModule_T*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>,std::__ndk1::__map_value_compare<VkShaderModule_T*,std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>,std::__ndk1::less<VkShaderModule_T*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VkShaderModule_T*,unsigned_int>>>
             *)(this + 0x540),*(__tree_node **)(this + 0x548));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
             *)(this + 0x528),*(__tree_node **)(this + 0x530));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
             *)(this + 0x510),*(__tree_node **)(this + 0x518));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  ::destroy((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
             *)(this + 0x4f8),*(__tree_node **)(this + 0x500));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>,std::__ndk1::__map_value_compare<VkSampler_T*,std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>,std::__ndk1::less<VkSampler_T*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>>>
  ::destroy((__tree<std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>,std::__ndk1::__map_value_compare<VkSampler_T*,std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>,std::__ndk1::less<VkSampler_T*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VkSampler_T*,SamplerObjectDesc>>>
             *)(this + 0x4e0),*(__tree_node **)(this + 0x4e8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  ::destroy((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
             *)(this + 0x4c8),*(__tree_node **)(this + 0x4d0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
  ::destroy((__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
             *)(this + 0x4b0),*(__tree_node **)(this + 0x4b8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  ::destroy((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
             *)(this + 0x498),*(__tree_node **)(this + 0x4a0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
  ::destroy((__tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
             *)(this + 0x480),*(__tree_node **)(this + 0x488));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<BlendStateDesc,std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,ComparerUtil::BlendStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>>>
  ::destroy((__tree<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<BlendStateDesc,std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,ComparerUtil::BlendStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>>>
             *)(this + 0x468),*(__tree_node **)(this + 0x470));
  pvVar3 = *(void **)(this + 0x418);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x420) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
  ::~__deque_base((__deque_base<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
                   *)(this + 1000));
  Mutex::~Mutex((Mutex *)(this + 0x3bc));
  Semaphore::~Semaphore((Semaphore *)(this + 0x398));
  return;
}


