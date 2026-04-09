// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee0f14
// Size: 172 bytes
// Signature: undefined __thiscall visit(AstStatLocal * this, AstVisitor * param_1)


/* Luau::AstStatLocal::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatLocal::visit(AstStatLocal *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x28) != 0) {
      plVar3 = *(long **)(this + 0x20);
      lVar4 = *(long *)(this + 0x28) << 3;
      do {
        puVar2 = *(undefined8 **)(*plVar3 + 0x30);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,param_1);
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (*(long *)(this + 0x38) != 0) {
      lVar4 = *(long *)(this + 0x38) << 3;
      puVar2 = *(undefined8 **)(this + 0x30);
      do {
        (***(code ***)(undefined8 *)*puVar2)((undefined8 *)*puVar2,param_1);
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}


