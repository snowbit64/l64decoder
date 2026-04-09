// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_lex_init_extra
// Entry Point: 00c21c6c
// Size: 108 bytes
// Signature: undefined __cdecl gsParser_lex_init_extra(GISLParserContext * param_1, void * * param_2)


/* gsParser_lex_init_extra(GISLParserContext*, void**) */

undefined8 gsParser_lex_init_extra(GISLParserContext *param_1,void **param_2)

{
  GISLParserContext **ppGVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 == (void **)0x0) {
    puVar2 = (undefined4 *)__errno();
    uVar3 = 0x16;
  }
  else {
    ppGVar1 = (GISLParserContext **)calloc(1,0x98);
    *param_2 = ppGVar1;
    if (ppGVar1 != (GISLParserContext **)0x0) {
      *ppGVar1 = param_1;
      return 0;
    }
    puVar2 = (undefined4 *)__errno();
    uVar3 = 0xc;
  }
  *puVar2 = uVar3;
  return 1;
}


