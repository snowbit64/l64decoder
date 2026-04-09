// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processMacro
// Entry Point: 00b940f0
// Size: 128 bytes
// Signature: undefined __cdecl processMacro(Preprocessor * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint * param_8, uint * param_9)


/* PreprocessorMetaMacroElse::processMacro(Preprocessor*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */

undefined8
PreprocessorMetaMacroElse::processMacro
          (Preprocessor *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  Preprocessor *this;
  uint uVar2;
  
  this = (Preprocessor *)(ulong)param_2;
  uVar2 = *(uint *)(this + 300);
  if (((param_7 != 0) && (*(int *)(this + (ulong)uVar2 * 4 + 100) == 0)) &&
     (this[0x60] != (Preprocessor)0x0)) {
    Preprocessor::printWarning(this,"extra argument to #else ignored");
    uVar2 = *(uint *)(this + 300);
  }
  if ((uVar2 != 0) && (*(int *)(this + (ulong)(uVar2 - 1) * 4 + 100) == 0)) {
    uVar1 = *(uint *)(this + (ulong)uVar2 * 4 + 100);
    if (uVar1 != 2) {
      *(uint *)(this + (ulong)uVar2 * 4 + 100) = (uint)(uVar1 == 0);
    }
  }
  return 1;
}


