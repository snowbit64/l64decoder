// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee034c
// Size: 148 bytes
// Signature: undefined __thiscall visit(AstExprTable * this, AstVisitor * param_1)


/* Luau::AstExprTable::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprTable::visit(AstExprTable *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x80))(param_1,this);
  if (((uVar1 & 1) != 0) && (*(long *)(this + 0x28) != 0)) {
    lVar3 = *(long *)(this + 0x28) * 0x18;
    puVar4 = (undefined8 *)(*(long *)(this + 0x20) + 0x10);
    do {
      puVar2 = (undefined8 *)puVar4[-1];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_1);
      }
      (***(code ***)(undefined8 *)*puVar4)((undefined8 *)*puVar4,param_1);
      lVar3 = lVar3 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar3 != 0);
  }
  return;
}


