// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find
// Entry Point: 00ee8df0
// Size: 272 bytes
// Signature: undefined __thiscall find(DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>> * this, Entry * param_1)


/* Luau::detail::DenseHashTable<Luau::AstNameTable::Entry, Luau::AstNameTable::Entry,
   Luau::AstNameTable::Entry, Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,
   Luau::AstNameTable::EntryHash, std::__ndk1::equal_to<Luau::AstNameTable::Entry>
   >::find(Luau::AstNameTable::Entry const&) const */

void ** __thiscall
Luau::detail::
DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
::find(DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
       *this,Entry *param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong __n;
  byte *__s1;
  void *__s2;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(this + 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
    __n = (ulong)uVar2;
    uVar3 = *(uint *)(this + 0x20);
    __s1 = *(byte **)param_1;
    if ((uVar2 != uVar3) || (iVar5 = memcmp(__s1,*(void **)(this + 0x18),__n), iVar5 != 0)) {
      lVar7 = *(long *)(this + 8);
      uVar6 = 0x811c9dc5;
      pbVar8 = __s1;
      uVar9 = __n;
      if (uVar2 != 0) {
        do {
          uVar9 = uVar9 - 1;
          uVar6 = (ulong)(((uint)uVar6 ^ (uint)*pbVar8) * 0x1000193);
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      lVar10 = *(long *)this;
      __s2 = *(void **)(this + 0x18);
      do {
        uVar6 = uVar6 & lVar7 - 1U;
        ppvVar1 = (void **)(lVar10 + uVar6 * 0x10);
        uVar4 = *(uint *)(ppvVar1 + 1);
        if ((uVar4 == uVar2) && (iVar5 = memcmp(*ppvVar1,__s1,__n), iVar5 == 0)) {
          return ppvVar1;
        }
        if ((uVar4 == uVar3) && (iVar5 = memcmp(*ppvVar1,__s2,(ulong)uVar3), iVar5 == 0)) {
          return (void **)0x0;
        }
        uVar9 = uVar9 + 1;
        uVar6 = uVar9 + uVar6;
      } while (uVar9 <= lVar7 - 1U);
    }
  }
  return (void **)0x0;
}


