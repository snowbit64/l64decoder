// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStringTableEntry
// Entry Point: 00ef9438
// Size: 180 bytes
// Signature: undefined __cdecl addStringTableEntry(StringRef param_1)


/* Luau::BytecodeBuilder::addStringTableEntry(Luau::BytecodeBuilder::StringRef) */

void Luau::BytecodeBuilder::addStringTableEntry(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = param_2;
  uStack_40 = param_3;
  if (*(ulong *)(param_1 + 0x1f0) < (ulong)(*(long *)(param_1 + 0x1e8) * 3) >> 2) {
    lVar2 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_48);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  else {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
    ::rehash();
    lVar2 = detail::
            DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
            ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                             *)(param_1 + 0x1e0),(StringRef *)&local_48);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x1f0);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


