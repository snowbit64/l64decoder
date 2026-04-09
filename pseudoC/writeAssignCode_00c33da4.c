// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeAssignCode
// Entry Point: 00c33da4
// Size: 200 bytes
// Signature: undefined __cdecl writeAssignCode(char * param_1, char * param_2, IR_Type * param_3, CodeStringStream * param_4)


/* IR_HllConvertUtil::writeAssignCode(char const*, char const*, IR_Type*, CodeStringStream&) */

void IR_HllConvertUtil::writeAssignCode
               (char *param_1,char *param_2,IR_Type *param_3,CodeStringStream *param_4)

{
  char *pcVar1;
  uint uVar2;
  
  if (*(int *)param_3 == 4) {
    uVar2 = 0;
    while (pcVar1 = strchr(param_2,10), pcVar1 != (char *)0x0) {
      CodeStringStream::writeLine
                ((char *)param_4,"%s[%u] = %.*s;\n",param_1,(ulong)uVar2,
                 (ulong)(uint)((int)pcVar1 - (int)param_2),param_2);
      param_2 = pcVar1 + 1;
      uVar2 = uVar2 + 1;
    }
    CodeStringStream::writeLine((char *)param_4,"%s[%u] = %s;\n",param_1,(ulong)uVar2,param_2);
    return;
  }
  CodeStringStream::writeLine((char *)param_4,"%s = %s;\n",param_1,param_2);
  return;
}


