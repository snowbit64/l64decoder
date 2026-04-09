// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c176e0
// Size: 16 bytes
// Signature: undefined __thiscall traverse(AST_SymbolNode * this, AST_Traverser * param_1)


/* AST_SymbolNode::traverse(AST_Traverser*) */

void __thiscall AST_SymbolNode::traverse(AST_SymbolNode *this,AST_Traverser *param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c176e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}


