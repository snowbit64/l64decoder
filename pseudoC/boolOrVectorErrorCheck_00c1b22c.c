// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boolOrVectorErrorCheck
// Entry Point: 00c1b22c
// Size: 112 bytes
// Signature: undefined __thiscall boolOrVectorErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, AST_TypedNode * param_2)


/* GISLParserContext::boolOrVectorErrorCheck(GsTSourceLoc const&, AST_TypedNode const*) */

undefined8 __thiscall
GISLParserContext::boolOrVectorErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,AST_TypedNode *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(int **)(param_2 + 0x20))[2];
  iVar2 = **(int **)(param_2 + 0x20);
  if (((iVar1 == 9) || (uVar3 = iVar1 - 3, iVar2 < 3 && uVar3 < 5 || iVar2 < 3 && uVar3 == 5)) &&
     (iVar2 != 4 && iVar2 != 2)) {
    return 0;
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
        "boolean or vector expression expected",&DAT_0050a39f,&DAT_0050a39f);
  return 1;
}


