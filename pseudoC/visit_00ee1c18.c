// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1c18
// Size: 212 bytes
// Signature: undefined __thiscall visit(AstTypeFunction * this, AstVisitor * param_1)


/* Luau::AstTypeFunction::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstTypeFunction::visit(AstTypeFunction *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) << 3;
      puVar2 = *(undefined8 **)(this + 0x40);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    puVar2 = *(undefined8 **)(this + 0x50);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    if (*(long *)(this + 0x70) != 0) {
      lVar3 = *(long *)(this + 0x70) << 3;
      puVar2 = *(undefined8 **)(this + 0x68);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    puVar2 = *(undefined8 **)(this + 0x78);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ee1cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_1);
      return;
    }
  }
  return;
}


