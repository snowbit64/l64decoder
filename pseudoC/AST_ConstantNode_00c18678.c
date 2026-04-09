// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AST_ConstantNode
// Entry Point: 00c18678
// Size: 32 bytes
// Signature: undefined __thiscall ~AST_ConstantNode(AST_ConstantNode * this)


/* AST_ConstantNode::~AST_ConstantNode() */

void __thiscall AST_ConstantNode::~AST_ConstantNode(AST_ConstantNode *this)

{
  *(undefined ***)this = &PTR_traverse_00fed718;
  if (*(long *)(this + 0x48) != 0) {
    *(long *)(this + 0x50) = *(long *)(this + 0x48);
  }
  return;
}


