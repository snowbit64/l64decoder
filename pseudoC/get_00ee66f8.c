// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00ee66f8
// Size: 116 bytes
// Signature: undefined __thiscall get(AstNameTable * this, char * param_1)


/* Luau::AstNameTable::get(char const*) const */

void __thiscall Luau::AstNameTable::get(AstNameTable *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  char *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_1);
  local_40 = (undefined4)sVar2;
  uStack_3c = 0;
  local_48 = param_1;
  plVar3 = (long *)detail::
                   DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                   ::find((DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                           *)this,(Entry *)&local_48);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


