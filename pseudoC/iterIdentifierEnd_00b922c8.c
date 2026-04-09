// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iterIdentifierEnd
// Entry Point: 00b922c8
// Size: 56 bytes
// Signature: undefined __thiscall iterIdentifierEnd(Preprocessor * this, uint param_1)


/* Preprocessor::iterIdentifierEnd(unsigned int) */

uint __thiscall Preprocessor::iterIdentifierEnd(Preprocessor *this,uint param_1)

{
  uint uVar1;
  
  do {
    uVar1 = param_1;
    param_1 = identifierEnd(this,uVar1);
  } while (param_1 != uVar1);
  return uVar1;
}


