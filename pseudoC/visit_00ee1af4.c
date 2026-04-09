// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1af4
// Size: 176 bytes
// Signature: undefined __thiscall visit(AstTypeTable * this, AstVisitor * param_1)


/* Luau::AstTypeTable::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstTypeTable::visit(AstTypeTable *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x28) != 0) {
      lVar3 = *(long *)(this + 0x28) << 5;
      puVar2 = (undefined8 *)(*(long *)(this + 0x20) + 0x18);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
    }
    if (*(undefined8 **)(this + 0x30) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)**(undefined8 **)(this + 0x30);
      (**(code **)*puVar2)(puVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00ee1b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined8 **)(*(long *)(this + 0x30) + 8))
                (*(undefined8 **)(*(long *)(this + 0x30) + 8),param_1);
      return;
    }
  }
  return;
}


