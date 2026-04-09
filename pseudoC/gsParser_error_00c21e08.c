// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_error
// Entry Point: 00c21e08
// Size: 72 bytes
// Signature: undefined __cdecl gsParser_error(void * param_1, GISLParserContext * param_2, char * param_3)


/* gsParser_error(void*, GISLParserContext&, char const*) */

void gsParser_error(void *param_1,GISLParserContext *param_2,char *param_3)

{
  GISLParserContext::error
            ((GsTSourceLoc)param_2,*(char **)(param_2 + 0x98),*(char **)(param_2 + 0xa0),
             "syntax error",*(undefined8 *)((long)param_1 + 0x80),param_3,&DAT_0050a39f);
  GISLParserContext::recover();
  return;
}


