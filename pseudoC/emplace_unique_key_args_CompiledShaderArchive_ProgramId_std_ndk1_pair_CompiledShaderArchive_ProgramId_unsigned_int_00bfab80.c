// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>
// Entry Point: 00bfab80
// Size: 324 bytes
// Signature: pair __thiscall __emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>(__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>> * this, ProgramId * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned int>,
   std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,
   std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned int>,
   std::__ndk1::less<CompiledShaderArchive::ProgramId>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned int>
   > >::__emplace_unique_key_args<CompiledShaderArchive::ProgramId,
   std::__ndk1::pair<CompiledShaderArchive::ProgramId, unsigned int>
   >(CompiledShaderArchive::ProgramId const&, std::__ndk1::pair<CompiledShaderArchive::ProgramId,
   unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
::
__emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>
          (__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
           *this,ProgramId *param_1,pair *param_2)

{
  uint uVar1;
  uint uVar2;
  pair pVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *__s1;
  void *__s2;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = (undefined8 *)(this + 8);
  puVar8 = (undefined8 *)*puVar7;
  puVar5 = puVar7;
  if (puVar8 == (undefined8 *)0x0) {
LAB_00bfac30:
    puVar8 = (undefined8 *)*puVar7;
  }
  else {
    uVar1 = *(uint *)param_1;
    __s1 = *(void **)(param_1 + 8);
    puVar7 = (undefined8 *)(this + 8);
    do {
      while (puVar5 = puVar8, uVar2 = *(uint *)(puVar5 + 4), uVar1 != uVar2) {
        if (uVar1 < uVar2) goto LAB_00bfabfc;
        if (uVar1 <= uVar2) goto LAB_00bfac30;
LAB_00bfac18:
        puVar7 = puVar5 + 1;
        puVar8 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) goto LAB_00bfac30;
      }
      __s2 = (void *)puVar5[5];
      iVar4 = memcmp(__s1,__s2,(ulong)uVar1);
      if (-1 < iVar4) {
        iVar4 = memcmp(__s2,__s1,(ulong)uVar1);
        if (iVar4 < 0) goto LAB_00bfac18;
        goto LAB_00bfac30;
      }
LAB_00bfabfc:
      puVar7 = puVar5;
      puVar8 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    puVar8 = (undefined8 *)*puVar5;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x38);
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar5;
    pVar3 = param_2[4];
    puVar8[5] = uVar10;
    puVar8[4] = uVar9;
    *puVar7 = puVar8;
    plVar6 = *(long **)this;
    *(pair *)(puVar8 + 6) = pVar3;
    puVar5 = puVar8;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      puVar5 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar8;
}


