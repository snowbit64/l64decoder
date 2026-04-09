// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee1a28
// Size: 132 bytes
// Signature: undefined __thiscall visit(AstTypeReference * this, AstVisitor * param_1)


/* Luau::AstTypeReference::visit(Luau::AstVisitor*) */

void __thiscall Luau::AstTypeReference::visit(AstTypeReference *this,AstVisitor *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x168))(param_1,this);
  if (((uVar1 & 1) != 0) && (*(long *)(this + 0x40) != 0)) {
    lVar4 = *(long *)(this + 0x40) << 4;
    plVar3 = (long *)(*(long *)(this + 0x38) + 8);
    do {
      puVar2 = (undefined8 *)plVar3[-1];
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*plVar3;
      }
      (**(code **)*puVar2)(puVar2,param_1);
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}


