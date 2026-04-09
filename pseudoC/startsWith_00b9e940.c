// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startsWith
// Entry Point: 00b9e940
// Size: 72 bytes
// Signature: undefined __cdecl startsWith(char * param_1, char * param_2)


/* StringUtil::startsWith(char const*, char const*) */

bool StringUtil::startsWith(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar2 = *param_2;
  if (*param_1 == cVar2 && cVar2 != '\0') {
    pcVar3 = param_1 + 1;
    pcVar4 = param_2 + 1;
    do {
      cVar2 = *pcVar4;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2 && cVar2 != '\0');
  }
  return cVar2 == '\0';
}


