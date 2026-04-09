// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstNameTable
// Entry Point: 00ee5f8c
// Size: 984 bytes
// Signature: undefined __thiscall AstNameTable(AstNameTable * this, Allocator * param_1)


/* Luau::AstNameTable::AstNameTable(Luau::Allocator&) */

void __thiscall Luau::AstNameTable::AstNameTable(AstNameTable *this,Allocator *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  char *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)(this + 0x18) = &DAT_0050a39f;
  *(undefined8 *)(this + 0x20) = 0;
  pvVar3 = operator_new(0x800);
  lVar4 = 0;
  *(void **)this = pvVar3;
  *(undefined8 *)(this + 8) = 0x80;
  do {
    puVar1 = (undefined8 *)((long)pvVar3 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar1 = &DAT_0050a39f;
    puVar1[1] = 0;
  } while (lVar4 != 0x800);
  *(Allocator **)(this + 0x30) = param_1;
  local_48 = "and";
                    /* try { // try from 00ee6000 to 00ee633b has its CatchHandler @ 00ee6364 */
  local_40 = __strlen_chk(&DAT_004dbc21,4);
  uStack_3c = 0x11f;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "break";
  local_40 = __strlen_chk("break",6);
  uStack_3c = 0x120;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "do";
  local_40 = __strlen_chk(&DAT_004d0d90,3);
  uStack_3c = 0x121;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "else";
  local_40 = __strlen_chk(&DAT_004e6fef,5);
  uStack_3c = 0x122;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "elseif";
  local_40 = __strlen_chk("elseif",7);
  uStack_3c = 0x123;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "end";
  local_40 = __strlen_chk(&DAT_0051168d,4);
  uStack_3c = 0x124;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "false";
  local_40 = __strlen_chk("false",6);
  uStack_3c = 0x125;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "for";
  local_40 = __strlen_chk(&DAT_004d30f9,4);
  uStack_3c = 0x126;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "function";
  local_40 = __strlen_chk("function",9);
  uStack_3c = 0x127;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "if";
  local_40 = __strlen_chk(&DAT_00516889,3);
  uStack_3c = 0x128;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "in";
  local_40 = __strlen_chk(&DAT_0050be4a,3);
  uStack_3c = 0x129;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "local";
  local_40 = __strlen_chk("local",6);
  uStack_3c = 0x12a;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "nil";
  local_40 = __strlen_chk(&DAT_0050a199,4);
  uStack_3c = 299;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "not";
  local_40 = __strlen_chk(&DAT_004dcd7c,4);
  uStack_3c = 300;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "or";
  local_40 = __strlen_chk(&DAT_004e5b68,3);
  uStack_3c = 0x12d;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "repeat";
  local_40 = __strlen_chk("repeat",7);
  uStack_3c = 0x12e;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "return";
  local_40 = __strlen_chk("return",7);
  uStack_3c = 0x12f;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "then";
  local_40 = __strlen_chk(&DAT_005004f7,5);
  uStack_3c = 0x130;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "true";
  local_40 = __strlen_chk(&DAT_004ec5fc,5);
  uStack_3c = 0x131;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "until";
  local_40 = __strlen_chk("until",6);
  uStack_3c = 0x132;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  local_48 = "while";
  local_40 = __strlen_chk("while",6);
  uStack_3c = 0x133;
  DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
  ::insert((DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
            *)this,(Entry *)&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


