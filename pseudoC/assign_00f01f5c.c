// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign
// Entry Point: 00f01f5c
// Size: 420 bytes
// Signature: undefined __thiscall assign(ValueVisitor * this, AstExpr * param_1)


/* Luau::Compile::ValueVisitor::assign(Luau::AstExpr*) */

void __thiscall Luau::Compile::ValueVisitor::assign(ValueVisitor *this,AstExpr *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((param_1 == (AstExpr *)0x0) || (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprLocal>::value))
  {
    if ((param_1 == (AstExpr *)0x0) ||
       (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprGlobal>::value)) {
                    /* WARNING: Could not recover jumptable at 0x00f020fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (***(code ***)param_1)(param_1);
      return;
    }
    plVar8 = *(long **)(this + 8);
    lVar1 = plVar8[1];
    if ((ulong)(lVar1 * 3) >> 2 <= (ulong)plVar8[2]) {
      detail::
      DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::Compile::Global>,std::__ndk1::pair<Luau::AstName_const,Luau::Compile::Global>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::Compile::Global>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
      ::rehash();
      lVar1 = plVar8[1];
    }
    uVar4 = *(ulong *)(param_1 + 0x20);
    lVar2 = *plVar8;
    uVar3 = (uVar4 >> 4 ^ uVar4 >> 9) & lVar1 - 1U;
    puVar5 = (ulong *)(lVar2 + uVar3 * 0x10);
    uVar7 = *puVar5;
    if (uVar7 != plVar8[3]) {
      lVar6 = 1;
      do {
        if (uVar7 == uVar4) goto LAB_00f020d0;
        uVar3 = uVar3 + lVar6;
        lVar6 = lVar6 + 1;
        uVar3 = uVar3 & lVar1 - 1U;
        puVar5 = (ulong *)(lVar2 + uVar3 * 0x10);
        uVar7 = *puVar5;
      } while (uVar7 != plVar8[3]);
    }
    lVar1 = plVar8[2];
    *puVar5 = uVar4;
    plVar8[2] = lVar1 + 1;
LAB_00f020d0:
    *(undefined4 *)(lVar2 + uVar3 * 0x10 + 8) = 2;
    return;
  }
  plVar8 = *(long **)(this + 0x10);
  lVar1 = plVar8[1];
  if ((ulong)(lVar1 * 3) >> 2 <= (ulong)plVar8[2]) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Variable>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Variable>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Variable>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar1 = plVar8[1];
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = *plVar8;
  uVar3 = (uVar4 >> 4 ^ uVar4 >> 9) & lVar1 - 1U;
  puVar5 = (ulong *)(lVar2 + uVar3 * 0x18);
  uVar7 = *puVar5;
  if (uVar7 != plVar8[3]) {
    lVar6 = 1;
    do {
      if (uVar7 == uVar4) goto LAB_00f02018;
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 1;
      uVar3 = uVar3 & lVar1 - 1U;
      puVar5 = (ulong *)(lVar2 + uVar3 * 0x18);
      uVar7 = *puVar5;
    } while (uVar7 != plVar8[3]);
  }
  lVar1 = plVar8[2];
  *puVar5 = uVar4;
  plVar8[2] = lVar1 + 1;
LAB_00f02018:
  *(undefined *)(lVar2 + uVar3 * 0x18 + 0x10) = 1;
  return;
}


