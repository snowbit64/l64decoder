// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_gains_ID
// Entry Point: 00e68058
// Size: 48 bytes
// Signature: undefined silk_gains_ID(void)


int silk_gains_ID(char *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = (int)*param_1 + iVar1 * 0x100;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}


