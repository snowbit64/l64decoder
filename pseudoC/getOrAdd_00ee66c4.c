// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrAdd
// Entry Point: 00ee66c4
// Size: 52 bytes
// Signature: undefined __thiscall getOrAdd(AstNameTable * this, char * param_1)


/* Luau::AstNameTable::getOrAdd(char const*) */

void __thiscall Luau::AstNameTable::getOrAdd(AstNameTable *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  getOrAddWithType(this,param_1,sVar1);
  return;
}


