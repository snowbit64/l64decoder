// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reservedWord
// Entry Point: 00c1e364
// Size: 68 bytes
// Signature: undefined __thiscall reservedWord(GISLParserContext * this, char * param_1)


/* GISLParserContext::reservedWord(char const*) */

void __thiscall GISLParserContext::reservedWord(GISLParserContext *this,char *param_1)

{
  error((GsTSourceLoc)this,*(char **)(this + 0x98),*(char **)(this + 0xa0),"Reserved word.",param_1,
        &DAT_0050a39f,&DAT_0050a39f);
  this[0x18] = (GISLParserContext)0x1;
  return;
}


