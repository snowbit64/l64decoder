// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique<std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>
// Entry Point: 00ab9050
// Size: 236 bytes
// Signature: pair __thiscall __emplace_unique<std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>,
   std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,
   std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>, VulkanProgramObject::DescriptorSetLayoutDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*> >
   >::__emplace_unique<std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*> >(std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
::
__emplace_unique<std::__ndk1::pair<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>
          (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
           *this,pair *param_1)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<VulkanProgramObject::DescriptorSetLayoutDesc>
                      (this,&local_50,(DescriptorSetLayoutDesc *)param_1);
  puVar5 = (undefined8 *)*pp_Var2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    uVar7 = *(undefined8 *)(param_1 + 4);
    uVar6 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 6);
    puVar5[6] = uVar7;
    puVar5[5] = uVar6;
    puVar5[7] = uVar4;
    puVar5[2] = local_50;
    *pp_Var2 = (__tree_node_base *)puVar5;
    puVar3 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar3 = (undefined8 *)*pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (pair)puVar5;
}


