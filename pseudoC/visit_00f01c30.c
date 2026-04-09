// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f01c30
// Size: 140 bytes
// Signature: undefined __thiscall visit(ValueVisitor * this, AstStatAssign * param_1)


/* Luau::Compile::ValueVisitor::visit(Luau::AstStatAssign*) */

undefined8 __thiscall Luau::Compile::ValueVisitor::visit(ValueVisitor *this,AstStatAssign *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = 0;
    do {
      assign(this,*(AstExpr **)(*(long *)(param_1 + 0x20) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x30) + uVar2 * 8);
      (**(code **)*puVar1)(puVar1,this);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x38));
  }
  return 0;
}


