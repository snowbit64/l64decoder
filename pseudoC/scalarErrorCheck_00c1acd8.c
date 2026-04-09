// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scalarErrorCheck
// Entry Point: 00c1acd8
// Size: 76 bytes
// Signature: undefined __thiscall scalarErrorCheck(GISLParserContext * this, AST_TypedNode * param_1, char * param_2)


/* GISLParserContext::scalarErrorCheck(AST_TypedNode*, char const*) */

bool __thiscall
GISLParserContext::scalarErrorCheck(GISLParserContext *this,AST_TypedNode *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x20);
  if (iVar1 != 0) {
    error((GsTSourceLoc)this,*(char **)(param_1 + 8),*(char **)(param_1 + 0x10),
          "scalar expression required",param_2,&DAT_0050a39f);
  }
  return iVar1 != 0;
}


