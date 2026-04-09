// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<VertexDeclarationDesc,std::__ndk1::pair<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>
// Entry Point: 00ab95dc
// Size: 324 bytes
// Signature: pair __thiscall __emplace_unique_key_args<VertexDeclarationDesc,std::__ndk1::pair<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>(__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>> * this, VertexDeclarationDesc * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared>, std::__ndk1::__map_value_compare<VertexDeclarationDesc,
   std::__ndk1::__value_type<VertexDeclarationDesc, VulkanVertexDeclaration::Shared>,
   ComparerUtil::VertexDeclarationDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared> > >::__emplace_unique_key_args<VertexDeclarationDesc,
   std::__ndk1::pair<VertexDeclarationDesc, VulkanVertexDeclaration::Shared> >(VertexDeclarationDesc
   const&, std::__ndk1::pair<VertexDeclarationDesc, VulkanVertexDeclaration::Shared>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
::
__emplace_unique_key_args<VertexDeclarationDesc,std::__ndk1::pair<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>
          (__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
           *this,VertexDeclarationDesc *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = (undefined8 *)(this + 8);
  puVar4 = (undefined8 *)*puVar3;
  puVar2 = puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar5 = puVar4;
        uVar1 = ComparerUtil::VertexDeclarationDescComparer::operator()
                          ((VertexDeclarationDescComparer *)(this + 0x10),param_1,
                           (VertexDeclarationDesc *)(puVar5 + 4));
        puVar2 = puVar5;
        if ((uVar1 & 1) == 0) break;
        puVar3 = puVar5;
        puVar4 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar5;
          goto joined_r0x00ab9670;
        }
      }
      uVar1 = ComparerUtil::VertexDeclarationDescComparer::operator()
                        ((VertexDeclarationDescComparer *)(this + 0x10),
                         (VertexDeclarationDesc *)(puVar5 + 4),param_1);
      if ((uVar1 & 1) == 0) break;
      puVar3 = puVar5 + 1;
      puVar4 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar4 = (undefined8 *)*puVar3;
  puVar5 = puVar3;
joined_r0x00ab9670:
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x268);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 0x16);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    puVar4[0xd] = *(undefined8 *)(param_2 + 0x12);
    puVar4[0xc] = uVar6;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar6 = *(undefined8 *)(param_2 + 4);
    puVar4[0x11] = *(undefined8 *)(param_2 + 0x1a);
    puVar4[0x10] = uVar8;
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    puVar4[9] = *(undefined8 *)(param_2 + 10);
    puVar4[8] = uVar6;
    puVar4[0xb] = uVar8;
    puVar4[10] = uVar7;
    memcpy(puVar4 + 0x12,param_2 + 0x1c,0x1d8);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = puVar2;
    *puVar5 = puVar4;
    puVar2 = puVar4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar5;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar4;
}


