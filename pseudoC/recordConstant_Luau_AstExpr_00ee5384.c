// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recordConstant<Luau::AstExpr*>
// Entry Point: 00ee5384
// Size: 320 bytes
// Signature: void __thiscall recordConstant<Luau::AstExpr*>(ConstantVisitor * this, DenseHashMap * param_1, AstExpr * param_2, Constant * param_3)


/* void 
   Luau::Compile::ConstantVisitor::recordConstant<Luau::AstExpr*>(Luau::DenseHashMap<Luau::AstExpr*,
   Luau::Compile::Constant, std::__ndk1::conditional<std::is_pointer_v<Luau::AstExpr*>,
   Luau::DenseHashPointer, std::__ndk1::hash<Luau::AstExpr*> >::type,
   std::__ndk1::equal_to<Luau::AstExpr*> >&, Luau::AstExpr*, Luau::Compile::Constant const&) */

void __thiscall
Luau::Compile::ConstantVisitor::recordConstant<Luau::AstExpr*>
          (ConstantVisitor *this,DenseHashMap *param_1,AstExpr *param_2,Constant *param_3)

{
  ulong uVar1;
  AstExpr *pAVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  AstExpr **ppAVar6;
  AstExpr *pAVar7;
  
  if (*(int *)param_3 == 0) {
    if (((this[0x28] == (ConstantVisitor)0x0) && (*(long *)(param_1 + 0x10) != 0)) &&
       (pAVar2 = *(AstExpr **)(param_1 + 0x18), pAVar2 != param_2)) {
      uVar1 = 0;
      uVar5 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
      uVar4 = *(long *)(param_1 + 8) - 1;
      do {
        uVar5 = uVar5 & uVar4;
        pAVar7 = *(AstExpr **)(*(long *)param_1 + uVar5 * 0x18);
        if (pAVar7 == param_2) {
          *(undefined4 *)(*(long *)param_1 + uVar5 * 0x18 + 8) = 0;
          return;
        }
        uVar1 = uVar1 + 1;
        uVar5 = uVar1 + uVar5;
      } while (pAVar7 != pAVar2 && uVar1 < uVar4 || pAVar7 != pAVar2 && uVar1 == uVar4);
    }
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  if ((ulong)(lVar3 * 3) >> 2 <= *(ulong *)(param_1 + 0x10)) {
    detail::
    DenseHashTable<Luau::AstExpr*,std::__ndk1::pair<Luau::AstExpr*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstExpr*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstExpr*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExpr*>>
    ::rehash();
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar1 = 0;
  uVar5 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
  do {
    uVar5 = uVar5 & lVar3 - 1U;
    ppAVar6 = (AstExpr **)(*(long *)param_1 + uVar5 * 0x18);
    if (*ppAVar6 == *(AstExpr **)(param_1 + 0x18)) {
      lVar3 = *(long *)(param_1 + 0x10);
      *ppAVar6 = param_2;
      *(long *)(param_1 + 0x10) = lVar3 + 1;
      goto LAB_00ee5490;
    }
    if (*ppAVar6 == param_2) goto LAB_00ee5490;
    uVar1 = uVar1 + 1;
    uVar5 = uVar1 + uVar5;
  } while (uVar1 <= lVar3 - 1U);
  ppAVar6 = (AstExpr **)0x0;
LAB_00ee5490:
  pAVar2 = *(AstExpr **)param_3;
  ppAVar6[2] = *(AstExpr **)(param_3 + 8);
  ppAVar6[1] = pAVar2;
  return;
}


