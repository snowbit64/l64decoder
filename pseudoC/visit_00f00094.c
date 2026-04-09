// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00094
// Size: 172 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatAssign * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatAssign*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatAssign *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar1 = AstRtti<Luau::AstExprLocal>::value;
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(this + 0x28);
    uVar3 = 0;
    lVar6 = *(long *)(param_1 + 0x20);
    do {
      lVar7 = *(long *)(lVar6 + uVar3 * 8);
      if (((lVar7 != 0 && *(int *)(lVar7 + 8) == iVar1) && *(long *)(this + 0x20) != 0) &&
         (uVar8 = *(ulong *)(lVar7 + 0x20), uVar8 != uVar4)) {
        uVar9 = 0;
        uVar11 = uVar8 >> 4 ^ uVar8 >> 9;
        uVar10 = *(long *)(this + 0x18) - 1;
        do {
          uVar11 = uVar11 & uVar10;
          uVar2 = *(ulong *)(*(long *)(this + 0x10) + uVar11 * 0x10);
          if (uVar2 == uVar8) {
            *(undefined8 *)(*(long *)(this + 0x10) + uVar11 * 0x10 + 8) = 0;
            uVar5 = *(ulong *)(param_1 + 0x28);
            break;
          }
          uVar9 = uVar9 + 1;
          uVar11 = uVar9 + uVar11;
        } while (uVar2 != uVar4 && uVar9 < uVar10 || uVar2 != uVar4 && uVar9 == uVar10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return 1;
}


