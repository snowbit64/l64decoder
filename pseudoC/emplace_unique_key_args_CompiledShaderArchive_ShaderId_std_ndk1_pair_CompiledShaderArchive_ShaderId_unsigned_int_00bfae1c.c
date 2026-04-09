// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>
// Entry Point: 00bfae1c
// Size: 352 bytes
// Signature: pair __thiscall __emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>(__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>> * this, ShaderId * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned int>,
   std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,
   std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned int>,
   std::__ndk1::less<CompiledShaderArchive::ShaderId>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned int> >
   >::__emplace_unique_key_args<CompiledShaderArchive::ShaderId,
   std::__ndk1::pair<CompiledShaderArchive::ShaderId, unsigned int>
   >(CompiledShaderArchive::ShaderId const&, std::__ndk1::pair<CompiledShaderArchive::ShaderId,
   unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
::
__emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>
          (__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
           *this,ShaderId *param_1,pair *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  pair pVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *__s1;
  void *__s2;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined8 *)(this + 8);
  puVar9 = (undefined8 *)*puVar8;
  puVar6 = puVar8;
  if (puVar9 == (undefined8 *)0x0) {
LAB_00bfaee8:
    puVar9 = (undefined8 *)*puVar8;
  }
  else {
    iVar1 = *(int *)param_1;
    uVar2 = *(uint *)(param_1 + 4);
    __s1 = *(void **)(param_1 + 8);
    puVar8 = (undefined8 *)(this + 8);
    do {
      while (puVar6 = puVar9, iVar5 = *(int *)(puVar6 + 4), iVar1 != iVar5) {
        if (iVar1 < iVar5) goto LAB_00bfaeb4;
        if (iVar1 <= iVar5) goto LAB_00bfaee8;
LAB_00bfaed0:
        puVar8 = puVar6 + 1;
        puVar9 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_00bfaee8;
      }
      uVar3 = *(uint *)((long)puVar6 + 0x24);
      if (uVar2 != uVar3) {
        if (uVar2 < uVar3) goto LAB_00bfaeb4;
        if (uVar3 < uVar2) goto LAB_00bfaed0;
        goto LAB_00bfaee8;
      }
      __s2 = (void *)puVar6[5];
      iVar5 = memcmp(__s1,__s2,(ulong)uVar2);
      if (-1 < iVar5) {
        iVar5 = memcmp(__s2,__s1,(ulong)uVar2);
        if (iVar5 < 0) goto LAB_00bfaed0;
        goto LAB_00bfaee8;
      }
LAB_00bfaeb4:
      puVar8 = puVar6;
      puVar9 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    puVar9 = (undefined8 *)*puVar6;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x38);
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar6;
    pVar4 = param_2[4];
    puVar9[5] = uVar11;
    puVar9[4] = uVar10;
    *puVar8 = puVar9;
    plVar7 = *(long **)this;
    *(pair *)(puVar9 + 6) = pVar4;
    puVar6 = puVar9;
    if (*plVar7 != 0) {
      *(long *)this = *plVar7;
      puVar6 = (undefined8 *)*puVar8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar6);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar9;
}


