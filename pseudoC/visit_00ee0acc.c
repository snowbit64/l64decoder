// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0acc
// Size: 128 bytes
// Signature: undefined __thiscall visit(AstStatIf * this, AstVisitor * param_1)


/* Luau::AstStatIf::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatIf::visit(AstStatIf *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 200))(param_1,this);
  if ((uVar1 & 1) != 0) {
    (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),param_1);
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    puVar2 = *(undefined8 **)(this + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ee0b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_1);
      return;
    }
  }
  return;
}


