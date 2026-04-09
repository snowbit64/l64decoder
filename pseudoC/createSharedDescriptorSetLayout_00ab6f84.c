// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSharedDescriptorSetLayout
// Entry Point: 00ab6f84
// Size: 176 bytes
// Signature: undefined __thiscall createSharedDescriptorSetLayout(VulkanRenderDevice * this, DescriptorSetLayoutDesc * param_1)


/* VulkanRenderDevice::createSharedDescriptorSetLayout(VulkanProgramObject::DescriptorSetLayoutDesc
   const&) */

undefined8 __thiscall
VulkanRenderDevice::createSharedDescriptorSetLayout
          (VulkanRenderDevice *this,DescriptorSetLayoutDesc *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  undefined8 uVar3;
  void *local_58;
  void *local_50;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
          ::find<VulkanProgramObject::DescriptorSetLayoutDesc>
                    ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                      *)(this + 0x4f8),param_1);
  if (this + 0x500 == (VulkanRenderDevice *)(ulong)_Var2) {
    uVar3 = VulkanProgramObject::createDescriptorSetLayout(param_1,*(VkDevice_T **)(this + 0x18));
    std::__ndk1::
    vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
    ::vector((vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
              *)&local_58,(vector *)param_1);
                    /* try { // try from 00ab6fec to 00ab6ff7 has its CatchHandler @ 00ab7034 */
    local_40 = uVar3;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
    ::
    __emplace_unique<std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>
              ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                *)(this + 0x4f8),(pair *)&local_58);
    if (local_58 != (void *)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
  }
  else {
    uVar3 = *(undefined8 *)((VulkanRenderDevice *)(ulong)_Var2 + 0x38);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


