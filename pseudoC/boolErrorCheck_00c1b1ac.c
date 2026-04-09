// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boolErrorCheck
// Entry Point: 00c1b1ac
// Size: 128 bytes
// Signature: undefined __thiscall boolErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, AST_TypedNode * param_2)


/* GISLParserContext::boolErrorCheck(GsTSourceLoc const&, AST_TypedNode const*) */

undefined8 __thiscall
GISLParserContext::boolErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,AST_TypedNode *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint **)(param_2 + 0x20))[2];
  uVar2 = **(uint **)(param_2 + 0x20);
  if (((uVar1 == 9) ||
      (uVar1 = uVar1 - 3, (int)uVar2 < 3 && uVar1 < 5 || (int)uVar2 < 3 && uVar1 == 5)) &&
     (4 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x16U) == 0)) {
    return 0;
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),"boolean expression expected",
        &DAT_0050a39f,&DAT_0050a39f);
  return 1;
}


