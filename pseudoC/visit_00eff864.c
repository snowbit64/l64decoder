// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00eff864
// Size: 112 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStat * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStat*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStat *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == AstRtti<Luau::AstStatIf>::value) {
    lVar2 = 2;
  }
  else {
    lVar2 = 1;
    if ((iVar1 != AstRtti<Luau::AstStatBreak>::value) &&
       (iVar1 != AstRtti<Luau::AstStatContinue>::value)) {
      return 1;
    }
  }
  uVar3 = *(long *)(this + 0x38) + lVar2 & 0x8080808080808080;
  *(ulong *)(this + 0x38) =
       uVar3 - (uVar3 >> 7) | *(long *)(this + 0x38) + lVar2 & 0x7f7f7f7f7f7f7f7fU;
  *(undefined8 *)(this + 0x40) = 0;
  return 1;
}


