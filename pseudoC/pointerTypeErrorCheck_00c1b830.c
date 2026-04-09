// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointerTypeErrorCheck
// Entry Point: 00c1b830
// Size: 108 bytes
// Signature: undefined __thiscall pointerTypeErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2)


/* GISLParserContext::pointerTypeErrorCheck(GsTSourceLoc const&, SHC_Type const&) */

undefined4 __thiscall
GISLParserContext::pointerTypeErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = **(int **)(param_2 + 8);
  uVar3 = 0;
  if (iVar1 != 3) {
    if (iVar1 == 6) {
      pcVar2 = "pointers to pointers are not supported";
    }
    else {
      if (iVar1 == 7) {
        return 0;
      }
      pcVar2 = "only pointers to struct/texture are supported";
    }
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),pcVar2,&DAT_004de324,
          &DAT_0050a39f);
    uVar3 = 1;
  }
  return uVar3;
}


