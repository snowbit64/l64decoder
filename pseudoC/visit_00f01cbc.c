// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f01cbc
// Size: 64 bytes
// Signature: undefined __thiscall visit(ValueVisitor * this, AstStatCompoundAssign * param_1)


/* Luau::Compile::ValueVisitor::visit(Luau::AstStatCompoundAssign*) */

undefined8 __thiscall
Luau::Compile::ValueVisitor::visit(ValueVisitor *this,AstStatCompoundAssign *param_1)

{
  assign(this,*(AstExpr **)(param_1 + 0x28));
  (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30),this);
  return 0;
}


