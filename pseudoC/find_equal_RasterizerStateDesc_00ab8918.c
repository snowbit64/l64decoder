// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __find_equal<RasterizerStateDesc>
// Entry Point: 00ab8918
// Size: 348 bytes
// Signature: __tree_node_base * * __thiscall __find_equal<RasterizerStateDesc>(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>> * this, __tree_end_node * * param_1, RasterizerStateDesc * param_2)


/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   std::__ndk1::__map_value_compare<RasterizerStateDesc,
   std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   ComparerUtil::RasterizerStateDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> > >
   >::__find_equal<RasterizerStateDesc>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   RasterizerStateDesc const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
::__find_equal<RasterizerStateDesc>
          (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
           *this,__tree_end_node **param_1,RasterizerStateDesc *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var4;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var5;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var6;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var7;
  bool bVar8;
  __tree_node_base **pp_Var9;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var10;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  pp_Var9 = (__tree_node_base **)(this + 8);
  if ((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
       **)*pp_Var9 ==
      (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
       **)0x0) {
    *param_1 = (__tree_end_node *)pp_Var9;
    return pp_Var9;
  }
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  fVar13 = *(float *)(param_2 + 0x10);
  fVar14 = *(float *)(param_2 + 0x14);
  dVar12 = *(double *)(param_2 + 8);
  _Var4 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
            *)(param_2 + 0x1b);
  _Var5 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
            *)(param_2 + 0x18);
  _Var6 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
            *)(param_2 + 0x19);
  pp_Var10 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              **)(this + 8);
  pp_Var7 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
             **)*pp_Var9;
  do {
    while (pp_Var11 = pp_Var7, iVar3 = *(int *)(pp_Var11 + 4), iVar1 != iVar3) {
      if (iVar1 < iVar3) goto LAB_00ab89d8;
      if (iVar1 <= iVar3) goto LAB_00ab8a58;
LAB_00ab8950:
      pp_Var10 = pp_Var11 + 1;
      pp_Var7 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                 **)*pp_Var10;
      if ((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
           **)*pp_Var10 ==
          (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
           **)0x0) {
LAB_00ab8a58:
        *param_1 = (__tree_end_node *)pp_Var11;
        return (__tree_node_base **)pp_Var10;
      }
    }
    iVar3 = *(int *)((long)pp_Var11 + 0x24);
    if (iVar2 != iVar3) {
      if (iVar2 < iVar3) goto LAB_00ab89d8;
      if (iVar2 <= iVar3) goto LAB_00ab8a58;
      goto LAB_00ab8950;
    }
    bVar8 = dVar12 < (double)pp_Var11[5];
    if (((dVar12 != (double)pp_Var11[5]) ||
        (bVar8 = fVar13 < *(float *)(pp_Var11 + 6), fVar13 != *(float *)(pp_Var11 + 6))) ||
       (bVar8 = fVar14 < *(float *)((long)pp_Var11 + 0x34),
       fVar14 != *(float *)((long)pp_Var11 + 0x34))) {
      if (bVar8) goto LAB_00ab89d8;
LAB_00ab89a0:
      bVar8 = (double)pp_Var11[5] < dVar12;
      if ((((double)pp_Var11[5] == dVar12) &&
          (bVar8 = *(float *)(pp_Var11 + 6) < fVar13, *(float *)(pp_Var11 + 6) == fVar13)) &&
         (bVar8 = *(float *)((long)pp_Var11 + 0x34) < fVar14,
         *(float *)((long)pp_Var11 + 0x34) == fVar14)) {
        bVar8 = (byte)_Var4 <=
                (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                        *)((long)pp_Var11 + 0x3b);
        if (((*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                *)((long)pp_Var11 + 0x3b) == _Var4) &&
            (bVar8 = (byte)_Var5 <=
                     (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                             *)(pp_Var11 + 7),
            *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              *)(pp_Var11 + 7) == _Var5)) &&
           (bVar8 = (byte)_Var6 <=
                    (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                            *)((long)pp_Var11 + 0x39),
           *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
             *)((long)pp_Var11 + 0x39) == _Var6)) {
          bVar8 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                          *)(param_2 + 0x1c) <=
                  (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                          *)((long)pp_Var11 + 0x3c);
        }
        if (bVar8) goto LAB_00ab8a58;
      }
      else if (!bVar8) goto LAB_00ab8a58;
      goto LAB_00ab8950;
    }
    bVar8 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                    *)((long)pp_Var11 + 0x3b) <= (byte)_Var4;
    if (((_Var4 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                     *)((long)pp_Var11 + 0x3b)) &&
        (bVar8 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                         *)(pp_Var11 + 7) <= (byte)_Var5,
        _Var5 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                   *)(pp_Var11 + 7))) &&
       (bVar8 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                        *)((long)pp_Var11 + 0x39) <= (byte)_Var6,
       _Var6 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                  *)((long)pp_Var11 + 0x39))) {
      bVar8 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                      *)((long)pp_Var11 + 0x3c) <=
              (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                      *)(param_2 + 0x1c);
    }
    if (bVar8) goto LAB_00ab89a0;
LAB_00ab89d8:
    pp_Var10 = pp_Var11;
    pp_Var7 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
               **)*pp_Var11;
    if ((__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
         **)*pp_Var11 ==
        (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
         **)0x0) {
      *param_1 = (__tree_end_node *)pp_Var11;
      return (__tree_node_base **)pp_Var11;
    }
  } while( true );
}


