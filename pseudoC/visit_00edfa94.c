// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00edfa94
// Size: 88 bytes
// Signature: undefined __thiscall visit(ReturnVisitor * this, AstStatReturn * param_1)


/* Luau::Compiler::ReturnVisitor::visit(Luau::AstStatReturn*) */

undefined8 __thiscall
Luau::Compiler::ReturnVisitor::visit(ReturnVisitor *this,AstStatReturn *param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x28) == 1) {
    bVar1 = isExprMultRet(*(Compiler **)(this + 8),**(AstExpr ***)(param_1 + 0x20));
    bVar1 = ~bVar1 & 1;
  }
  else {
    bVar1 = 0;
  }
  this[0x10] = (ReturnVisitor)((byte)this[0x10] & bVar1);
  return 0;
}


