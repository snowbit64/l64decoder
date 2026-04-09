// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_safecat
// Entry Point: 00dae770
// Size: 76 bytes
// Signature: undefined png_safecat(void)


ulong png_safecat(long param_1,ulong param_2,ulong param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != 0) && (param_3 < param_2)) {
    if ((param_4 != (char *)0x0) && ((cVar1 = *param_4, cVar1 != '\0' && (param_3 < param_2 - 1))))
    {
      pcVar2 = param_4 + 1;
      do {
        *(char *)(param_1 + param_3) = cVar1;
        param_3 = param_3 + 1;
        cVar1 = *pcVar2;
        if (cVar1 == '\0') break;
        pcVar2 = pcVar2 + 1;
      } while (param_3 < param_2 - 1);
    }
    *(undefined *)(param_1 + param_3) = 0;
  }
  return param_3;
}


