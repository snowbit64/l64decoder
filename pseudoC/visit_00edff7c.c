// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00edff7c
// Size: 128 bytes
// Signature: undefined __thiscall visit(AstExprCall * this, AstVisitor * param_1)


/* Luau::AstExprCall::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprCall::visit(AstExprCall *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  if ((uVar1 & 1) != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
    if (*(long *)(this + 0x30) != 0) {
      lVar3 = *(long *)(this + 0x30) << 3;
      puVar2 = *(undefined8 **)(this + 0x28);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}


