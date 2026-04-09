// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00eff820
// Size: 68 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstExpr * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstExpr*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstExpr *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = model(this,param_1);
  uVar2 = lVar1 + *(long *)(this + 0x38) & 0x8080808080808080;
  *(ulong *)(this + 0x38) =
       uVar2 - (uVar2 >> 7) | lVar1 + *(long *)(this + 0x38) & 0x7f7f7f7f7f7f7f7fU;
  *(undefined8 *)(this + 0x40) = 0;
  return 0;
}


