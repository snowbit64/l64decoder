// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushDebugUpval
// Entry Point: 00efaaa8
// Size: 396 bytes
// Signature: undefined __cdecl pushDebugUpval(StringRef param_1)


/* Luau::BytecodeBuilder::pushDebugUpval(Luau::BytecodeBuilder::StringRef) */

void Luau::BytecodeBuilder::pushDebugUpval(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  int *piVar5;
  void *__src;
  ulong __n;
  int iVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = param_2;
  uStack_70 = param_3;
  if (*(ulong *)(param_1 + 0x1f0) < (ulong)(*(long *)(param_1 + 0x1e8) * 3) >> 2) {
    lVar4 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_78);
    iVar6 = *(int *)(lVar4 + 0x10);
    if (iVar6 != 0) goto LAB_00efab04;
LAB_00efab38:
    iVar6 = *(int *)(param_1 + 0x1f0);
    *(int *)(lVar4 + 0x10) = iVar6;
    piVar5 = *(int **)(param_1 + 0x1d0);
    if (piVar5 == *(int **)(param_1 + 0x1d8)) goto LAB_00efab4c;
  }
  else {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
    ::rehash();
    lVar4 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_78);
    iVar6 = *(int *)(lVar4 + 0x10);
    if (iVar6 == 0) goto LAB_00efab38;
LAB_00efab04:
    piVar5 = *(int **)(param_1 + 0x1d0);
    if (piVar5 == *(int **)(param_1 + 0x1d8)) {
LAB_00efab4c:
      __src = *(void **)(param_1 + 0x1c8);
      __n = (long)piVar5 - (long)__src;
      lVar4 = (long)__n >> 2;
      uVar1 = lVar4 + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
        piVar5 = (int *)(lVar4 * 4);
        pvVar2 = (void *)0x0;
        *piVar5 = iVar6;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
        piVar5 = (int *)((long)__dest + lVar4 * 4);
        pvVar2 = (void *)((long)__dest + uVar1 * 4);
        *piVar5 = iVar6;
      }
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(param_1 + 0x1c8) = __dest;
      *(int **)(param_1 + 0x1d0) = piVar5 + 1;
      *(void **)(param_1 + 0x1d8) = pvVar2;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      goto LAB_00efabd4;
    }
  }
  *piVar5 = iVar6;
  *(int **)(param_1 + 0x1d0) = piVar5 + 1;
LAB_00efabd4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


