// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0e60
// Size: 84 bytes
// Signature: undefined __thiscall visit(AstStatExpr * this, AstVisitor * param_1)


/* Luau::AstStatExpr::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatExpr::visit(AstStatExpr *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,this);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ee0ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
    return;
  }
  return;
}


