// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: boolErrorCheck
// Entry Point: 00c1b29c
// Size: 120 bytes
// Signature: undefined __thiscall boolErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2)


/* GISLParserContext::boolErrorCheck(GsTSourceLoc const&, SHC_Type const&) */

undefined8 __thiscall
GISLParserContext::boolErrorCheck(GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 8);
  if (((piVar2[2] - 3U < 7) && (iVar1 = *piVar2, iVar1 != 4 && iVar1 != 2)) &&
     ((iVar1 != 1 || ((uint)piVar2[5] < 2)))) {
    return 0;
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),"boolean expression expected",
        &DAT_0050a39f,&DAT_0050a39f);
  return 1;
}


