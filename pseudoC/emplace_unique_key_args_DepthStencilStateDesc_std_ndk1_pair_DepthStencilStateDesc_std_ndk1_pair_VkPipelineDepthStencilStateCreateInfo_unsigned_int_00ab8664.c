// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<DepthStencilStateDesc,std::__ndk1::pair<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>
// Entry Point: 00ab8664
// Size: 356 bytes
// Signature: pair __thiscall __emplace_unique_key_args<DepthStencilStateDesc,std::__ndk1::pair<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>(__tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>> * this, DepthStencilStateDesc * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> >,
   std::__ndk1::__map_value_compare<DepthStencilStateDesc,
   std::__ndk1::__value_type<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> >,
   ComparerUtil::DepthStencilStateDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> > >
   >::__emplace_unique_key_args<DepthStencilStateDesc, std::__ndk1::pair<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> > >(DepthStencilStateDesc
   const&, std::__ndk1::pair<DepthStencilStateDesc,
   std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo, unsigned int> >&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
::
__emplace_unique_key_args<DepthStencilStateDesc,std::__ndk1::pair<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>
          (__tree<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,std::__ndk1::__map_value_compare<DepthStencilStateDesc,std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>,ComparerUtil::DepthStencilStateDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DepthStencilStateDesc,std::__ndk1::pair<VkPipelineDepthStencilStateCreateInfo,unsigned_int>>>>
           *this,DepthStencilStateDesc *param_1,pair *param_2)

{
  DepthStencilStateDesc DVar1;
  DepthStencilStateDesc DVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = (undefined8 *)(this + 8);
  puVar7 = (undefined8 *)*puVar6;
  puVar4 = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    DVar1 = *param_1;
    puVar6 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar8 = puVar7;
        DVar2 = *(DepthStencilStateDesc *)(puVar8 + 4);
        bVar3 = *(int *)(param_1 + 4) < *(int *)((long)puVar8 + 0x24);
        if (DVar1 != DVar2) {
          bVar3 = (byte)DVar1 < (byte)DVar2;
        }
        puVar4 = puVar8;
        if (!bVar3) break;
        puVar6 = puVar8;
        puVar7 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar8;
          goto joined_r0x00ab870c;
        }
      }
      bVar3 = *(int *)((long)puVar8 + 0x24) < *(int *)(param_1 + 4);
      if (DVar1 != DVar2) {
        bVar3 = (byte)DVar2 < (byte)DVar1;
      }
      if (!bVar3) break;
      puVar6 = puVar8 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
joined_r0x00ab870c:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x98);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0xe);
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar11 = *(undefined8 *)(param_2 + 0x14);
    uVar10 = *(undefined8 *)(param_2 + 0x12);
    puVar7[2] = puVar4;
    uVar14 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)(param_2 + 0x16);
    puVar7[0xc] = uVar9;
    puVar7[0xb] = uVar5;
    uVar9 = *(undefined8 *)(param_2 + 0x1c);
    uVar5 = *(undefined8 *)(param_2 + 0x1a);
    puVar7[0xe] = uVar11;
    puVar7[0xd] = uVar10;
    uVar12 = *(undefined8 *)(param_2 + 4);
    uVar11 = *(undefined8 *)(param_2 + 2);
    puVar7[0x10] = uVar14;
    puVar7[0xf] = uVar13;
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(param_2 + 6);
    puVar7[0x12] = uVar9;
    puVar7[0x11] = uVar5;
    uVar5 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 0xc);
    uVar9 = *(undefined8 *)(param_2 + 10);
    puVar7[6] = uVar12;
    puVar7[5] = uVar11;
    puVar7[8] = uVar14;
    puVar7[7] = uVar13;
    puVar7[4] = uVar5;
    puVar7[10] = uVar10;
    puVar7[9] = uVar9;
    *puVar8 = puVar7;
    puVar4 = puVar7;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar4 = (undefined8 *)*puVar8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar7;
}


