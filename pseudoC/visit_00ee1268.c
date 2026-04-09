// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1268
// Size: 152 bytes
// Signature: undefined __thiscall visit(AstStatAssign * this, AstVisitor * param_1)


/* Luau::AstStatAssign::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatAssign::visit(AstStatAssign *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x118))(param_1,this);
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
    if (*(long *)(this + 0x38) != 0) {
      lVar3 = *(long *)(this + 0x38) << 3;
      puVar2 = *(undefined8 **)(this + 0x30);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}


