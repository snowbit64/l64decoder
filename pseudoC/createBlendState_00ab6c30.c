// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBlendState
// Entry Point: 00ab6c30
// Size: 292 bytes
// Signature: undefined __thiscall createBlendState(VulkanRenderDevice * this, BlendStateDesc * param_1)


/* VulkanRenderDevice::createBlendState(BlendStateDesc const&) */

VulkanBlendState * __thiscall
VulkanRenderDevice::createBlendState(VulkanRenderDevice *this,BlendStateDesc *param_1)

{
  long lVar1;
  long lVar2;
  pair pVar3;
  ulong uVar4;
  VulkanBlendState *this_00;
  VkPipelineColorBlendStateCreateInfo *pVVar5;
  uint uVar6;
  VulkanRenderDevice *pVVar7;
  VulkanRenderDevice *pVVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pVVar8 = *(VulkanRenderDevice **)(this + 0x470);
  *(undefined4 *)(this + 0x3b0) = 0;
  if (pVVar8 != (VulkanRenderDevice *)0x0) {
    pVVar7 = this + 0x470;
    do {
      uVar4 = ComparerUtil::BlendStateDescComparer::operator()
                        ((BlendStateDescComparer *)(this + 0x478),(BlendStateDesc *)(pVVar8 + 0x20),
                         param_1);
      lVar1 = 8;
      if ((uVar4 & 1) == 0) {
        lVar1 = 0;
        pVVar7 = pVVar8;
      }
      pVVar8 = *(VulkanRenderDevice **)(pVVar8 + lVar1);
    } while (pVVar8 != (VulkanRenderDevice *)0x0);
    if ((pVVar7 != this + 0x470) &&
       (uVar4 = ComparerUtil::BlendStateDescComparer::operator()
                          ((BlendStateDescComparer *)(this + 0x478),param_1,
                           (BlendStateDesc *)(pVVar7 + 0x20)), (uVar4 & 1) == 0)) {
      pVVar5 = (VkPipelineColorBlendStateCreateInfo *)(pVVar7 + 0x70);
      uVar6 = *(uint *)(pVVar7 + 0xa8);
      goto LAB_00ab6cfc;
    }
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0x28);
  local_d0 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  local_b0 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 8);
  local_f0 = *(undefined8 *)param_1;
  uStack_d8 = *(undefined8 *)(param_1 + 0x18);
  uStack_e0 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(uint *)(this + 0x478);
  local_68 = uVar6;
  pVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<BlendStateDesc,std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,ComparerUtil::BlendStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>>>
          ::
          __emplace_unique_key_args<BlendStateDesc,std::__ndk1::pair<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>>
                    ((__tree<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<BlendStateDesc,std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>,ComparerUtil::BlendStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<BlendStateDesc,std::__ndk1::pair<VkPipelineColorBlendStateCreateInfo,unsigned_int>>>>
                      *)(this + 0x468),(BlendStateDesc *)&local_f0,(pair *)&local_f0);
  pVVar5 = (VkPipelineColorBlendStateCreateInfo *)((ulong)pVar3 + 0x70);
  VulkanBlendState::createBlendState(param_1,pVVar5);
LAB_00ab6cfc:
  this_00 = (VulkanBlendState *)operator_new(0x18);
                    /* try { // try from 00ab6d08 to 00ab6d13 has its CatchHandler @ 00ab6d54 */
  VulkanBlendState::VulkanBlendState(this_00,pVVar5,uVar6);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


