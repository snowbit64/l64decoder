// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_safe_warning
// Entry Point: 00daf7fc
// Size: 120 bytes
// Signature: undefined png_safe_warning(void)


void png_safe_warning(long param_1,char *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x128);
  if (*(int *)(lVar3 + 0x20) != 0) {
    return;
  }
  if ((param_2 == (char *)0x0) || (cVar4 = *param_2, cVar4 == '\0')) {
    *(undefined *)(lVar3 + 0x24) = 0;
    *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 1;
    return;
  }
  uVar5 = 0;
  do {
    *(char *)(lVar3 + 0x24 + uVar5) = cVar4;
    uVar1 = uVar5 + 1;
    cVar4 = param_2[uVar5 + 1];
    if (cVar4 == '\0') break;
    bVar2 = uVar5 < 0x3e;
    uVar5 = uVar1;
  } while (bVar2);
  *(undefined *)(lVar3 + uVar1 + 0x24) = 0;
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 1;
  return;
}


