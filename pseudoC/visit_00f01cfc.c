// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f01cfc
// Size: 64 bytes
// Signature: undefined __thiscall visit(ValueVisitor * this, AstStatFunction * param_1)


/* Luau::Compile::ValueVisitor::visit(Luau::AstStatFunction*) */

undefined8 __thiscall
Luau::Compile::ValueVisitor::visit(ValueVisitor *this,AstStatFunction *param_1)

{
  assign(this,*(AstExpr **)(param_1 + 0x20));
  (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28),this);
  return 0;
}


