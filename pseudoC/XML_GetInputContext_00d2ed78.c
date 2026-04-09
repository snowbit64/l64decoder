// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetInputContext
// Entry Point: 00d2ed78
// Size: 64 bytes
// Signature: undefined XML_GetInputContext(void)


long XML_GetInputContext(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x220) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)*(long *)(param_1 + 0x220) - (int)lVar1;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = *(int *)(param_1 + 0x38) - (int)lVar1;
      }
    }
  }
  return lVar1;
}


