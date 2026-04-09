// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parameterSamplerErrorCheck
// Entry Point: 00c1b3b4
// Size: 124 bytes
// Signature: undefined __thiscall parameterSamplerErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, uint param_2, SHC_Type * param_3)


/* GISLParserContext::parameterSamplerErrorCheck(GsTSourceLoc const&, unsigned int, SHC_Type const&)
    */

undefined8 __thiscall
GISLParserContext::parameterSamplerErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,uint param_2,SHC_Type *param_3)

{
  uint uVar1;
  char *pcVar2;
  
  if (((param_2 >> 0xb & 1) != 0) && (**(int **)(param_3 + 8) - 7U < 2)) {
    uVar1 = (*(int **)(param_3 + 8))[2];
    if (uVar1 < 10) {
      pcVar2 = (&PTR_DAT_00fed9f0)[(int)uVar1];
    }
    else {
      pcVar2 = "unknown type";
    }
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "textures and samplers cannot be output parameters",pcVar2,&DAT_0050a39f);
    return 1;
  }
  return 0;
}


