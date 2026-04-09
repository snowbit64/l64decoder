// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>
// Entry Point: 00bfb0f4
// Size: 376 bytes
// Signature: pair __thiscall __emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>(__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>> * this, StructLayoutsHash * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,
   unsigned int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash, unsigned
   int>, std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,
   std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash, unsigned int>,
   std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,
   unsigned int> > >::__emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,
   std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash, unsigned int>
   >(CompiledShaderArchive::StructLayoutsHash const&,
   std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash, unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
::
__emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>
          (__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
           *this,StructLayoutsHash *param_1,pair *param_2)

{
  int iVar1;
  pair pVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = (undefined8 *)(this + 8);
  puVar8 = (undefined8 *)*puVar7;
  puVar3 = puVar7;
  if (puVar8 == (undefined8 *)0x0) {
LAB_00bfb1dc:
    puVar8 = (undefined8 *)*puVar7;
  }
  else {
    puVar7 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar3 = puVar8;
        uVar6 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)((long)puVar3 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)((long)puVar3 + 0x1c) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 != uVar6) break;
        uVar6 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)((long)puVar3 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)((long)puVar3 + 0x24) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 != uVar6) break;
LAB_00bfb17c:
        uVar6 = (*(ulong *)((long)puVar3 + 0x1c) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)((long)puVar3 + 0x1c) & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar6 = (*(ulong *)param_1 & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)param_1 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (uVar5 == uVar6) {
          uVar6 = (*(ulong *)((long)puVar3 + 0x24) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)((long)puVar3 + 0x24) & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar6 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          if (uVar5 == uVar6) goto LAB_00bfb1dc;
        }
        iVar1 = 1;
        if (uVar5 < uVar6) {
          iVar1 = -1;
        }
        if (-1 < iVar1) goto LAB_00bfb1dc;
        puVar7 = puVar3 + 1;
        puVar8 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) goto LAB_00bfb1dc;
      }
      iVar1 = 1;
      if (uVar5 < uVar6) {
        iVar1 = -1;
      }
      if (-1 < iVar1) goto LAB_00bfb17c;
      puVar7 = puVar3;
      puVar8 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
    puVar8 = (undefined8 *)*puVar3;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x30);
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar3;
    pVar2 = param_2[4];
    *(undefined8 *)((long)puVar8 + 0x24) = uVar10;
    *(undefined8 *)((long)puVar8 + 0x1c) = uVar9;
    *puVar7 = puVar8;
    plVar4 = *(long **)this;
    *(pair *)((long)puVar8 + 0x2c) = pVar2;
    puVar3 = puVar8;
    if (*plVar4 != 0) {
      *(long *)this = *plVar4;
      puVar3 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar8;
}


