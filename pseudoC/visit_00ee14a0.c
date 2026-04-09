// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee14a0
// Size: 84 bytes
// Signature: undefined __thiscall visit(AstStatLocalFunction * this, AstVisitor * param_1)


/* Luau::AstStatLocalFunction::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatLocalFunction::visit(AstStatLocalFunction *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x130))(param_1,this);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ee14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    return;
  }
  return;
}


