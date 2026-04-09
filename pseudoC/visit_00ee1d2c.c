// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1d2c
// Size: 84 bytes
// Signature: undefined __thiscall visit(AstTypeTypeof * this, AstVisitor * param_1)


/* Luau::AstTypeTypeof::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstTypeTypeof::visit(AstTypeTypeof *this,AstVisitor *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1,this);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ee1d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
    return;
  }
  return;
}


