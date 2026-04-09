// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_warning_parameter
// Entry Point: 00daea88
// Size: 88 bytes
// Signature: undefined png_warning_parameter(void)


void png_warning_parameter(long param_1,int param_2,char *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_2 - 1;
  if ((uVar1 < 8) && (param_1 != 0)) {
    if ((param_3 == (char *)0x0) || (cVar3 = *param_3, cVar3 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(char *)(param_1 + (ulong)uVar1 * 0x20 + uVar4) = cVar3;
        uVar5 = uVar4 + 1;
        cVar3 = param_3[uVar4 + 1];
        bVar2 = uVar4 < 0x1e;
        uVar4 = uVar5;
      } while (cVar3 != '\0' && bVar2);
    }
    *(undefined *)(param_1 + (ulong)uVar1 * 0x20 + uVar5) = 0;
  }
  return;
}


