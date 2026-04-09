// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<SamplerObjectDesc>
// Entry Point: 00ab8da0
// Size: 320 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<SamplerObjectDesc>(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>> * this, __tree_end_node * * param_1, SamplerObjectDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*>,
   std::__ndk1::__map_value_compare<SamplerObjectDesc, std::__ndk1::__value_type<SamplerObjectDesc,
   VkSampler_T*>, ComparerUtil::SamplerObjectDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*> >
   >::__find_equal<SamplerObjectDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   SamplerObjectDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
::__find_equal<SamplerObjectDesc>
          (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
           *this,__tree_end_node **param_1,SamplerObjectDesc *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var8;
  bool bVar9;
  __tree_node_base **pp_Var10;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var11;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var12;
  float fVar13;
  
  pp_Var10 = (__tree_node_base **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
       **)*pp_Var10 ==
      (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var10;
    return pp_Var10;
  }
  iVar1 = *(int *)param_2;
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_2 + 0x10);
  fVar13 = *(float *)(param_2 + 0x14);
  pp_Var11 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
              **)(this + 8);
  pp_Var8 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
             **)*pp_Var10;
  do {
    while (pp_Var12 = pp_Var8, iVar6 = *(int *)(pp_Var12 + 4), iVar1 != iVar6) {
      if (iVar1 < iVar6) goto LAB_00ab8e4c;
      if (iVar1 <= iVar6) goto LAB_00ab8ec4;
LAB_00ab8dd0:
      pp_Var11 = pp_Var12 + 1;
      pp_Var8 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                 **)*pp_Var11;
      if ((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
           **)*pp_Var11 ==
          (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
           **)0x0) {
LAB_00ab8ec4:
        *param_1 = (__tree_end_node *)pp_Var12;
        return (__tree_node_base **)pp_Var11;
      }
    }
    iVar6 = *(int *)((long)pp_Var12 + 0x24);
    if (iVar3 != iVar6) {
      if (iVar3 < iVar6) goto LAB_00ab8e4c;
      if (iVar3 <= iVar6) goto LAB_00ab8ec4;
      goto LAB_00ab8dd0;
    }
    iVar7 = *(int *)(pp_Var12 + 5);
    bVar9 = SBORROW4(iVar2,iVar7);
    iVar6 = iVar2 - iVar7;
    if (iVar2 == iVar7) {
      iVar7 = *(int *)((long)pp_Var12 + 0x2c);
      bVar9 = SBORROW4(iVar4,iVar7);
      iVar6 = iVar4 - iVar7;
      if (iVar4 != iVar7) goto LAB_00ab8e48;
      if (uVar5 == *(uint *)(pp_Var12 + 6)) {
        if (fVar13 == *(float *)((long)pp_Var12 + 0x34)) {
          if ((byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                      *)(param_2 + 0x18) <
              (byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                      *)(pp_Var12 + 7)) goto LAB_00ab8e4c;
          goto LAB_00ab8e60;
        }
        if (*(float *)((long)pp_Var12 + 0x34) <= fVar13) goto LAB_00ab8e60;
        goto LAB_00ab8e4c;
      }
      if (uVar5 < *(uint *)(pp_Var12 + 6)) goto LAB_00ab8e4c;
LAB_00ab8e60:
      iVar7 = *(int *)(pp_Var12 + 5);
      bVar9 = SBORROW4(iVar7,iVar2);
      iVar6 = iVar7 - iVar2;
      if (iVar7 == iVar2) {
        iVar7 = *(int *)((long)pp_Var12 + 0x2c);
        bVar9 = SBORROW4(iVar7,iVar4);
        iVar6 = iVar7 - iVar4;
        if (iVar7 == iVar4) {
          if (*(uint *)(pp_Var12 + 6) == uVar5) {
            if (*(float *)((long)pp_Var12 + 0x34) == fVar13) {
              if ((byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                          *)(param_2 + 0x18) <=
                  (byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                          *)(pp_Var12 + 7)) goto LAB_00ab8ec4;
            }
            else if (fVar13 <= *(float *)((long)pp_Var12 + 0x34)) goto LAB_00ab8ec4;
          }
          else if (uVar5 <= *(uint *)(pp_Var12 + 6)) goto LAB_00ab8ec4;
          goto LAB_00ab8dd0;
        }
      }
      if (iVar6 < 0 == bVar9) goto LAB_00ab8ec4;
      goto LAB_00ab8dd0;
    }
LAB_00ab8e48:
    if (iVar6 < 0 == bVar9) goto LAB_00ab8e60;
LAB_00ab8e4c:
    pp_Var11 = pp_Var12;
    pp_Var8 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
               **)*pp_Var12;
    if ((__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
         **)*pp_Var12 ==
        (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
         **)0x0) {
      *param_1 = (__tree_end_node *)pp_Var12;
      return (__tree_node_base **)pp_Var12;
    }
  } while( true );
}


