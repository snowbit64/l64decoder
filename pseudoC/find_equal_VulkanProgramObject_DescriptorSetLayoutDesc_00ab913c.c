// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<VulkanProgramObject::DescriptorSetLayoutDesc>
// Entry Point: 00ab913c
// Size: 364 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<VulkanProgramObject::DescriptorSetLayoutDesc>(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>> * this, __tree_end_node * * param_1, DescriptorSetLayoutDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>,
   std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,
   std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>, VulkanProgramObject::DescriptorSetLayoutDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*> >
   >::__find_equal<VulkanProgramObject::DescriptorSetLayoutDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   VulkanProgramObject::DescriptorSetLayoutDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
::__find_equal<VulkanProgramObject::DescriptorSetLayoutDesc>
          (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
           *this,__tree_end_node **param_1,DescriptorSetLayoutDesc *param_2)

{
  long lVar1;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  *p_Var2;
  int iVar3;
  uint uVar4;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  _Var5;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  _Var6;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var7;
  bool bVar8;
  __tree_node_base **pp_Var9;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var10;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  pp_Var9 = (__tree_node_base **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
       **)*pp_Var9 ==
      (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var9;
    return pp_Var9;
  }
  lVar1 = *(long *)param_2;
  uVar12 = (*(long *)(param_2 + 8) - lVar1 >> 2) * -0x5555555555555555;
  pp_Var10 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
              **)(this + 8);
  pp_Var7 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
             **)*pp_Var9;
  do {
    while( true ) {
      pp_Var11 = pp_Var7;
      p_Var2 = pp_Var11[4];
      lVar13 = (long)pp_Var11[5] - (long)p_Var2 >> 2;
      uVar14 = lVar13 * -0x5555555555555555;
      if (uVar12 + lVar13 * 0x5555555555555555 != 0) break;
      if (*(long *)(param_2 + 8) - lVar1 != 0) {
        uVar14 = 0;
        do {
          _Var5 = *(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                    *)(lVar1 + uVar14 * 0xc);
          bVar8 = (byte)p_Var2[uVar14 * 0xc] <= (byte)_Var5;
          if (_Var5 != p_Var2[uVar14 * 0xc]) {
LAB_00ab91fc:
            if (!bVar8) goto LAB_00ab9208;
            break;
          }
          if (_Var5 != (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                        )0x0) {
            lVar13 = uVar14 * 0xc;
            iVar3 = *(int *)(lVar1 + lVar13 + 4);
            if (iVar3 != *(int *)(p_Var2 + lVar13 + 4)) {
              if (iVar3 < *(int *)(p_Var2 + lVar13 + 4)) goto LAB_00ab9208;
              break;
            }
            uVar4 = *(uint *)(lVar1 + lVar13 + 8);
            bVar8 = *(uint *)(p_Var2 + lVar13 + 8) <= uVar4;
            if (uVar4 != *(uint *)(p_Var2 + lVar13 + 8)) goto LAB_00ab91fc;
          }
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (uVar14 <= uVar12 && uVar12 - uVar14 != 0);
      }
      if ((long)pp_Var11[5] - (long)p_Var2 == 0) goto LAB_00ab928c;
      uVar14 = 0;
      while( true ) {
        _Var5 = p_Var2[uVar14 * 0xc];
        _Var6 = *(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                  *)(lVar1 + uVar14 * 0xc);
        bVar8 = (byte)_Var6 <= (byte)_Var5;
        if (_Var5 != _Var6) break;
        if (_Var5 != (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                      )0x0) {
          lVar13 = uVar14 * 0xc;
          iVar3 = *(int *)(lVar1 + lVar13 + 4);
          if (*(int *)(p_Var2 + lVar13 + 4) != iVar3) {
            if (*(int *)(p_Var2 + lVar13 + 4) < iVar3) goto LAB_00ab9170;
            goto LAB_00ab928c;
          }
          uVar4 = *(uint *)(lVar1 + lVar13 + 8);
          bVar8 = uVar4 <= *(uint *)(p_Var2 + lVar13 + 8);
          if (*(uint *)(p_Var2 + lVar13 + 8) != uVar4) break;
        }
        uVar14 = (ulong)((int)uVar14 + 1);
        if (uVar12 < uVar14 || uVar12 - uVar14 == 0) goto LAB_00ab928c;
      }
      if (bVar8) goto LAB_00ab928c;
LAB_00ab9170:
      pp_Var10 = pp_Var11 + 1;
      pp_Var7 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                 **)*pp_Var10;
      if ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
           **)*pp_Var10 ==
          (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
           **)0x0) {
LAB_00ab928c:
        *param_1 = (__tree_end_node *)pp_Var11;
        return (__tree_node_base **)pp_Var10;
      }
    }
    if (uVar14 <= uVar12) {
      if (uVar12 <= uVar14) goto LAB_00ab928c;
      goto LAB_00ab9170;
    }
LAB_00ab9208:
    pp_Var10 = pp_Var11;
    pp_Var7 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
               **)*pp_Var11;
    if ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
         **)*pp_Var11 ==
        (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
         **)0x0) {
      *param_1 = (__tree_end_node *)pp_Var11;
      return (__tree_node_base **)pp_Var11;
    }
  } while( true );
}


