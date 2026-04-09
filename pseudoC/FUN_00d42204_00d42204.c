// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d42204
// Entry Point: 00d42204
// Size: 220 bytes
// Signature: undefined FUN_00d42204(void)


long FUN_00d42204(char *param_1,long param_2,char **param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_2 - (long)param_1 < 0xc) {
    return 0xffffffff;
  }
  if ((param_1[1] == '\0') && (*param_1 == 'C')) {
    pcVar3 = param_1 + 2;
    if ((((((param_1[3] == '\0') && (*pcVar3 == 'D')) && (pcVar3 = param_1 + 4, param_1[5] == '\0'))
         && ((*pcVar3 == 'A' && (pcVar3 = param_1 + 6, param_1[7] == '\0')))) &&
        ((*pcVar3 == 'T' && ((pcVar3 = param_1 + 8, param_1[9] == '\0' && (*pcVar3 == 'A')))))) &&
       (pcVar3 = param_1 + 10, param_1[0xb] == '\0')) {
      cVar2 = *pcVar3;
      pcVar1 = param_1 + 0xc;
      if (cVar2 != '[') {
        pcVar1 = pcVar3;
      }
      *param_3 = pcVar1;
      return (ulong)(cVar2 == '[') << 3;
    }
    *param_3 = pcVar3;
    return 0;
  }
  *param_3 = param_1;
  return 0;
}


