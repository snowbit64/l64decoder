// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ac4c
// Entry Point: 00f0ac4c
// Size: 216 bytes
// Signature: undefined FUN_00f0ac4c(void)


void FUN_00f0ac4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  
  sVar4 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar4 + 1;
  if (199 < (ushort)(sVar4 + 1U)) {
    if ((ushort)(sVar4 + 1U) == 200) {
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"C stack overflow");
    }
    if (0xe0 < (ushort)(sVar4 + 1U)) {
                    /* WARNING: Subroutine does not return */
      FUN_00f0a90c(param_1,5);
    }
  }
  iVar5 = FUN_00f22e00(param_1);
  if (iVar5 == 0) {
    cVar3 = *(char *)(param_1 + 5);
    *(uint *)(*(long *)(param_1 + 0x20) + 0x24) = *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 1;
    *(undefined *)(param_1 + 5) = 1;
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
      FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    }
    FUN_00f1a6c4(param_1);
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 5) = 0;
    }
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x40);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x48);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  if (uVar1 <= uVar2) {
    FUN_00f0bdd8(param_1,1);
  }
  return;
}


