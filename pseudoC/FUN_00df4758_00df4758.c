// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df4758
// Entry Point: 00df4758
// Size: 112 bytes
// Signature: undefined FUN_00df4758(void)


int FUN_00df4758(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((0 < (int)param_2) && (*param_1 != '\0')) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00df4758(*(undefined8 *)(param_1 + 8),param_2 - 1);
      iVar2 = iVar1 + iVar2;
      if (param_2 < 2) break;
      param_1 = *(char **)(param_1 + 0x10);
      param_2 = param_2 - 1;
    } while (*param_1 != '\0');
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


