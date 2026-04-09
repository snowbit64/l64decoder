// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee167c
// Size: 84 bytes
// Signature: undefined __thiscall visit(AstStatDeclareGlobal * this, AstVisitor * param_1)


/* Luau::AstStatDeclareGlobal::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatDeclareGlobal::visit(AstStatDeclareGlobal *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x148))(param_1,this);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ee16c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    return;
  }
  return;
}


