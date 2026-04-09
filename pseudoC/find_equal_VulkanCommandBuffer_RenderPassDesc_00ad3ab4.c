// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<VulkanCommandBuffer::RenderPassDesc>
// Entry Point: 00ad3ab4
// Size: 428 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<VulkanCommandBuffer::RenderPassDesc>(__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>> * this, __tree_end_node * * param_1, RenderPassDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,
   std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned int>,
   VulkanCommandBuffer::RenderPassDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc, unsigned
   int> > 
   >::__find_equal<VulkanCommandBuffer::RenderPassDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   VulkanCommandBuffer::RenderPassDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
::__find_equal<VulkanCommandBuffer::RenderPassDesc>
          (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
           *this,__tree_end_node **param_1,RenderPassDesc *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  _Var9;
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  _Var10;
  bool bVar11;
  __tree_node_base **pp_Var12;
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  **pp_Var13;
  uint *puVar14;
  ulong uVar15;
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  **pp_Var16;
  __tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
  **pp_Var17;
  
  pp_Var12 = (__tree_node_base **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
       **)*pp_Var12 ==
      (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var12;
    return pp_Var12;
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x3c);
  uVar5 = *(uint *)param_2;
  iVar3 = *(int *)(param_2 + 0x30);
  _Var9 = *(__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
            *)(param_2 + 4);
  pp_Var13 = (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
              **)(this + 8);
  pp_Var17 = (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
              **)*pp_Var12;
LAB_00ad3af4:
  do {
    pp_Var16 = pp_Var17;
    uVar6 = *(uint *)((long)pp_Var16 + 0x1c);
    if (uVar5 == uVar6) {
      _Var10 = *(__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                 *)(pp_Var16 + 4);
      if (_Var9 == _Var10) {
        bVar11 = *(uint *)((long)pp_Var16 + 0x54) <= uVar2;
        if ((uVar2 == *(uint *)((long)pp_Var16 + 0x54)) &&
           (bVar11 = *(uint *)(pp_Var16 + 0xb) <= uVar4, uVar4 == *(uint *)(pp_Var16 + 0xb))) {
          if (uVar5 != 0) {
            pp_Var17 = pp_Var16 + 5;
            puVar14 = (uint *)(param_2 + 0xc);
            uVar15 = (ulong)uVar5;
            do {
              uVar6 = puVar14[-1];
              uVar8 = *(uint *)((long)pp_Var17 + -4);
              bVar11 = SBORROW4(uVar6,uVar8);
              iVar1 = uVar6 - uVar8;
              if (uVar6 != uVar8) goto LAB_00ad3bb4;
              if (*puVar14 != *(uint *)pp_Var17) {
                if (*puVar14 < *(uint *)pp_Var17) goto LAB_00ad3ba4;
                goto LAB_00ad3bc0;
              }
              pp_Var17 = pp_Var17 + 1;
              uVar15 = uVar15 - 1;
              puVar14 = puVar14 + 2;
            } while (uVar15 != 0);
          }
          if (_Var9 != (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                        )0x0) {
            iVar7 = *(int *)((long)pp_Var16 + 0x4c);
            bVar11 = SBORROW4(iVar3,iVar7);
            iVar1 = iVar3 - iVar7;
            if (iVar3 == iVar7) {
              if (*(uint *)(pp_Var16 + 10) <= *(uint *)(param_2 + 0x34)) goto LAB_00ad3bc0;
            }
            else {
LAB_00ad3bb4:
              if (iVar1 < 0 == bVar11) goto LAB_00ad3bc0;
            }
LAB_00ad3ba4:
            pp_Var13 = pp_Var16;
            pp_Var17 = (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                        **)*pp_Var16;
            if ((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                 **)*pp_Var16 ==
                (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                 **)0x0) {
              *param_1 = (__tree_end_node *)pp_Var16;
              return (__tree_node_base **)pp_Var16;
            }
            goto LAB_00ad3af4;
          }
LAB_00ad3bc0:
          if (_Var9 != _Var10) goto LAB_00ad3b94;
        }
        else if (!bVar11) goto LAB_00ad3ba4;
        bVar11 = uVar2 <= *(uint *)((long)pp_Var16 + 0x54);
        if ((*(uint *)((long)pp_Var16 + 0x54) == uVar2) &&
           (bVar11 = uVar4 <= *(uint *)(pp_Var16 + 0xb), *(uint *)(pp_Var16 + 0xb) == uVar4)) {
          if (uVar5 != 0) {
            pp_Var17 = pp_Var16 + 5;
            uVar15 = (ulong)uVar5;
            puVar14 = (uint *)(param_2 + 0xc);
            do {
              uVar6 = *(uint *)((long)pp_Var17 + -4);
              uVar8 = puVar14[-1];
              bVar11 = SBORROW4(uVar6,uVar8);
              iVar1 = uVar6 - uVar8;
              if (uVar6 != uVar8) goto LAB_00ad3c40;
              bVar11 = *puVar14 <= *(uint *)pp_Var17;
              if (*(uint *)pp_Var17 != *puVar14) goto LAB_00ad3c38;
              pp_Var17 = pp_Var17 + 1;
              uVar15 = uVar15 - 1;
              puVar14 = puVar14 + 2;
            } while (uVar15 != 0);
          }
          if (_Var9 == (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                        )0x0) goto LAB_00ad3c44;
          iVar7 = *(int *)((long)pp_Var16 + 0x4c);
          bVar11 = SBORROW4(iVar7,iVar3);
          iVar1 = iVar7 - iVar3;
          if (iVar7 != iVar3) {
LAB_00ad3c40:
            if (iVar1 < 0 != bVar11) goto LAB_00ad3ae4;
            goto LAB_00ad3c44;
          }
          bVar11 = *(uint *)(param_2 + 0x34) <= *(uint *)(pp_Var16 + 10);
        }
LAB_00ad3c38:
        if (bVar11) goto LAB_00ad3c44;
      }
      else {
        if ((byte)_Var9 < (byte)_Var10) goto LAB_00ad3ba4;
LAB_00ad3b94:
        if ((byte)_Var9 <= (byte)_Var10) goto LAB_00ad3c44;
      }
    }
    else {
      if (uVar5 < uVar6) goto LAB_00ad3ba4;
      if (uVar5 <= uVar6) goto LAB_00ad3c44;
    }
LAB_00ad3ae4:
    pp_Var13 = pp_Var16 + 1;
    pp_Var17 = (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
                **)*pp_Var13;
    if ((__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
         **)*pp_Var13 ==
        (__tree<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,std::__ndk1::__map_value_compare<VulkanCommandBuffer::RenderPassDesc,std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>,VulkanCommandBuffer::RenderPassDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanCommandBuffer::RenderPassDesc,unsigned_int>>>
         **)0x0) {
LAB_00ad3c44:
      *param_1 = (__tree_end_node *)pp_Var16;
      return (__tree_node_base **)pp_Var13;
    }
  } while( true );
}


