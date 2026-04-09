// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushDebugLocal
// Entry Point: 00efa90c
// Size: 412 bytes
// Signature: undefined __cdecl pushDebugLocal(StringRef param_1, uchar param_2, uint param_3, uint param_4)


/* Luau::BytecodeBuilder::pushDebugLocal(Luau::BytecodeBuilder::StringRef, unsigned char, unsigned
   int, unsigned int) */

void Luau::BytecodeBuilder::pushDebugLocal
               (long param_1,undefined8 param_2,undefined8 param_3,undefined param_4,int param_5,
               int param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *__dest;
  int *piVar4;
  void *__src;
  ulong __n;
  int iVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  uStack_70 = param_3;
  if (*(ulong *)(param_1 + 0x1f0) < (ulong)(*(long *)(param_1 + 0x1e8) * 3) >> 2) {
    lVar3 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_78);
    iVar5 = *(int *)(lVar3 + 0x10);
    if (iVar5 != 0) goto LAB_00efa974;
LAB_00efa9b4:
    iVar5 = *(int *)(param_1 + 0x1f0);
    *(int *)(lVar3 + 0x10) = iVar5;
    piVar4 = *(int **)(param_1 + 0x1b8);
    if (piVar4 == *(int **)(param_1 + 0x1c0)) goto LAB_00efa9c8;
  }
  else {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
    ::rehash();
    lVar3 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_78);
    iVar5 = *(int *)(lVar3 + 0x10);
    if (iVar5 == 0) goto LAB_00efa9b4;
LAB_00efa974:
    piVar4 = *(int **)(param_1 + 0x1b8);
    if (piVar4 == *(int **)(param_1 + 0x1c0)) {
LAB_00efa9c8:
      __src = *(void **)(param_1 + 0x1b0);
      __n = (long)piVar4 - (long)__src;
      uVar1 = ((long)__n >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 3)) {
        uVar1 = (long)__n >> 3;
      }
      if (0x7fffffffffffffef < __n) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 * 0x10);
      piVar4 = (int *)((long)__dest + ((long)__n >> 4) * 0x10);
      *piVar4 = iVar5;
      *(undefined *)(piVar4 + 1) = param_4;
      piVar4[2] = param_5;
      piVar4[3] = param_6;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(param_1 + 0x1b0) = __dest;
      *(int **)(param_1 + 0x1b8) = piVar4 + 4;
      *(void **)(param_1 + 0x1c0) = (void *)((long)__dest + uVar1 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      goto LAB_00efaa64;
    }
  }
  *piVar4 = iVar5;
  *(undefined *)(piVar4 + 1) = param_4;
  piVar4[2] = param_5;
  piVar4[3] = param_6;
  *(int **)(param_1 + 0x1b8) = piVar4 + 4;
LAB_00efaa64:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


