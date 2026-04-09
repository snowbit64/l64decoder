// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSharedPipelineLayout
// Entry Point: 00ab7054
// Size: 336 bytes
// Signature: undefined __thiscall createSharedPipelineLayout(VulkanRenderDevice * this, PipelineLayoutDesc * param_1)


/* VulkanRenderDevice::createSharedPipelineLayout(VulkanProgramObject::PipelineLayoutDesc const&) */

VulkanRenderDevice * __thiscall
VulkanRenderDevice::createSharedPipelineLayout(VulkanRenderDevice *this,PipelineLayoutDesc *param_1)

{
  VulkanRenderDevice **ppVVar1;
  VulkanRenderDevice *pVVar2;
  VulkanRenderDevice *pVVar3;
  VulkanRenderDevice *pVVar4;
  long lVar5;
  VulkanRenderDevice **ppVVar6;
  pair pVar7;
  VulkanRenderDevice *pVVar8;
  VulkanRenderDevice **ppVVar9;
  VulkanRenderDevice **ppVVar10;
  VulkanRenderDevice *pVVar11;
  VulkanRenderDevice *pVVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  VulkanRenderDevice *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (*(VulkanRenderDevice ***)(this + 0x518) != (VulkanRenderDevice **)0x0) {
    pVVar8 = *(VulkanRenderDevice **)param_1;
    pVVar3 = *(VulkanRenderDevice **)(param_1 + 8);
    pVVar2 = *(VulkanRenderDevice **)(param_1 + 0x10);
    pVVar4 = *(VulkanRenderDevice **)(param_1 + 0x18);
    ppVVar9 = (VulkanRenderDevice **)(this + 0x518);
    ppVVar6 = *(VulkanRenderDevice ***)(this + 0x518);
    do {
      while (((((ppVVar10 = ppVVar6, pVVar12 = ppVVar10[4], pVVar11 = pVVar8, pVVar12 != pVVar8 ||
                (pVVar12 = ppVVar10[5], pVVar11 = pVVar3, pVVar12 != pVVar3)) ||
               (pVVar12 = ppVVar10[6], pVVar11 = pVVar2, pVVar12 != pVVar2)) ||
              (pVVar12 = ppVVar10[7], pVVar11 = pVVar4, pVVar12 != pVVar4)) && (pVVar12 < pVVar11)))
      {
        ppVVar1 = ppVVar10 + 1;
        ppVVar10 = ppVVar9;
        ppVVar6 = (VulkanRenderDevice **)*ppVVar1;
        if ((VulkanRenderDevice **)*ppVVar1 == (VulkanRenderDevice **)0x0) goto LAB_00ab70f8;
      }
      ppVVar9 = ppVVar10;
      ppVVar6 = (VulkanRenderDevice **)*ppVVar10;
    } while ((VulkanRenderDevice **)*ppVVar10 != (VulkanRenderDevice **)0x0);
LAB_00ab70f8:
    if ((ppVVar10 != (VulkanRenderDevice **)(this + 0x518)) &&
       ((((pVVar11 = ppVVar10[4], pVVar8 == pVVar11 &&
          (pVVar11 = ppVVar10[5], pVVar8 = pVVar3, pVVar3 == pVVar11)) &&
         ((pVVar11 = ppVVar10[6], pVVar8 = pVVar2, pVVar2 == pVVar11 &&
          (pVVar11 = ppVVar10[7], pVVar8 = pVVar4, pVVar4 == pVVar11)))) || (pVVar11 <= pVVar8)))) {
      pVVar8 = ppVVar10[8];
      goto LAB_00ab7170;
    }
  }
  pVVar8 = (VulkanRenderDevice *)
           VulkanProgramObject::createPipelineLayout(param_1,*(VkDevice_T **)(this + 0x18));
  uStack_58 = *(undefined8 *)(param_1 + 8);
  local_60 = *(undefined8 *)param_1;
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  local_40 = pVVar8;
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
          ::
          __emplace_unique_key_args<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::pair<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>
                    ((__tree<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::PipelineLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>,VulkanProgramObject::PipelineLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::PipelineLayoutDesc,VkPipelineLayout_T*>>>
                      *)(this + 0x510),(PipelineLayoutDesc *)&local_60,(pair *)&local_60);
  this = (VulkanRenderDevice *)(ulong)pVar7;
LAB_00ab7170:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return pVVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


