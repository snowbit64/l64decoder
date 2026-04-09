// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5fe7c
// Entry Point: 00d5fe7c
// Size: 180 bytes
// Signature: undefined FUN_00d5fe7c(void)


undefined8 FUN_00d5fe7c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar2 = *(int *)(lVar3 + 0x60);
    if (iVar2 == 0) {
      FUN_00d60668(param_1,*(undefined4 *)(lVar3 + 100));
      iVar2 = *(int *)(param_1 + 0x130);
      *(uint *)(lVar3 + 100) = *(int *)(lVar3 + 100) + 1U & 7;
    }
    *(int *)(lVar3 + 0x60) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 400)) {
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x1c8);
    do {
      FUN_00d60800(param_1,lVar3 + 0x168,
                   (uint)(int)**(short **)(param_2 + lVar4 * 8) >> (ulong)(uVar1 & 0x1f) & 1);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 400));
  }
  return 1;
}


