// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find
// Entry Point: 00efe114
// Size: 296 bytes
// Signature: undefined __thiscall find(DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>> * this, TableShape * param_1)


/* Luau::detail::DenseHashTable<Luau::BytecodeBuilder::TableShape,
   std::__ndk1::pair<Luau::BytecodeBuilder::TableShape, int>,
   std::__ndk1::pair<Luau::BytecodeBuilder::TableShape const, int>,
   Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape, int>,
   Luau::BytecodeBuilder::TableShapeHash, std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>
   >::find(Luau::BytecodeBuilder::TableShape const&) const */

void * __thiscall
Luau::detail::
DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
::find(DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
       *this,TableShape *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  size_t __n;
  void *__s1;
  ulong uVar8;
  long lVar9;
  
  if (*(long *)(this + 0x10) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    uVar8 = (ulong)uVar1;
    uVar2 = *(uint *)(this + 0x98);
    __n = uVar8 << 2;
    if ((uVar1 != uVar2) || (iVar4 = memcmp(param_1,this + 0x18,__n), iVar4 != 0)) {
      lVar6 = *(long *)(this + 8);
      uVar5 = 0x811c9dc5;
      puVar7 = (uint *)param_1;
      if (uVar1 != 0) {
        do {
          uVar8 = uVar8 - 1;
          uVar5 = (ulong)((*puVar7 ^ (uint)uVar5) * 0x1000193);
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
      uVar8 = 0;
      lVar9 = *(long *)this;
      do {
        uVar5 = uVar5 & lVar6 - 1U;
        __s1 = (void *)(lVar9 + uVar5 * 0x88);
        uVar3 = *(uint *)((long)__s1 + 0x80);
        if ((uVar3 == uVar1) && (iVar4 = memcmp(__s1,param_1,__n), iVar4 == 0)) {
          return __s1;
        }
        if ((uVar3 == uVar2) && (iVar4 = memcmp(__s1,this + 0x18,(ulong)uVar2 << 2), iVar4 == 0)) {
          return (void *)0x0;
        }
        uVar8 = uVar8 + 1;
        uVar5 = uVar8 + uVar5;
      } while (uVar8 <= lVar6 - 1U);
    }
  }
  return (void *)0x0;
}


