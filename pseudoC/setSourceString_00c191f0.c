// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSourceString
// Entry Point: 00c191f0
// Size: 44 bytes
// Signature: undefined __thiscall setSourceString(GISLParserContext * this, char * param_1)


/* GISLParserContext::setSourceString(char const*) */

void __thiscall GISLParserContext::setSourceString(GISLParserContext *this,char *param_1)

{
  size_t sVar1;
  
  *(char **)(this + 0x40) = param_1;
  sVar1 = strlen(param_1);
  *(size_t *)(this + 0x48) = sVar1;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


