// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b42f4
// Entry Point: 007b42f4
// Size: 128 bytes
// Signature: undefined FUN_007b42f4(void)


void FUN_007b42f4(long param_1,char **param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  plVar3 = *(long **)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x21) = 1;
  uVar2 = lVar4 - (long)plVar3;
  if ((int)(uVar2 >> 3) != 0) {
    uVar2 = uVar2 >> 3 & 0xffffffff;
    do {
      lVar4 = *plVar3;
      if (((*(byte *)(lVar4 + 0x11) & 1) != 0) &&
         (iVar1 = strcmp(*param_2,*(char **)(lVar4 + 8)), iVar1 == 0)) {
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


