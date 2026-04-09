// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee07c4
// Size: 124 bytes
// Signature: undefined __thiscall visit(AstExprIfElse * this, AstVisitor * param_1)


/* Luau::AstExprIfElse::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprIfElse::visit(AstExprIfElse *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1,this);
  if ((uVar1 & 1) != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
    (**(code **)**(undefined8 **)(this + 0x30))(*(undefined8 **)(this + 0x30),param_1);
                    /* WARNING: Could not recover jumptable at 0x00ee0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x40))(*(undefined8 **)(this + 0x40),param_1);
    return;
  }
  return;
}


