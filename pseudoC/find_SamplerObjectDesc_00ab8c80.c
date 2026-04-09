// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find<SamplerObjectDesc>
// Entry Point: 00ab8c80
// Size: 288 bytes
// Signature: __tree_iterator __thiscall find<SamplerObjectDesc>(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>> * this, SamplerObjectDesc * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*>, void*>*,
   long> std::__ndk1::__tree<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*>,
   std::__ndk1::__map_value_compare<SamplerObjectDesc, std::__ndk1::__value_type<SamplerObjectDesc,
   VkSampler_T*>, ComparerUtil::SamplerObjectDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc, VkSampler_T*> >
   >::find<SamplerObjectDesc>(SamplerObjectDesc const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
::find<SamplerObjectDesc>
          (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
           *this,SamplerObjectDesc *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var10;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var11;
  __tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
  **pp_Var12;
  float fVar13;
  
  pp_Var10 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
              **)(this + 8);
  pp_Var12 = (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
              **)*pp_Var10;
  if (pp_Var12 !=
      (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
       **)0x0) {
    iVar2 = *(int *)param_1;
    iVar4 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    uVar6 = *(uint *)(param_1 + 0x10);
    fVar13 = *(float *)(param_1 + 0x14);
    pp_Var11 = pp_Var10;
    do {
      iVar7 = *(int *)(pp_Var12 + 4);
      bVar8 = SBORROW4(iVar7,iVar2);
      bVar9 = iVar7 - iVar2 < 0;
      if (iVar7 == iVar2) {
        iVar7 = *(int *)((long)pp_Var12 + 0x24);
        bVar8 = SBORROW4(iVar7,iVar4);
        bVar9 = iVar7 - iVar4 < 0;
        if (iVar7 != iVar4) goto LAB_00ab8cf4;
        iVar7 = *(int *)(pp_Var12 + 5);
        bVar8 = SBORROW4(iVar7,iVar3);
        bVar9 = iVar7 - iVar3 < 0;
        if (iVar7 != iVar3) goto LAB_00ab8cf4;
        iVar7 = *(int *)((long)pp_Var12 + 0x2c);
        bVar8 = SBORROW4(iVar7,iVar5);
        bVar9 = iVar7 - iVar5 < 0;
        if (iVar7 != iVar5) goto LAB_00ab8cf4;
        bVar9 = uVar6 <= *(uint *)(pp_Var12 + 6);
        if (*(uint *)(pp_Var12 + 6) == uVar6) {
          bVar9 = *(float *)((long)pp_Var12 + 0x34) < fVar13;
          if (*(float *)((long)pp_Var12 + 0x34) == fVar13) {
            bVar9 = (byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                            *)(param_1 + 0x18) <=
                    (byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                            *)(pp_Var12 + 7);
            goto LAB_00ab8d18;
          }
        }
        else {
LAB_00ab8d18:
          bVar9 = !bVar9;
        }
      }
      else {
LAB_00ab8cf4:
        bVar9 = bVar9 != bVar8;
      }
      lVar1 = 8;
      if (!bVar9) {
        lVar1 = 0;
        pp_Var11 = pp_Var12;
      }
      pp_Var12 = *(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                   ***)((long)pp_Var12 + lVar1);
    } while (pp_Var12 !=
             (__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
              **)0x0);
    if (pp_Var11 != pp_Var10) {
      iVar7 = *(int *)(pp_Var11 + 4);
      bVar8 = SBORROW4(iVar2,iVar7);
      bVar9 = iVar2 - iVar7 < 0;
      if (iVar2 == iVar7) {
        iVar2 = *(int *)((long)pp_Var11 + 0x24);
        bVar8 = SBORROW4(iVar4,iVar2);
        bVar9 = iVar4 - iVar2 < 0;
        if (iVar4 == iVar2) {
          iVar2 = *(int *)(pp_Var11 + 5);
          bVar8 = SBORROW4(iVar3,iVar2);
          bVar9 = iVar3 - iVar2 < 0;
          if (iVar3 == iVar2) {
            iVar2 = *(int *)((long)pp_Var11 + 0x2c);
            bVar8 = SBORROW4(iVar5,iVar2);
            bVar9 = iVar5 - iVar2 < 0;
            if (iVar5 == iVar2) {
              if (uVar6 == *(uint *)(pp_Var11 + 6)) {
                if (fVar13 == *(float *)((long)pp_Var11 + 0x34)) {
                  if ((byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                              *)(pp_Var11 + 7) <=
                      (byte)*(__tree<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,std::__ndk1::__map_value_compare<SamplerObjectDesc,std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>,ComparerUtil::SamplerObjectDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SamplerObjectDesc,VkSampler_T*>>>
                              *)(param_1 + 0x18)) goto LAB_00ab8d80;
                }
                else if (*(float *)((long)pp_Var11 + 0x34) <= fVar13) goto LAB_00ab8d80;
              }
              else if (*(uint *)(pp_Var11 + 6) <= uVar6) goto LAB_00ab8d80;
              goto LAB_00ab8d7c;
            }
          }
        }
      }
      if (bVar9 == bVar8) goto LAB_00ab8d80;
    }
  }
LAB_00ab8d7c:
  pp_Var11 = pp_Var10;
LAB_00ab8d80:
  return (__tree_iterator)pp_Var11;
}


