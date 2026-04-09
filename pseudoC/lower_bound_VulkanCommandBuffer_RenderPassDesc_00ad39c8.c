// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __lower_bound<VulkanCommandBuffer::RenderPassDesc>
// Entry Point: 00ad39c8
// Size: 236 bytes
// Signature: __tree_iterator __thiscall __lower_bound<VulkanCommandBuffer::RenderPassDesc>(__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>> * this, RenderPassDesc * param_1, __tree_node * param_2, __tree_end_node * param_3)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned
   int>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,
   std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   VulkanCommandBuffer::RenderPassDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned
   int> > >::__lower_bound<VulkanCommandBuffer::RenderPassDesc>(VulkanCommandBuffer::RenderPassDesc
   const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,
   unsigned int>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
::__lower_bound<VulkanCommandBuffer::RenderPassDesc>
          (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
           *this,RenderPassDesc *param_1,__tree_node *param_2,__tree_end_node *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  RenderPassDesc RVar7;
  bool bVar8;
  __tree_iterator _Var9;
  __tree_node **pp_Var10;
  uint *puVar11;
  ulong uVar12;
  
  _Var9 = (__tree_iterator)param_3;
  if (param_2 != (__tree_node *)0x0) {
    iVar2 = *(int *)(param_1 + 0x30);
    uVar3 = *(uint *)param_1;
    RVar7 = param_1[4];
    do {
      while( true ) {
        _Var9 = (__tree_iterator)param_3;
        if (*(uint *)((long)param_2 + 0x1c) == uVar3) break;
        if (*(uint *)((long)param_2 + 0x1c) < uVar3) goto LAB_00ad3a98;
LAB_00ad39e8:
        _Var9 = (__tree_iterator)param_2;
        pp_Var10 = *(__tree_node ***)param_2;
        param_3 = (__tree_end_node *)param_2;
        param_2 = (__tree_node *)pp_Var10;
        if (pp_Var10 == (__tree_node **)0x0) {
          return _Var9;
        }
      }
      bVar8 = (byte)RVar7 <= (byte)*(RenderPassDesc *)((long)param_2 + 0x20);
      if (((*(RenderPassDesc *)((long)param_2 + 0x20) != RVar7) ||
          (bVar8 = *(uint *)(param_1 + 0x38) <= *(uint *)((long)param_2 + 0x54),
          *(uint *)((long)param_2 + 0x54) != *(uint *)(param_1 + 0x38))) ||
         (bVar8 = *(uint *)(param_1 + 0x3c) <= *(uint *)((long)param_2 + 0x58),
         *(uint *)((long)param_2 + 0x58) != *(uint *)(param_1 + 0x3c))) {
LAB_00ad39f8:
        if (!bVar8) goto LAB_00ad3a98;
        goto LAB_00ad39e8;
      }
      if (uVar3 != 0) {
        pp_Var10 = (__tree_node **)((long)param_2 + 0x28);
        puVar11 = (uint *)(param_1 + 0xc);
        uVar12 = (ulong)uVar3;
        do {
          uVar5 = *(uint *)((long)pp_Var10 + -4);
          uVar6 = puVar11[-1];
          bVar8 = SBORROW4(uVar5,uVar6);
          iVar1 = uVar5 - uVar6;
          if (uVar5 != uVar6) goto LAB_00ad3aa8;
          bVar8 = *puVar11 <= *(uint *)pp_Var10;
          if (*(uint *)pp_Var10 != *puVar11) goto LAB_00ad39f8;
          pp_Var10 = pp_Var10 + 1;
          uVar12 = uVar12 - 1;
          puVar11 = puVar11 + 2;
        } while (uVar12 != 0);
      }
      if (RVar7 == (RenderPassDesc)0x0) goto LAB_00ad39e8;
      iVar4 = *(int *)((long)param_2 + 0x4c);
      bVar8 = SBORROW4(iVar4,iVar2);
      iVar1 = iVar4 - iVar2;
      if (iVar4 != iVar2) {
LAB_00ad3aa8:
        if (iVar1 < 0 != bVar8) goto LAB_00ad3a98;
        goto LAB_00ad39e8;
      }
      if (*(uint *)(param_1 + 0x34) <= *(uint *)((long)param_2 + 0x50)) goto LAB_00ad39e8;
LAB_00ad3a98:
      pp_Var10 = (__tree_node **)((long)param_2 + 8);
      param_2 = *pp_Var10;
    } while ((__tree_node **)*pp_Var10 != (__tree_node **)0x0);
  }
  return _Var9;
}


