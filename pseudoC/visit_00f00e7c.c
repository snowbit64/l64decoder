// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00e7c
// Size: 140 bytes
// Signature: undefined __thiscall visit(ShapeVisitor * this, AstStatFunction * param_1)


/* Luau::Compile::ShapeVisitor::visit(Luau::AstStatFunction*) */

undefined8 __thiscall
Luau::Compile::ShapeVisitor::visit(ShapeVisitor *this,AstStatFunction *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 8) != AstRtti<Luau::AstExprIndexName>::value)) {
    if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == AstRtti<Luau::AstExprIndexExpr>::value)) {
      assignField(this,*(AstExpr **)(lVar1 + 0x20),*(AstExpr **)(lVar1 + 0x28));
    }
  }
  else {
    assignField(this,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  }
  (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28),this);
  return 0;
}


