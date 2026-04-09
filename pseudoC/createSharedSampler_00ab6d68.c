// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSharedSampler
// Entry Point: 00ab6d68
// Size: 464 bytes
// Signature: undefined __thiscall createSharedSampler(VulkanRenderDevice * this, SamplerObjectDesc * param_1)


/* VulkanRenderDevice::createSharedSampler(SamplerObjectDesc const&) */

long * __thiscall
VulkanRenderDevice::createSharedSampler(VulkanRenderDevice *this,SamplerObjectDesc *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  __tree_node_base **pp_Var3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  pplVar8 = (long **)(this + 0x4c8);
  local_48 = *(long *)(lVar1 + 0x28);
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
          ::find<SamplerObjectDesc>
                    ((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                      *)pplVar8,param_1);
  if (this + 0x4d0 == (VulkanRenderDevice *)(ulong)_Var2) {
    plVar7 = (long *)VulkanSamplerObject::createSampler(param_1,*(VkDevice_T **)(this + 0x18));
    uStack_78 = *(undefined8 *)(param_1 + 8);
    local_80 = *(undefined8 *)param_1;
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    local_60 = *(undefined8 *)(param_1 + 0x20);
    plStack_58 = plVar7;
    pp_Var3 = std::__ndk1::
              __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
              ::__find_equal<SamplerObjectDesc>
                        ((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                          *)pplVar8,&local_50,(SamplerObjectDesc *)&local_80);
    if (*pp_Var3 == (__tree_node_base *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x50);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[8] = local_60;
      puVar4[9] = plStack_58;
      puVar4[5] = uStack_78;
      puVar4[4] = local_80;
      puVar4[7] = uStack_68;
      puVar4[6] = uStack_70;
      puVar4[2] = local_50;
      *pp_Var3 = (__tree_node_base *)puVar4;
      if ((long *)**pplVar8 != (long *)0x0) {
        *pplVar8 = (long *)**pplVar8;
        puVar4 = (undefined8 *)*pp_Var3;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x4d0),(__tree_node_base *)puVar4);
      *(long *)(this + 0x4d8) = *(long *)(this + 0x4d8) + 1;
    }
    pplVar8 = (long **)(this + 0x4e8);
    pplVar9 = *(long ***)(this + 0x4e8);
    pplVar10 = pplVar8;
    while (pplVar9 != (long **)0x0) {
      while (pplVar10 = pplVar9, plVar7 < pplVar10[4]) {
        pplVar8 = pplVar10;
        pplVar9 = (long **)*pplVar10;
        if ((long **)*pplVar10 == (long **)0x0) {
          plVar6 = *pplVar10;
          goto joined_r0x00ab6e98;
        }
      }
      if (plVar7 <= pplVar10[4]) break;
      pplVar8 = pplVar10 + 1;
      pplVar9 = (long **)*pplVar8;
    }
    plVar6 = *pplVar8;
joined_r0x00ab6e98:
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)operator_new(0x50);
      lVar11 = *(long *)(param_1 + 8);
      lVar5 = *(long *)param_1;
      lVar13 = *(long *)(param_1 + 0x18);
      lVar12 = *(long *)(param_1 + 0x10);
      plVar6[4] = (long)plVar7;
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = (long)pplVar10;
      plVar6[6] = lVar11;
      plVar6[5] = lVar5;
      lVar5 = *(long *)(param_1 + 0x20);
      plVar6[8] = lVar13;
      plVar6[7] = lVar12;
      plVar6[9] = lVar5;
      *pplVar8 = plVar6;
      if (**(long **)(this + 0x4e0) != 0) {
        *(long *)(this + 0x4e0) = **(long **)(this + 0x4e0);
        plVar6 = *pplVar8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x4e8),(__tree_node_base *)plVar6);
      *(long *)(this + 0x4f0) = *(long *)(this + 0x4f0) + 1;
    }
  }
  else {
    plVar7 = *(long **)((VulkanRenderDevice *)(ulong)_Var2 + 0x48);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}


