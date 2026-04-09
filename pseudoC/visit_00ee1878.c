// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1878
// Size: 116 bytes
// Signature: undefined __thiscall visit(AstStatDeclareClass * this, AstVisitor * param_1)


/* Luau::AstStatDeclareClass::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatDeclareClass::visit(AstStatDeclareClass *this,AstVisitor *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x150))(param_1,this);
  if (((uVar1 & 1) != 0) && (*(long *)(this + 0x40) != 0)) {
    lVar2 = *(long *)(this + 0x40) * 0x18;
    puVar3 = (undefined8 *)(*(long *)(this + 0x38) + 8);
    do {
      (***(code ***)(undefined8 *)*puVar3)((undefined8 *)*puVar3,param_1);
      lVar2 = lVar2 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


