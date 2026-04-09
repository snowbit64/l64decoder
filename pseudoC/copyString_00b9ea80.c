// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyString
// Entry Point: 00b9ea80
// Size: 32 bytes
// Signature: undefined __cdecl copyString(char * param_1, char * param_2)


/* StringUtil::copyString(char*, char const*) */

void StringUtil::copyString(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    pcVar1 = param_1;
    pcVar3 = param_2 + 1;
    do {
      param_1 = pcVar1 + 1;
      *pcVar1 = cVar2;
      cVar2 = *pcVar3;
      pcVar1 = param_1;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  *param_1 = '\0';
  return;
}


