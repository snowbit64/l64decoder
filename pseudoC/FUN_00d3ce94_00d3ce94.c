// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ce94
// Entry Point: 00d3ce94
// Size: 68 bytes
// Signature: undefined FUN_00d3ce94(void)


bool FUN_00d3ce94(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = *param_4;
  if (cVar3 != '\0') {
    pcVar1 = param_4 + 1;
    lVar2 = (long)param_3 - (long)param_2;
    do {
      if ((lVar2 < 1) || (*param_2 != cVar3)) {
        return false;
      }
      cVar3 = *pcVar1;
      param_2 = param_2 + 1;
      pcVar1 = pcVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (cVar3 != '\0');
  }
  return param_2 == param_3;
}


