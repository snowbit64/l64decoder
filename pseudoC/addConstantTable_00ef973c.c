// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstantTable
// Entry Point: 00ef973c
// Size: 372 bytes
// Signature: undefined __thiscall addConstantTable(BytecodeBuilder * this, TableShape * param_1)


/* Luau::BytecodeBuilder::addConstantTable(Luau::BytecodeBuilder::TableShape const&) */

ulong __thiscall Luau::BytecodeBuilder::addConstantTable(BytecodeBuilder *this,TableShape *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  ulong __n;
  
  lVar3 = detail::
          DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
          ::find((DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
                  *)(this + 0xe8),param_1);
  if (lVar3 == 0) {
    uVar5 = *(long *)(this + 0x58) - (long)*(void **)(this + 0x50);
    uVar6 = uVar5 >> 4;
    if ((uVar5 >> 0x1b & 0x1ff) == 0) {
      iVar2 = (int)((ulong)(*(long *)(this + 0xa0) - *(long *)(this + 0x98)) >> 2) * 0x3e0f83e1;
      puVar4 = (undefined4 *)
               DenseHashMap<Luau::BytecodeBuilder::TableShape,int,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
               ::operator[]((DenseHashMap<Luau::BytecodeBuilder::TableShape,int,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
                             *)(DenseHashTable<Luau::BytecodeBuilder::TableShape,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape,int>,std::__ndk1::pair<Luau::BytecodeBuilder::TableShape_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::TableShape,int>,Luau::BytecodeBuilder::TableShapeHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::TableShape>>
                                *)(this + 0xe8),param_1);
      *puVar4 = (int)uVar6;
      FUN_00ef9a18(this + 0x98,param_1);
      puVar1 = *(undefined8 **)(this + 0x58);
      if (puVar1 == *(undefined8 **)(this + 0x60)) {
        __src = *(void **)(this + 0x50);
        __n = (long)puVar1 - (long)__src;
        uVar5 = ((long)__n >> 4) + 1;
        if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar5 <= (ulong)((long)__n >> 3)) {
          uVar5 = (long)__n >> 3;
        }
        if (0x7fffffffffffffef < __n) {
          uVar5 = 0xfffffffffffffff;
        }
        if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar5 * 0x10);
        puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
        *(int *)(puVar1 + 1) = iVar2;
        *(undefined4 *)((long)puVar1 + 0xc) = 0;
        *puVar1 = 5;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(this + 0x50) = __dest;
        *(undefined8 **)(this + 0x58) = puVar1 + 2;
        *(void **)(this + 0x60) = (void *)((long)__dest + uVar5 * 0x10);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *(int *)(puVar1 + 1) = iVar2;
        *(undefined4 *)((long)puVar1 + 0xc) = 0;
        *puVar1 = 5;
        *(undefined8 **)(this + 0x58) = puVar1 + 2;
      }
    }
    else {
      uVar6 = 0xffffffff;
    }
  }
  else {
    uVar6 = (ulong)*(uint *)(lVar3 + 0x84);
  }
  return uVar6 & 0xffffffff;
}


