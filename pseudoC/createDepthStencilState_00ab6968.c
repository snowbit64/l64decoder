// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDepthStencilState
// Entry Point: 00ab6968
// Size: 288 bytes
// Signature: undefined __thiscall createDepthStencilState(VulkanRenderDevice * this, DepthStencilStateDesc * param_1)


/* VulkanRenderDevice::createDepthStencilState(DepthStencilStateDesc const&) */

VulkanDepthStencilState * __thiscall
VulkanRenderDevice::createDepthStencilState(VulkanRenderDevice *this,DepthStencilStateDesc *param_1)

{
  long lVar1;
  VulkanRenderDevice VVar2;
  long lVar3;
  bool bVar4;
  pair pVar5;
  VulkanDepthStencilState *this_00;
  VulkanRenderDevice *pVVar6;
  VulkanRenderDevice *pVVar7;
  uint uVar8;
  VkPipelineDepthStencilStateCreateInfo *pVVar9;
  undefined8 local_b0 [14];
  uint local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pVVar7 = *(VulkanRenderDevice **)(this + 0x488);
  *(undefined4 *)(this + 0x3b0) = 0;
  if (pVVar7 != (VulkanRenderDevice *)0x0) {
    VVar2 = *(VulkanRenderDevice *)param_1;
    pVVar6 = this + 0x488;
    do {
      bVar4 = *(int *)(pVVar7 + 0x24) < *(int *)(param_1 + 4);
      if (pVVar7[0x20] != VVar2) {
        bVar4 = (byte)pVVar7[0x20] < (byte)VVar2;
      }
      lVar1 = 8;
      if (!bVar4) {
        lVar1 = 0;
        pVVar6 = pVVar7;
      }
      pVVar7 = *(VulkanRenderDevice **)(pVVar7 + lVar1);
    } while (pVVar7 != (VulkanRenderDevice *)0x0);
    if (pVVar6 != this + 0x488) {
      bVar4 = *(int *)(param_1 + 4) < *(int *)(pVVar6 + 0x24);
      if (VVar2 != pVVar6[0x20]) {
        bVar4 = (byte)VVar2 < (byte)pVVar6[0x20];
      }
      if (!bVar4) {
        pVVar9 = (VkPipelineDepthStencilStateCreateInfo *)(pVVar6 + 0x28);
        uVar8 = *(uint *)(pVVar6 + 0x90);
        goto LAB_00ab6a38;
      }
    }
  }
  local_b0[0] = *(undefined8 *)param_1;
  uVar8 = *(uint *)(this + 0x490);
  local_40 = uVar8;
  pVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
          ::
          __emplace_unique_key_args<DepthStencilStateDesc,std::__ndk1::pair<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>
                    ((__tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
                      *)(this + 0x480),(DepthStencilStateDesc *)local_b0,(pair *)local_b0);
  pVVar9 = (VkPipelineDepthStencilStateCreateInfo *)((ulong)pVar5 + 0x28);
  VulkanDepthStencilState::createDepthStencilState(param_1,pVVar9);
LAB_00ab6a38:
  this_00 = (VulkanDepthStencilState *)operator_new(0x18);
                    /* try { // try from 00ab6a44 to 00ab6a4f has its CatchHandler @ 00ab6a88 */
  VulkanDepthStencilState::VulkanDepthStencilState(this_00,pVVar9,uVar8);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


