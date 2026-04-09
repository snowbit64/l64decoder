// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b954e4
// Size: 84 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroPopLine::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

uint PreprocessorMetaMacroPopLine::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = Preprocessor::popInputFileAndLine();
  if ((uVar1 & 1) == 0) {
    Preprocessor::printError((Preprocessor *)(ulong)param_2,"#popline is mismatched");
  }
  else {
    lVar2 = *(long *)((Preprocessor *)(ulong)param_2 + 0x38);
    *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + -1;
  }
  return uVar1 & 1;
}


