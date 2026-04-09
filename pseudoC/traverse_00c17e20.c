// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c17e20
// Size: 148 bytes
// Signature: undefined __thiscall traverse(AST_Branch * this, AST_Traverser * param_1)


/* AST_Branch::traverse(AST_Traverser*) */

void __thiscall AST_Branch::traverse(AST_Branch *this,AST_Traverser *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  
  if (((param_1[0x4c] == (AST_Traverser)0x0) || (*(code **)(param_1 + 0x40) == (code *)0x0)) ||
     (uVar1 = (**(code **)(param_1 + 0x40))(1,this,param_1), (uVar1 & 1) != 0)) {
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      ppcVar3 = (code **)*puVar2;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      (**ppcVar3)(puVar2,param_1);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    }
    if ((param_1[0x4d] != (AST_Traverser)0x0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
      (**(code **)(param_1 + 0x40))(0,this,param_1);
    }
  }
  return;
}


