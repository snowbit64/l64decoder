// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75190
// Entry Point: 00d75190
// Size: 180 bytes
// Signature: undefined FUN_00d75190(void)


undefined8 FUN_00d75190(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar2 = *(int *)(lVar4 + 0x4c);
    if (iVar2 == 0) {
      FUN_00d75810(param_1);
      iVar2 = *(int *)(lVar4 + 0x4c);
    }
    *(int *)(lVar4 + 0x4c) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1d0)) {
    uVar1 = *(uint *)(param_1 + 0x208);
    lVar5 = 0;
    do {
      iVar2 = FUN_00d75930(param_1,lVar4 + 0x150);
      if (iVar2 != 0) {
        puVar3 = *(ushort **)(param_2 + lVar5 * 8);
        *puVar3 = *puVar3 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1d0));
  }
  return 1;
}


