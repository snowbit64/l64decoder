// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSGSRQualityFromString
// Entry Point: 006d225c
// Size: 164 bytes
// Signature: undefined __cdecl getSGSRQualityFromString(char * param_1)


/* HardwareScalability::getSGSRQualityFromString(char const*) */

undefined4 HardwareScalability::getSGSRQualityFromString(char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = strcasecmp(param_1,"Off");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = strcasecmp(param_1,"Performance");
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = strcasecmp(param_1,"Balanced");
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = strcasecmp(param_1,"Quality");
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = strcasecmp(param_1,"Ultra Quality");
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


