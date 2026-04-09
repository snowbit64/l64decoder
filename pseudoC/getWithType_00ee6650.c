// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWithType
// Entry Point: 00ee6650
// Size: 116 bytes
// Signature: undefined __thiscall getWithType(AstNameTable * this, char * param_1, ulong param_2)


/* Luau::AstNameTable::getWithType(char const*, unsigned long) const */

void __thiscall Luau::AstNameTable::getWithType(AstNameTable *this,char *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  char *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  local_30 = (undefined4)param_2;
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uStack_2c = 0;
  local_38 = param_1;
  puVar1 = (undefined8 *)
           detail::
           DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
           ::find((DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                   *)this,(Entry *)&local_38);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0x117;
    lVar4 = *(long *)(lVar4 + 0x28);
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
    uVar3 = *(undefined4 *)((long)puVar1 + 0xc);
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  if (lVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar3);
}


