// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3e4b8
// Entry Point: 00d3e4b8
// Size: 168 bytes
// Signature: undefined FUN_00d3e4b8(void)


long FUN_00d3e4b8(char *param_1,long param_2,char **param_3)

{
  bool bVar1;
  char *pcVar2;
  
  if (param_2 - (long)param_1 < 6) {
    return 0xffffffff;
  }
  if (*param_1 == 'C') {
    pcVar2 = param_1 + 1;
    if ((((*pcVar2 == 'D') && (pcVar2 = param_1 + 2, *pcVar2 == 'A')) &&
        (pcVar2 = param_1 + 3, *pcVar2 == 'T')) && (pcVar2 = param_1 + 4, *pcVar2 == 'A')) {
      bVar1 = param_1[5] == '[';
      pcVar2 = param_1 + 6;
      if (!bVar1) {
        pcVar2 = param_1 + 5;
      }
      *param_3 = pcVar2;
      return (ulong)bVar1 << 3;
    }
    *param_3 = pcVar2;
    return 0;
  }
  *param_3 = param_1;
  return 0;
}


