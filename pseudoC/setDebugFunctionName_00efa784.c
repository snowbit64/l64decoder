// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDebugFunctionName
// Entry Point: 00efa784
// Size: 356 bytes
// Signature: undefined __cdecl setDebugFunctionName(StringRef param_1)


/* Luau::BytecodeBuilder::setDebugFunctionName(Luau::BytecodeBuilder::StringRef) */

void Luau::BytecodeBuilder::setDebugFunctionName(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  undefined8 local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = param_2;
  uStack_58 = param_3;
  if ((ulong)(param_1[0x3d] * 3) >> 2 <= (ulong)param_1[0x3e]) {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
    ::rehash();
  }
  lVar2 = detail::
          DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
          ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                           *)(param_1 + 0x3c),(StringRef *)&local_60);
  iVar3 = *(int *)(lVar2 + 0x10);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x3e);
    *(int *)(lVar2 + 0x10) = iVar3;
  }
  *(int *)(*param_1 + (ulong)*(uint *)(param_1 + 3) * 0x58 + 0x1c) = iVar3;
  if ((param_1[0x51] & 1U | param_1[0x50]) == 0) goto LAB_00efa8b4;
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = (void *)CONCAT71(local_60._1_7_,(char)((int)param_3 << 1));
    if (param_3 != 0) goto LAB_00efa864;
  }
  else {
    uVar4 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = (void *)(uVar4 | 1);
    uStack_58 = param_3;
    local_50 = __dest;
LAB_00efa864:
    memcpy(__dest,param_2,param_3);
  }
  *(undefined *)((long)__dest + param_3) = 0;
  lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 3) * 0x58;
  if ((*(byte *)(void **)(lVar2 + 0x40) & 1) != 0) {
    operator_delete(*(void **)(*param_1 + (ulong)*(uint *)(param_1 + 3) * 0x58 + 0x50));
  }
  *(void **)(lVar2 + 0x50) = local_50;
  *(ulong *)(lVar2 + 0x48) = uStack_58;
  *(void **)(lVar2 + 0x40) = local_60;
LAB_00efa8b4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


