// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44240
// Entry Point: 00d44240
// Size: 76 bytes
// Signature: undefined FUN_00d44240(void)


bool FUN_00d44240(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_4;
  if (cVar2 != '\0') {
    pcVar1 = param_4 + 1;
    lVar3 = (long)param_3 - (long)param_2;
    do {
      if (((lVar3 < 2) || (*param_2 != '\0')) || (param_2[1] != cVar2)) {
        return false;
      }
      cVar2 = *pcVar1;
      param_2 = param_2 + 2;
      pcVar1 = pcVar1 + 1;
      lVar3 = lVar3 + -2;
    } while (cVar2 != '\0');
  }
  return param_2 == param_3;
}


