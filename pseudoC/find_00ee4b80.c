// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find
// Entry Point: 00ee4b80
// Size: 108 bytes
// Signature: undefined __thiscall find(DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>> * this, AstExprCall * * param_1)


/* Luau::DenseHashMap<Luau::AstExprCall*, int, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExprCall*> >::find(Luau::AstExprCall* const&) const */

AstExprCall ** __thiscall
Luau::
DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
::find(DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
       *this,AstExprCall **param_1)

{
  AstExprCall **ppAVar1;
  AstExprCall *pAVar2;
  ulong uVar3;
  ulong uVar4;
  AstExprCall **ppAVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    pAVar2 = *param_1;
    if (pAVar2 != *(AstExprCall **)(this + 0x18)) {
      uVar3 = 0;
      uVar4 = (ulong)pAVar2 >> 4 ^ (ulong)pAVar2 >> 9;
      do {
        uVar4 = uVar4 & *(long *)(this + 8) - 1U;
        ppAVar5 = (AstExprCall **)(*(long *)this + uVar4 * 0x10);
        if (*ppAVar5 == pAVar2) goto LAB_00ee4bdc;
        if (*ppAVar5 == *(AstExprCall **)(this + 0x18)) break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3 + uVar4;
      } while (uVar3 <= *(long *)(this + 8) - 1U);
    }
  }
  ppAVar5 = (AstExprCall **)0x0;
LAB_00ee4bdc:
  ppAVar1 = (AstExprCall **)0x0;
  if (ppAVar5 != (AstExprCall **)0x0) {
    ppAVar1 = ppAVar5 + 1;
  }
  return ppAVar1;
}


