// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: constErrorCheck
// Entry Point: 00c1ac90
// Size: 72 bytes
// Signature: undefined __thiscall constErrorCheck(GISLParserContext * this, AST_TypedNode * param_1)


/* GISLParserContext::constErrorCheck(AST_TypedNode*) */

bool __thiscall GISLParserContext::constErrorCheck(GISLParserContext *this,AST_TypedNode *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 >> 1 & 1) == 0) {
    error((GsTSourceLoc)this,*(char **)(param_1 + 8),*(char **)(param_1 + 0x10),
          "constant expression required",&DAT_0050a39f,&DAT_0050a39f);
  }
  return (uVar1 & 2) == 0;
}


