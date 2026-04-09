// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6a4c4
// Entry Point: 00d6a4c4
// Size: 176 bytes
// Signature: undefined FUN_00d6a4c4(void)


void FUN_00d6a4c4(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1e0);
  (**(code **)(*(long *)(param_1 + 0x220) + 0x10))();
  iVar1 = *(int *)(lVar3 + 0x20);
  if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x122) != '\0') {
      *(undefined4 *)(lVar3 + 0x20) = 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(lVar3 + 0x20) = 2;
      *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
      return;
    }
    if ((iVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x122), *(undefined4 *)(lVar3 + 0x20) = 2, cVar2 != '\0')) {
      *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
      return;
    }
  }
  *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
  *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
  return;
}


