// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b94938
// Size: 156 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroElif::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

bool PreprocessorMetaMacroElif::processMacro
               (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  int iVar2;
  Preprocessor *this;
  int *piVar3;
  
  this = (Preprocessor *)(ulong)param_2;
  uVar1 = *(uint *)(this + 300);
  if (uVar1 == 0) {
    Preprocessor::printError(this,"#elif without #if");
  }
  else if (*(int *)(this + (ulong)(uVar1 - 1) * 4 + 100) == 0) {
    piVar3 = (int *)(this + (ulong)uVar1 * 4 + 100);
    if (*piVar3 == 1) {
      if (param_7 != 2) {
        param_6 = param_4;
      }
      *piVar3 = 0;
      iVar2 = Preprocessor::arithmeticEval(this,param_3,param_6);
      *(uint *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) = (uint)(iVar2 < 1);
    }
    else {
      *piVar3 = 2;
    }
  }
  return uVar1 != 0;
}


