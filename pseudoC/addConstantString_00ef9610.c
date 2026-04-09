// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstantString
// Entry Point: 00ef9610
// Size: 188 bytes
// Signature: undefined __cdecl addConstantString(StringRef param_1)


/* Luau::BytecodeBuilder::addConstantString(Luau::BytecodeBuilder::StringRef) */

void Luau::BytecodeBuilder::addConstantString
               (BytecodeBuilder *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_60 [2];
  ulong local_58;
  undefined8 local_50;
  ulong uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  uStack_48 = param_3;
  if ((ulong)(*(long *)(param_1 + 0x1e8) * 3) >> 2 <= *(ulong *)(param_1 + 0x1f0)) {
    detail::
    DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
    ::rehash();
  }
  lVar2 = detail::
          DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
          ::insert_unsafe((DenseHashTable<Luau::BytecodeBuilder::StringRef,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef,unsigned_int>,std::__ndk1::pair<Luau::BytecodeBuilder::StringRef_const,unsigned_int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::StringRef,unsigned_int>,Luau::BytecodeBuilder::StringRefHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::StringRef>>
                           *)(param_1 + 0x1e0),(StringRef *)&local_50);
  uVar3 = *(uint *)(lVar2 + 0x10);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x1f0);
    *(uint *)(lVar2 + 0x10) = uVar3;
  }
  local_58 = (ulong)uVar3;
  local_50 = 3;
  uStack_48 = (ulong)uVar3;
  local_60[0] = 3;
  addConstant(param_1,(ConstantKey *)local_60,(Constant *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


