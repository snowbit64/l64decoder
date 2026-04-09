// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsLineStart
// Entry Point: 00b8f7a4
// Size: 64 bytes
// Signature: undefined __thiscall getIsLineStart(Preprocessor * this, uint param_1)


/* Preprocessor::getIsLineStart(unsigned int) */

bool __thiscall Preprocessor::getIsLineStart(Preprocessor *this,uint param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = getChar(this,param_1 - 1);
    return cVar1 == '\n';
  }
  return *(char *)(*(long *)(this + 0x38) + 0x1c) != '\0';
}


