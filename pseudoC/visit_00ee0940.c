// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0940
// Size: 108 bytes
// Signature: undefined __thiscall visit(AstExprError * this, AstVisitor * param_1)


/* Luau::AstExprError::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprError::visit(AstExprError *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,this);
  if (((uVar1 & 1) != 0) && (*(long *)(this + 0x28) != 0)) {
    lVar3 = *(long *)(this + 0x28) << 3;
    puVar2 = *(undefined8 **)(this + 0x20);
    do {
      (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  return;
}


