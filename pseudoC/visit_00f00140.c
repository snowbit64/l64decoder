// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00140
// Size: 180 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatCompoundAssign * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatCompoundAssign*) */

undefined8 __thiscall
Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatCompoundAssign *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar2 = AstRtti<Luau::AstExprLocal>::value;
  lVar3 = *(long *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar3 + 8);
  if ((lVar3 != 0) && (iVar1 == AstRtti<Luau::AstExprLocal>::value && *(long *)(this + 0x20) != 0))
  {
    uVar4 = *(ulong *)(lVar3 + 0x20);
    uVar5 = *(ulong *)(this + 0x28);
    if (uVar4 != uVar5) {
      uVar6 = 0;
      uVar8 = uVar4 >> 4 ^ uVar4 >> 9;
      uVar7 = *(long *)(this + 0x18) - 1;
      do {
        uVar8 = uVar8 & uVar7;
        uVar9 = *(ulong *)(*(long *)(this + 0x10) + uVar8 * 0x10);
        if (uVar9 == uVar4) {
          *(undefined8 *)(*(long *)(this + 0x10) + uVar8 * 0x10 + 8) = 0;
          break;
        }
        uVar6 = uVar6 + 1;
        uVar8 = uVar6 + uVar8;
      } while (uVar9 != uVar5 && uVar6 < uVar7 || uVar9 != uVar5 && uVar6 == uVar7);
    }
  }
  lVar3 = 1;
  if (iVar1 != iVar2) {
    lVar3 = 2;
  }
  uVar4 = lVar3 + *(long *)(this + 0x38) & 0x8080808080808080;
  *(ulong *)(this + 0x38) =
       uVar4 - (uVar4 >> 7) | lVar3 + *(long *)(this + 0x38) & 0x7f7f7f7f7f7f7f7fU;
  *(undefined8 *)(this + 0x40) = 0;
  return 1;
}


