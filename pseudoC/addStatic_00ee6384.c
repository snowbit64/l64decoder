// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStatic
// Entry Point: 00ee6384
// Size: 112 bytes
// Signature: undefined __thiscall addStatic(AstNameTable * this, char * param_1, Type param_2)


/* Luau::AstNameTable::addStatic(char const*, Luau::Lexeme::Type) */

void __thiscall Luau::AstNameTable::addStatic(AstNameTable *this,char *param_1,Type param_2)

{
  long lVar1;
  size_t sVar2;
  char *local_48;
  undefined4 local_40;
  Type TStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_1;
  sVar2 = strlen(param_1);
  local_40 = (undefined4)sVar2;
  TStack_3c = param_2;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48);
}


