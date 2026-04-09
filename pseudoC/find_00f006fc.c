// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find
// Entry Point: 00f006fc
// Size: 108 bytes
// Signature: undefined __thiscall find(DenseHashMap<Luau::AstLocal*,unsigned_long,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>> * this, AstLocal * * param_1)


/* Luau::DenseHashMap<Luau::AstLocal*, unsigned long, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >::find(Luau::AstLocal* const&) */

AstLocal ** __thiscall
Luau::
DenseHashMap<Luau::AstLocal*,unsigned_long,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
::find(DenseHashMap<Luau::AstLocal*,unsigned_long,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
       *this,AstLocal **param_1)

{
  AstLocal **ppAVar1;
  AstLocal *pAVar2;
  ulong uVar3;
  ulong uVar4;
  AstLocal **ppAVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    pAVar2 = *param_1;
    if (pAVar2 != *(AstLocal **)(this + 0x18)) {
      uVar3 = 0;
      uVar4 = (ulong)pAVar2 >> 4 ^ (ulong)pAVar2 >> 9;
      do {
        uVar4 = uVar4 & *(long *)(this + 8) - 1U;
        ppAVar5 = (AstLocal **)(*(long *)this + uVar4 * 0x10);
        if (*ppAVar5 == pAVar2) goto LAB_00f00758;
        if (*ppAVar5 == *(AstLocal **)(this + 0x18)) break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3 + uVar4;
      } while (uVar3 <= *(long *)(this + 8) - 1U);
    }
  }
  ppAVar5 = (AstLocal **)0x0;
LAB_00f00758:
  ppAVar1 = (AstLocal **)0x0;
  if (ppAVar5 != (AstLocal **)0x0) {
    ppAVar1 = ppAVar5 + 1;
  }
  return ppAVar1;
}


