// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c7e4
// Entry Point: 00e4c7e4
// Size: 292 bytes
// Signature: undefined FUN_00e4c7e4(void)


uint FUN_00e4c7e4(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  
  cVar3 = *(char *)(param_1 + 0x6e4);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x6ec) != 0) {
      return 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 0x6e8);
    if (iVar2 == -1) {
      *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x5e0) + -1;
      iVar2 = FUN_00e4ca1c(param_1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x6ec) = 1;
        return 0xffffffff;
      }
      if ((*(byte *)(param_1 + 0x6e3) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x9c) = 0x20;
        return 0xffffffff;
      }
      iVar2 = *(int *)(param_1 + 0x6e8);
    }
    *(int *)(param_1 + 0x6e8) = iVar2 + 1;
    cVar3 = *(char *)(param_1 + iVar2 + 0x5e4);
    if (cVar3 != -1) {
      *(int *)(param_1 + 0x6f0) = iVar2;
      *(undefined4 *)(param_1 + 0x6ec) = 1;
    }
    if (*(int *)(param_1 + 0x5e0) <= iVar2 + 1) {
      *(undefined4 *)(param_1 + 0x6e8) = 0xffffffff;
    }
    *(char *)(param_1 + 0x6e4) = cVar3;
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
  }
  pbVar4 = *(byte **)(param_1 + 0x40);
  *(char *)(param_1 + 0x6e4) = cVar3 + -1;
  *(int *)(param_1 + 0x6fc) = *(int *)(param_1 + 0x6fc) + 1;
  if (pbVar4 == (byte *)0x0) {
    uVar1 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar1 != 0xffffffff) goto LAB_00e4c860;
  }
  else if (pbVar4 < *(byte **)(param_1 + 0x50)) {
    *(byte **)(param_1 + 0x40) = pbVar4 + 1;
    uVar1 = (uint)*pbVar4;
    goto LAB_00e4c860;
  }
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
LAB_00e4c860:
  return uVar1 & 0xff;
}


