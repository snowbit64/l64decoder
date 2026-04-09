// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>
// Entry Point: 00ab92a8
// Size: 340 bytes
// Signature: pair __thiscall __emplace_unique_key_args<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>(__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>> * this, PipelineLayoutDesc * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,
   VkPipelineLayout_T*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,
   VkPipelineLayout_T*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,
   VkPipelineLayout_T*>, std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,
   std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc, VkPipelineLayout_T*>,
   VulkanProgramObject::PipelineLayoutDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,
   VkPipelineLayout_T*> > >::__emplace_unique_key_args<VulkanProgramObject::PipelineLayoutDesc,
   std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc, VkPipelineLayout_T*>
   >(VulkanProgramObject::PipelineLayoutDesc const&,
   std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc, VkPipelineLayout_T*>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
::
__emplace_unique_key_args<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>
          (__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
           *this,PipelineLayoutDesc *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)(this + 8);
  puVar10 = (undefined8 *)*puVar9;
  puVar5 = puVar9;
  if (puVar10 == (undefined8 *)0x0) {
LAB_00ab936c:
    puVar10 = (undefined8 *)*puVar9;
  }
  else {
    uVar1 = *(ulong *)param_1;
    uVar3 = *(ulong *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar9 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar5 = puVar10;
        uVar7 = puVar5[4];
        if (uVar1 == uVar7) break;
        uVar8 = uVar1;
        if (uVar1 < uVar7) goto LAB_00ab92e0;
LAB_00ab9350:
        if (uVar8 <= uVar7) goto LAB_00ab936c;
        puVar9 = puVar5 + 1;
        puVar10 = (undefined8 *)*puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_00ab936c;
      }
      uVar7 = puVar5[5];
      if (uVar3 != uVar7) {
        uVar8 = uVar3;
        if (uVar3 < uVar7) goto LAB_00ab92e0;
        goto LAB_00ab9350;
      }
      uVar7 = puVar5[6];
      if (uVar2 == uVar7) {
        uVar7 = puVar5[7];
        if (uVar4 < uVar7) goto LAB_00ab92e0;
        uVar8 = uVar4;
        if (uVar7 != uVar4) goto LAB_00ab9350;
        goto LAB_00ab936c;
      }
      uVar8 = uVar2;
      if (uVar7 <= uVar2) goto LAB_00ab9350;
LAB_00ab92e0:
      puVar9 = puVar5;
      puVar10 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    puVar10 = (undefined8 *)*puVar5;
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)operator_new(0x48);
    uVar12 = *(undefined8 *)(param_2 + 2);
    uVar11 = *(undefined8 *)param_2;
    uVar14 = *(undefined8 *)(param_2 + 6);
    uVar13 = *(undefined8 *)(param_2 + 4);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = puVar5;
    uVar6 = *(undefined8 *)(param_2 + 8);
    puVar10[5] = uVar12;
    puVar10[4] = uVar11;
    puVar10[7] = uVar14;
    puVar10[6] = uVar13;
    puVar10[8] = uVar6;
    *puVar9 = puVar10;
    puVar5 = puVar10;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar5 = (undefined8 *)*puVar9;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar10;
}


