// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c17824
// Size: 144 bytes
// Signature: undefined __thiscall traverse(AST_UnaryNode * this, AST_Traverser * param_1)


/* AST_UnaryNode::traverse(AST_Traverser*) */

void __thiscall AST_UnaryNode::traverse(AST_UnaryNode *this,AST_Traverser *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  
  if (((param_1[0x4c] == (AST_Traverser)0x0) || (*(code **)(param_1 + 0x20) == (code *)0x0)) ||
     (uVar1 = (**(code **)(param_1 + 0x20))(1,this,param_1), (uVar1 & 1) != 0)) {
    puVar2 = *(undefined8 **)(this + 0x50);
    ppcVar3 = (code **)*puVar2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    (**ppcVar3)(puVar2,param_1);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    if ((param_1[0x4d] != (AST_Traverser)0x0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
      (**(code **)(param_1 + 0x20))(0,this,param_1);
    }
  }
  return;
}


