// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1024
// Size: 176 bytes
// Signature: undefined __thiscall visit(AstStatFor * this, AstVisitor * param_1)


/* Luau::AstStatFor::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatFor::visit(AstStatFor *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,this);
  if ((uVar1 & 1) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(this + 0x20) + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),param_1);
    (**(code **)**(undefined8 **)(this + 0x30))(*(undefined8 **)(this + 0x30),param_1);
    puVar2 = *(undefined8 **)(this + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00ee10c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x40))(*(undefined8 **)(this + 0x40),param_1);
    return;
  }
  return;
}


