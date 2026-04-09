// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<VulkanProgramObject::DescriptorSetLayoutDesc>
// Entry Point: 00ab8ee0
// Size: 368 bytes
// Signature: __tree_iterator __thiscall find<VulkanProgramObject::DescriptorSetLayoutDesc>(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>> * this, DescriptorSetLayoutDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>,
   std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,
   std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*>, VulkanProgramObject::DescriptorSetLayoutDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,
   VkDescriptorSetLayout_T*> >
   >::find<VulkanProgramObject::DescriptorSetLayoutDesc>(VulkanProgramObject::DescriptorSetLayoutDesc
   const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
::find<VulkanProgramObject::DescriptorSetLayoutDesc>
          (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
           *this,DescriptorSetLayoutDesc *param_1)

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
  bool bVar7;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var8;
  long lVar9;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var10;
  ulong uVar11;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var12;
  __tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
  **pp_Var13;
  ulong uVar14;
  long lVar15;
  
  pp_Var8 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
             **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
       **)*pp_Var8 !=
      (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
       **)0x0) {
    lVar1 = *(long *)param_1;
    lVar9 = *(long *)(param_1 + 8) - lVar1 >> 2;
    uVar11 = lVar9 * -0x5555555555555555;
    pp_Var10 = pp_Var8;
    pp_Var13 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                **)*pp_Var8;
    do {
      while( true ) {
        p_Var2 = pp_Var13[4];
        uVar14 = ((long)pp_Var13[5] - (long)p_Var2 >> 2) * -0x5555555555555555;
        bVar7 = uVar11 <= uVar14;
        if (uVar14 + lVar9 * 0x5555555555555555 != 0) break;
        if ((long)pp_Var13[5] - (long)p_Var2 != 0) {
          uVar14 = 0;
          do {
            _Var5 = p_Var2[uVar14 * 0xc];
            _Var6 = *(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                      *)(lVar1 + uVar14 * 0xc);
            bVar7 = (byte)_Var6 <= (byte)_Var5;
            if (_Var5 != _Var6) goto LAB_00ab8f90;
            if (_Var5 != (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                          )0x0) {
              lVar15 = uVar14 * 0xc;
              iVar3 = *(int *)(lVar1 + lVar15 + 4);
              if (*(int *)(p_Var2 + lVar15 + 4) != iVar3) {
                if (*(int *)(p_Var2 + lVar15 + 4) < iVar3) goto LAB_00ab8f94;
                break;
              }
              uVar4 = *(uint *)(lVar1 + lVar15 + 8);
              bVar7 = uVar4 <= *(uint *)(p_Var2 + lVar15 + 8);
              if (*(uint *)(p_Var2 + lVar15 + 8) != uVar4) goto LAB_00ab8f90;
            }
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (uVar14 <= uVar11 && uVar11 - uVar14 != 0);
        }
LAB_00ab8f08:
        pp_Var12 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                    **)*pp_Var13;
        pp_Var10 = pp_Var13;
        pp_Var13 = pp_Var12;
        if (pp_Var12 ==
            (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
             **)0x0) goto LAB_00ab8fac;
      }
LAB_00ab8f90:
      if (bVar7) goto LAB_00ab8f08;
LAB_00ab8f94:
      pp_Var12 = pp_Var13 + 1;
      pp_Var13 = (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                  **)*pp_Var12;
    } while ((__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
              **)*pp_Var12 !=
             (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
              **)0x0);
LAB_00ab8fac:
    if (pp_Var10 != pp_Var8) {
      p_Var2 = pp_Var10[4];
      lVar9 = (long)pp_Var10[5] - (long)p_Var2 >> 2;
      bVar7 = (ulong)(lVar9 * -0x5555555555555555) <= uVar11;
      if (uVar11 + lVar9 * 0x5555555555555555 == 0) {
        if (*(long *)(param_1 + 8) - lVar1 != 0) {
          uVar14 = 0;
          do {
            _Var5 = *(__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                      *)(lVar1 + uVar14 * 0xc);
            bVar7 = (byte)p_Var2[uVar14 * 0xc] <= (byte)_Var5;
            if (_Var5 != p_Var2[uVar14 * 0xc]) goto LAB_00ab9038;
            if (_Var5 != (__tree<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,std::__ndk1::__map_value_compare<VulkanProgramObject::DescriptorSetLayoutDesc,std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>,VulkanProgramObject::DescriptorSetLayoutDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanProgramObject::DescriptorSetLayoutDesc,VkDescriptorSetLayout_T*>>>
                          )0x0) {
              lVar9 = uVar14 * 0xc;
              iVar3 = *(int *)(lVar1 + lVar9 + 4);
              if (iVar3 != *(int *)(p_Var2 + lVar9 + 4)) {
                if (iVar3 < *(int *)(p_Var2 + lVar9 + 4)) goto LAB_00ab903c;
                break;
              }
              uVar4 = *(uint *)(lVar1 + lVar9 + 8);
              bVar7 = *(uint *)(p_Var2 + lVar9 + 8) <= uVar4;
              if (uVar4 != *(uint *)(p_Var2 + lVar9 + 8)) goto LAB_00ab9038;
            }
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (uVar14 <= uVar11 && uVar11 - uVar14 != 0);
        }
        goto LAB_00ab9040;
      }
LAB_00ab9038:
      if (bVar7) goto LAB_00ab9040;
    }
  }
LAB_00ab903c:
  pp_Var10 = pp_Var8;
LAB_00ab9040:
  return (__tree_iterator)pp_Var10;
}


