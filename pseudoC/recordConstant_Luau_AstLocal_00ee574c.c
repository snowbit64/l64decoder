// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recordConstant<Luau::AstLocal*>
// Entry Point: 00ee574c
// Size: 320 bytes
// Signature: void __thiscall recordConstant<Luau::AstLocal*>(ConstantVisitor * this, DenseHashMap * param_1, AstLocal * param_2, Constant * param_3)


/* void 
   Luau::Compile::ConstantVisitor::recordConstant<Luau::AstLocal*>(Luau::DenseHashMap<Luau::AstLocal*,
   Luau::Compile::Constant, std::__ndk1::conditional<std::is_pointer_v<Luau::AstLocal*>,
   Luau::DenseHashPointer, std::__ndk1::hash<Luau::AstLocal*> >::type,
   std::__ndk1::equal_to<Luau::AstLocal*> >&, Luau::AstLocal*, Luau::Compile::Constant const&) */

void __thiscall
Luau::Compile::ConstantVisitor::recordConstant<Luau::AstLocal*>
          (ConstantVisitor *this,DenseHashMap *param_1,AstLocal *param_2,Constant *param_3)

{
  ulong uVar1;
  AstLocal *pAVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  AstLocal **ppAVar6;
  AstLocal *pAVar7;
  
  if (*(int *)param_3 == 0) {
    if (((this[0x28] == (ConstantVisitor)0x0) && (*(long *)(param_1 + 0x10) != 0)) &&
       (pAVar2 = *(AstLocal **)(param_1 + 0x18), pAVar2 != param_2)) {
      uVar1 = 0;
      uVar5 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
      uVar4 = *(long *)(param_1 + 8) - 1;
      do {
        uVar5 = uVar5 & uVar4;
        pAVar7 = *(AstLocal **)(*(long *)param_1 + uVar5 * 0x18);
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
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar1 = 0;
  uVar5 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
  do {
    uVar5 = uVar5 & lVar3 - 1U;
    ppAVar6 = (AstLocal **)(*(long *)param_1 + uVar5 * 0x18);
    if (*ppAVar6 == *(AstLocal **)(param_1 + 0x18)) {
      lVar3 = *(long *)(param_1 + 0x10);
      *ppAVar6 = param_2;
      *(long *)(param_1 + 0x10) = lVar3 + 1;
      goto LAB_00ee5858;
    }
    if (*ppAVar6 == param_2) goto LAB_00ee5858;
    uVar1 = uVar1 + 1;
    uVar5 = uVar1 + uVar5;
  } while (uVar1 <= lVar3 - 1U);
  ppAVar6 = (AstLocal **)0x0;
LAB_00ee5858:
  pAVar2 = *(AstLocal **)param_3;
  ppAVar6[2] = *(AstLocal **)(param_3 + 8);
  ppAVar6[1] = pAVar2;
  return;
}


