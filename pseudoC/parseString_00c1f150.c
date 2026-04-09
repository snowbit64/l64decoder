// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseString
// Entry Point: 00c1f150
// Size: 208 bytes
// Signature: undefined __cdecl parseString(char * param_1, char * param_2, GISLParserContext * param_3)


/* HlslParser::parseString(char const*, char const*, GISLParserContext&) */

bool HlslParser::parseString(char *param_1,char *param_2,GISLParserContext *param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar3 = true;
  }
  else {
    bVar3 = true;
    if (*param_1 != '\0') {
      GISLParserContext::setSourceString(param_3,param_1);
      *(char **)(param_3 + 0x98) = param_2;
      *(undefined4 *)(param_3 + 0xa0) = 1;
      gsParser_lex_init(&local_40);
      gsParser_set_extra(param_3,local_40);
      uVar2 = gsParser_parse(local_40,param_3);
      gsParser_lex_destroy(local_40);
      bVar3 = (uVar2 | (byte)param_3[0x18]) == 0 && *(int *)(param_3 + 0x1c) < 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


