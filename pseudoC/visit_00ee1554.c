// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1554
// Size: 224 bytes
// Signature: undefined __thiscall visit(AstStatTypeAlias * this, AstVisitor * param_1)


/* Luau::AstStatTypeAlias::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstStatTypeAlias::visit(AstStatTypeAlias *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x138))(param_1,this);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(this + 0x30) != 0) {
      lVar3 = *(long *)(this + 0x30) << 5;
      plVar4 = (long *)(*(long *)(this + 0x28) + 0x18);
      do {
        puVar2 = (undefined8 *)*plVar4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,param_1);
        }
        lVar3 = lVar3 + -0x20;
        plVar4 = plVar4 + 4;
      } while (lVar3 != 0);
    }
    if (*(long *)(this + 0x40) != 0) {
      lVar3 = *(long *)(this + 0x40) << 5;
      plVar4 = (long *)(*(long *)(this + 0x38) + 0x18);
      do {
        puVar2 = (undefined8 *)*plVar4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,param_1);
        }
        lVar3 = lVar3 + -0x20;
        plVar4 = plVar4 + 4;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00ee1630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x48))(*(undefined8 **)(this + 0x48),param_1);
    return;
  }
  return;
}


