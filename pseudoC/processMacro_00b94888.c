// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b94888
// Size: 172 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroIf::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

undefined8
PreprocessorMetaMacroIf::processMacro
          (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  Preprocessor *this;
  uint uVar2;
  
  this = (Preprocessor *)(ulong)param_2;
  uVar2 = *(int *)(this + 300) + 1;
  *(uint *)(this + 300) = uVar2;
  if (uVar2 == 0x32) {
    Preprocessor::printError(this,"too many nested #ifs");
    uVar2 = *(int *)(this + 300) - 1;
    *(uint *)(this + 300) = uVar2;
  }
  iVar1 = *(int *)(this + (ulong)(uVar2 - 1) * 4 + 100);
  *(int *)(this + (ulong)uVar2 * 4 + 100) = iVar1;
  if (iVar1 == 0) {
    if (param_7 != 2) {
      param_6 = param_4;
    }
    iVar1 = Preprocessor::arithmeticEval(this,param_3,param_6);
    *(uint *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) = (uint)(iVar1 < 1);
  }
  return 1;
}


