// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee2098
// Size: 144 bytes
// Signature: undefined __thiscall visit(AstTypePackExplicit * this, AstVisitor * param_1)


/* Luau::AstTypePackExplicit::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstTypePackExplicit::visit(AstTypePackExplicit *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x1b8))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x28) != 0) {
      lVar3 = *(long *)(this + 0x28) << 3;
      puVar2 = *(undefined8 **)(this + 0x20);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    puVar2 = *(undefined8 **)(this + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ee2114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_1);
      return;
    }
  }
  return;
}


