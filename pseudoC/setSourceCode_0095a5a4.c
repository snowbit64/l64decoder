// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSourceCode
// Entry Point: 0095a5a4
// Size: 56 bytes
// Signature: undefined __thiscall setSourceCode(MaterialShader * this, char * param_1)


/* MaterialShader::setSourceCode(char const*) */

void __thiscall MaterialShader::setSourceCode(MaterialShader *this,char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)operator_new__(sVar1 + 1);
  *(char **)(this + 0xa0) = __dest;
  strcpy(__dest,param_1);
  return;
}


