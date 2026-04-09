// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: voidErrorCheck
// Entry Point: 00c1b144
// Size: 104 bytes
// Signature: undefined __thiscall voidErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_String * param_2, SHC_Type * param_3)


/* GISLParserContext::voidErrorCheck(GsTSourceLoc const&, SHC_String const&, SHC_Type const&) */

bool __thiscall
GISLParserContext::voidErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_String *param_2,SHC_Type *param_3)

{
  uint uVar1;
  SHC_String *pSVar2;
  
  uVar1 = **(uint **)(param_3 + 8) | (*(uint **)(param_3 + 8))[2];
  if (uVar1 == 0) {
    pSVar2 = *(SHC_String **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pSVar2 = param_2 + 1;
    }
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "illegal use of type \'void\'",pSVar2,&DAT_0050a39f);
  }
  return uVar1 == 0;
}


