// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c17768
// Size: 16 bytes
// Signature: undefined __thiscall traverse(AST_ConstantNode * this, AST_Traverser * param_1)


/* AST_ConstantNode::traverse(AST_Traverser*) */

void __thiscall AST_ConstantNode::traverse(AST_ConstantNode *this,AST_Traverser *param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c17770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}


