// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00f00d9c
// Size: 224 bytes
// Signature: undefined __thiscall visit(ShapeVisitor * this, AstStatAssign * param_1)


/* Luau::Compile::ShapeVisitor::visit(Luau::AstStatAssign*) */

undefined8 __thiscall Luau::Compile::ShapeVisitor::visit(ShapeVisitor *this,AstStatAssign *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + uVar3 * 8);
      if (lVar2 == 0 || *(int *)(lVar2 + 8) != AstRtti<Luau::AstExprIndexName>::value) {
        if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == AstRtti<Luau::AstExprIndexExpr>::value)) {
          assignField(this,*(AstExpr **)(lVar2 + 0x20),*(AstExpr **)(lVar2 + 0x28));
        }
      }
      else {
        assignField(this,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
      (**(code **)*puVar1)(puVar1,this);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(param_1 + 0x38));
  }
  return 0;
}


