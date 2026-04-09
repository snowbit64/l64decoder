// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPerformanceClassFromStr
// Entry Point: 00756644
// Size: 120 bytes
// Signature: undefined __cdecl getPerformanceClassFromStr(char * param_1)


/* HardwareScalability::getPerformanceClassFromStr(char const*) */

int HardwareScalability::getPerformanceClassFromStr(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcasecmp(param_1,s_performanceClassNames);
  if (iVar1 != 0) {
    iVar1 = strcasecmp(param_1,PTR_s_Medium_0103ee28);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,PTR_DAT_0103ee30);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar2 = strcasecmp(param_1,PTR_s_Very_High_0103ee38);
        iVar1 = 3;
        if (iVar2 != 0) {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}


