// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d45cc8
// Entry Point: 00d45cc8
// Size: 220 bytes
// Signature: undefined FUN_00d45cc8(void)


long FUN_00d45cc8(char *param_1,long param_2,char **param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_2 - (long)param_1 < 0xc) {
    return 0xffffffff;
  }
  if ((*param_1 == '\0') && (param_1[1] == 'C')) {
    pcVar3 = param_1 + 2;
    if ((((((*pcVar3 == '\0') && (param_1[3] == 'D')) && (pcVar3 = param_1 + 4, *pcVar3 == '\0')) &&
         ((param_1[5] == 'A' && (pcVar3 = param_1 + 6, *pcVar3 == '\0')))) &&
        ((param_1[7] == 'T' && ((pcVar3 = param_1 + 8, *pcVar3 == '\0' && (param_1[9] == 'A'))))))
       && (pcVar3 = param_1 + 10, *pcVar3 == '\0')) {
      cVar2 = param_1[0xb];
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


