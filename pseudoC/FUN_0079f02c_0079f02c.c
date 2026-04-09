// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f02c
// Entry Point: 0079f02c
// Size: 132 bytes
// Signature: undefined FUN_0079f02c(void)


void FUN_0079f02c(long param_1,char **param_2)

{
  int iVar1;
  ulong uVar2;
  char *__s1;
  long *plVar3;
  long lVar4;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  plVar3 = *(long **)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x21) = 1;
  uVar2 = lVar4 - (long)plVar3;
  if ((int)(uVar2 >> 3) != 0) {
    __s1 = *param_2;
    uVar2 = uVar2 >> 3 & 0xffffffff;
    do {
      lVar4 = *plVar3;
      iVar1 = strcmp(__s1,*(char **)(lVar4 + 8));
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar4 + 0x18);
        *(undefined4 *)(param_2 + 0x21) = 1;
        return;
      }
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  return;
}


