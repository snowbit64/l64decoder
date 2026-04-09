// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gePostProcessAntiAliasingFromString
// Entry Point: 006d21c0
// Size: 156 bytes
// Signature: undefined __cdecl gePostProcessAntiAliasingFromString(char * param_1)


/* HardwareScalability::gePostProcessAntiAliasingFromString(char const*) */

undefined4 HardwareScalability::gePostProcessAntiAliasingFromString(char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = strcasecmp(param_1,"Off");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = strcasecmp(param_1,"TAA");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strcasecmp(param_1,"TAA_MOBILE");
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = strcasecmp(param_1,"DLAA");
    if ((iVar1 == 0) || (iVar1 = strcasecmp(param_1,"Nvidia DLAA"), iVar1 == 0)) {
      return 3;
    }
  }
  return 0;
}


