// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c178b4
// Size: 176 bytes
// Signature: undefined __thiscall traverse(AST_AggregateNode * this, AST_Traverser * param_1)


/* AST_AggregateNode::traverse(AST_Traverser*) */

void __thiscall AST_AggregateNode::traverse(AST_AggregateNode *this,AST_Traverser *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((param_1[0x4c] == (AST_Traverser)0x0) || (*(code **)(param_1 + 0x30) == (code *)0x0)) ||
     (uVar1 = (**(code **)(param_1 + 0x30))(1,this,param_1), (uVar1 & 1) != 0)) {
    puVar3 = *(undefined8 **)(this + 0x50);
    puVar4 = *(undefined8 **)(this + 0x58);
    iVar2 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar2;
    if (puVar3 != puVar4) {
      do {
        puVar4 = puVar3 + 1;
        (***(code ***)(undefined8 *)*puVar3)((undefined8 *)*puVar3,param_1);
        puVar3 = puVar4;
      } while (puVar4 != *(undefined8 **)(this + 0x58));
      iVar2 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar2 + -1;
    if ((param_1[0x4d] != (AST_Traverser)0x0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
      (**(code **)(param_1 + 0x30))(0,this,param_1);
    }
  }
  return;
}


