// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee070c
// Size: 104 bytes
// Signature: undefined __thiscall visit(AstExprTypeAssertion * this, AstVisitor * param_1)


/* Luau::AstExprTypeAssertion::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprTypeAssertion::visit(AstExprTypeAssertion *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x98))(param_1,this);
  if ((uVar1 & 1) != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
                    /* WARNING: Could not recover jumptable at 0x00ee0764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    return;
  }
  return;
}


