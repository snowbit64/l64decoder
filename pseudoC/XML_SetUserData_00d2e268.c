// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetUserData
// Entry Point: 00d2e268
// Size: 32 bytes
// Signature: undefined XML_SetUserData(void)


void XML_SetUserData(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, *param_1 = param_2, param_1[1] == lVar1)) {
    param_1[1] = param_2;
    return;
  }
  return;
}


