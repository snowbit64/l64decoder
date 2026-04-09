// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c908
// Entry Point: 00e4c908
// Size: 184 bytes
// Signature: undefined FUN_00e4c908(void)


ulong FUN_00e4c908(long param_1)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x6ec) != 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x6e8);
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x5e0) + -1;
    uVar2 = FUN_00e4ca1c(param_1);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x6ec) = 1;
      return uVar2;
    }
    if ((*(byte *)(param_1 + 0x6e3) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0x20;
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x6e8);
  }
  *(int *)(param_1 + 0x6e8) = iVar3 + 1;
  bVar1 = *(byte *)(param_1 + iVar3 + 0x5e4);
  if (bVar1 != 0xff) {
    *(int *)(param_1 + 0x6f0) = iVar3;
    *(undefined4 *)(param_1 + 0x6ec) = 1;
  }
  if (*(int *)(param_1 + 0x5e0) <= iVar3 + 1) {
    *(undefined4 *)(param_1 + 0x6e8) = 0xffffffff;
  }
  *(byte *)(param_1 + 0x6e4) = bVar1;
  return (ulong)bVar1;
}


