// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>
// Entry Point: 00bfacc4
// Size: 344 bytes
// Signature: pair __thiscall __emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>(__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>> * this, ProgramHash * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash, unsigned
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash, unsigned int>,
   std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,
   std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash, unsigned int>,
   std::__ndk1::less<CompiledShaderArchive::ProgramHash>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash, unsigned
   int> > >::__emplace_unique_key_args<CompiledShaderArchive::ProgramHash,
   std::__ndk1::pair<CompiledShaderArchive::ProgramHash, unsigned int>
   >(CompiledShaderArchive::ProgramHash const&,
   std::__ndk1::pair<CompiledShaderArchive::ProgramHash, unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
::
__emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>
          (__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
           *this,ProgramHash *param_1,pair *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  pair pVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined8 *)(this + 8);
  puVar9 = (undefined8 *)*puVar8;
  puVar6 = puVar8;
  if (puVar9 == (undefined8 *)0x0) {
LAB_00bfad8c:
    puVar9 = (undefined8 *)*puVar8;
  }
  else {
    uVar1 = *(uint *)param_1;
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)(param_1 + 8);
    puVar8 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar6 = puVar9;
        uVar4 = *(uint *)((long)puVar6 + 0x1c);
        if (uVar1 == uVar4) break;
        if (uVar1 < uVar4) goto LAB_00bfad58;
        if (uVar1 <= uVar4) goto LAB_00bfad8c;
LAB_00bfad74:
        puVar8 = puVar6 + 1;
        puVar9 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_00bfad8c;
      }
      uVar4 = *(uint *)(puVar6 + 4);
      if (uVar3 != uVar4) {
        if (uVar3 < uVar4) goto LAB_00bfad58;
        if (uVar4 < uVar3) goto LAB_00bfad74;
        goto LAB_00bfad8c;
      }
      uVar4 = *(uint *)((long)puVar6 + 0x24);
      if (uVar2 != uVar4) {
        if (uVar2 < uVar4) goto LAB_00bfad58;
        if (uVar4 < uVar2) goto LAB_00bfad74;
        goto LAB_00bfad8c;
      }
      if (*(uint *)(puVar6 + 5) <= *(uint *)(param_1 + 0xc)) {
        if (*(uint *)(puVar6 + 5) < *(uint *)(param_1 + 0xc)) goto LAB_00bfad74;
        goto LAB_00bfad8c;
      }
LAB_00bfad58:
      puVar8 = puVar6;
      puVar9 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    puVar9 = (undefined8 *)*puVar6;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x30);
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar6;
    pVar5 = param_2[4];
    *(undefined8 *)((long)puVar9 + 0x24) = uVar11;
    *(undefined8 *)((long)puVar9 + 0x1c) = uVar10;
    *puVar8 = puVar9;
    plVar7 = *(long **)this;
    *(pair *)((long)puVar9 + 0x2c) = pVar5;
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


