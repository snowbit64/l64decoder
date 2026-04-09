// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: samplerErrorCheck
// Entry Point: 00c1b314
// Size: 160 bytes
// Signature: undefined __thiscall samplerErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_Type * param_2, char * param_3)


/* GISLParserContext::samplerErrorCheck(GsTSourceLoc const&, SHC_Type const&, char const*) */

uint __thiscall
GISLParserContext::samplerErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_Type *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = GISLParserUtil::containsSamplerOrTexture(param_2);
  if ((uVar3 & 1) != 0) {
    uVar2 = (*(int **)(param_2 + 8))[2];
    if (uVar2 < 10) {
      pcVar4 = (&PTR_DAT_00fed9f0)[(int)uVar2];
    }
    else {
      pcVar4 = "unknown type";
    }
    pcVar1 = "(structure contains a sampler or texture)";
    if (**(int **)(param_2 + 8) != 3) {
      pcVar1 = "";
    }
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),param_3,pcVar4,pcVar1);
  }
  return uVar3 & 1;
}


