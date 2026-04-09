// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRasterizerState
// Entry Point: 00ab6a9c
// Size: 384 bytes
// Signature: undefined __thiscall createRasterizerState(VulkanRenderDevice * this, RasterizerStateDesc * param_1)


/* VulkanRenderDevice::createRasterizerState(RasterizerStateDesc const&) */

VulkanRasterizerState * __thiscall
VulkanRenderDevice::createRasterizerState(VulkanRenderDevice *this,RasterizerStateDesc *param_1)

{
  long **this_00;
  long lVar1;
  __tree_iterator _Var2;
  __tree_node_base **pp_Var3;
  VulkanRasterizerState *this_01;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  __tree_end_node *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  this_00 = (long **)(this + 0x498);
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x3b0) = 0;
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
          ::find<RasterizerStateDesc>
                    ((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                      *)this_00,param_1);
  puVar6 = (undefined8 *)(ulong)_Var2;
  if ((undefined8 *)(this + 0x4a0) == puVar6) {
    uStack_e8 = *(undefined8 *)(param_1 + 8);
    local_f0 = *(undefined8 *)param_1;
    uStack_d8 = *(undefined8 *)(param_1 + 0x18);
    uStack_e0 = *(undefined8 *)(param_1 + 0x10);
    local_d0 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(uint *)(this + 0x4a8);
    local_68 = uVar5;
    pp_Var3 = std::__ndk1::
              __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              ::__find_equal<RasterizerStateDesc>
                        ((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                          *)this_00,&local_f8,(RasterizerStateDesc *)&local_f0);
    puVar6 = (undefined8 *)*pp_Var3;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)operator_new(0xb0);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[5] = uStack_e8;
      puVar6[4] = local_f0;
      puVar6[7] = uStack_d8;
      puVar6[6] = uStack_e0;
      puVar6[0x10] = uStack_90;
      puVar6[0xf] = local_98;
      puVar6[0x14] = uStack_70;
      puVar6[0x13] = local_78;
      puVar6[8] = local_d0;
      puVar6[0x12] = uStack_80;
      puVar6[0x11] = local_88;
      puVar6[10] = uStack_c0;
      puVar6[9] = local_c8;
      puVar6[0xc] = uStack_b0;
      puVar6[0xb] = local_b8;
      puVar6[0x15] = CONCAT44(uStack_64,local_68);
      puVar6[0xe] = uStack_a0;
      puVar6[0xd] = local_a8;
      puVar6[2] = local_f8;
      *pp_Var3 = (__tree_node_base *)puVar6;
      puVar4 = puVar6;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar4 = (undefined8 *)*pp_Var3;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x4a0),(__tree_node_base *)puVar4);
      *(long *)(this + 0x4a8) = *(long *)(this + 0x4a8) + 1;
    }
    VulkanRasterizerState::createRasterizerState
              (param_1,(ExtendedRasterizationStateCreateInfo *)(puVar6 + 9),(bool)this[0x43c]);
  }
  else {
    uVar5 = *(uint *)(puVar6 + 0x15);
  }
  this_01 = (VulkanRasterizerState *)operator_new(0x18);
                    /* try { // try from 00ab6bdc to 00ab6be7 has its CatchHandler @ 00ab6c1c */
  VulkanRasterizerState::VulkanRasterizerState
            (this_01,(VkPipelineRasterizationStateCreateInfo *)(puVar6 + 9),uVar5);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


