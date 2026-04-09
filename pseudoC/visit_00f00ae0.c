// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00ae0
// Size: 400 bytes
// Signature: undefined __thiscall visit(ShapeVisitor * this, AstStatLocal * param_1)


/* Luau::Compile::ShapeVisitor::visit(Luau::AstStatLocal*) */

undefined8 __thiscall Luau::Compile::ShapeVisitor::visit(ShapeVisitor *this,AstStatLocal *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  iVar1 = AstRtti<Luau::AstExprTable>::value;
  if ((*(long *)(param_1 + 0x28) == 1) && (*(long *)(param_1 + 0x38) == 1)) {
    lVar10 = **(long **)(param_1 + 0x30);
    if ((((lVar10 != 0) && (*(int *)(lVar10 + 8) == AstRtti<Luau::AstExprTable>::value)) ||
        (((((lVar10 != 0 && (*(int *)(lVar10 + 8) == AstRtti<Luau::AstExprCall>::value)) &&
           (*(char *)(lVar10 + 0x38) == '\0')) &&
          ((*(long *)(lVar10 + 0x30) == 2 &&
           (lVar3 = *(long *)(lVar10 + 0x20),
           *(int *)(lVar3 + 8) == AstRtti<Luau::AstExprGlobal>::value)))) &&
         ((lVar3 != 0 &&
          (((*(char **)(lVar3 + 0x20) != (char *)0x0 &&
            (iVar2 = strcmp(*(char **)(lVar3 + 0x20),"setmetatable"), iVar2 == 0)) &&
           ((lVar10 = **(long **)(lVar10 + 0x28), *(int *)(lVar10 + 8) == iVar1 && (lVar10 != 0)))))
          ))))) && (*(long *)(lVar10 + 0x28) == 0)) {
      lVar3 = *(long *)(this + 0x18);
      puVar9 = *(ulong **)(param_1 + 0x20);
      if ((ulong)(lVar3 * 3) >> 2 <= *(ulong *)(this + 0x20)) {
        detail::
        DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::AstExprTable*>,std::__ndk1::pair<Luau::AstLocal*const,Luau::AstExprTable*>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::AstExprTable*>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
        ::rehash();
        lVar3 = *(long *)(this + 0x18);
      }
      uVar6 = *puVar9;
      lVar4 = *(long *)(this + 0x10);
      uVar5 = (uVar6 >> 4 ^ uVar6 >> 9) & lVar3 - 1U;
      puVar9 = (ulong *)(lVar4 + uVar5 * 0x10);
      uVar8 = *puVar9;
      if (uVar8 != *(ulong *)(this + 0x28)) {
        lVar7 = 1;
        do {
          if (uVar8 == uVar6) goto LAB_00f00c54;
          uVar5 = uVar5 + lVar7;
          lVar7 = lVar7 + 1;
          uVar5 = uVar5 & lVar3 - 1U;
          puVar9 = (ulong *)(lVar4 + uVar5 * 0x10);
          uVar8 = *puVar9;
        } while (uVar8 != *(ulong *)(this + 0x28));
      }
      lVar3 = *(long *)(this + 0x20);
      *puVar9 = uVar6;
      *(long *)(this + 0x20) = lVar3 + 1;
LAB_00f00c54:
      *(long *)(lVar4 + uVar5 * 0x10 + 8) = lVar10;
      return 1;
    }
  }
  return 1;
}


