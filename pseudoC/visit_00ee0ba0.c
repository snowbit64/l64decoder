// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0ba0
// Size: 104 bytes
// Signature: undefined __thiscall visit(AstStatWhile * this, AstVisitor * param_1)


/* Luau::AstStatWhile::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatWhile::visit(AstStatWhile *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,this);
  if ((uVar1 & 1) != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
                    /* WARNING: Could not recover jumptable at 0x00ee0bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    return;
  }
  return;
}


