// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00ee63f4
// Size: 312 bytes
// Signature: undefined __thiscall insert(DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>> * this, Entry * param_1)


/* Luau::DenseHashSet<Luau::AstNameTable::Entry, Luau::AstNameTable::EntryHash,
   std::__ndk1::equal_to<Luau::AstNameTable::Entry> >::insert(Luau::AstNameTable::Entry const&) */

void ** __thiscall
Luau::
DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
::insert(DenseHashSet<Luau::AstNameTable::Entry,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
         *this,Entry *param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *__s2;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  
  lVar6 = *(long *)(this + 8);
  if ((ulong)(lVar6 * 3) >> 2 <= *(ulong *)(this + 0x10)) {
    detail::
    DenseHashTable<Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::AstNameTable::Entry,Luau::detail::ItemInterfaceSet<Luau::AstNameTable::Entry>,Luau::AstNameTable::EntryHash,std::__ndk1::equal_to<Luau::AstNameTable::Entry>>
    ::rehash();
    lVar6 = *(long *)(this + 8);
  }
  uVar2 = *(uint *)(param_1 + 8);
  __s2 = *(byte **)param_1;
  uVar7 = 0x811c9dc5;
  pbVar8 = __s2;
  uVar10 = (ulong)uVar2;
  if (uVar2 != 0) {
    do {
      uVar10 = uVar10 - 1;
      uVar7 = (ulong)(((uint)uVar7 ^ (uint)*pbVar8) * 0x1000193);
      pbVar8 = pbVar8 + 1;
    } while (uVar10 != 0);
  }
  uVar10 = 0;
  lVar11 = *(long *)this;
  uVar3 = *(uint *)(this + 0x20);
  pvVar9 = *(void **)(this + 0x18);
  while( true ) {
    uVar7 = uVar7 & lVar6 - 1U;
    ppvVar1 = (void **)(lVar11 + uVar7 * 0x10);
    uVar4 = *(uint *)(ppvVar1 + 1);
    if ((uVar4 == uVar3) && (iVar5 = memcmp(*ppvVar1,pvVar9,(ulong)uVar3), iVar5 == 0)) {
      pvVar9 = *(void **)param_1;
      ppvVar1[1] = *(void **)(param_1 + 8);
      *ppvVar1 = pvVar9;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
      return ppvVar1;
    }
    if ((uVar4 == uVar2) && (iVar5 = memcmp(*ppvVar1,__s2,(ulong)uVar2), iVar5 == 0)) break;
    uVar10 = uVar10 + 1;
    uVar7 = uVar10 + uVar7;
    if (lVar6 - 1U < uVar10) {
      return (void **)0x0;
    }
  }
  return ppvVar1;
}


