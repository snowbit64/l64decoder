// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0204
// Size: 260 bytes
// Signature: undefined __thiscall visit(AstExprFunction * this, AstVisitor * param_1)


/* Luau::AstExprFunction::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstExprFunction::visit(AstExprFunction *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x78))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x50) != 0) {
      plVar3 = *(long **)(this + 0x48);
      lVar4 = *(long *)(this + 0x50) << 3;
      do {
        puVar2 = *(undefined8 **)(*plVar3 + 0x30);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,param_1);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    puVar2 = *(undefined8 **)(this + 0x90);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    if (this[0x70] != (AstExprFunction)0x0) {
      if (*(long *)(this + 0x60) != 0) {
        lVar4 = *(long *)(this + 0x60) << 3;
        puVar2 = *(undefined8 **)(this + 0x58);
        do {
          (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
          lVar4 = lVar4 + -8;
          puVar2 = puVar2 + 1;
        } while (lVar4 != 0);
      }
      puVar2 = *(undefined8 **)(this + 0x68);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00ee0304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x98))(*(undefined8 **)(this + 0x98),param_1);
    return;
  }
  return;
}


