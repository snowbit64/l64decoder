// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readName
// Entry Point: 00ee7fec
// Size: 280 bytes
// Signature: undefined readName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readName() */

void Luau::Lexer::readName(void)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  long *in_x0;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined auVar10 [16];
  byte *local_38;
  uint local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar7 = tpidr_el0;
  local_28 = *(long *)(lVar7 + 0x28);
  uVar2 = *(uint *)(in_x0 + 2);
  uVar6 = (ulong)uVar2;
  pbVar1 = (byte *)(*in_x0 + uVar6);
  uVar9 = (uint)*pbVar1;
  do {
    iVar8 = (int)uVar6;
    if (uVar9 == 10) {
      *(int *)((long)in_x0 + 0x14) = *(int *)((long)in_x0 + 0x14) + 1;
      *(int *)(in_x0 + 3) = iVar8 + 1;
      *(int *)(in_x0 + 2) = iVar8 + 1;
    }
    else {
      *(int *)(in_x0 + 2) = iVar8 + 1;
    }
    uVar6 = (ulong)(iVar8 + 1);
  } while ((uVar6 < (ulong)in_x0[1]) &&
          ((uVar9 = (uint)*(byte *)(*in_x0 + uVar6),
           (uVar9 | 0x20) - 0x61 < 0x1a || uVar9 - 0x30 < 10 ||
           (bVar3 = uVar9 == 0x5f, uVar9 = 0x5f, bVar3))));
  uVar2 = (iVar8 + 1) - uVar2;
  if (*(char *)((long)in_x0 + 0x59) == '\0') {
    uStack_2c = 0;
    local_38 = pbVar1;
    local_30 = uVar2;
    puVar4 = (undefined8 *)
             detail::
             DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
             ::find((DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                     *)in_x0[10],(Entry *)&local_38);
    if (puVar4 == (undefined8 *)0x0) {
      uVar6 = 0x117;
      lVar7 = *(long *)(lVar7 + 0x28);
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar4;
      uVar6 = (ulong)*(uint *)((long)puVar4 + 0xc);
      lVar7 = *(long *)(lVar7 + 0x28);
    }
    auVar10._8_8_ = uVar6;
    auVar10._0_8_ = uVar5;
    if (lVar7 == local_28) {
      return;
    }
  }
  else {
    auVar10 = AstNameTable::getOrAddWithType
                        ((AstNameTable *)
                         (DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
                          *)in_x0[10],(char *)pbVar1,(ulong)uVar2);
    if (*(long *)(lVar7 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


