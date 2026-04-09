// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerRenderPassDesc
// Entry Point: 00acd5a8
// Size: 280 bytes
// Signature: undefined __thiscall registerRenderPassDesc(VulkanCommandBuffer * this, RenderPassDesc * param_1)


/* VulkanCommandBuffer::registerRenderPassDesc(VulkanCommandBuffer::RenderPassDesc&) */

undefined4 __thiscall
VulkanCommandBuffer::registerRenderPassDesc(VulkanCommandBuffer *this,RenderPassDesc *param_1)

{
  long **this_00;
  long lVar1;
  __tree_iterator _Var2;
  __tree_node_base **pp_Var3;
  undefined8 *puVar4;
  undefined4 uVar5;
  __tree_end_node *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  this_00 = (long **)(this + 0x468);
  local_48 = *(long *)(lVar1 + 0x28);
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
          ::find<VulkanCommandBuffer::RenderPassDesc>
                    ((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                      *)this_00,param_1);
  if (this + 0x470 == (VulkanCommandBuffer *)(ulong)_Var2) {
    uStack_88 = *(undefined8 *)(param_1 + 8);
    local_90 = *(undefined8 *)param_1;
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    local_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(this + 0x478);
    local_50 = uVar5;
    pp_Var3 = std::__ndk1::
              __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
              ::__find_equal<VulkanCommandBuffer::RenderPassDesc>
                        ((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                          *)this_00,&local_98,(RenderPassDesc *)&local_90);
    if (*pp_Var3 == (__tree_node_base *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x60);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar4 + 0x24) = uStack_88;
      *(undefined8 *)((long)puVar4 + 0x1c) = local_90;
      *(undefined8 *)((long)puVar4 + 0x34) = uStack_78;
      *(undefined8 *)((long)puVar4 + 0x2c) = uStack_80;
      *(undefined8 *)((long)puVar4 + 0x44) = uStack_68;
      *(undefined8 *)((long)puVar4 + 0x3c) = local_70;
      *(undefined8 *)((long)puVar4 + 0x54) = uStack_58;
      *(undefined8 *)((long)puVar4 + 0x4c) = uStack_60;
      *(undefined4 *)((long)puVar4 + 0x5c) = local_50;
      puVar4[2] = local_98;
      *pp_Var3 = (__tree_node_base *)puVar4;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar4 = (undefined8 *)*pp_Var3;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x470),(__tree_node_base *)puVar4);
      *(long *)(this + 0x478) = *(long *)(this + 0x478) + 1;
    }
  }
  else {
    uVar5 = *(undefined4 *)((VulkanCommandBuffer *)(ulong)_Var2 + 0x5c);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


