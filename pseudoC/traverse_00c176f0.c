// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c176f0
// Size: 120 bytes
// Signature: undefined __thiscall traverse(AST_DeclarationNode * this, AST_Traverser * param_1)


/* AST_DeclarationNode::traverse(AST_Traverser*) */

void __thiscall AST_DeclarationNode::traverse(AST_DeclarationNode *this,AST_Traverser *param_1)

{
  ulong uVar1;
  
  if ((((param_1[0x4c] == (AST_Traverser)0x0) || (*(code **)param_1 == (code *)0x0)) ||
      (uVar1 = (**(code **)param_1)(1,this,param_1), (uVar1 & 1) != 0)) &&
     (((**(code **)**(undefined8 **)(this + 0x48))(*(undefined8 **)(this + 0x48),param_1),
      param_1[0x4d] != (AST_Traverser)0x0 && (*(code **)param_1 != (code *)0x0)))) {
    (**(code **)param_1)(0,this,param_1);
  }
  return;
}


