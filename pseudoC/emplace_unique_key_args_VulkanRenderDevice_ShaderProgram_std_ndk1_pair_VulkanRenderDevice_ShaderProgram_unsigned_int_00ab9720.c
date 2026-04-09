// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<VulkanRenderDevice::ShaderProgram,std::__ndk1::pair<VulkanRenderDevice::ShaderProgram,unsigned_int>>
// Entry Point: 00ab9720
// Size: 300 bytes
// Signature: pair __thiscall __emplace_unique_key_args<VulkanRenderDevice::ShaderProgram,std::__ndk1::pair<VulkanRenderDevice::ShaderProgram,unsigned_int>>(__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>> * this, ShaderProgram * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram, unsigned
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram, unsigned int>,
   std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,
   std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram, unsigned int>,
   std::__ndk1::less<VulkanRenderDevice::ShaderProgram>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram, unsigned int>
   > >::__emplace_unique_key_args<VulkanRenderDevice::ShaderProgram,
   std::__ndk1::pair<VulkanRenderDevice::ShaderProgram, unsigned int>
   >(VulkanRenderDevice::ShaderProgram const&, std::__ndk1::pair<VulkanRenderDevice::ShaderProgram,
   unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
::
__emplace_unique_key_args<VulkanRenderDevice::ShaderProgram,std::__ndk1::pair<VulkanRenderDevice::ShaderProgram,unsigned_int>>
          (__tree<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::__map_value_compare<VulkanRenderDevice::ShaderProgram,std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>,std::__ndk1::less<VulkanRenderDevice::ShaderProgram>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VulkanRenderDevice::ShaderProgram,unsigned_int>>>
           *this,ShaderProgram *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  pair pVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(this + 8);
  puVar8 = (undefined8 *)*puVar7;
  puVar5 = puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    uVar1 = *(ulong *)param_1;
    puVar7 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar9 = puVar8;
        uVar2 = puVar9[4];
        bVar4 = *(ulong *)(param_1 + 8) < (ulong)puVar9[5];
        if (uVar1 != uVar2) {
          bVar4 = uVar1 < uVar2;
        }
        puVar5 = puVar9;
        if (!bVar4) break;
        puVar7 = puVar9;
        puVar8 = (undefined8 *)*puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)*puVar9;
          goto joined_r0x00ab97c0;
        }
      }
      bVar4 = (ulong)puVar9[5] < *(ulong *)(param_1 + 8);
      if (uVar1 != uVar2) {
        bVar4 = uVar2 < uVar1;
      }
      if (!bVar4) break;
      puVar7 = puVar9 + 1;
      puVar8 = (undefined8 *)*puVar7;
    } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
  }
  puVar8 = (undefined8 *)*puVar7;
  puVar9 = puVar7;
joined_r0x00ab97c0:
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x38);
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar5;
    pVar3 = param_2[4];
    puVar8[5] = uVar11;
    puVar8[4] = uVar10;
    *puVar9 = puVar8;
    plVar6 = *(long **)this;
    *(pair *)(puVar8 + 6) = pVar3;
    puVar5 = puVar8;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      puVar5 = (undefined8 *)*puVar9;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar8;
}


