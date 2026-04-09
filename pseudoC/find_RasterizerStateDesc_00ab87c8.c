// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<RasterizerStateDesc>
// Entry Point: 00ab87c8
// Size: 336 bytes
// Signature: __tree_iterator __thiscall find<RasterizerStateDesc>(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>> * this, RasterizerStateDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   std::__ndk1::__map_value_compare<RasterizerStateDesc,
   std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> >,
   ComparerUtil::RasterizerStateDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,
   std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo, unsigned int> > >
   >::find<RasterizerStateDesc>(RasterizerStateDesc const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
::find<RasterizerStateDesc>
          (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
           *this,RasterizerStateDesc *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var6;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var7;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  _Var8;
  bool bVar9;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var10;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var11;
  __tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
  **pp_Var12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  pp_Var10 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              **)(this + 8);
  pp_Var12 = (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              **)*pp_Var10;
  if (pp_Var12 !=
      (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
       **)0x0) {
    iVar3 = *(int *)param_1;
    iVar4 = *(int *)(param_1 + 4);
    fVar14 = *(float *)(param_1 + 0x10);
    fVar13 = *(float *)(param_1 + 0x14);
    dVar15 = *(double *)(param_1 + 8);
    _Var6 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              *)(param_1 + 0x1b);
    _Var7 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              *)(param_1 + 0x18);
    _Var8 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              *)(param_1 + 0x19);
    pp_Var11 = pp_Var10;
    do {
      iVar5 = *(int *)(pp_Var12 + 4);
      bVar9 = SBORROW4(iVar5,iVar3);
      iVar1 = iVar5 - iVar3;
      if (iVar5 == iVar3) {
        iVar5 = *(int *)((long)pp_Var12 + 0x24);
        bVar9 = SBORROW4(iVar5,iVar4);
        iVar1 = iVar5 - iVar4;
        if (iVar5 != iVar4) goto LAB_00ab87f8;
        bVar9 = (double)pp_Var12[5] < dVar15;
        if ((((double)pp_Var12[5] == dVar15) &&
            (bVar9 = *(float *)(pp_Var12 + 6) < fVar14, *(float *)(pp_Var12 + 6) == fVar14)) &&
           (bVar9 = *(float *)((long)pp_Var12 + 0x34) < fVar13,
           *(float *)((long)pp_Var12 + 0x34) == fVar13)) {
          bVar9 = (byte)_Var6 <=
                  (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                          *)((long)pp_Var12 + 0x3b);
          if (((*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                  *)((long)pp_Var12 + 0x3b) == _Var6) &&
              (bVar9 = (byte)_Var7 <=
                       (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                               *)(pp_Var12 + 7),
              *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                *)(pp_Var12 + 7) == _Var7)) &&
             (bVar9 = (byte)_Var8 <=
                      (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                              *)((long)pp_Var12 + 0x39),
             *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
               *)((long)pp_Var12 + 0x39) == _Var8)) {
            bVar9 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                            *)(param_1 + 0x1c) <=
                    (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                            *)((long)pp_Var12 + 0x3c);
          }
          bVar9 = !bVar9;
        }
      }
      else {
LAB_00ab87f8:
        bVar9 = iVar1 < 0 != bVar9;
      }
      lVar2 = 8;
      if (!bVar9) {
        lVar2 = 0;
        pp_Var11 = pp_Var12;
      }
      pp_Var12 = *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                   ***)((long)pp_Var12 + lVar2);
    } while (pp_Var12 !=
             (__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
              **)0x0);
    if (pp_Var11 != pp_Var10) {
      iVar5 = *(int *)(pp_Var11 + 4);
      bVar9 = SBORROW4(iVar3,iVar5);
      iVar1 = iVar3 - iVar5;
      if (iVar3 == iVar5) {
        iVar3 = *(int *)((long)pp_Var11 + 0x24);
        bVar9 = SBORROW4(iVar4,iVar3);
        iVar1 = iVar4 - iVar3;
        if (iVar4 == iVar3) {
          bVar9 = dVar15 < (double)pp_Var11[5];
          if (((dVar15 == (double)pp_Var11[5]) &&
              (bVar9 = fVar14 < *(float *)(pp_Var11 + 6), fVar14 == *(float *)(pp_Var11 + 6))) &&
             (bVar9 = fVar13 < *(float *)((long)pp_Var11 + 0x34),
             fVar13 == *(float *)((long)pp_Var11 + 0x34))) {
            bVar9 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                            *)((long)pp_Var11 + 0x3b) <= (byte)_Var6;
            if (((_Var6 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                             *)((long)pp_Var11 + 0x3b)) &&
                (bVar9 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                                 *)(pp_Var11 + 7) <= (byte)_Var7,
                _Var7 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                           *)(pp_Var11 + 7))) &&
               (bVar9 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                                *)((long)pp_Var11 + 0x39) <= (byte)_Var8,
               _Var8 == *(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                          *)((long)pp_Var11 + 0x39))) {
              bVar9 = (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                              *)((long)pp_Var11 + 0x3c) <=
                      (byte)*(__tree<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<RasterizerStateDesc,std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>,ComparerUtil::RasterizerStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<RasterizerStateDesc,std::__ndk1::pair<VulkanRasterizerState::ExtendedRasterizationStateCreateInfo,unsigned_int>>>>
                              *)(param_1 + 0x1c);
            }
            if (bVar9) goto LAB_00ab88dc;
          }
          else if (!bVar9) goto LAB_00ab88dc;
          goto LAB_00ab88d8;
        }
      }
      if (iVar1 < 0 == bVar9) goto LAB_00ab88dc;
    }
  }
LAB_00ab88d8:
  pp_Var11 = pp_Var10;
LAB_00ab88dc:
  return (__tree_iterator)pp_Var11;
}


