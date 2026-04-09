// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignField
// Entry Point: 00f01470
// Size: 656 bytes
// Signature: undefined __thiscall assignField(ShapeVisitor * this, AstExpr * param_1, AstExpr * param_2)


/* Luau::Compile::ShapeVisitor::assignField(Luau::AstExpr*, Luau::AstExpr*) */

void __thiscall
Luau::Compile::ShapeVisitor::assignField(ShapeVisitor *this,AstExpr *param_1,AstExpr *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_1 == (AstExpr *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprLocal>::value || *(long *)(this + 0x20) == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(this + 0x28);
  if (uVar1 == uVar4) {
    return;
  }
  uVar5 = 0;
  uVar7 = uVar1 >> 4 ^ uVar1 >> 9;
  uVar6 = *(long *)(this + 0x18) - 1;
  while( true ) {
    uVar7 = uVar7 & uVar6;
    uVar10 = *(ulong *)(*(long *)(this + 0x10) + uVar7 * 0x10);
    if (uVar10 == uVar1) break;
    uVar5 = uVar5 + 1;
    uVar7 = uVar5 + uVar7;
    if ((uVar10 == uVar4 || uVar6 <= uVar5) && (uVar10 == uVar4 || uVar5 != uVar6)) {
      return;
    }
  }
  puVar3 = (ulong *)(*(long *)(this + 0x10) + uVar7 * 0x10 + 8);
  if ((param_2 != (AstExpr *)0x0) &&
     (*(int *)(param_2 + 8) == AstRtti<Luau::AstExprConstantNumber>::value)) {
    plVar11 = *(long **)(this + 8);
    lVar2 = plVar11[1];
    if ((ulong)(lVar2 * 3) >> 2 <= (ulong)plVar11[2]) {
      detail::
      DenseHashTable<Luau::AstExprTable*,std::__ndk1::pair<Luau::AstExprTable*,Luau::Compile::TableShape>,std::__ndk1::pair<Luau::AstExprTable*const,Luau::Compile::TableShape>,Luau::detail::ItemInterfaceMap<Luau::AstExprTable*,Luau::Compile::TableShape>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprTable*>>
      ::rehash();
      lVar2 = plVar11[1];
    }
    uVar1 = *puVar3;
    uVar4 = (uVar1 >> 4 ^ uVar1 >> 9) & lVar2 - 1U;
    puVar3 = (ulong *)(*plVar11 + uVar4 * 0x10);
    if (*puVar3 == plVar11[3]) {
LAB_00f0160c:
      lVar2 = plVar11[2];
      *puVar3 = uVar1;
      plVar11[2] = lVar2 + 1;
    }
    else if (*puVar3 != uVar1) {
      lVar8 = 1;
      do {
        uVar4 = uVar4 + lVar8 & lVar2 - 1U;
        puVar3 = (ulong *)(*plVar11 + uVar4 * 0x10);
        if (*puVar3 == plVar11[3]) goto LAB_00f0160c;
        lVar8 = lVar8 + 1;
      } while (*puVar3 != uVar1);
    }
    if (*(double *)(param_2 + 0x20) != (double)(ulong)(*(int *)(puVar3 + 1) + 1U)) {
      return;
    }
    *(uint *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1U;
    return;
  }
  if (param_2 == (AstExpr *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
    return;
  }
  if (*(long *)(this + 0x78) == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar4 = *(ulong *)(this + 0x80);
  if (uVar1 == uVar4) {
    return;
  }
  lVar2 = *(long *)(this + 0x68);
  uVar5 = 0;
  uVar7 = uVar1 >> 4 ^ uVar1 >> 9;
  uVar6 = *(long *)(this + 0x70) - 1;
  while( true ) {
    uVar7 = uVar7 & uVar6;
    uVar10 = *(ulong *)(lVar2 + uVar7 * 0x10);
    if (uVar10 == uVar1) break;
    uVar5 = uVar5 + 1;
    uVar7 = uVar5 + uVar7;
    if ((uVar10 == uVar4 || uVar6 <= uVar5) && (uVar10 == uVar4 || uVar5 != uVar6)) {
      return;
    }
  }
  plVar11 = *(long **)(this + 8);
  lVar8 = plVar11[1];
  if ((ulong)(lVar8 * 3) >> 2 <= (ulong)plVar11[2]) {
    detail::
    DenseHashTable<Luau::AstExprTable*,std::__ndk1::pair<Luau::AstExprTable*,Luau::Compile::TableShape>,std::__ndk1::pair<Luau::AstExprTable*const,Luau::Compile::TableShape>,Luau::detail::ItemInterfaceMap<Luau::AstExprTable*,Luau::Compile::TableShape>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprTable*>>
    ::rehash();
    lVar8 = plVar11[1];
  }
  uVar1 = *puVar3;
  uVar4 = (uVar1 >> 4 ^ uVar1 >> 9) & lVar8 - 1U;
  puVar3 = (ulong *)(*plVar11 + uVar4 * 0x10);
  if (*puVar3 == plVar11[3]) {
LAB_00f016c8:
    lVar8 = plVar11[2];
    *puVar3 = uVar1;
    plVar11[2] = lVar8 + 1;
  }
  else if (*puVar3 != uVar1) {
    lVar9 = 1;
    do {
      uVar4 = uVar4 + lVar9 & lVar8 - 1U;
      puVar3 = (ulong *)(*plVar11 + uVar4 * 0x10);
      if (*puVar3 == plVar11[3]) goto LAB_00f016c8;
      lVar9 = lVar9 + 1;
    } while (*puVar3 != uVar1);
  }
  if (*(int *)(puVar3 + 1) != 0) {
    return;
  }
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar2 + uVar7 * 0x10 + 8);
  return;
}


