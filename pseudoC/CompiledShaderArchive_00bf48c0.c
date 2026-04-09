// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompiledShaderArchive
// Entry Point: 00bf48c0
// Size: 612 bytes
// Signature: undefined __thiscall ~CompiledShaderArchive(CompiledShaderArchive * this)


/* CompiledShaderArchive::~CompiledShaderArchive() */

void __thiscall CompiledShaderArchive::~CompiledShaderArchive(CompiledShaderArchive *this)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  CompiledShaderArchive **ppCVar4;
  long lVar5;
  CompiledShaderArchive *pCVar6;
  ulong uVar7;
  ulong uVar8;
  CompressionDictionary *this_00;
  MarkovHuffmanTree *this_01;
  CompiledShaderArchive **ppCVar9;
  
  lVar5 = *(long *)(this + 0x30);
  lVar3 = *(long *)(this + 0x38);
  if (lVar3 != lVar5) {
    uVar8 = 0;
    do {
      pvVar2 = *(void **)(lVar5 + uVar8 * 0x28 + 0x10);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        lVar5 = *(long *)(this + 0x30);
        lVar3 = *(long *)(this + 0x38);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar7 = (lVar3 - lVar5 >> 3) * -0x3333333333333333;
    } while (uVar8 <= uVar7 && uVar7 - uVar8 != 0);
  }
  lVar5 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  if (lVar3 != lVar5) {
    uVar8 = 0;
    do {
      pvVar2 = *(void **)(lVar5 + uVar8 * 0x20 + 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        lVar5 = *(long *)this;
        lVar3 = *(long *)(this + 8);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar3 - lVar5 >> 5));
  }
  this_00 = *(CompressionDictionary **)(this + 0x78);
  if (this_00 != (CompressionDictionary *)0x0) {
    CompressionDictionary::~CompressionDictionary(this_00);
    operator_delete(this_00);
  }
  this_01 = *(MarkovHuffmanTree **)(this + 0x80);
  if (this_01 != (MarkovHuffmanTree *)0x0) {
    MarkovHuffmanTree::~MarkovHuffmanTree(this_01);
    operator_delete(this_01);
  }
  ppCVar9 = *(CompiledShaderArchive ***)(this + 0x48);
  while (ppCVar9 != (CompiledShaderArchive **)(this + 0x50)) {
    if (ppCVar9[5] != (CompiledShaderArchive *)0x0) {
      operator_delete__(ppCVar9[5]);
    }
    ppCVar4 = (CompiledShaderArchive **)ppCVar9[1];
    if ((CompiledShaderArchive **)ppCVar9[1] == (CompiledShaderArchive **)0x0) {
      ppCVar4 = ppCVar9 + 2;
      bVar1 = *(CompiledShaderArchive ***)*ppCVar4 != ppCVar9;
      ppCVar9 = (CompiledShaderArchive **)*ppCVar4;
      if (bVar1) {
        do {
          pCVar6 = *ppCVar4;
          ppCVar4 = (CompiledShaderArchive **)(pCVar6 + 0x10);
          ppCVar9 = (CompiledShaderArchive **)*ppCVar4;
        } while (*ppCVar9 != pCVar6);
      }
    }
    else {
      do {
        ppCVar9 = ppCVar4;
        ppCVar4 = (CompiledShaderArchive **)*ppCVar9;
      } while ((CompiledShaderArchive **)*ppCVar9 != (CompiledShaderArchive **)0x0);
    }
  }
  ppCVar9 = *(CompiledShaderArchive ***)(this + 0x60);
  while (ppCVar9 != (CompiledShaderArchive **)(this + 0x68)) {
    if (ppCVar9[5] != (CompiledShaderArchive *)0x0) {
      operator_delete__(ppCVar9[5]);
    }
    ppCVar4 = (CompiledShaderArchive **)ppCVar9[1];
    if ((CompiledShaderArchive **)ppCVar9[1] == (CompiledShaderArchive **)0x0) {
      ppCVar4 = ppCVar9 + 2;
      bVar1 = *(CompiledShaderArchive ***)*ppCVar4 != ppCVar9;
      ppCVar9 = (CompiledShaderArchive **)*ppCVar4;
      if (bVar1) {
        do {
          pCVar6 = *ppCVar4;
          ppCVar4 = (CompiledShaderArchive **)(pCVar6 + 0x10);
          ppCVar9 = (CompiledShaderArchive **)*ppCVar4;
        } while (*ppCVar9 != pCVar6);
      }
    }
    else {
      do {
        ppCVar9 = ppCVar4;
        ppCVar4 = (CompiledShaderArchive **)*ppCVar9;
      } while ((CompiledShaderArchive **)*ppCVar9 != (CompiledShaderArchive **)0x0);
    }
  }
  Mutex::~Mutex((Mutex *)(this + 0x118));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<IShaderObject*,unsigned_int>,std::__ndk1::__map_value_compare<IShaderObject*,std::__ndk1::__value_type<IShaderObject*,unsigned_int>,std::__ndk1::less<IShaderObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IShaderObject*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<IShaderObject*,unsigned_int>,std::__ndk1::__map_value_compare<IShaderObject*,std::__ndk1::__value_type<IShaderObject*,unsigned_int>,std::__ndk1::less<IShaderObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IShaderObject*,unsigned_int>>>
             *)(this + 0xe8),*(__tree_node **)(this + 0xf0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
             *)(this + 0xd0),*(__tree_node **)(this + 0xd8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
             *)(this + 0xb8),*(__tree_node **)(this + 0xc0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
             *)(this + 0x60),*(__tree_node **)(this + 0x68));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
             *)(this + 0x48),*(__tree_node **)(this + 0x50));
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}


