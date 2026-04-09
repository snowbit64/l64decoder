// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00edc3b0
// Size: 368 bytes
// Signature: undefined __thiscall visit(UndefinedLocalVisitor * this, AstExprFunction * param_1)


/* Luau::Compiler::UndefinedLocalVisitor::visit(Luau::AstExprFunction*) */

undefined8 __thiscall
Luau::Compiler::UndefinedLocalVisitor::visit(UndefinedLocalVisitor *this,AstExprFunction *param_1)

{
  AstExprFunction **ppAVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  AstExprFunction **ppAVar9;
  ulong *puVar10;
  long lVar11;
  
  lVar5 = *(long *)(this + 8);
  if ((*(long *)(lVar5 + 0x40) != 0) && (*(AstExprFunction **)(lVar5 + 0x48) != param_1)) {
    uVar3 = 0;
    uVar8 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    uVar6 = *(long *)(lVar5 + 0x38) - 1;
    do {
      uVar8 = uVar8 & uVar6;
      ppAVar9 = (AstExprFunction **)(*(long *)(lVar5 + 0x30) + uVar8 * 0x38);
      if (*ppAVar9 == param_1) goto LAB_00edc42c;
      if (*ppAVar9 == *(AstExprFunction **)(lVar5 + 0x48)) break;
      uVar3 = uVar3 + 1;
      uVar8 = uVar3 + uVar8;
    } while (uVar3 <= uVar6);
  }
  ppAVar9 = (AstExprFunction **)0x0;
LAB_00edc42c:
  ppAVar1 = (AstExprFunction **)0x0;
  if (ppAVar9 != (AstExprFunction **)0x0) {
    ppAVar1 = ppAVar9 + 1;
  }
  puVar10 = (ulong *)ppAVar1[1];
  puVar2 = (ulong *)ppAVar1[2];
  do {
    if (puVar10 == puVar2) {
      return 0;
    }
    uVar3 = *puVar10;
    if (*(long *)(uVar3 + 0x20) == *(long *)(param_1 + 0xa0) + -1) {
      lVar11 = *(long *)(this + 8);
      lVar5 = *(long *)(lVar11 + 0x60);
      if ((ulong)(lVar5 * 3) >> 2 <= *(ulong *)(lVar11 + 0x68)) {
        detail::
        DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
        ::rehash();
        lVar5 = *(long *)(lVar11 + 0x60);
      }
      lVar4 = *(long *)(lVar11 + 0x58);
      uVar8 = lVar5 - 1U & (uVar3 >> 4 ^ uVar3 >> 9);
      uVar6 = *(ulong *)(lVar4 + uVar8 * 0x10);
      if (uVar6 != *(ulong *)(lVar11 + 0x70)) {
        lVar7 = 1;
        do {
          if (uVar6 == uVar3) goto LAB_00edc4e8;
          uVar8 = uVar8 + lVar7;
          lVar7 = lVar7 + 1;
          uVar8 = uVar8 & lVar5 - 1U;
          uVar6 = *(ulong *)(lVar4 + uVar8 * 0x10);
        } while (uVar6 != *(ulong *)(lVar11 + 0x70));
      }
      lVar5 = *(long *)(lVar11 + 0x68);
      *(ulong *)(lVar4 + uVar8 * 0x10) = uVar3;
      *(long *)(lVar11 + 0x68) = lVar5 + 1;
LAB_00edc4e8:
      if (*(char *)(lVar4 + uVar8 * 0x10 + 9) == '\0' && *(long *)(this + 0x10) == 0) {
        *(ulong *)(this + 0x10) = uVar3;
      }
    }
    puVar10 = puVar10 + 1;
  } while( true );
}


