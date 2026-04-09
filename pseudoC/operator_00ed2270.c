// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator[]
// Entry Point: 00ed2270
// Size: 172 bytes
// Signature: undefined __thiscall operator[](DenseHashMap<Luau::AstLocal*,Luau::Compiler::Local,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>> * this, AstLocal * * param_1)


/* Luau::DenseHashMap<Luau::AstLocal*, Luau::Compiler::Local, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >::operator[](Luau::AstLocal* const&) */

AstLocal ** __thiscall
Luau::
DenseHashMap<Luau::AstLocal*,Luau::Compiler::Local,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
::operator[](DenseHashMap<Luau::AstLocal*,Luau::Compiler::Local,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
             *this,AstLocal **param_1)

{
  AstLocal *pAVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  AstLocal **ppAVar5;
  
  lVar3 = *(long *)(this + 8);
  if ((ulong)(lVar3 * 3) >> 2 <= *(ulong *)(this + 0x10)) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar3 = *(long *)(this + 8);
  }
  pAVar1 = *param_1;
  uVar2 = 0;
  uVar4 = (ulong)pAVar1 >> 4 ^ (ulong)pAVar1 >> 9;
  do {
    uVar4 = uVar4 & lVar3 - 1U;
    ppAVar5 = (AstLocal **)(*(long *)this + uVar4 * 0x10);
    if (*ppAVar5 == *(AstLocal **)(this + 0x18)) {
      lVar3 = *(long *)(this + 0x10);
      *ppAVar5 = pAVar1;
      *(long *)(this + 0x10) = lVar3 + 1;
      return ppAVar5 + 1;
    }
    if (*ppAVar5 == pAVar1) goto LAB_00ed22ec;
    uVar2 = uVar2 + 1;
    uVar4 = uVar2 + uVar4;
  } while (uVar2 <= lVar3 - 1U);
  ppAVar5 = (AstLocal **)0x0;
LAB_00ed22ec:
  return ppAVar5 + 1;
}


