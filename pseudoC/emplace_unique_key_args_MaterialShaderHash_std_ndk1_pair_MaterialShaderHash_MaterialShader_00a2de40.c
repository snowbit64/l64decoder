// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<MaterialShaderHash,std::__ndk1::pair<MaterialShaderHash,MaterialShader*>>
// Entry Point: 00a2de40
// Size: 300 bytes
// Signature: pair __thiscall __emplace_unique_key_args<MaterialShaderHash,std::__ndk1::pair<MaterialShaderHash,MaterialShader*>>(__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>> * this, MaterialShaderHash * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialShaderHash,
   MaterialShader*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialShaderHash,
   MaterialShader*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<MaterialShaderHash, MaterialShader*>,
   std::__ndk1::__map_value_compare<MaterialShaderHash,
   std::__ndk1::__value_type<MaterialShaderHash, MaterialShader*>,
   std::__ndk1::less<MaterialShaderHash>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash, MaterialShader*> >
   >::__emplace_unique_key_args<MaterialShaderHash, std::__ndk1::pair<MaterialShaderHash,
   MaterialShader*> >(MaterialShaderHash const&, std::__ndk1::pair<MaterialShaderHash,
   MaterialShader*>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
::
__emplace_unique_key_args<MaterialShaderHash,std::__ndk1::pair<MaterialShaderHash,MaterialShader*>>
          (__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
           *this,MaterialShaderHash *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined8 *)(this + 8);
  puVar7 = (undefined8 *)*puVar6;
  puVar4 = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    uVar1 = *(ulong *)param_1;
    puVar6 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar8 = puVar7;
        uVar2 = puVar8[4];
        bVar3 = *(ulong *)(param_1 + 8) < (ulong)puVar8[5];
        if (uVar1 != uVar2) {
          bVar3 = uVar1 < uVar2;
        }
        puVar4 = puVar8;
        if (!bVar3) break;
        puVar6 = puVar8;
        puVar7 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar8;
          goto joined_r0x00a2dee0;
        }
      }
      bVar3 = (ulong)puVar8[5] < *(ulong *)(param_1 + 8);
      if (uVar1 != uVar2) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) break;
      puVar6 = puVar8 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
joined_r0x00a2dee0:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x38);
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar5 = *(undefined8 *)(param_2 + 4);
    puVar7[2] = puVar4;
    puVar7[5] = uVar10;
    puVar7[4] = uVar9;
    puVar7[6] = uVar5;
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


