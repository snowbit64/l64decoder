// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b9407c
// Size: 116 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroEndif::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

undefined8
PreprocessorMetaMacroEndif::processMacro
          (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint *param_8,uint *param_9)

{
  Preprocessor *this;
  uint uVar1;
  
  this = (Preprocessor *)(ulong)param_2;
  uVar1 = *(uint *)(this + 300);
  if (((param_7 != 0) && (*(int *)(this + (ulong)uVar1 * 4 + 100) == 0)) &&
     (this[0x60] != (Preprocessor)0x0)) {
    Preprocessor::printWarning(this,"extra argument to #endif ignored");
    uVar1 = *(uint *)(this + 300);
  }
  if (uVar1 == 0) {
    Preprocessor::printError(this,"#endif without #if");
    uVar1 = *(int *)(this + 300) + 1;
  }
  *(uint *)(this + 300) = uVar1 - 1;
  return 1;
}


