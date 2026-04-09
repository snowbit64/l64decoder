// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<VulkanCommandBuffer::RenderPassDesc>
// Entry Point: 00ad38d4
// Size: 244 bytes
// Signature: __tree_iterator __thiscall find<VulkanCommandBuffer::RenderPassDesc>(__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>> * this, RenderPassDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned
   int>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,
   std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   VulkanCommandBuffer::RenderPassDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned
   int> > >::find<VulkanCommandBuffer::RenderPassDesc>(VulkanCommandBuffer::RenderPassDesc const&)
    */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
::find<VulkanCommandBuffer::RenderPassDesc>
          (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
           *this,RenderPassDesc *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  RenderPassDesc RVar6;
  bool bVar7;
  __tree_iterator _Var8;
  ulong uVar10;
  __tree_node **pp_Var11;
  uint *puVar12;
  __tree_node **pp_Var13;
  __tree_node **pp_Var9;
  
  pp_Var13 = (__tree_node **)(this + 8);
  _Var8 = __lower_bound<VulkanCommandBuffer::RenderPassDesc>
                    (this,param_1,*pp_Var13,(__tree_end_node *)pp_Var13);
  pp_Var9 = (__tree_node **)(ulong)_Var8;
  if (pp_Var13 != pp_Var9) {
    uVar2 = *(uint *)param_1;
    uVar10 = (ulong)uVar2;
    if (uVar2 == *(uint *)((long)pp_Var9 + 0x1c)) {
      RVar6 = param_1[4];
      bVar7 = (byte)*(RenderPassDesc *)(pp_Var9 + 4) <= (byte)RVar6;
      if (((RVar6 == *(RenderPassDesc *)(pp_Var9 + 4)) &&
          (bVar7 = *(uint *)((long)pp_Var9 + 0x54) <= *(uint *)(param_1 + 0x38),
          *(uint *)(param_1 + 0x38) == *(uint *)((long)pp_Var9 + 0x54))) &&
         (bVar7 = *(uint *)(pp_Var9 + 0xb) <= *(uint *)(param_1 + 0x3c),
         *(uint *)(param_1 + 0x3c) == *(uint *)(pp_Var9 + 0xb))) {
        if (uVar2 != 0) {
          pp_Var11 = pp_Var9 + 5;
          puVar12 = (uint *)(param_1 + 0xc);
          do {
            uVar2 = puVar12[-1];
            uVar5 = *(uint *)((long)pp_Var11 + -4);
            bVar7 = SBORROW4(uVar2,uVar5);
            iVar1 = uVar2 - uVar5;
            if (uVar2 != uVar5) goto LAB_00ad39c0;
            bVar7 = *(uint *)pp_Var11 <= *puVar12;
            if (*puVar12 != *(uint *)pp_Var11) goto LAB_00ad39b8;
            pp_Var11 = pp_Var11 + 1;
            uVar10 = uVar10 - 1;
            puVar12 = puVar12 + 2;
          } while (uVar10 != 0);
        }
        if (RVar6 == (RenderPassDesc)0x0) goto LAB_00ad39ac;
        iVar3 = *(int *)(param_1 + 0x30);
        iVar4 = *(int *)((long)pp_Var9 + 0x4c);
        bVar7 = SBORROW4(iVar3,iVar4);
        iVar1 = iVar3 - iVar4;
        if (iVar3 == iVar4) {
          if (*(uint *)(pp_Var9 + 10) <= *(uint *)(param_1 + 0x34)) goto LAB_00ad39ac;
        }
        else {
LAB_00ad39c0:
          if (iVar1 < 0 == bVar7) goto LAB_00ad39ac;
        }
      }
      else {
LAB_00ad39b8:
        if (bVar7) goto LAB_00ad39ac;
      }
    }
    else if (*(uint *)((long)pp_Var9 + 0x1c) <= uVar2) goto LAB_00ad39ac;
  }
  pp_Var9 = pp_Var13;
LAB_00ad39ac:
  return (__tree_iterator)pp_Var9;
}


